/*
 * Tanques_quick_start_dt.h
 *
 * Code generation for model "Tanques_quick_start".
 *
 * Model version              : 1.784
 * Simulink Coder version : 8.6 (R2014a) 27-Dec-2013
 * C source code generated on : Thu Aug 23 10:19:34 2018
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(t_card)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "t_card"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&Tanques_quick_start_B.TransferFcn), 0, 0, 37 },

  { (char_T *)(&Tanques_quick_start_B.FixPtSwitch), 5, 0, 1 }
  ,

  { (char_T *)(&Tanques_quick_start_DW.HILInitialize_AIMinimums[0]), 0, 0, 66 },

  { (char_T *)(&Tanques_quick_start_DW.HILInitialize_Card), 14, 0, 1 },

  { (char_T *)(&Tanques_quick_start_DW.AlturadoTanque1cm_PWORK.LoggedData), 11,
    0, 16 },

  { (char_T *)(&Tanques_quick_start_DW.HILInitialize_ClockModes), 6, 0, 5 },

  { (char_T *)(&Tanques_quick_start_DW.RandomSource_SEED_DWORK), 7, 0, 630 },

  { (char_T *)(&Tanques_quick_start_DW.Output_DSTATE), 5, 0, 3 },

  { (char_T *)(&Tanques_quick_start_DW.state_not_empty), 8, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  9U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&Tanques_quick_start_P.RandomSource_MinVal), 0, 0, 16 },

  { (char_T *)(&Tanques_quick_start_P.HILInitialize_hardware_clocks), 6, 0, 4 },

  { (char_T *)(&Tanques_quick_start_P.HILInitialize_analog_input_chan[0]), 7, 0,
    11 },

  { (char_T *)(&Tanques_quick_start_P.WrapToZero_Threshold), 5, 0, 1 },

  { (char_T *)(&Tanques_quick_start_P.HILInitialize_active), 8, 0, 35 },

  { (char_T *)(&Tanques_quick_start_P.TransferFcn_A), 0, 0, 40 },

  { (char_T *)(&Tanques_quick_start_P.Constant_Value), 5, 0, 7 },

  { (char_T *)(&Tanques_quick_start_P.HILWriteAnalog_Active), 8, 0, 2 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  8U,
  rtPTransitions
};

/* [EOF] Tanques_quick_start_dt.h */
