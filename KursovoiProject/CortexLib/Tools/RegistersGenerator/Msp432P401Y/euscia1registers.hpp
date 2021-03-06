/*******************************************************************************
* Filename      : euscia1registers.hpp
*
* Details       : EUSCI_A1. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(EUSCIA1REGISTERS_HPP)
#define EUSCIA1REGISTERS_HPP

#include "euscia1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct EUSCI_A1
{
  struct EUSCI_A1UCAxCTLW0Base {} ;

  struct UCAxCTLW0 : public RegisterBase<0x40001400, 16, ReadWriteMode>
  {
    using UCSWRST = EUSCI_A1_UCAxCTLW0_UCSWRST_Values<EUSCI_A1::UCAxCTLW0, 0, 1, ReadWriteMode, EUSCI_A1UCAxCTLW0Base> ;
    using UCTXBRK = EUSCI_A1_UCAxCTLW0_UCTXBRK_Values<EUSCI_A1::UCAxCTLW0, 1, 1, ReadWriteMode, EUSCI_A1UCAxCTLW0Base> ;
    using UCTXADDR = EUSCI_A1_UCAxCTLW0_UCTXADDR_Values<EUSCI_A1::UCAxCTLW0, 2, 1, ReadWriteMode, EUSCI_A1UCAxCTLW0Base> ;
    using UCDORM = EUSCI_A1_UCAxCTLW0_UCDORM_Values<EUSCI_A1::UCAxCTLW0, 3, 1, ReadWriteMode, EUSCI_A1UCAxCTLW0Base> ;
    using UCBRKIE = EUSCI_A1_UCAxCTLW0_UCBRKIE_Values<EUSCI_A1::UCAxCTLW0, 4, 1, ReadWriteMode, EUSCI_A1UCAxCTLW0Base> ;
    using UCRXEIE = EUSCI_A1_UCAxCTLW0_UCRXEIE_Values<EUSCI_A1::UCAxCTLW0, 5, 1, ReadWriteMode, EUSCI_A1UCAxCTLW0Base> ;
    using UCSSEL = EUSCI_A1_UCAxCTLW0_UCSSEL_Values<EUSCI_A1::UCAxCTLW0, 6, 2, ReadWriteMode, EUSCI_A1UCAxCTLW0Base> ;
    using UCSYNC = EUSCI_A1_UCAxCTLW0_UCSYNC_Values<EUSCI_A1::UCAxCTLW0, 8, 1, ReadWriteMode, EUSCI_A1UCAxCTLW0Base> ;
    using UCMODE = EUSCI_A1_UCAxCTLW0_UCMODE_Values<EUSCI_A1::UCAxCTLW0, 9, 2, ReadWriteMode, EUSCI_A1UCAxCTLW0Base> ;
    using UCSPB = EUSCI_A1_UCAxCTLW0_UCSPB_Values<EUSCI_A1::UCAxCTLW0, 11, 1, ReadWriteMode, EUSCI_A1UCAxCTLW0Base> ;
    using UC7BIT = EUSCI_A1_UCAxCTLW0_UC7BIT_Values<EUSCI_A1::UCAxCTLW0, 12, 1, ReadWriteMode, EUSCI_A1UCAxCTLW0Base> ;
    using UCMSB = EUSCI_A1_UCAxCTLW0_UCMSB_Values<EUSCI_A1::UCAxCTLW0, 13, 1, ReadWriteMode, EUSCI_A1UCAxCTLW0Base> ;
    using UCPAR = EUSCI_A1_UCAxCTLW0_UCPAR_Values<EUSCI_A1::UCAxCTLW0, 14, 1, ReadWriteMode, EUSCI_A1UCAxCTLW0Base> ;
    using UCPEN = EUSCI_A1_UCAxCTLW0_UCPEN_Values<EUSCI_A1::UCAxCTLW0, 15, 1, ReadWriteMode, EUSCI_A1UCAxCTLW0Base> ;
    using FieldValues = EUSCI_A1_UCAxCTLW0_UCPEN_Values<EUSCI_A1::UCAxCTLW0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxCTLW0Pack  = Register<0x40001400, 16, ReadWriteMode, EUSCI_A1UCAxCTLW0Base, T...> ;

  struct EUSCI_A1UCAxCTLW1Base {} ;

  struct UCAxCTLW1 : public RegisterBase<0x40001402, 16, ReadWriteMode>
  {
    using UCGLIT = EUSCI_A1_UCAxCTLW1_UCGLIT_Values<EUSCI_A1::UCAxCTLW1, 0, 2, ReadWriteMode, EUSCI_A1UCAxCTLW1Base> ;
    using FieldValues = EUSCI_A1_UCAxCTLW1_UCGLIT_Values<EUSCI_A1::UCAxCTLW1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxCTLW1Pack  = Register<0x40001402, 16, ReadWriteMode, EUSCI_A1UCAxCTLW1Base, T...> ;

  struct EUSCI_A1UCAxBRWBase {} ;

  struct UCAxBRW : public RegisterBase<0x40001406, 16, ReadWriteMode>
  {
    using UCBR = EUSCI_A1_UCAxBRW_UCBR_Values<EUSCI_A1::UCAxBRW, 0, 16, ReadWriteMode, EUSCI_A1UCAxBRWBase> ;
    using FieldValues = EUSCI_A1_UCAxBRW_UCBR_Values<EUSCI_A1::UCAxBRW, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxBRWPack  = Register<0x40001406, 16, ReadWriteMode, EUSCI_A1UCAxBRWBase, T...> ;

  struct EUSCI_A1UCAxMCTLWBase {} ;

  struct UCAxMCTLW : public RegisterBase<0x40001408, 16, ReadWriteMode>
  {
    using UCOS16 = EUSCI_A1_UCAxMCTLW_UCOS16_Values<EUSCI_A1::UCAxMCTLW, 0, 1, ReadWriteMode, EUSCI_A1UCAxMCTLWBase> ;
    using UCBRF = EUSCI_A1_UCAxMCTLW_UCBRF_Values<EUSCI_A1::UCAxMCTLW, 4, 4, ReadWriteMode, EUSCI_A1UCAxMCTLWBase> ;
    using UCBRS = EUSCI_A1_UCAxMCTLW_UCBRS_Values<EUSCI_A1::UCAxMCTLW, 8, 8, ReadWriteMode, EUSCI_A1UCAxMCTLWBase> ;
    using FieldValues = EUSCI_A1_UCAxMCTLW_UCBRS_Values<EUSCI_A1::UCAxMCTLW, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxMCTLWPack  = Register<0x40001408, 16, ReadWriteMode, EUSCI_A1UCAxMCTLWBase, T...> ;

  struct EUSCI_A1UCAxSTATWBase {} ;

  struct UCAxSTATW : public RegisterBase<0x4000140A, 16, ReadWriteMode>
  {
    using UCBUSY = EUSCI_A1_UCAxSTATW_UCBUSY_Values<EUSCI_A1::UCAxSTATW, 0, 1, ReadMode, EUSCI_A1UCAxSTATWBase> ;
    using UCADDR_UCIDLE = EUSCI_A1_UCAxSTATW_UCADDR_UCIDLE_Values<EUSCI_A1::UCAxSTATW, 1, 1, ReadWriteMode, EUSCI_A1UCAxSTATWBase> ;
    using UCRXERR = EUSCI_A1_UCAxSTATW_UCRXERR_Values<EUSCI_A1::UCAxSTATW, 2, 1, ReadWriteMode, EUSCI_A1UCAxSTATWBase> ;
    using UCBRK = EUSCI_A1_UCAxSTATW_UCBRK_Values<EUSCI_A1::UCAxSTATW, 3, 1, ReadWriteMode, EUSCI_A1UCAxSTATWBase> ;
    using UCPE = EUSCI_A1_UCAxSTATW_UCPE_Values<EUSCI_A1::UCAxSTATW, 4, 1, ReadWriteMode, EUSCI_A1UCAxSTATWBase> ;
    using UCOE = EUSCI_A1_UCAxSTATW_UCOE_Values<EUSCI_A1::UCAxSTATW, 5, 1, ReadWriteMode, EUSCI_A1UCAxSTATWBase> ;
    using UCFE = EUSCI_A1_UCAxSTATW_UCFE_Values<EUSCI_A1::UCAxSTATW, 6, 1, ReadWriteMode, EUSCI_A1UCAxSTATWBase> ;
    using UCLISTEN = EUSCI_A1_UCAxSTATW_UCLISTEN_Values<EUSCI_A1::UCAxSTATW, 7, 1, ReadWriteMode, EUSCI_A1UCAxSTATWBase> ;
    using FieldValues = EUSCI_A1_UCAxSTATW_UCLISTEN_Values<EUSCI_A1::UCAxSTATW, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxSTATWPack  = Register<0x4000140A, 16, ReadWriteMode, EUSCI_A1UCAxSTATWBase, T...> ;

  struct EUSCI_A1UCAxRXBUFBase {} ;

  struct UCAxRXBUF : public RegisterBase<0x4000140C, 16, ReadMode>
  {
    using UCRXBUF = EUSCI_A1_UCAxRXBUF_UCRXBUF_Values<EUSCI_A1::UCAxRXBUF, 0, 8, ReadMode, EUSCI_A1UCAxRXBUFBase> ;
    using FieldValues = EUSCI_A1_UCAxRXBUF_UCRXBUF_Values<EUSCI_A1::UCAxRXBUF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxRXBUFPack  = Register<0x4000140C, 16, ReadMode, EUSCI_A1UCAxRXBUFBase, T...> ;

  struct EUSCI_A1UCAxTXBUFBase {} ;

  struct UCAxTXBUF : public RegisterBase<0x4000140E, 16, ReadWriteMode>
  {
    using UCTXBUF = EUSCI_A1_UCAxTXBUF_UCTXBUF_Values<EUSCI_A1::UCAxTXBUF, 0, 8, ReadWriteMode, EUSCI_A1UCAxTXBUFBase> ;
    using FieldValues = EUSCI_A1_UCAxTXBUF_UCTXBUF_Values<EUSCI_A1::UCAxTXBUF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxTXBUFPack  = Register<0x4000140E, 16, ReadWriteMode, EUSCI_A1UCAxTXBUFBase, T...> ;

  struct EUSCI_A1UCAxABCTLBase {} ;

  struct UCAxABCTL : public RegisterBase<0x40001410, 16, ReadWriteMode>
  {
    using UCABDEN = EUSCI_A1_UCAxABCTL_UCABDEN_Values<EUSCI_A1::UCAxABCTL, 0, 1, ReadWriteMode, EUSCI_A1UCAxABCTLBase> ;
    using UCBTOE = EUSCI_A1_UCAxABCTL_UCBTOE_Values<EUSCI_A1::UCAxABCTL, 2, 1, ReadWriteMode, EUSCI_A1UCAxABCTLBase> ;
    using UCSTOE = EUSCI_A1_UCAxABCTL_UCSTOE_Values<EUSCI_A1::UCAxABCTL, 3, 1, ReadWriteMode, EUSCI_A1UCAxABCTLBase> ;
    using UCDELIM = EUSCI_A1_UCAxABCTL_UCDELIM_Values<EUSCI_A1::UCAxABCTL, 4, 2, ReadWriteMode, EUSCI_A1UCAxABCTLBase> ;
    using FieldValues = EUSCI_A1_UCAxABCTL_UCDELIM_Values<EUSCI_A1::UCAxABCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxABCTLPack  = Register<0x40001410, 16, ReadWriteMode, EUSCI_A1UCAxABCTLBase, T...> ;

  struct EUSCI_A1UCAxIRCTLBase {} ;

  struct UCAxIRCTL : public RegisterBase<0x40001412, 16, ReadWriteMode>
  {
    using UCIREN = EUSCI_A1_UCAxIRCTL_UCIREN_Values<EUSCI_A1::UCAxIRCTL, 0, 1, ReadWriteMode, EUSCI_A1UCAxIRCTLBase> ;
    using UCIRTXCLK = EUSCI_A1_UCAxIRCTL_UCIRTXCLK_Values<EUSCI_A1::UCAxIRCTL, 1, 1, ReadWriteMode, EUSCI_A1UCAxIRCTLBase> ;
    using UCIRTXPL = EUSCI_A1_UCAxIRCTL_UCIRTXPL_Values<EUSCI_A1::UCAxIRCTL, 2, 6, ReadWriteMode, EUSCI_A1UCAxIRCTLBase> ;
    using UCIRRXFE = EUSCI_A1_UCAxIRCTL_UCIRRXFE_Values<EUSCI_A1::UCAxIRCTL, 8, 1, ReadWriteMode, EUSCI_A1UCAxIRCTLBase> ;
    using UCIRRXPL = EUSCI_A1_UCAxIRCTL_UCIRRXPL_Values<EUSCI_A1::UCAxIRCTL, 9, 1, ReadWriteMode, EUSCI_A1UCAxIRCTLBase> ;
    using UCIRRXFL = EUSCI_A1_UCAxIRCTL_UCIRRXFL_Values<EUSCI_A1::UCAxIRCTL, 10, 4, ReadWriteMode, EUSCI_A1UCAxIRCTLBase> ;
    using FieldValues = EUSCI_A1_UCAxIRCTL_UCIRRXFL_Values<EUSCI_A1::UCAxIRCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxIRCTLPack  = Register<0x40001412, 16, ReadWriteMode, EUSCI_A1UCAxIRCTLBase, T...> ;

  struct EUSCI_A1UCAxIEBase {} ;

  struct UCAxIE : public RegisterBase<0x4000141A, 16, ReadWriteMode>
  {
    using UCRXIE = EUSCI_A1_UCAxIE_UCRXIE_Values<EUSCI_A1::UCAxIE, 0, 1, ReadWriteMode, EUSCI_A1UCAxIEBase> ;
    using UCTXIE = EUSCI_A1_UCAxIE_UCTXIE_Values<EUSCI_A1::UCAxIE, 1, 1, ReadWriteMode, EUSCI_A1UCAxIEBase> ;
    using UCSTTIE = EUSCI_A1_UCAxIE_UCSTTIE_Values<EUSCI_A1::UCAxIE, 2, 1, ReadWriteMode, EUSCI_A1UCAxIEBase> ;
    using UCTXCPTIE = EUSCI_A1_UCAxIE_UCTXCPTIE_Values<EUSCI_A1::UCAxIE, 3, 1, ReadWriteMode, EUSCI_A1UCAxIEBase> ;
    using FieldValues = EUSCI_A1_UCAxIE_UCTXCPTIE_Values<EUSCI_A1::UCAxIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxIEPack  = Register<0x4000141A, 16, ReadWriteMode, EUSCI_A1UCAxIEBase, T...> ;

  struct EUSCI_A1UCAxIFGBase {} ;

  struct UCAxIFG : public RegisterBase<0x4000141C, 16, ReadWriteMode>
  {
    using UCRXIFG = EUSCI_A1_UCAxIFG_UCRXIFG_Values<EUSCI_A1::UCAxIFG, 0, 1, ReadWriteMode, EUSCI_A1UCAxIFGBase> ;
    using UCTXIFG = EUSCI_A1_UCAxIFG_UCTXIFG_Values<EUSCI_A1::UCAxIFG, 1, 1, ReadWriteMode, EUSCI_A1UCAxIFGBase> ;
    using UCSTTIFG = EUSCI_A1_UCAxIFG_UCSTTIFG_Values<EUSCI_A1::UCAxIFG, 2, 1, ReadWriteMode, EUSCI_A1UCAxIFGBase> ;
    using UCTXCPTIFG = EUSCI_A1_UCAxIFG_UCTXCPTIFG_Values<EUSCI_A1::UCAxIFG, 3, 1, ReadWriteMode, EUSCI_A1UCAxIFGBase> ;
    using FieldValues = EUSCI_A1_UCAxIFG_UCTXCPTIFG_Values<EUSCI_A1::UCAxIFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxIFGPack  = Register<0x4000141C, 16, ReadWriteMode, EUSCI_A1UCAxIFGBase, T...> ;

  struct EUSCI_A1UCAxIVBase {} ;

  struct UCAxIV : public RegisterBase<0x4000141E, 16, ReadMode>
  {
    using UCIV = EUSCI_A1_UCAxIV_UCIV_Values<EUSCI_A1::UCAxIV, 0, 16, ReadMode, EUSCI_A1UCAxIVBase> ;
    using FieldValues = EUSCI_A1_UCAxIV_UCIV_Values<EUSCI_A1::UCAxIV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxIVPack  = Register<0x4000141E, 16, ReadMode, EUSCI_A1UCAxIVBase, T...> ;

} ;

#endif //#if !defined(EUSCIA1REGISTERS_HPP)
