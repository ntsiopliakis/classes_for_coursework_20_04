/*******************************************************************************
* Filename      : captio1registers.hpp
*
* Details       : CAPTIO1. This header file is auto-generated for MSP432P401Y
*                 device.
*
*
*******************************************************************************/

#if !defined(CAPTIO1REGISTERS_HPP)
#define CAPTIO1REGISTERS_HPP

#include "captio1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct CAPTIO1
{
  struct CAPTIO1CAPTIOxCTLBase {} ;

  struct CAPTIOxCTL : public RegisterBase<0x4000580E, 16, ReadWriteMode>
  {
    using CAPTIOPISELx = CAPTIO1_CAPTIOxCTL_CAPTIOPISELx_Values<CAPTIO1::CAPTIOxCTL, 1, 3, ReadWriteMode, CAPTIO1CAPTIOxCTLBase> ;
    using CAPTIOPOSELx = CAPTIO1_CAPTIOxCTL_CAPTIOPOSELx_Values<CAPTIO1::CAPTIOxCTL, 4, 4, ReadWriteMode, CAPTIO1CAPTIOxCTLBase> ;
    using CAPTIOEN = CAPTIO1_CAPTIOxCTL_CAPTIOEN_Values<CAPTIO1::CAPTIOxCTL, 8, 1, ReadWriteMode, CAPTIO1CAPTIOxCTLBase> ;
    using CAPTIOSTATE = CAPTIO1_CAPTIOxCTL_CAPTIOSTATE_Values<CAPTIO1::CAPTIOxCTL, 9, 1, ReadMode, CAPTIO1CAPTIOxCTLBase> ;
    using FieldValues = CAPTIO1_CAPTIOxCTL_CAPTIOSTATE_Values<CAPTIO1::CAPTIOxCTL, 0, 0, NoAccess, NoAccess> ;
  } ;

  template<typename... T> 
  using CAPTIOxCTLPack  = Register<0x4000580E, 16, ReadWriteMode, CAPTIO1CAPTIOxCTLBase, T...> ;

} ;

#endif //#if !defined(CAPTIO1REGISTERS_HPP)
