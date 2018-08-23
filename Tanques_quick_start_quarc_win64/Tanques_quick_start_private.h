/*
 * Tanques_quick_start_private.h
 *
 * Code generation for model "Tanques_quick_start".
 *
 * Model version              : 1.784
 * Simulink Coder version : 8.6 (R2014a) 27-Dec-2013
 * C source code generated on : Thu Aug 23 09:18:17 2018
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#ifndef RTW_HEADER_Tanques_quick_start_private_h_
#define RTW_HEADER_Tanques_quick_start_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#endif                                 /* __RTWTYPES_H__ */

/* A global buffer for storing error messages (defined in quanser_common library) */
EXTERN char _rt_error_message[512];
extern void RandSrcInitState_U_64(const uint32_T seed[], real_T state[], int32_T
  nChans);
extern void RandSrc_U_D(real_T y[], const real_T minVec[], int32_T minLen, const
  real_T maxVec[], int32_T maxLen, real_T state[], int32_T nChans, int32_T
  nSamps);
void Tanques_quick_start_output0(void);
void Tanques_quick_start_update0(void);
void Tanques_quick_start_output2(void);
void Tanques_quick_start_update2(void);/* private model entry point functions */
extern void Tanques_quick_start_derivatives(void);

#endif                                 /* RTW_HEADER_Tanques_quick_start_private_h_ */
