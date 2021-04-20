/*******************************************************************************
* Filename      : adc123commonregisters.hpp
*
* Details       : Analog-to-Digital Converter. This header file is
*                 auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(ADC123COMMONREGISTERS_HPP)
#define ADC123COMMONREGISTERS_HPP

#include "adc123commonfieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct ADC123_Common
{
  struct ADC123_CommonCSRBase {} ;

  struct CSR : public RegisterBase<0x50040300, 32, ReadMode>
  {
    using ADDRDY_MST = ADC123_Common_CSR_ADDRDY_MST_Values<ADC123_Common::CSR, 0, 1, ReadMode, ADC123_CommonCSRBase> ;
    using EOSMP_MST = ADC123_Common_CSR_EOSMP_MST_Values<ADC123_Common::CSR, 1, 1, ReadMode, ADC123_CommonCSRBase> ;
    using EOC_MST = ADC123_Common_CSR_EOC_MST_Values<ADC123_Common::CSR, 2, 1, ReadMode, ADC123_CommonCSRBase> ;
    using EOS_MST = ADC123_Common_CSR_EOS_MST_Values<ADC123_Common::CSR, 3, 1, ReadMode, ADC123_CommonCSRBase> ;
    using OVR_MST = ADC123_Common_CSR_OVR_MST_Values<ADC123_Common::CSR, 4, 1, ReadMode, ADC123_CommonCSRBase> ;
    using JEOC_MST = ADC123_Common_CSR_JEOC_MST_Values<ADC123_Common::CSR, 5, 1, ReadMode, ADC123_CommonCSRBase> ;
    using JEOS_MST = ADC123_Common_CSR_JEOS_MST_Values<ADC123_Common::CSR, 6, 1, ReadMode, ADC123_CommonCSRBase> ;
    using AWD1_MST = ADC123_Common_CSR_AWD1_MST_Values<ADC123_Common::CSR, 7, 1, ReadMode, ADC123_CommonCSRBase> ;
    using AWD2_MST = ADC123_Common_CSR_AWD2_MST_Values<ADC123_Common::CSR, 8, 1, ReadMode, ADC123_CommonCSRBase> ;
    using AWD3_MST = ADC123_Common_CSR_AWD3_MST_Values<ADC123_Common::CSR, 9, 1, ReadMode, ADC123_CommonCSRBase> ;
    using JQOVF_MST = ADC123_Common_CSR_JQOVF_MST_Values<ADC123_Common::CSR, 10, 1, ReadMode, ADC123_CommonCSRBase> ;
    using ADRDY_SLV = ADC123_Common_CSR_ADRDY_SLV_Values<ADC123_Common::CSR, 16, 1, ReadMode, ADC123_CommonCSRBase> ;
    using EOSMP_SLV = ADC123_Common_CSR_EOSMP_SLV_Values<ADC123_Common::CSR, 17, 1, ReadMode, ADC123_CommonCSRBase> ;
    using EOC_SLV = ADC123_Common_CSR_EOC_SLV_Values<ADC123_Common::CSR, 18, 1, ReadMode, ADC123_CommonCSRBase> ;
    using EOS_SLV = ADC123_Common_CSR_EOS_SLV_Values<ADC123_Common::CSR, 19, 1, ReadMode, ADC123_CommonCSRBase> ;
    using OVR_SLV = ADC123_Common_CSR_OVR_SLV_Values<ADC123_Common::CSR, 20, 1, ReadMode, ADC123_CommonCSRBase> ;
    using JEOC_SLV = ADC123_Common_CSR_JEOC_SLV_Values<ADC123_Common::CSR, 21, 1, ReadMode, ADC123_CommonCSRBase> ;
    using JEOS_SLV = ADC123_Common_CSR_JEOS_SLV_Values<ADC123_Common::CSR, 22, 1, ReadMode, ADC123_CommonCSRBase> ;
    using AWD1_SLV = ADC123_Common_CSR_AWD1_SLV_Values<ADC123_Common::CSR, 23, 1, ReadMode, ADC123_CommonCSRBase> ;
    using AWD2_SLV = ADC123_Common_CSR_AWD2_SLV_Values<ADC123_Common::CSR, 24, 1, ReadMode, ADC123_CommonCSRBase> ;
    using AWD3_SLV = ADC123_Common_CSR_AWD3_SLV_Values<ADC123_Common::CSR, 25, 1, ReadMode, ADC123_CommonCSRBase> ;
    using JQOVF_SLV = ADC123_Common_CSR_JQOVF_SLV_Values<ADC123_Common::CSR, 26, 1, ReadMode, ADC123_CommonCSRBase> ;
    using FieldValues = ADC123_Common_CSR_JQOVF_SLV_Values<ADC123_Common::CSR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CSRPack  = Register<0x50040300, 32, ReadMode, ADC123_CommonCSRBase, T...> ;

  struct ADC123_CommonCCRBase {} ;

  struct CCR : public RegisterBase<0x50040308, 32, ReadWriteMode>
  {
    using DUAL = ADC123_Common_CCR_DUAL_Values<ADC123_Common::CCR, 0, 5, ReadWriteMode, ADC123_CommonCCRBase> ;
    using DELAY = ADC123_Common_CCR_DELAY_Values<ADC123_Common::CCR, 8, 4, ReadWriteMode, ADC123_CommonCCRBase> ;
    using DMACFG = ADC123_Common_CCR_DMACFG_Values<ADC123_Common::CCR, 13, 1, ReadWriteMode, ADC123_CommonCCRBase> ;
    using MDMA = ADC123_Common_CCR_MDMA_Values<ADC123_Common::CCR, 14, 2, ReadWriteMode, ADC123_CommonCCRBase> ;
    using CKMODE = ADC123_Common_CCR_CKMODE_Values<ADC123_Common::CCR, 16, 2, ReadWriteMode, ADC123_CommonCCRBase> ;
    using PRESC = ADC123_Common_CCR_PRESC_Values<ADC123_Common::CCR, 18, 4, ReadWriteMode, ADC123_CommonCCRBase> ;
    using VREFEN = ADC123_Common_CCR_VREFEN_Values<ADC123_Common::CCR, 22, 1, ReadWriteMode, ADC123_CommonCCRBase> ;
    using CH17SEL = ADC123_Common_CCR_CH17SEL_Values<ADC123_Common::CCR, 23, 1, ReadWriteMode, ADC123_CommonCCRBase> ;
    using CH18SEL = ADC123_Common_CCR_CH18SEL_Values<ADC123_Common::CCR, 24, 1, ReadWriteMode, ADC123_CommonCCRBase> ;
    using FieldValues = ADC123_Common_CCR_CH18SEL_Values<ADC123_Common::CCR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CCRPack  = Register<0x50040308, 32, ReadWriteMode, ADC123_CommonCCRBase, T...> ;

  struct ADC123_CommonCDRBase {} ;

  struct CDR : public RegisterBase<0x5004030C, 32, ReadMode>
  {
    using RDATA_SLV = ADC123_Common_CDR_RDATA_SLV_Values<ADC123_Common::CDR, 16, 16, ReadMode, ADC123_CommonCDRBase> ;
    using RDATA_MST = ADC123_Common_CDR_RDATA_MST_Values<ADC123_Common::CDR, 0, 16, ReadMode, ADC123_CommonCDRBase> ;
    using FieldValues = ADC123_Common_CDR_RDATA_MST_Values<ADC123_Common::CDR, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CDRPack  = Register<0x5004030C, 32, ReadMode, ADC123_CommonCDRBase, T...> ;

} ;

#endif //#if !defined(ADC123COMMONREGISTERS_HPP)
