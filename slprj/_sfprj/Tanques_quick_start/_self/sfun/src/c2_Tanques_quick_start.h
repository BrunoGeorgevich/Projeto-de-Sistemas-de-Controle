#ifndef __c2_Tanques_quick_start_h__
#define __c2_Tanques_quick_start_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc2_Tanques_quick_startInstanceStruct
#define typedef_SFc2_Tanques_quick_startInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c2_sfEvent;
  boolean_T c2_isStable;
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_Tanques_quick_start;
  uint32_T c2_method;
  boolean_T c2_method_not_empty;
  uint32_T c2_state;
  boolean_T c2_state_not_empty;
  uint32_T c2_b_state[2];
  boolean_T c2_b_state_not_empty;
  uint32_T c2_c_state[625];
  boolean_T c2_c_state_not_empty;
  real_T *c2_currAmp_address;
  int32_T c2_currAmp_index;
  uint16_T *c2_currPeriod_address;
  int32_T c2_currPeriod_index;
  uint16_T *c2_prevTime_address;
  int32_T c2_prevTime_index;
} SFc2_Tanques_quick_startInstanceStruct;

#endif                                 /*typedef_SFc2_Tanques_quick_startInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_Tanques_quick_start_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c2_Tanques_quick_start_get_check_sum(mxArray *plhs[]);
extern void c2_Tanques_quick_start_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
