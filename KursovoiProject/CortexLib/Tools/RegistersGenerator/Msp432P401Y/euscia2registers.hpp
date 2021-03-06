/*******************************************************************************
* Filename      : euscia2registers.hpp
*
* Details       : EUSCI_A2. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(EUSCIA2REGISTERS_HPP)
#define EUSCIA2REGISTERS_HPP

#include "euscia2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct EUSCI_A2
{
  struct EUSCI_A2UCAxCTLW0Base {} ;

  struct UCAxCTLW0 : public RegisterBase<0x40001800, 16, ReadWriteMode>
  {
    using UCSWRST = EUSCI_A2_UCAxCTLW0_UCSWRST_Values<EUSCI_A2::UCAxCTLW0, 0, 1, ReadWriteMode, EUSCI_A2UCAxCTLW0Base> ;
    using UCTXBRK = EUSCI_A2_UCAxCTLW0_UCTXBRK_Values<EUSCI_A2::UCAxCTLW0, 1, 1, ReadWriteMode, EUSCI_A2UCAxCTLW0Base> ;
    using UCTXADDR = EUSCI_A2_UCAxCTLW0_UCTXADDR_Values<EUSCI_A2::UCAxCTLW0, 2, 1, ReadWriteMode, EUSCI_A2UCAxCTLW0Base> ;
    using UCDORM = EUSCI_A2_UCAxCTLW0_UCDORM_Values<EUSCI_A2::UCAxCTLW0, 3, 1, ReadWriteMode, EUSCI_A2UCAxCTLW0Base> ;
    using UCBRKIE = EUSCI_A2_UCAxCTLW0_UCBRKIE_Values<EUSCI_A2::UCAxCTLW0, 4, 1, ReadWriteMode, EUSCI_A2UCAxCTLW0Base> ;
    using UCRXEIE = EUSCI_A2_UCAxCTLW0_UCRXEIE_Values<EUSCI_A2::UCAxCTLW0, 5, 1, ReadWriteMode, EUSCI_A2UCAxCTLW0Base> ;
    using UCSSEL = EUSCI_A2_UCAxCTLW0_UCSSEL_Values<EUSCI_A2::UCAxCTLW0, 6, 2, ReadWriteMode, EUSCI_A2UCAxCTLW0Base> ;
    using UCSYNC = EUSCI_A2_UCAxCTLW0_UCSYNC_Values<EUSCI_A2::UCAxCTLW0, 8, 1, ReadWriteMode, EUSCI_A2UCAxCTLW0Base> ;
    using UCMODE = EUSCI_A2_UCAxCTLW0_UCMODE_Values<EUSCI_A2::UCAxCTLW0, 9, 2, ReadWriteMode, EUSCI_A2UCAxCTLW0Base> ;
    using UCSPB = EUSCI_A2_UCAxCTLW0_UCSPB_Values<EUSCI_A2::UCAxCTLW0, 11, 1, ReadWriteMode, EUSCI_A2UCAxCTLW0Base> ;
    using UC7BIT = EUSCI_A2_UCAxCTLW0_UC7BIT_Values<EUSCI_A2::UCAxCTLW0, 12, 1, ReadWriteMode, EUSCI_A2UCAxCTLW0Base> ;
    using UCMSB = EUSCI_A2_UCAxCTLW0_UCMSB_Values<EUSCI_A2::UCAxCTLW0, 13, 1, ReadWriteMode, EUSCI_A2UCAxCTLW0Base> ;
    using UCPAR = EUSCI_A2_UCAxCTLW0_UCPAR_Values<EUSCI_A2::UCAxCTLW0, 14, 1, ReadWriteMode, EUSCI_A2UCAxCTLW0Base> ;
    using UCPEN = EUSCI_A2_UCAxCTLW0_UCPEN_Values<EUSCI_A2::UCAxCTLW0, 15, 1, ReadWriteMode, EUSCI_A2UCAxCTLW0Base> ;
    using FieldValues = EUSCI_A2_UCAxCTLW0_UCPEN_Values<EUSCI_A2::UCAxCTLW0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxCTLW0Pack  = Register<0x40001800, 16, ReadWriteMode, EUSCI_A2UCAxCTLW0Base, T...> ;

  struct EUSCI_A2UCAxCTLW1Base {} ;

  struct UCAxCTLW1 : public RegisterBase<0x40001802, 16, ReadWriteMode>
  {
    using UCGLIT = EUSCI_A2_UCAxCTLW1_UCGLIT_Values<EUSCI_A2::UCAxCTLW1, 0, 2, ReadWriteMode, EUSCI_A2UCAxCTLW1Base> ;
    using FieldValues = EUSCI_A2_UCAxCTLW1_UCGLIT_Values<EUSCI_A2::UCAxCTLW1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxCTLW1Pack  = Register<0x40001802, 16, ReadWriteMode, EUSCI_A2UCAxCTLW1Base, T...> ;

  struct EUSCI_A2UCAxBRWBase {} ;

  struct UCAxBRW : public RegisterBase<0x40001806, 16, ReadWriteMode>
  {
    using UCBR = EUSCI_A2_UCAxBRW_UCBR_Values<EUSCI_A2::UCAxBRW, 0, 16, ReadWriteMode, EUSCI_A2UCAxBRWBase> ;
    using FieldValues = EUSCI_A2_UCAxBRW_UCBR_Values<EUSCI_A2::UCAxBRW, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxBRWPack  = Register<0x40001806, 16, ReadWriteMode, EUSCI_A2UCAxBRWBase, T...> ;

  struct EUSCI_A2UCAxMCTLWBase {} ;

  struct UCAxMCTLW : public RegisterBase<0x40001808, 16, ReadWriteMode>
  {
    using UCOS16 = EUSCI_A2_UCAxMCTLW_UCOS16_Values<EUSCI_A2::UCAxMCTLW, 0, 1, ReadWriteMode, EUSCI_A2UCAxMCTLWBase> ;
    using UCBRF = EUSCI_A2_UCAxMCTLW_UCBRF_Values<EUSCI_A2::UCAxMCTLW, 4, 4, ReadWriteMode, EUSCI_A2UCAxMCTLWBase> ;
    using UCBRS = EUSCI_A2_UCAxMCTLW_UCBRS_Values<EUSCI_A2::UCAxMCTLW, 8, 8, ReadWriteMode, EUSCI_A2UCAxMCTLWBase> ;
    using FieldValues = EUSCI_A2_UCAxMCTLW_UCBRS_Values<EUSCI_A2::UCAxMCTLW, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxMCTLWPack  = Register<0x40001808, 16, ReadWriteMode, EUSCI_A2UCAxMCTLWBase, T...> ;

  struct EUSCI_A2UCAxSTATWBase {} ;

  struct UCAxSTATW : public RegisterBase<0x4000180A, 16, ReadWriteMode>
  {
    using UCBUSY = EUSCI_A2_UCAxSTATW_UCBUSY_Values<EUSCI_A2::UCAxSTATW, 0, 1, ReadMode, EUSCI_A2UCAxSTATWBase> ;
    using UCADDR_UCIDLE = EUSCI_A2_UCAxSTATW_UCADDR_UCIDLE_Values<EUSCI_A2::UCAxSTATW, 1, 1, ReadWriteMode, EUSCI_A2UCAxSTATWBase> ;
    using UCRXERR = EUSCI_A2_UCAxSTATW_UCRXERR_Values<EUSCI_A2::UCAxSTATW, 2, 1, ReadWriteMode, EUSCI_A2UCAxSTATWBase> ;
    using UCBRK = EUSCI_A2_UCAxSTATW_UCBRK_Values<EUSCI_A2::UCAxSTATW, 3, 1, ReadWriteMode, EUSCI_A2UCAxSTATWBase> ;
    using UCPE = EUSCI_A2_UCAxSTATW_UCPE_Values<EUSCI_A2::UCAxSTATW, 4, 1, ReadWriteMode, EUSCI_A2UCAxSTATWBase> ;
    using UCOE = EUSCI_A2_UCAxSTATW_UCOE_Values<EUSCI_A2::UCAxSTATW, 5, 1, ReadWriteMode, EUSCI_A2UCAxSTATWBase> ;
    using UCFE = EUSCI_A2_UCAxSTATW_UCFE_Values<EUSCI_A2::UCAxSTATW, 6, 1, ReadWriteMode, EUSCI_A2UCAxSTATWBase> ;
    using UCLISTEN = EUSCI_A2_UCAxSTATW_UCLISTEN_Values<EUSCI_A2::UCAxSTATW, 7, 1, ReadWriteMode, EUSCI_A2UCAxSTATWBase> ;
    using FieldValues = EUSCI_A2_UCAxSTATW_UCLISTEN_Values<EUSCI_A2::UCAxSTATW, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxSTATWPack  = Register<0x4000180A, 16, ReadWriteMode, EUSCI_A2UCAxSTATWBase, T...> ;

  struct EUSCI_A2UCAxRXBUFBase {} ;

  struct UCAxRXBUF : public RegisterBase<0x4000180C, 16, ReadMode>
  {
    using UCRXBUF = EUSCI_A2_UCAxRXBUF_UCRXBUF_Values<EUSCI_A2::UCAxRXBUF, 0, 8, ReadMode, EUSCI_A2UCAxRXBUFBase> ;
    using FieldValues = EUSCI_A2_UCAxRXBUF_UCRXBUF_Values<EUSCI_A2::UCAxRXBUF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxRXBUFPack  = Register<0x4000180C, 16, ReadMode, EUSCI_A2UCAxRXBUFBase, T...> ;

  struct EUSCI_A2UCAxTXBUFBase {} ;

  struct UCAxTXBUF : public RegisterBase<0x4000180E, 16, ReadWriteMode>
  {
    using UCTXBUF = EUSCI_A2_UCAxTXBUF_UCTXBUF_Values<EUSCI_A2::UCAxTXBUF, 0, 8, ReadWriteMode, EUSCI_A2UCAxTXBUFBase> ;
    using FieldValues = EUSCI_A2_UCAxTXBUF_UCTXBUF_Values<EUSCI_A2::UCAxTXBUF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxTXBUFPack  = Register<0x4000180E, 16, ReadWriteMode, EUSCI_A2UCAxTXBUFBase, T...> ;

  struct EUSCI_A2UCAxABCTLBase {} ;

  struct UCAxABCTL : public RegisterBase<0x40001810, 16, ReadWriteMode>
  {
    using UCABDEN = EUSCI_A2_UCAxABCTL_UCABDEN_Values<EUSCI_A2::UCAxABCTL, 0, 1, ReadWriteMode, EUSCI_A2UCAxABCTLBase> ;
    using UCBTOE = EUSCI_A2_UCAxABCTL_UCBTOE_Values<EUSCI_A2::UCAxABCTL, 2, 1, ReadWriteMode, EUSCI_A2UCAxABCTLBase> ;
    using UCSTOE = EUSCI_A2_UCAxABCTL_UCSTOE_Values<EUSCI_A2::UCAxABCTL, 3, 1, ReadWriteMode, EUSCI_A2UCAxABCTLBase> ;
    using UCDELIM = EUSCI_A2_UCAxABCTL_UCDELIM_Values<EUSCI_A2::UCAxABCTL, 4, 2, ReadWriteMode, EUSCI_A2UCAxABCTLBase> ;
    using FieldValues = EUSCI_A2_UCAxABCTL_UCDELIM_Values<EUSCI_A2::UCAxABCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxABCTLPack  = Register<0x40001810, 16, ReadWriteMode, EUSCI_A2UCAxABCTLBase, T...> ;

  struct EUSCI_A2UCAxIRCTLBase {} ;

  struct UCAxIRCTL : public RegisterBase<0x40001812, 16, ReadWriteMode>
  {
    using UCIREN = EUSCI_A2_UCAxIRCTL_UCIREN_Values<EUSCI_A2::UCAxIRCTL, 0, 1, ReadWriteMode, EUSCI_A2UCAxIRCTLBase> ;
    using UCIRTXCLK = EUSCI_A2_UCAxIRCTL_UCIRTXCLK_Values<EUSCI_A2::UCAxIRCTL, 1, 1, ReadWriteMode, EUSCI_A2UCAxIRCTLBase> ;
    using UCIRTXPL = EUSCI_A2_UCAxIRCTL_UCIRTXPL_Values<EUSCI_A2::UCAxIRCTL, 2, 6, ReadWriteMode, EUSCI_A2UCAxIRCTLBase> ;
    using UCIRRXFE = EUSCI_A2_UCAxIRCTL_UCIRRXFE_Values<EUSCI_A2::UCAxIRCTL, 8, 1, ReadWriteMode, EUSCI_A2UCAxIRCTLBase> ;
    using UCIRRXPL = EUSCI_A2_UCAxIRCTL_UCIRRXPL_Values<EUSCI_A2::UCAxIRCTL, 9, 1, ReadWriteMode, EUSCI_A2UCAxIRCTLBase> ;
    using UCIRRXFL = EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values<EUSCI_A2::UCAxIRCTL, 10, 4, ReadWriteMode, EUSCI_A2UCAxIRCTLBase> ;
    using FieldValues = EUSCI_A2_UCAxIRCTL_UCIRRXFL_Values<EUSCI_A2::UCAxIRCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxIRCTLPack  = Register<0x40001812, 16, ReadWriteMode, EUSCI_A2UCAxIRCTLBase, T...> ;

  struct EUSCI_A2UCAxIEBase {} ;

  struct UCAxIE : public RegisterBase<0x4000181A, 16, ReadWriteMode>
  {
    using UCRXIE = EUSCI_A2_UCAxIE_UCRXIE_Values<EUSCI_A2::UCAxIE, 0, 1, ReadWriteMode, EUSCI_A2UCAxIEBase> ;
    using UCTXIE = EUSCI_A2_UCAxIE_UCTXIE_Values<EUSCI_A2::UCAxIE, 1, 1, ReadWriteMode, EUSCI_A2UCAxIEBase> ;
    using UCSTTIE = EUSCI_A2_UCAxIE_UCSTTIE_Values<EUSCI_A2::UCAxIE, 2, 1, ReadWriteMode, EUSCI_A2UCAxIEBase> ;
    using UCTXCPTIE = EUSCI_A2_UCAxIE_UCTXCPTIE_Values<EUSCI_A2::UCAxIE, 3, 1, ReadWriteMode, EUSCI_A2UCAxIEBase> ;
    using FieldValues = EUSCI_A2_UCAxIE_UCTXCPTIE_Values<EUSCI_A2::UCAxIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxIEPack  = Register<0x4000181A, 16, ReadWriteMode, EUSCI_A2UCAxIEBase, T...> ;

  struct EUSCI_A2UCAxIFGBase {} ;

  struct UCAxIFG : public RegisterBase<0x4000181C, 16, ReadWriteMode>
  {
    using UCRXIFG = EUSCI_A2_UCAxIFG_UCRXIFG_Values<EUSCI_A2::UCAxIFG, 0, 1, ReadWriteMode, EUSCI_A2UCAxIFGBase> ;
    using UCTXIFG = EUSCI_A2_UCAxIFG_UCTXIFG_Values<EUSCI_A2::UCAxIFG, 1, 1, ReadWriteMode, EUSCI_A2UCAxIFGBase> ;
    using UCSTTIFG = EUSCI_A2_UCAxIFG_UCSTTIFG_Values<EUSCI_A2::UCAxIFG, 2, 1, ReadWriteMode, EUSCI_A2UCAxIFGBase> ;
    using UCTXCPTIFG = EUSCI_A2_UCAxIFG_UCTXCPTIFG_Values<EUSCI_A2::UCAxIFG, 3, 1, ReadWriteMode, EUSCI_A2UCAxIFGBase> ;
    using FieldValues = EUSCI_A2_UCAxIFG_UCTXCPTIFG_Values<EUSCI_A2::UCAxIFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxIFGPack  = Register<0x4000181C, 16, ReadWriteMode, EUSCI_A2UCAxIFGBase, T...> ;

  struct EUSCI_A2UCAxIVBase {} ;

  struct UCAxIV : public RegisterBase<0x4000181E, 16, ReadMode>
  {
    using UCIV = EUSCI_A2_UCAxIV_UCIV_Values<EUSCI_A2::UCAxIV, 0, 16, ReadMode, EUSCI_A2UCAxIVBase> ;
    using FieldValues = EUSCI_A2_UCAxIV_UCIV_Values<EUSCI_A2::UCAxIV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCAxIVPack  = Register<0x4000181E, 16, ReadMode, EUSCI_A2UCAxIVBase, T...> ;

} ;

#endif //#if !defined(EUSCIA2REGISTERS_HPP)
