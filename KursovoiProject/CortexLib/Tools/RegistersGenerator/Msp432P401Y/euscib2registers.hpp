/*******************************************************************************
* Filename      : euscib2registers.hpp
*
* Details       : EUSCI_B2. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(EUSCIB2REGISTERS_HPP)
#define EUSCIB2REGISTERS_HPP

#include "euscib2fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct EUSCI_B2
{
  struct EUSCI_B2UCBxCTLW0Base {} ;

  struct UCBxCTLW0 : public RegisterBase<0x40002800, 16, ReadWriteMode>
  {
    using UCSWRST = EUSCI_B2_UCBxCTLW0_UCSWRST_Values<EUSCI_B2::UCBxCTLW0, 0, 1, ReadWriteMode, EUSCI_B2UCBxCTLW0Base> ;
    using UCTXSTT = EUSCI_B2_UCBxCTLW0_UCTXSTT_Values<EUSCI_B2::UCBxCTLW0, 1, 1, ReadWriteMode, EUSCI_B2UCBxCTLW0Base> ;
    using UCTXSTP = EUSCI_B2_UCBxCTLW0_UCTXSTP_Values<EUSCI_B2::UCBxCTLW0, 2, 1, ReadWriteMode, EUSCI_B2UCBxCTLW0Base> ;
    using UCTXNACK = EUSCI_B2_UCBxCTLW0_UCTXNACK_Values<EUSCI_B2::UCBxCTLW0, 3, 1, ReadWriteMode, EUSCI_B2UCBxCTLW0Base> ;
    using UCTR = EUSCI_B2_UCBxCTLW0_UCTR_Values<EUSCI_B2::UCBxCTLW0, 4, 1, ReadWriteMode, EUSCI_B2UCBxCTLW0Base> ;
    using UCTXACK = EUSCI_B2_UCBxCTLW0_UCTXACK_Values<EUSCI_B2::UCBxCTLW0, 5, 1, ReadWriteMode, EUSCI_B2UCBxCTLW0Base> ;
    using UCSSEL = EUSCI_B2_UCBxCTLW0_UCSSEL_Values<EUSCI_B2::UCBxCTLW0, 6, 2, ReadWriteMode, EUSCI_B2UCBxCTLW0Base> ;
    using UCSYNC = EUSCI_B2_UCBxCTLW0_UCSYNC_Values<EUSCI_B2::UCBxCTLW0, 8, 1, ReadWriteMode, EUSCI_B2UCBxCTLW0Base> ;
    using UCMODE = EUSCI_B2_UCBxCTLW0_UCMODE_Values<EUSCI_B2::UCBxCTLW0, 9, 2, ReadWriteMode, EUSCI_B2UCBxCTLW0Base> ;
    using UCMST = EUSCI_B2_UCBxCTLW0_UCMST_Values<EUSCI_B2::UCBxCTLW0, 11, 1, ReadWriteMode, EUSCI_B2UCBxCTLW0Base> ;
    using UCMM = EUSCI_B2_UCBxCTLW0_UCMM_Values<EUSCI_B2::UCBxCTLW0, 13, 1, ReadWriteMode, EUSCI_B2UCBxCTLW0Base> ;
    using UCSLA10 = EUSCI_B2_UCBxCTLW0_UCSLA10_Values<EUSCI_B2::UCBxCTLW0, 14, 1, ReadWriteMode, EUSCI_B2UCBxCTLW0Base> ;
    using UCA10 = EUSCI_B2_UCBxCTLW0_UCA10_Values<EUSCI_B2::UCBxCTLW0, 15, 1, ReadWriteMode, EUSCI_B2UCBxCTLW0Base> ;
    using FieldValues = EUSCI_B2_UCBxCTLW0_UCA10_Values<EUSCI_B2::UCBxCTLW0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxCTLW0Pack  = Register<0x40002800, 16, ReadWriteMode, EUSCI_B2UCBxCTLW0Base, T...> ;

  struct EUSCI_B2UCBxCTLW1Base {} ;

  struct UCBxCTLW1 : public RegisterBase<0x40002802, 16, ReadWriteMode>
  {
    using UCGLIT = EUSCI_B2_UCBxCTLW1_UCGLIT_Values<EUSCI_B2::UCBxCTLW1, 0, 2, ReadWriteMode, EUSCI_B2UCBxCTLW1Base> ;
    using UCASTP = EUSCI_B2_UCBxCTLW1_UCASTP_Values<EUSCI_B2::UCBxCTLW1, 2, 2, ReadWriteMode, EUSCI_B2UCBxCTLW1Base> ;
    using UCSWACK = EUSCI_B2_UCBxCTLW1_UCSWACK_Values<EUSCI_B2::UCBxCTLW1, 4, 1, ReadWriteMode, EUSCI_B2UCBxCTLW1Base> ;
    using UCSTPNACK = EUSCI_B2_UCBxCTLW1_UCSTPNACK_Values<EUSCI_B2::UCBxCTLW1, 5, 1, ReadWriteMode, EUSCI_B2UCBxCTLW1Base> ;
    using UCCLTO = EUSCI_B2_UCBxCTLW1_UCCLTO_Values<EUSCI_B2::UCBxCTLW1, 6, 2, ReadWriteMode, EUSCI_B2UCBxCTLW1Base> ;
    using UCETXINT = EUSCI_B2_UCBxCTLW1_UCETXINT_Values<EUSCI_B2::UCBxCTLW1, 8, 1, ReadWriteMode, EUSCI_B2UCBxCTLW1Base> ;
    using FieldValues = EUSCI_B2_UCBxCTLW1_UCETXINT_Values<EUSCI_B2::UCBxCTLW1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxCTLW1Pack  = Register<0x40002802, 16, ReadWriteMode, EUSCI_B2UCBxCTLW1Base, T...> ;

  struct EUSCI_B2UCBxBRWBase {} ;

  struct UCBxBRW : public RegisterBase<0x40002806, 16, ReadWriteMode>
  {
    using UCBR = EUSCI_B2_UCBxBRW_UCBR_Values<EUSCI_B2::UCBxBRW, 0, 16, ReadWriteMode, EUSCI_B2UCBxBRWBase> ;
    using FieldValues = EUSCI_B2_UCBxBRW_UCBR_Values<EUSCI_B2::UCBxBRW, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxBRWPack  = Register<0x40002806, 16, ReadWriteMode, EUSCI_B2UCBxBRWBase, T...> ;

  struct EUSCI_B2UCBxSTATWBase {} ;

  struct UCBxSTATW : public RegisterBase<0x40002808, 16, ReadWriteMode>
  {
    using UCBBUSY = EUSCI_B2_UCBxSTATW_UCBBUSY_Values<EUSCI_B2::UCBxSTATW, 4, 1, ReadMode, EUSCI_B2UCBxSTATWBase> ;
    using UCGC = EUSCI_B2_UCBxSTATW_UCGC_Values<EUSCI_B2::UCBxSTATW, 5, 1, ReadMode, EUSCI_B2UCBxSTATWBase> ;
    using UCSCLLOW = EUSCI_B2_UCBxSTATW_UCSCLLOW_Values<EUSCI_B2::UCBxSTATW, 6, 1, ReadMode, EUSCI_B2UCBxSTATWBase> ;
    using UCBCNT = EUSCI_B2_UCBxSTATW_UCBCNT_Values<EUSCI_B2::UCBxSTATW, 8, 8, ReadMode, EUSCI_B2UCBxSTATWBase> ;
    using FieldValues = EUSCI_B2_UCBxSTATW_UCBCNT_Values<EUSCI_B2::UCBxSTATW, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxSTATWPack  = Register<0x40002808, 16, ReadWriteMode, EUSCI_B2UCBxSTATWBase, T...> ;

  struct EUSCI_B2UCBxTBCNTBase {} ;

  struct UCBxTBCNT : public RegisterBase<0x4000280A, 16, ReadWriteMode>
  {
    using UCTBCNT = EUSCI_B2_UCBxTBCNT_UCTBCNT_Values<EUSCI_B2::UCBxTBCNT, 0, 8, ReadWriteMode, EUSCI_B2UCBxTBCNTBase> ;
    using FieldValues = EUSCI_B2_UCBxTBCNT_UCTBCNT_Values<EUSCI_B2::UCBxTBCNT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxTBCNTPack  = Register<0x4000280A, 16, ReadWriteMode, EUSCI_B2UCBxTBCNTBase, T...> ;

  struct EUSCI_B2UCBxRXBUFBase {} ;

  struct UCBxRXBUF : public RegisterBase<0x4000280C, 16, ReadMode>
  {
    using UCRXBUF = EUSCI_B2_UCBxRXBUF_UCRXBUF_Values<EUSCI_B2::UCBxRXBUF, 0, 8, ReadMode, EUSCI_B2UCBxRXBUFBase> ;
    using FieldValues = EUSCI_B2_UCBxRXBUF_UCRXBUF_Values<EUSCI_B2::UCBxRXBUF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxRXBUFPack  = Register<0x4000280C, 16, ReadMode, EUSCI_B2UCBxRXBUFBase, T...> ;

  struct EUSCI_B2UCBxTXBUFBase {} ;

  struct UCBxTXBUF : public RegisterBase<0x4000280E, 16, ReadWriteMode>
  {
    using UCTXBUF = EUSCI_B2_UCBxTXBUF_UCTXBUF_Values<EUSCI_B2::UCBxTXBUF, 0, 8, ReadWriteMode, EUSCI_B2UCBxTXBUFBase> ;
    using FieldValues = EUSCI_B2_UCBxTXBUF_UCTXBUF_Values<EUSCI_B2::UCBxTXBUF, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxTXBUFPack  = Register<0x4000280E, 16, ReadWriteMode, EUSCI_B2UCBxTXBUFBase, T...> ;

  struct EUSCI_B2UCBxI2COA0Base {} ;

  struct UCBxI2COA0 : public RegisterBase<0x40002814, 16, ReadWriteMode>
  {
    using I2COA0 = EUSCI_B2_UCBxI2COA0_I2COA0_Values<EUSCI_B2::UCBxI2COA0, 0, 10, ReadWriteMode, EUSCI_B2UCBxI2COA0Base> ;
    using UCOAEN = EUSCI_B2_UCBxI2COA0_UCOAEN_Values<EUSCI_B2::UCBxI2COA0, 10, 1, ReadWriteMode, EUSCI_B2UCBxI2COA0Base> ;
    using UCGCEN = EUSCI_B2_UCBxI2COA0_UCGCEN_Values<EUSCI_B2::UCBxI2COA0, 15, 1, ReadWriteMode, EUSCI_B2UCBxI2COA0Base> ;
    using FieldValues = EUSCI_B2_UCBxI2COA0_UCGCEN_Values<EUSCI_B2::UCBxI2COA0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxI2COA0Pack  = Register<0x40002814, 16, ReadWriteMode, EUSCI_B2UCBxI2COA0Base, T...> ;

  struct EUSCI_B2UCBxI2COA1Base {} ;

  struct UCBxI2COA1 : public RegisterBase<0x40002816, 16, ReadWriteMode>
  {
    using I2COA1 = EUSCI_B2_UCBxI2COA1_I2COA1_Values<EUSCI_B2::UCBxI2COA1, 0, 10, ReadWriteMode, EUSCI_B2UCBxI2COA1Base> ;
    using UCOAEN = EUSCI_B2_UCBxI2COA1_UCOAEN_Values<EUSCI_B2::UCBxI2COA1, 10, 1, ReadWriteMode, EUSCI_B2UCBxI2COA1Base> ;
    using FieldValues = EUSCI_B2_UCBxI2COA1_UCOAEN_Values<EUSCI_B2::UCBxI2COA1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxI2COA1Pack  = Register<0x40002816, 16, ReadWriteMode, EUSCI_B2UCBxI2COA1Base, T...> ;

  struct EUSCI_B2UCBxI2COA2Base {} ;

  struct UCBxI2COA2 : public RegisterBase<0x40002818, 16, ReadWriteMode>
  {
    using I2COA2 = EUSCI_B2_UCBxI2COA2_I2COA2_Values<EUSCI_B2::UCBxI2COA2, 0, 10, ReadWriteMode, EUSCI_B2UCBxI2COA2Base> ;
    using UCOAEN = EUSCI_B2_UCBxI2COA2_UCOAEN_Values<EUSCI_B2::UCBxI2COA2, 10, 1, ReadWriteMode, EUSCI_B2UCBxI2COA2Base> ;
    using FieldValues = EUSCI_B2_UCBxI2COA2_UCOAEN_Values<EUSCI_B2::UCBxI2COA2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxI2COA2Pack  = Register<0x40002818, 16, ReadWriteMode, EUSCI_B2UCBxI2COA2Base, T...> ;

  struct EUSCI_B2UCBxI2COA3Base {} ;

  struct UCBxI2COA3 : public RegisterBase<0x4000281A, 16, ReadWriteMode>
  {
    using I2COA3 = EUSCI_B2_UCBxI2COA3_I2COA3_Values<EUSCI_B2::UCBxI2COA3, 0, 10, ReadWriteMode, EUSCI_B2UCBxI2COA3Base> ;
    using UCOAEN = EUSCI_B2_UCBxI2COA3_UCOAEN_Values<EUSCI_B2::UCBxI2COA3, 10, 1, ReadWriteMode, EUSCI_B2UCBxI2COA3Base> ;
    using FieldValues = EUSCI_B2_UCBxI2COA3_UCOAEN_Values<EUSCI_B2::UCBxI2COA3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxI2COA3Pack  = Register<0x4000281A, 16, ReadWriteMode, EUSCI_B2UCBxI2COA3Base, T...> ;

  struct EUSCI_B2UCBxADDRXBase {} ;

  struct UCBxADDRX : public RegisterBase<0x4000281C, 16, ReadMode>
  {
    using ADDRX = EUSCI_B2_UCBxADDRX_ADDRX_Values<EUSCI_B2::UCBxADDRX, 0, 10, ReadMode, EUSCI_B2UCBxADDRXBase> ;
    using FieldValues = EUSCI_B2_UCBxADDRX_ADDRX_Values<EUSCI_B2::UCBxADDRX, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxADDRXPack  = Register<0x4000281C, 16, ReadMode, EUSCI_B2UCBxADDRXBase, T...> ;

  struct EUSCI_B2UCBxADDMASKBase {} ;

  struct UCBxADDMASK : public RegisterBase<0x4000281E, 16, ReadWriteMode>
  {
    using ADDMASK = EUSCI_B2_UCBxADDMASK_ADDMASK_Values<EUSCI_B2::UCBxADDMASK, 0, 10, ReadWriteMode, EUSCI_B2UCBxADDMASKBase> ;
    using FieldValues = EUSCI_B2_UCBxADDMASK_ADDMASK_Values<EUSCI_B2::UCBxADDMASK, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxADDMASKPack  = Register<0x4000281E, 16, ReadWriteMode, EUSCI_B2UCBxADDMASKBase, T...> ;

  struct EUSCI_B2UCBxI2CSABase {} ;

  struct UCBxI2CSA : public RegisterBase<0x40002820, 16, ReadWriteMode>
  {
    using I2CSA = EUSCI_B2_UCBxI2CSA_I2CSA_Values<EUSCI_B2::UCBxI2CSA, 0, 10, ReadWriteMode, EUSCI_B2UCBxI2CSABase> ;
    using FieldValues = EUSCI_B2_UCBxI2CSA_I2CSA_Values<EUSCI_B2::UCBxI2CSA, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxI2CSAPack  = Register<0x40002820, 16, ReadWriteMode, EUSCI_B2UCBxI2CSABase, T...> ;

  struct EUSCI_B2UCBxIEBase {} ;

  struct UCBxIE : public RegisterBase<0x4000282A, 16, ReadWriteMode>
  {
    using UCRXIE0 = EUSCI_B2_UCBxIE_UCRXIE0_Values<EUSCI_B2::UCBxIE, 0, 1, ReadWriteMode, EUSCI_B2UCBxIEBase> ;
    using UCTXIE0 = EUSCI_B2_UCBxIE_UCTXIE0_Values<EUSCI_B2::UCBxIE, 1, 1, ReadWriteMode, EUSCI_B2UCBxIEBase> ;
    using UCSTTIE = EUSCI_B2_UCBxIE_UCSTTIE_Values<EUSCI_B2::UCBxIE, 2, 1, ReadWriteMode, EUSCI_B2UCBxIEBase> ;
    using UCSTPIE = EUSCI_B2_UCBxIE_UCSTPIE_Values<EUSCI_B2::UCBxIE, 3, 1, ReadWriteMode, EUSCI_B2UCBxIEBase> ;
    using UCALIE = EUSCI_B2_UCBxIE_UCALIE_Values<EUSCI_B2::UCBxIE, 4, 1, ReadWriteMode, EUSCI_B2UCBxIEBase> ;
    using UCNACKIE = EUSCI_B2_UCBxIE_UCNACKIE_Values<EUSCI_B2::UCBxIE, 5, 1, ReadWriteMode, EUSCI_B2UCBxIEBase> ;
    using UCBCNTIE = EUSCI_B2_UCBxIE_UCBCNTIE_Values<EUSCI_B2::UCBxIE, 6, 1, ReadWriteMode, EUSCI_B2UCBxIEBase> ;
    using UCCLTOIE = EUSCI_B2_UCBxIE_UCCLTOIE_Values<EUSCI_B2::UCBxIE, 7, 1, ReadWriteMode, EUSCI_B2UCBxIEBase> ;
    using UCRXIE1 = EUSCI_B2_UCBxIE_UCRXIE1_Values<EUSCI_B2::UCBxIE, 8, 1, ReadWriteMode, EUSCI_B2UCBxIEBase> ;
    using UCTXIE1 = EUSCI_B2_UCBxIE_UCTXIE1_Values<EUSCI_B2::UCBxIE, 9, 1, ReadWriteMode, EUSCI_B2UCBxIEBase> ;
    using UCRXIE2 = EUSCI_B2_UCBxIE_UCRXIE2_Values<EUSCI_B2::UCBxIE, 10, 1, ReadWriteMode, EUSCI_B2UCBxIEBase> ;
    using UCTXIE2 = EUSCI_B2_UCBxIE_UCTXIE2_Values<EUSCI_B2::UCBxIE, 11, 1, ReadWriteMode, EUSCI_B2UCBxIEBase> ;
    using UCRXIE3 = EUSCI_B2_UCBxIE_UCRXIE3_Values<EUSCI_B2::UCBxIE, 12, 1, ReadWriteMode, EUSCI_B2UCBxIEBase> ;
    using UCTXIE3 = EUSCI_B2_UCBxIE_UCTXIE3_Values<EUSCI_B2::UCBxIE, 13, 1, ReadWriteMode, EUSCI_B2UCBxIEBase> ;
    using UCBIT9IE = EUSCI_B2_UCBxIE_UCBIT9IE_Values<EUSCI_B2::UCBxIE, 14, 1, ReadWriteMode, EUSCI_B2UCBxIEBase> ;
    using FieldValues = EUSCI_B2_UCBxIE_UCBIT9IE_Values<EUSCI_B2::UCBxIE, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxIEPack  = Register<0x4000282A, 16, ReadWriteMode, EUSCI_B2UCBxIEBase, T...> ;

  struct EUSCI_B2UCBxIFGBase {} ;

  struct UCBxIFG : public RegisterBase<0x4000282C, 16, ReadWriteMode>
  {
    using UCRXIFG0 = EUSCI_B2_UCBxIFG_UCRXIFG0_Values<EUSCI_B2::UCBxIFG, 0, 1, ReadWriteMode, EUSCI_B2UCBxIFGBase> ;
    using UCTXIFG0 = EUSCI_B2_UCBxIFG_UCTXIFG0_Values<EUSCI_B2::UCBxIFG, 1, 1, ReadWriteMode, EUSCI_B2UCBxIFGBase> ;
    using UCSTTIFG = EUSCI_B2_UCBxIFG_UCSTTIFG_Values<EUSCI_B2::UCBxIFG, 2, 1, ReadWriteMode, EUSCI_B2UCBxIFGBase> ;
    using UCSTPIFG = EUSCI_B2_UCBxIFG_UCSTPIFG_Values<EUSCI_B2::UCBxIFG, 3, 1, ReadWriteMode, EUSCI_B2UCBxIFGBase> ;
    using UCALIFG = EUSCI_B2_UCBxIFG_UCALIFG_Values<EUSCI_B2::UCBxIFG, 4, 1, ReadWriteMode, EUSCI_B2UCBxIFGBase> ;
    using UCNACKIFG = EUSCI_B2_UCBxIFG_UCNACKIFG_Values<EUSCI_B2::UCBxIFG, 5, 1, ReadWriteMode, EUSCI_B2UCBxIFGBase> ;
    using UCBCNTIFG = EUSCI_B2_UCBxIFG_UCBCNTIFG_Values<EUSCI_B2::UCBxIFG, 6, 1, ReadWriteMode, EUSCI_B2UCBxIFGBase> ;
    using UCCLTOIFG = EUSCI_B2_UCBxIFG_UCCLTOIFG_Values<EUSCI_B2::UCBxIFG, 7, 1, ReadWriteMode, EUSCI_B2UCBxIFGBase> ;
    using UCRXIFG1 = EUSCI_B2_UCBxIFG_UCRXIFG1_Values<EUSCI_B2::UCBxIFG, 8, 1, ReadWriteMode, EUSCI_B2UCBxIFGBase> ;
    using UCTXIFG1 = EUSCI_B2_UCBxIFG_UCTXIFG1_Values<EUSCI_B2::UCBxIFG, 9, 1, ReadWriteMode, EUSCI_B2UCBxIFGBase> ;
    using UCRXIFG2 = EUSCI_B2_UCBxIFG_UCRXIFG2_Values<EUSCI_B2::UCBxIFG, 10, 1, ReadWriteMode, EUSCI_B2UCBxIFGBase> ;
    using UCTXIFG2 = EUSCI_B2_UCBxIFG_UCTXIFG2_Values<EUSCI_B2::UCBxIFG, 11, 1, ReadWriteMode, EUSCI_B2UCBxIFGBase> ;
    using UCRXIFG3 = EUSCI_B2_UCBxIFG_UCRXIFG3_Values<EUSCI_B2::UCBxIFG, 12, 1, ReadWriteMode, EUSCI_B2UCBxIFGBase> ;
    using UCTXIFG3 = EUSCI_B2_UCBxIFG_UCTXIFG3_Values<EUSCI_B2::UCBxIFG, 13, 1, ReadWriteMode, EUSCI_B2UCBxIFGBase> ;
    using UCBIT9IFG = EUSCI_B2_UCBxIFG_UCBIT9IFG_Values<EUSCI_B2::UCBxIFG, 14, 1, ReadWriteMode, EUSCI_B2UCBxIFGBase> ;
    using FieldValues = EUSCI_B2_UCBxIFG_UCBIT9IFG_Values<EUSCI_B2::UCBxIFG, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxIFGPack  = Register<0x4000282C, 16, ReadWriteMode, EUSCI_B2UCBxIFGBase, T...> ;

  struct EUSCI_B2UCBxIVBase {} ;

  struct UCBxIV : public RegisterBase<0x4000282E, 16, ReadMode>
  {
    using UCIV = EUSCI_B2_UCBxIV_UCIV_Values<EUSCI_B2::UCBxIV, 0, 16, ReadMode, EUSCI_B2UCBxIVBase> ;
    using FieldValues = EUSCI_B2_UCBxIV_UCIV_Values<EUSCI_B2::UCBxIV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using UCBxIVPack  = Register<0x4000282E, 16, ReadMode, EUSCI_B2UCBxIVBase, T...> ;

} ;

#endif //#if !defined(EUSCIB2REGISTERS_HPP)
