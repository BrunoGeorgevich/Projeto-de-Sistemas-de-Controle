#ifndef __c10_Tanques_quick_start_h__
#define __c10_Tanques_quick_start_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc10_Tanques_quick_startInstanceStruct
#define typedef_SFc10_Tanques_quick_startInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c10_sfEvent;
  boolean_T c10_isStable;
  boolean_T c10_doneDoubleBufferReInit;
  uint8_T c10_is_active_c10_Tanques_quick_start;
  real_T *c10_integral_address;
  int32_T c10_integral_index;
  real_T *c10_pidPreviousTime_address;
  int32_T c10_pidPreviousTime_index;
  real_T *c10_previousError_address;
  int32_T c10_previousError_index;
} SFc10_Tanques_quick_startInstanceStruct;

#endif                                 /*typedef_SFc10_Tanques_quick_startInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c10_Tanques_quick_start_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c10_Tanques_quick_start_get_check_sum(mxArray *plhs[]);
extern void c10_Tanques_quick_start_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
