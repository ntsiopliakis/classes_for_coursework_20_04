/*******************************************************************************
* Filename      : compe0registers.hpp
*
* Details       : COMP_E0. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(COMPE0REGISTERS_HPP)
#define COMPE0REGISTERS_HPP

#include "compe0fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct COMP_E0
{
  struct COMP_E0CExCTL0Base {} ;

  struct CExCTL0 : public RegisterBase<0x40003400, 16, ReadWriteMode>
  {
    using CEIPSEL = COMP_E0_CExCTL0_CEIPSEL_Values<COMP_E0::CExCTL0, 0, 4, ReadWriteMode, COMP_E0CExCTL0Base> ;
    using CEIPEN = COMP_E0_CExCTL0_CEIPEN_Values<COMP_E0::CExCTL0, 7, 1, ReadWriteMode, COMP_E0CExCTL0Base> ;
    using CEIMSEL = COMP_E0_CExCTL0_CEIMSEL_Values<COMP_E0::CExCTL0, 8, 4, ReadWriteMode, COMP_E0CExCTL0Base> ;
    using CEIMEN = COMP_E0_CExCTL0_CEIMEN_Values<COMP_E0::CExCTL0, 15, 1, ReadWriteMode, COMP_E0CExCTL0Base> ;
    using FieldValues = COMP_E0_CExCTL0_CEIMEN_Values<COMP_E0::CExCTL0, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CExCTL0Pack  = Register<0x40003400, 16, ReadWriteMode, COMP_E0CExCTL0Base, T...> ;

  struct COMP_E0CExCTL1Base {} ;

  struct CExCTL1 : public RegisterBase<0x40003402, 16, ReadWriteMode>
  {
    using CEOUT = COMP_E0_CExCTL1_CEOUT_Values<COMP_E0::CExCTL1, 0, 1, ReadWriteMode, COMP_E0CExCTL1Base> ;
    using CEOUTPOL = COMP_E0_CExCTL1_CEOUTPOL_Values<COMP_E0::CExCTL1, 1, 1, ReadWriteMode, COMP_E0CExCTL1Base> ;
    using CEF = COMP_E0_CExCTL1_CEF_Values<COMP_E0::CExCTL1, 2, 1, ReadWriteMode, COMP_E0CExCTL1Base> ;
    using CEIES = COMP_E0_CExCTL1_CEIES_Values<COMP_E0::CExCTL1, 3, 1, ReadWriteMode, COMP_E0CExCTL1Base> ;
    using CESHORT = COMP_E0_CExCTL1_CESHORT_Values<COMP_E0::CExCTL1, 4, 1, ReadWriteMode, COMP_E0CExCTL1Base> ;
    using CEEX = COMP_E0_CExCTL1_CEEX_Values<COMP_E0::CExCTL1, 5, 1, ReadWriteMode, COMP_E0CExCTL1Base> ;
    using CEFDLY = COMP_E0_CExCTL1_CEFDLY_Values<COMP_E0::CExCTL1, 6, 2, ReadWriteMode, COMP_E0CExCTL1Base> ;
    using CEPWRMD = COMP_E0_CExCTL1_CEPWRMD_Values<COMP_E0::CExCTL1, 8, 2, ReadWriteMode, COMP_E0CExCTL1Base> ;
    using CEON = COMP_E0_CExCTL1_CEON_Values<COMP_E0::CExCTL1, 10, 1, ReadWriteMode, COMP_E0CExCTL1Base> ;
    using CEMRVL = COMP_E0_CExCTL1_CEMRVL_Values<COMP_E0::CExCTL1, 11, 1, ReadWriteMode, COMP_E0CExCTL1Base> ;
    using CEMRVS = COMP_E0_CExCTL1_CEMRVS_Values<COMP_E0::CExCTL1, 12, 1, ReadWriteMode, COMP_E0CExCTL1Base> ;
    using FieldValues = COMP_E0_CExCTL1_CEMRVS_Values<COMP_E0::CExCTL1, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CExCTL1Pack  = Register<0x40003402, 16, ReadWriteMode, COMP_E0CExCTL1Base, T...> ;

  struct COMP_E0CExCTL2Base {} ;

  struct CExCTL2 : public RegisterBase<0x40003404, 16, ReadWriteMode>
  {
    using CEREF0 = COMP_E0_CExCTL2_CEREF0_Values<COMP_E0::CExCTL2, 0, 5, ReadWriteMode, COMP_E0CExCTL2Base> ;
    using CERSEL = COMP_E0_CExCTL2_CERSEL_Values<COMP_E0::CExCTL2, 5, 1, ReadWriteMode, COMP_E0CExCTL2Base> ;
    using CERS = COMP_E0_CExCTL2_CERS_Values<COMP_E0::CExCTL2, 6, 2, ReadWriteMode, COMP_E0CExCTL2Base> ;
    using CEREF1 = COMP_E0_CExCTL2_CEREF1_Values<COMP_E0::CExCTL2, 8, 5, ReadWriteMode, COMP_E0CExCTL2Base> ;
    using CEREFL = COMP_E0_CExCTL2_CEREFL_Values<COMP_E0::CExCTL2, 13, 2, ReadWriteMode, COMP_E0CExCTL2Base> ;
    using CEREFACC = COMP_E0_CExCTL2_CEREFACC_Values<COMP_E0::CExCTL2, 15, 1, ReadWriteMode, COMP_E0CExCTL2Base> ;
    using FieldValues = COMP_E0_CExCTL2_CEREFACC_Values<COMP_E0::CExCTL2, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CExCTL2Pack  = Register<0x40003404, 16, ReadWriteMode, COMP_E0CExCTL2Base, T...> ;

  struct COMP_E0CExCTL3Base {} ;

  struct CExCTL3 : public RegisterBase<0x40003406, 16, ReadWriteMode>
  {
    using CEPD0 = COMP_E0_CExCTL3_CEPD0_Values<COMP_E0::CExCTL3, 0, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using CEPD1 = COMP_E0_CExCTL3_CEPD1_Values<COMP_E0::CExCTL3, 1, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using CEPD2 = COMP_E0_CExCTL3_CEPD2_Values<COMP_E0::CExCTL3, 2, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using CEPD3 = COMP_E0_CExCTL3_CEPD3_Values<COMP_E0::CExCTL3, 3, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using CEPD4 = COMP_E0_CExCTL3_CEPD4_Values<COMP_E0::CExCTL3, 4, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using CEPD5 = COMP_E0_CExCTL3_CEPD5_Values<COMP_E0::CExCTL3, 5, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using CEPD6 = COMP_E0_CExCTL3_CEPD6_Values<COMP_E0::CExCTL3, 6, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using CEPD7 = COMP_E0_CExCTL3_CEPD7_Values<COMP_E0::CExCTL3, 7, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using CEPD8 = COMP_E0_CExCTL3_CEPD8_Values<COMP_E0::CExCTL3, 8, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using CEPD9 = COMP_E0_CExCTL3_CEPD9_Values<COMP_E0::CExCTL3, 9, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using CEPD10 = COMP_E0_CExCTL3_CEPD10_Values<COMP_E0::CExCTL3, 10, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using CEPD11 = COMP_E0_CExCTL3_CEPD11_Values<COMP_E0::CExCTL3, 11, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using CEPD12 = COMP_E0_CExCTL3_CEPD12_Values<COMP_E0::CExCTL3, 12, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using CEPD13 = COMP_E0_CExCTL3_CEPD13_Values<COMP_E0::CExCTL3, 13, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using CEPD14 = COMP_E0_CExCTL3_CEPD14_Values<COMP_E0::CExCTL3, 14, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using CEPD15 = COMP_E0_CExCTL3_CEPD15_Values<COMP_E0::CExCTL3, 15, 1, ReadWriteMode, COMP_E0CExCTL3Base> ;
    using FieldValues = COMP_E0_CExCTL3_CEPD15_Values<COMP_E0::CExCTL3, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CExCTL3Pack  = Register<0x40003406, 16, ReadWriteMode, COMP_E0CExCTL3Base, T...> ;

  struct COMP_E0CExINTBase {} ;

  struct CExINT : public RegisterBase<0x4000340C, 16, ReadWriteMode>
  {
    using CEIFG = COMP_E0_CExINT_CEIFG_Values<COMP_E0::CExINT, 0, 1, ReadWriteMode, COMP_E0CExINTBase> ;
    using CEIIFG = COMP_E0_CExINT_CEIIFG_Values<COMP_E0::CExINT, 1, 1, ReadWriteMode, COMP_E0CExINTBase> ;
    using CERDYIFG = COMP_E0_CExINT_CERDYIFG_Values<COMP_E0::CExINT, 4, 1, ReadWriteMode, COMP_E0CExINTBase> ;
    using CEIE = COMP_E0_CExINT_CEIE_Values<COMP_E0::CExINT, 8, 1, ReadWriteMode, COMP_E0CExINTBase> ;
    using CEIIE = COMP_E0_CExINT_CEIIE_Values<COMP_E0::CExINT, 9, 1, ReadWriteMode, COMP_E0CExINTBase> ;
    using CERDYIE = COMP_E0_CExINT_CERDYIE_Values<COMP_E0::CExINT, 12, 1, ReadWriteMode, COMP_E0CExINTBase> ;
    using FieldValues = COMP_E0_CExINT_CERDYIE_Values<COMP_E0::CExINT, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CExINTPack  = Register<0x4000340C, 16, ReadWriteMode, COMP_E0CExINTBase, T...> ;

  struct COMP_E0CExIVBase {} ;

  struct CExIV : public RegisterBase<0x4000340E, 16, ReadMode>
  {
    using CEIV = COMP_E0_CExIV_CEIV_Values<COMP_E0::CExIV, 0, 16, ReadMode, COMP_E0CExIVBase> ;
    using FieldValues = COMP_E0_CExIV_CEIV_Values<COMP_E0::CExIV, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CExIVPack  = Register<0x4000340E, 16, ReadMode, COMP_E0CExIVBase, T...> ;

} ;

#endif //#if !defined(COMPE0REGISTERS_HPP)
