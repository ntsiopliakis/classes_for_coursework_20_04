#pragma once
#include "spiDriver.h"


extern "C" {
  void SysCtlDelay(unsigned long ulCount)
  {
    __asm("    subs    r0, #1\n"
          "    bne.n   SysCtlDelay\n"
          "    bx      lr");
  }
}


#define EPD_4IN2_WIDTH       400
#define EPD_4IN2_HEIGHT      300




template<auto& spiDriver,typename PinCS, typename PinDC, typename PinRST, typename PinBSY>
class EPDDriver4inch2
{
  
  void CircuitSelect()
  {
    PinCS::Reset();
  }
  
  void CircuitDeselect()
  {
    PinCS::Set();
  }
  
  void Command()
  {
    PinDC::Reset();
  }
  void Data()
  {
    PinDC::Set();
  }  
  
  
  void Delay_ms(uint64_t time_ms)
  {
    SysCtlDelay(time_ms*SystemCoreClock/3000);
  }
  
  
public:
  EPDDriver4inch2()
  {
    PinCS::Set();
    PinDC::Set();
    PinRST::Set();
  }
  
  void SendData(char* data, std::size_t length)
  {
    spiDriver.SetReceivedMesLength(0);
    CircuitSelect();
    Data(); 
    spiDriver.SendMessage(data,length);
    while(!spiDriver.IsMessageTransmited())
    {
    }
    CircuitDeselect();    
  }
  
   void SendData(char data)
  {
    spiDriver.SetReceivedMesLength(0);
    CircuitSelect();
    Data();
    spiDriver.SendByte(data);
    while(!spiDriver.IsMessageTransmited())
    {
    }
    CircuitDeselect();    
  }
  
  void SendCommands(char* data, std::size_t length)
  {
    Command();
    spiDriver.SetReceivedMesLength(0);
    CircuitSelect();
    spiDriver.SendMessage(data,length);
    while(!spiDriver.IsMessageTransmited())
    {
    }
    CircuitDeselect();
  }
  void SendCommand(char data)
  {
    CircuitSelect();
    Command();
    spiDriver.SetReceivedMesLength(0);
    spiDriver.SendByte(data);
    while(!spiDriver.IsMessageTransmited())
    {
    }
    CircuitDeselect();
  }
  
  void ReadBusy()
  {
    SendCommand(0x71);
    while(!PinBSY::IsSet())
    { 

      SendCommand(0x71);
      Delay_ms(100);
    }
  }
  void TurnOnDisplay()
  {
    SendCommand(0x12);
    Delay_ms(100);
    ReadBusy();
  }
  
void Reset(void)
{
    PinRST::Set();
    Delay_ms(20);
    PinRST::Reset();
    Delay_ms(2);
    PinRST::Set();
    Delay_ms(20);
    PinRST::Reset();
    Delay_ms(2);
    PinRST::Set();
    Delay_ms(20);
    PinRST::Reset();
    Delay_ms(2);
    PinRST::Set();
    Delay_ms(20);
}
  
void Init(void)// Украдено из https://github.com/waveshare/e-Paper/blob/master/STM32/STM32-F103ZET6/User/e-Paper/EPD_4in2.c
{
    Reset();

    SendCommand(0x01); // POWER SETTING
    SendData(0x03);
    SendData(0x00);
    SendData(0x2b);
    SendData(0x2b);

    SendCommand(0x06); // boost soft start
    SendData(0x17);		//A
    SendData(0x17);		//B
    SendData(0x17);		//C

    SendCommand(0x04); // POWER_ON
    ReadBusy();

    SendCommand(0x00); // panel setting
    SendData(0xbf); // KW-BF   KWR-AF	BWROTP 0f	BWOTP 1f
    SendData(0x0d);

    SendCommand(0x30); // PLL setting
    SendData(0x3C); // 3A 100HZ   29 150Hz 39 200HZ	31 171HZ

    SendCommand(0x61); // resolution setting
    SendData(0x01);
    SendData(0x90); //128
    SendData(0x01); //
    SendData(0x2c);

    SendCommand(0x82); // vcom_DC setting
    SendData(0x28);

    SendCommand(0X50); // VCOM AND DATA INTERVAL SETTING
    SendData(0x97); // 97white border 77black border		VBDF 17|D7 VBDW 97 VBDB 57		VBDF F7 VBDW 77 VBDB 37  VBDR B7

    //EPD_4IN2_SetLut();
}



void Clear(void)
{
  using UWORD = uint16_t;
    UWORD Width, Height;
    Width = (EPD_4IN2_WIDTH % 8 == 0)? (EPD_4IN2_WIDTH / 8 ): (EPD_4IN2_WIDTH / 8 + 1);
    Height = EPD_4IN2_HEIGHT;

    SendCommand(0x10);
    for (UWORD j = 0; j < Height; j++) {
        for (UWORD i = 0; i < Width; i++) {
            SendData(0xFF);
        }
    }

    SendCommand(0x13);
    for (UWORD j = 0; j < Height; j++) {
        for (UWORD i = 0; i < Width; i++) {
            SendData(0xFF);
        }
    }
    SendCommand(0x12);		 //DISPLAY REFRESH
    Delay_ms(10);
    TurnOnDisplay();
}

};