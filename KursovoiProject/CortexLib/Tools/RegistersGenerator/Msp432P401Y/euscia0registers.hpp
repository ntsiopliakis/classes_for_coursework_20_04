/*******************************************************************************
* Filename      : euscia0registers.hpp
*
* Details       : EUSCI_A0. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(EUSCIA0REGISTERS_HPP)
#define EUSCIA0REGISTERS_HPP

#include "euscia0fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct EUSCI_A0
{
  struct EUSCI_A0UCAxCTLW0Base {} ;

  struct UCAxCTLW0 : public RegisterBase<0x40001000, 16, ReadWriteMode>
  {
    using UCSWRST = EUSCI_A0_UCAxCTLW0_UCSWRST_Values<EUSCI_A0::UCAxCTLW0, 0, 1, ReadWriteMode, EUSCI_A0UCAxCTLW0Base> ;
    using UCTXBRK = EUSCI_A0_UCAxCTLW0_UCTXBRK_Values<EUSCI_A0::UCAxCTLW0, 1, 1, ReadWriteMode, EUSCI_A0UCAxCTLW0Base> ;
    using UCTXADDR = EUSCI_A0_UCAxCTLW0_UCTXADDR_Values<EUSCI_A0::UCAxCTLW0, 2, 1, ReadWriteMode, EUSCI_A0UCAxCTLW0Base> ;
    using UCDORM = EUSCI_A0_UCAxCTLW0_UCDORM_Values<EUSCI_A0::UCAxCTLW0, 3, 1, ReadWriteMode, EUSCI_A0UCAxCTLW0Base> ;
    using UCBRKIE = EUSCI_A0_UCAxCTLW0_UCBRKIE_Values<EUSCI_A0::UCAxCTLW0, 4, 1, ReadWriteMode, EUSCI_A0UCAxCTLW0Base> ;
    using UCRXEIE = EUSCI_A0_UCAxCTLW0_UCRXEIE_Values<EUSCI_A0::UCAxCTLW0, 5, 1, ReadWriteMode, EUSCI_A0UCAxCTLW0Base> ;
    using UCSSEL = EUSCI_A0_UCAxCTLW0_UCSSEL_Values<EUSCI_A0::UCAxCTLW0, 6, 2, ReadWriteMode, EUSCI_A0UCAxCTLW0Base> ;
    using UCSYNC = EUSCI_A0_UCAxCTLW0_UCSYNC_Values<EUSCI_A0::UCAxCTLW0, 8, 1, ReadWriteMode, EUSCI_A0UCAxCTLW0Base> ;
    using UCMODE = EUSCI_A0_UCAxCTLW0_UCMODE_Values<EUSCI_A0::UCAxCTLW0, 9, 2, ReadWriteMode, EUSCI_A0UCAxCTLW0Base> ;
    using UCSPB = EUSCI_A0_UCAxCTLW0_UCSPB_Values<EUSCI_A0::UCAxCTLW0, 11, 1, ReadWriteMode, EUSCI_A0UCAxCTLW0Base> ;
    using UC7BIT = EUSCI_A0_UCAxCTLW0_UC7BIT_Values<EUSCI_A0::UCAxCTLW0, 12, 1, ReadWriteMode, EUSCI_A0UCAxCTLW0Base> ;
    using UCMSB = EUSCI_A0_UCAxCTLW0_UCMSB_Values<EUSCI_A0::UCAxCTLW0, 13, 1, ReadWriteMode, EUSCI_A0UCAxCTLW0Base> ;
    using UCPAR = EUSCI_A0_UCAxCTLW0_UCPAR_Values<EUSCI_A0::UCAxCTLW0, 14, 1, ReadWriteMode, EUSCI_A0UCAxCTLW0Base> ;
    using UCPEN = EUSCI_A0_UCAxCTLW0_UCPEN_Values<EUSCI_A0::UCAxCTLW0, 15, 1, ReadWriteMode, EUSCI_A0UCAxCTLW0Base> ;
    using FieldValues = EUSCI_A0_UCAxCTLW0_UCPEN_Values<EUSCI_A0::UCAxCTLW0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxCTLW0Pack  = Register<0x40001000, 16, ReadWriteMode, EUSCI_A0UCAxCTLW0Base, T...> ;

  struct EUSCI_A0UCAxCTLW1Base {} ;

  struct UCAxCTLW1 : public RegisterBase<0x40001002, 16, ReadWriteMode>
  {
    using UCGLIT = EUSCI_A0_UCAxCTLW1_UCGLIT_Values<EUSCI_A0::UCAxCTLW1, 0, 2, ReadWriteMode, EUSCI_A0UCAxCTLW1Base> ;
    using FieldValues = EUSCI_A0_UCAxCTLW1_UCGLIT_Values<EUSCI_A0::UCAxCTLW1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxCTLW1Pack  = Register<0x40001002, 16, ReadWriteMode, EUSCI_A0UCAxCTLW1Base, T...> ;

  struct EUSCI_A0UCAxBRWBase {} ;

  struct UCAxBRW : public RegisterBase<0x40001006, 16, ReadWriteMode>
  {
    using UCBR = EUSCI_A0_UCAxBRW_UCBR_Values<EUSCI_A0::UCAxBRW, 0, 16, ReadWriteMode, EUSCI_A0UCAxBRWBase> ;
    using FieldValues = EUSCI_A0_UCAxBRW_UCBR_Values<EUSCI_A0::UCAxBRW, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxBRWPack  = Register<0x40001006, 16, ReadWriteMode, EUSCI_A0UCAxBRWBase, T...> ;

  struct EUSCI_A0UCAxMCTLWBase {} ;

  struct UCAxMCTLW : public RegisterBase<0x40001008, 16, ReadWriteMode>
  {
    using UCOS16 = EUSCI_A0_UCAxMCTLW_UCOS16_Values<EUSCI_A0::UCAxMCTLW, 0, 1, ReadWriteMode, EUSCI_A0UCAxMCTLWBase> ;
    using UCBRF = EUSCI_A0_UCAxMCTLW_UCBRF_Values<EUSCI_A0::UCAxMCTLW, 4, 4, ReadWriteMode, EUSCI_A0UCAxMCTLWBase> ;
    using UCBRS = EUSCI_A0_UCAxMCTLW_UCBRS_Values<EUSCI_A0::UCAxMCTLW, 8, 8, ReadWriteMode, EUSCI_A0UCAxMCTLWBase> ;
    using FieldValues = EUSCI_A0_UCAxMCTLW_UCBRS_Values<EUSCI_A0::UCAxMCTLW, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxMCTLWPack  = Register<0x40001008, 16, ReadWriteMode, EUSCI_A0UCAxMCTLWBase, T...> ;

  struct EUSCI_A0UCAxSTATWBase {} ;

  struct UCAxSTATW : public RegisterBase<0x4000100A, 16, ReadWriteMode>
  {
    using UCBUSY = EUSCI_A0_UCAxSTATW_UCBUSY_Values<EUSCI_A0::UCAxSTATW, 0, 1, ReadMode, EUSCI_A0UCAxSTATWBase> ;
    using UCADDR_UCIDLE = EUSCI_A0_UCAxSTATW_UCADDR_UCIDLE_Values<EUSCI_A0::UCAxSTATW, 1, 1, ReadWriteMode, EUSCI_A0UCAxSTATWBase> ;
    using UCRXERR = EUSCI_A0_UCAxSTATW_UCRXERR_Values<EUSCI_A0::UCAxSTATW, 2, 1, ReadWriteMode, EUSCI_A0UCAxSTATWBase> ;
    using UCBRK = EUSCI_A0_UCAxSTATW_UCBRK_Values<EUSCI_A0::UCAxSTATW, 3, 1, ReadWriteMode, EUSCI_A0UCAxSTATWBase> ;
    using UCPE = EUSCI_A0_UCAxSTATW_UCPE_Values<EUSCI_A0::UCAxSTATW, 4, 1, ReadWriteMode, EUSCI_A0UCAxSTATWBase> ;
    using UCOE = EUSCI_A0_UCAxSTATW_UCOE_Values<EUSCI_A0::UCAxSTATW, 5, 1, ReadWriteMode, EUSCI_A0UCAxSTATWBase> ;
    using UCFE = EUSCI_A0_UCAxSTATW_UCFE_Values<EUSCI_A0::UCAxSTATW, 6, 1, ReadWriteMode, EUSCI_A0UCAxSTATWBase> ;
    using UCLISTEN = EUSCI_A0_UCAxSTATW_UCLISTEN_Values<EUSCI_A0::UCAxSTATW, 7, 1, ReadWriteMode, EUSCI_A0UCAxSTATWBase> ;
    using FieldValues = EUSCI_A0_UCAxSTATW_UCLISTEN_Values<EUSCI_A0::UCAxSTATW, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxSTATWPack  = Register<0x4000100A, 16, ReadWriteMode, EUSCI_A0UCAxSTATWBase, T...> ;

  struct EUSCI_A0UCAxRXBUFBase {} ;

  struct UCAxRXBUF : public RegisterBase<0x4000100C, 16, ReadMode>
  {
    using UCRXBUF = EUSCI_A0_UCAxRXBUF_UCRXBUF_Values<EUSCI_A0::UCAxRXBUF, 0, 8, ReadMode, EUSCI_A0UCAxRXBUFBase> ;
    using FieldValues = EUSCI_A0_UCAxRXBUF_UCRXBUF_Values<EUSCI_A0::UCAxRXBUF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxRXBUFPack  = Register<0x4000100C, 16, ReadMode, EUSCI_A0UCAxRXBUFBase, T...> ;

  struct EUSCI_A0UCAxTXBUFBase {} ;

  struct UCAxTXBUF : public RegisterBase<0x4000100E, 16, ReadWriteMode>
  {
    using UCTXBUF = EUSCI_A0_UCAxTXBUF_UCTXBUF_Values<EUSCI_A0::UCAxTXBUF, 0, 8, ReadWriteMode, EUSCI_A0UCAxTXBUFBase> ;
    using FieldValues = EUSCI_A0_UCAxTXBUF_UCTXBUF_Values<EUSCI_A0::UCAxTXBUF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxTXBUFPack  = Register<0x4000100E, 16, ReadWriteMode, EUSCI_A0UCAxTXBUFBase, T...> ;

  struct EUSCI_A0UCAxABCTLBase {} ;

  struct UCAxABCTL : public RegisterBase<0x40001010, 16, ReadWriteMode>
  {
    using UCABDEN = EUSCI_A0_UCAxABCTL_UCABDEN_Values<EUSCI_A0::UCAxABCTL, 0, 1, ReadWriteMode, EUSCI_A0UCAxABCTLBase> ;
    using UCBTOE = EUSCI_A0_UCAxABCTL_UCBTOE_Values<EUSCI_A0::UCAxABCTL, 2, 1, ReadWriteMode, EUSCI_A0UCAxABCTLBase> ;
    using UCSTOE = EUSCI_A0_UCAxABCTL_UCSTOE_Values<EUSCI_A0::UCAxABCTL, 3, 1, ReadWriteMode, EUSCI_A0UCAxABCTLBase> ;
    using UCDELIM = EUSCI_A0_UCAxABCTL_UCDELIM_Values<EUSCI_A0::UCAxABCTL, 4, 2, ReadWriteMode, EUSCI_A0UCAxABCTLBase> ;
    using FieldValues = EUSCI_A0_UCAxABCTL_UCDELIM_Values<EUSCI_A0::UCAxABCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxABCTLPack  = Register<0x40001010, 16, ReadWriteMode, EUSCI_A0UCAxABCTLBase, T...> ;

  struct EUSCI_A0UCAxIRCTLBase {} ;

  struct UCAxIRCTL : public RegisterBase<0x40001012, 16, ReadWriteMode>
  {
    using UCIREN = EUSCI_A0_UCAxIRCTL_UCIREN_Values<EUSCI_A0::UCAxIRCTL, 0, 1, ReadWriteMode, EUSCI_A0UCAxIRCTLBase> ;
    using UCIRTXCLK = EUSCI_A0_UCAxIRCTL_UCIRTXCLK_Values<EUSCI_A0::UCAxIRCTL, 1, 1, ReadWriteMode, EUSCI_A0UCAxIRCTLBase> ;
    using UCIRTXPL = EUSCI_A0_UCAxIRCTL_UCIRTXPL_Values<EUSCI_A0::UCAxIRCTL, 2, 6, ReadWriteMode, EUSCI_A0UCAxIRCTLBase> ;
    using UCIRRXFE = EUSCI_A0_UCAxIRCTL_UCIRRXFE_Values<EUSCI_A0::UCAxIRCTL, 8, 1, ReadWriteMode, EUSCI_A0UCAxIRCTLBase> ;
    using UCIRRXPL = EUSCI_A0_UCAxIRCTL_UCIRRXPL_Values<EUSCI_A0::UCAxIRCTL, 9, 1, ReadWriteMode, EUSCI_A0UCAxIRCTLBase> ;
    using UCIRRXFL = EUSCI_A0_UCAxIRCTL_UCIRRXFL_Values<EUSCI_A0::UCAxIRCTL, 10, 4, ReadWriteMode, EUSCI_A0UCAxIRCTLBase> ;
    using FieldValues = EUSCI_A0_UCAxIRCTL_UCIRRXFL_Values<EUSCI_A0::UCAxIRCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxIRCTLPack  = Register<0x40001012, 16, ReadWriteMode, EUSCI_A0UCAxIRCTLBase, T...> ;

  struct EUSCI_A0UCAxIEBase {} ;

  struct UCAxIE : public RegisterBase<0x4000101A, 16, ReadWriteMode>
  {
    using UCRXIE = EUSCI_A0_UCAxIE_UCRXIE_Values<EUSCI_A0::UCAxIE, 0, 1, ReadWriteMode, EUSCI_A0UCAxIEBase> ;
    using UCTXIE = EUSCI_A0_UCAxIE_UCTXIE_Values<EUSCI_A0::UCAxIE, 1, 1, ReadWriteMode, EUSCI_A0UCAxIEBase> ;
    using UCSTTIE = EUSCI_A0_UCAxIE_UCSTTIE_Values<EUSCI_A0::UCAxIE, 2, 1, ReadWriteMode, EUSCI_A0UCAxIEBase> ;
    using UCTXCPTIE = EUSCI_A0_UCAxIE_UCTXCPTIE_Values<EUSCI_A0::UCAxIE, 3, 1, ReadWriteMode, EUSCI_A0UCAxIEBase> ;
    using FieldValues = EUSCI_A0_UCAxIE_UCTXCPTIE_Values<EUSCI_A0::UCAxIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxIEPack  = Register<0x4000101A, 16, ReadWriteMode, EUSCI_A0UCAxIEBase, T...> ;

  struct EUSCI_A0UCAxIFGBase {} ;

  struct UCAxIFG : public RegisterBase<0x4000101C, 16, ReadWriteMode>
  {
    using UCRXIFG = EUSCI_A0_UCAxIFG_UCRXIFG_Values<EUSCI_A0::UCAxIFG, 0, 1, ReadWriteMode, EUSCI_A0UCAxIFGBase> ;
    using UCTXIFG = EUSCI_A0_UCAxIFG_UCTXIFG_Values<EUSCI_A0::UCAxIFG, 1, 1, ReadWriteMode, EUSCI_A0UCAxIFGBase> ;
    using UCSTTIFG = EUSCI_A0_UCAxIFG_UCSTTIFG_Values<EUSCI_A0::UCAxIFG, 2, 1, ReadWriteMode, EUSCI_A0UCAxIFGBase> ;
    using UCTXCPTIFG = EUSCI_A0_UCAxIFG_UCTXCPTIFG_Values<EUSCI_A0::UCAxIFG, 3, 1, ReadWriteMode, EUSCI_A0UCAxIFGBase> ;
    using FieldValues = EUSCI_A0_UCAxIFG_UCTXCPTIFG_Values<EUSCI_A0::UCAxIFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxIFGPack  = Register<0x4000101C, 16, ReadWriteMode, EUSCI_A0UCAxIFGBase, T...> ;

  struct EUSCI_A0UCAxIVBase {} ;

  struct UCAxIV : public RegisterBase<0x4000101E, 16, ReadMode>
  {
    using UCIV = EUSCI_A0_UCAxIV_UCIV_Values<EUSCI_A0::UCAxIV, 0, 16, ReadMode, EUSCI_A0UCAxIVBase> ;
    using FieldValues = EUSCI_A0_UCAxIV_UCIV_Values<EUSCI_A0::UCAxIV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxIVPack  = Register<0x4000101E, 16, ReadMode, EUSCI_A0UCAxIVBase, T...> ;

} ;

#endif //#if !defined(EUSCIA0REGISTERS_HPP)
