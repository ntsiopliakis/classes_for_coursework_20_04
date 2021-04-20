/*******************************************************************************
* Filename      : adc123commonfieldvalues.hpp
*
* Details       : Enumerations related with ADC123_Common peripheral. This
*                 header file is auto-generated for STM32L4x1 device.
*
*
*******************************************************************************/

#if !defined(ADC123COMMONENUMS_HPP)
#define ADC123COMMONENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_ADDRDY_MST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_ADDRDY_MST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_ADDRDY_MST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_EOSMP_MST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_EOSMP_MST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_EOSMP_MST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_EOC_MST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_EOC_MST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_EOC_MST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_EOS_MST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_EOS_MST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_EOS_MST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_OVR_MST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_OVR_MST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_OVR_MST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_JEOC_MST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_JEOC_MST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_JEOC_MST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_JEOS_MST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_JEOS_MST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_JEOS_MST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_AWD1_MST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_AWD1_MST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_AWD1_MST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_AWD2_MST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_AWD2_MST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_AWD2_MST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_AWD3_MST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_AWD3_MST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_AWD3_MST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_JQOVF_MST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_JQOVF_MST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_JQOVF_MST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_ADRDY_SLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_ADRDY_SLV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_ADRDY_SLV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_EOSMP_SLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_EOSMP_SLV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_EOSMP_SLV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_EOC_SLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_EOC_SLV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_EOC_SLV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_EOS_SLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_EOS_SLV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_EOS_SLV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_OVR_SLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_OVR_SLV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_OVR_SLV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_JEOC_SLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_JEOC_SLV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_JEOC_SLV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_JEOS_SLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_JEOS_SLV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_JEOS_SLV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_AWD1_SLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_AWD1_SLV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_AWD1_SLV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_AWD2_SLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_AWD2_SLV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_AWD2_SLV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_AWD3_SLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_AWD3_SLV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_AWD3_SLV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CSR_JQOVF_SLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CSR_JQOVF_SLV_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CSR_JQOVF_SLV_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CCR_DUAL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 15U> ;
  using Value16 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 16U> ;
  using Value17 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 17U> ;
  using Value18 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 18U> ;
  using Value19 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 19U> ;
  using Value20 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 20U> ;
  using Value21 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 21U> ;
  using Value22 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 22U> ;
  using Value23 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 23U> ;
  using Value24 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 24U> ;
  using Value25 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 25U> ;
  using Value26 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 26U> ;
  using Value27 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 27U> ;
  using Value28 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 28U> ;
  using Value29 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 29U> ;
  using Value30 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 30U> ;
  using Value31 = FieldValue<ADC123_Common_CCR_DUAL_Values, BaseType, 31U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CCR_DELAY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC123_Common_CCR_DELAY_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CCR_DMACFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CCR_DMACFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CCR_DMACFG_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CCR_MDMA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CCR_MDMA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CCR_MDMA_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC123_Common_CCR_MDMA_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC123_Common_CCR_MDMA_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CCR_CKMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CCR_CKMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CCR_CKMODE_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC123_Common_CCR_CKMODE_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC123_Common_CCR_CKMODE_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CCR_PRESC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 1U> ;
  using Value2 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 2U> ;
  using Value3 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 3U> ;
  using Value4 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 4U> ;
  using Value5 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 5U> ;
  using Value6 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 6U> ;
  using Value7 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 7U> ;
  using Value8 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 8U> ;
  using Value9 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 9U> ;
  using Value10 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 10U> ;
  using Value11 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 11U> ;
  using Value12 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 12U> ;
  using Value13 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 13U> ;
  using Value14 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 14U> ;
  using Value15 = FieldValue<ADC123_Common_CCR_PRESC_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CCR_VREFEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CCR_VREFEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CCR_VREFEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CCR_CH17SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CCR_CH17SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CCR_CH17SEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CCR_CH18SEL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<ADC123_Common_CCR_CH18SEL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<ADC123_Common_CCR_CH18SEL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CDR_RDATA_SLV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct ADC123_Common_CDR_RDATA_MST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(ADC123COMMONENUMS_HPP)
