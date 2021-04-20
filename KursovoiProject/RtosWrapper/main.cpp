#include "rtos.hpp"         // for Rtos
#include "event.hpp"        // for Event
#include "ledconfig.h"
#include "Button.h"
#include "BluetoothTask.h"
#include "ButtonEventTask.h"
#include "MeasurementTask.h"
#include "rccregisters.hpp" // for RCC

#include "Application/Diagnostic/GlobalStatus.hpp"
#include <gpioaregisters.hpp>  // for GPIOA
#include <gpiobregisters.hpp>  // for GPIOB
#include <gpiocregisters.hpp>  // for GPIOC

#include "Measurementconfig.h"
#include "epddriverconfig.h"
std::uint32_t SystemCoreClock = 16'000'000U;
#include "stdio.h"
#include <iostream>
#include "usart2registers.hpp"
#include "nvicregisters.hpp"
#include "spi1registers.hpp"
#include "spi2registers.hpp"


extern "C" {
int __low_level_init(void)
{
  //Switch on external 16 MHz oscillator
  RCC::CR::HSION::On::Set();
  while (RCC::CR::HSIRDY::NotReady::IsSet())
  {
    
  }
  //Switch system clock on external oscillator
  RCC::CFGR::SW::Hsi::Set();
  while (!RCC::CFGR::SWS::Hsi::IsSet())
  {
    
  }
  
  RCC::AHB1ENR::GPIOAEN::Enable::Set();
   //USART config
  RCC::APB1ENR::USART2EN::Enable::Set();
  GPIOA::MODER::MODER3::Alternate::Set();
  GPIOA::MODER::MODER2::Alternate::Set();
  GPIOA::AFRL::AFRL3::Af7::Set();
  GPIOA::AFRL::AFRL2::Af7::Set();
  GPIOA::PUPDR::PUPDR2::NoPullUpNoPullDown::Set();
  GPIOA::PUPDR::PUPDR3::PullUp::Set();
  USART2::CR1::OVER8::OversamplingBy16::Set();
  USART2::CR1::M::Data8bits::Set();
  USART2::CR2::STOP::OneStopBit::Set();
  USART2::CR1::PCE::ParityControlDisable::Set();
  USART2::CR1::RE::Enable::Set();
  NVIC::ISER1::Write(1<<6);
  USART2::CR1::RXNEIE::InterruptWhenRXNE::Set();
  constexpr uint32_t CLC = 16'000'000U;
  constexpr uint32_t BaudRate=9600;
  uint32_t USART_DIV = CLC/(BaudRate*8*(2 - USART2::CR1::OVER8::Get()));
  USART2::BRR::DIV_Mantissa::Set(USART_DIV);
 
  
  //SPI2 config
  RCC::APB1ENR::SPI2EN::Enable::Set();
  NVIC::ISER1::Write(1<<4);
  SPI2::CR1::MSTR::Master::Set();
  SPI2::CR1::DFF::Data8bit::Set();
  SPI2::CR1::BR::PclockDiv2::Set();
  SPI2::CR1::CRCEN::CrcCalcDisable::Set();
  SPI2::CR1::CPOL::High::Set();
  SPI2::CR1::CPHA::Phase2edge::Set();
  SPI2::CR1::LSBFIRST::MsbFisrt::Set();
  SPI2::CR2::SSOE::SsOutputEnable::Set(); 
  SPI2::CR1::SSM::NssSoftwareEnable::Set();
  SPI2::CR1::SSI::Value1::Set();

  RCC::AHB1ENRPack<
      RCC::AHB1ENR::GPIOCEN::Enable,
      RCC::AHB1ENR::GPIOBEN::Enable,
      RCC::AHB1ENR::GPIOAEN::Enable
      >::Set();
  GPIOC::MODERPack<
    GPIOC::MODER::MODER2::Alternate,
    GPIOC::MODER::MODER3::Alternate,
    GPIOC::MODER::MODER7::Alternate,
    >::Set();
  
  GPIOC::AFRLPack<
    GPIOC::AFRL::AFRL2::Af5,
    GPIOC::AFRL::AFRL3::Af5,
    GPIOC::AFRL::AFRL7::Af5,
    >::Set();  
  GPIOC::MODER::MODER6::Output::Set();
  GPIOC::BSRR::Write(1<<6);


  //SPI1 config
  RCC::APB2ENR::SPI1EN::Enable::Set();
  NVIC::ISER1::Write(1<<3);
  SPI1::CR1::MSTR::Master::Set();
  SPI1::CR1::DFF::Data8bit::Set();
  SPI1::CR1::BR::PclockDiv64::Set();
  SPI1::CR1::CRCEN::CrcCalcDisable::Set();
  SPI1::CR1::CPOL::Low::Set();
  SPI1::CR1::CPHA::Phase1edge::Set();
  SPI1::CR1::LSBFIRST::MsbFisrt::Set();
  SPI1::CR2::SSOE::SsOutputEnable::Set(); 
  SPI1::CR1::SSM::NssSoftwareEnable::Set();
  SPI1::CR1::SSI::Value1::Set();

  GPIOB::MODERPack<
    GPIOB::MODER::MODER3::Alternate,
    GPIOB::MODER::MODER4::Alternate,
    GPIOB::MODER::MODER5::Alternate,
    >::Set();
  
  GPIOB::AFRLPack<
    GPIOB::AFRL::AFRL3::Af5,
    GPIOB::AFRL::AFRL4::Af5,
    GPIOB::AFRL::AFRL5::Af5,
    >::Set();  
  GPIOB::MODER::MODER13::Output::Set();
  GPIOB::BSRR::Write(1<<13);
  GPIOB::MODER::MODER14::Output::Set();
  GPIOB::MODER::MODER15::Output::Set();
  GPIOB::MODER::MODER1::Input::Set();

  
  return 1;
}
}
  OsWrapper::Event event(100ms, 1);
  ButtonEventTask<UserButton, event> buttonEventTask;
  BluetoothTask bluetoothTask;
  MeasurementTask measurementTask(event);
  
  int main()
  {
    Led1::Enable();
    Led2::Enable();
    USART2::CR1::UE::Enable::Set();
    SPI2::CR1::SPE::Enable::Set();
    SPI1::CR1::SPE::Enable::Set();
    bme280.InitializeCalibrateData();
    bme280.StartMeasurements();
    epDisplay.Init();
    epDisplay.Clear();
    
    using namespace OsWrapper;
    Rtos::CreateThread(measurementTask,"measurementTask", ThreadPriority::normal);
    Rtos::CreateThread(bluetoothTask,"bluetoothTask", ThreadPriority::lowest);
    Rtos::CreateThread(buttonEventTask,"buttonEventTask", ThreadPriority::belowNormal);
    Rtos::Start();
    return 0;
  }
