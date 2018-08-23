/* Include files */

#include <stddef.h>
#include "blas.h"
#include "Tanques_quick_start_sfun.h"
#include "c8_Tanques_quick_start.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Tanques_quick_start_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c8_debug_family_names[7] = { "proportional", "nargin",
  "nargout", "kp", "ki", "error", "y" };

/* Function Declarations */
static void initialize_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance);
static void initialize_params_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance);
static void enable_c8_Tanques_quick_start(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance);
static void disable_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance);
static void c8_update_debugger_state_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance);
static void set_sim_state_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance, const mxArray *c8_st);
static void finalize_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance);
static void sf_gateway_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance);
static void initSimStructsc8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c8_machineNumber, uint32_T
  c8_chartNumber, uint32_T c8_instanceNumber);
static const mxArray *c8_sf_marshallOut(void *chartInstanceVoid, void *c8_inData);
static real_T c8_emlrt_marshallIn(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c8_y, const char_T *c8_identifier);
static real_T c8_b_emlrt_marshallIn(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId);
static void c8_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData);
static const mxArray *c8_b_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData);
static int32_T c8_c_emlrt_marshallIn(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId);
static void c8_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData);
static uint8_T c8_d_emlrt_marshallIn(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c8_b_is_active_c8_Tanques_quick_start, const
  char_T *c8_identifier);
static uint8_T c8_e_emlrt_marshallIn(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId);
static real_T c8_get_integral(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b);
static void c8_set_integral(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b, real_T c8_c);
static real_T *c8_access_integral(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b);
static real_T c8_get_pidPreviousTime(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b);
static void c8_set_pidPreviousTime(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b, real_T c8_c);
static real_T *c8_access_pidPreviousTime(SFc8_Tanques_quick_startInstanceStruct *
  chartInstance, uint32_T c8_b);
static real_T c8_get_previousError(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b);
static void c8_set_previousError(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b, real_T c8_c);
static real_T *c8_access_previousError(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b);
static void init_dsm_address_info(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance)
{
  chartInstance->c8_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c8_is_active_c8_Tanques_quick_start = 0U;
}

static void initialize_params_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c8_Tanques_quick_start(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c8_update_debugger_state_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance)
{
  const mxArray *c8_st;
  const mxArray *c8_y = NULL;
  real_T c8_hoistedGlobal;
  real_T c8_u;
  const mxArray *c8_b_y = NULL;
  uint8_T c8_b_hoistedGlobal;
  uint8_T c8_b_u;
  const mxArray *c8_c_y = NULL;
  real_T *c8_d_y;
  c8_d_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c8_st = NULL;
  c8_st = NULL;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_createcellmatrix(2, 1), false);
  c8_hoistedGlobal = *c8_d_y;
  c8_u = c8_hoistedGlobal;
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", &c8_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_y, 0, c8_b_y);
  c8_b_hoistedGlobal = chartInstance->c8_is_active_c8_Tanques_quick_start;
  c8_b_u = c8_b_hoistedGlobal;
  c8_c_y = NULL;
  sf_mex_assign(&c8_c_y, sf_mex_create("y", &c8_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_y, 1, c8_c_y);
  sf_mex_assign(&c8_st, c8_y, false);
  return c8_st;
}

static void set_sim_state_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance, const mxArray *c8_st)
{
  const mxArray *c8_u;
  real_T *c8_y;
  c8_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c8_doneDoubleBufferReInit = true;
  c8_u = sf_mex_dup(c8_st);
  *c8_y = c8_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 0)),
    "y");
  chartInstance->c8_is_active_c8_Tanques_quick_start = c8_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 1)),
     "is_active_c8_Tanques_quick_start");
  sf_mex_destroy(&c8_u);
  c8_update_debugger_state_c8_Tanques_quick_start(chartInstance);
  sf_mex_destroy(&c8_st);
}

static void finalize_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance)
{
  real_T c8_hoistedGlobal;
  real_T c8_b_hoistedGlobal;
  real_T c8_c_hoistedGlobal;
  real_T c8_kp;
  real_T c8_ki;
  real_T c8_error;
  uint32_T c8_debug_family_var_map[7];
  real_T c8_proportional;
  real_T c8_nargin = 3.0;
  real_T c8_nargout = 1.0;
  real_T c8_y;
  real_T *c8_b_kp;
  real_T *c8_b_ki;
  real_T *c8_b_error;
  real_T *c8_b_y;
  c8_b_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c8_b_error = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c8_b_ki = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c8_b_kp = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 7U, chartInstance->c8_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c8_b_kp, 0U);
  _SFD_DATA_RANGE_CHECK(*c8_b_ki, 1U);
  _SFD_DATA_RANGE_CHECK(*c8_b_error, 2U);
  chartInstance->c8_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 7U, chartInstance->c8_sfEvent);
  c8_hoistedGlobal = *c8_b_kp;
  c8_b_hoistedGlobal = *c8_b_ki;
  c8_c_hoistedGlobal = *c8_b_error;
  c8_kp = c8_hoistedGlobal;
  c8_ki = c8_b_hoistedGlobal;
  c8_error = c8_c_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 7U, 7U, c8_debug_family_names,
    c8_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c8_proportional, 0U, c8_sf_marshallOut,
    c8_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c8_nargin, 1U, c8_sf_marshallOut,
    c8_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c8_nargout, 2U, c8_sf_marshallOut,
    c8_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c8_kp, 3U, c8_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c8_ki, 4U, c8_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c8_error, 5U, c8_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c8_y, 6U, c8_sf_marshallOut,
    c8_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c8_sfEvent, 2);
  _SFD_EML_CALL(0U, chartInstance->c8_sfEvent, 3);
  c8_proportional = c8_kp * c8_error;
  _SFD_EML_CALL(0U, chartInstance->c8_sfEvent, 4);
  c8_set_integral(chartInstance, 0, c8_get_integral(chartInstance, 0) + c8_ki *
                  c8_error * 0.1);
  ssUpdateDataStoreLog(chartInstance->S, 0);
  _SFD_EML_CALL(0U, chartInstance->c8_sfEvent, 5);
  c8_y = c8_proportional + c8_get_integral(chartInstance, 0);
  _SFD_EML_CALL(0U, chartInstance->c8_sfEvent, -5);
  _SFD_SYMBOL_SCOPE_POP();
  *c8_b_y = c8_y;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, chartInstance->c8_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_Tanques_quick_startMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK(*c8_b_y, 3U);
}

static void initSimStructsc8_Tanques_quick_start
  (SFc8_Tanques_quick_startInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c8_machineNumber, uint32_T
  c8_chartNumber, uint32_T c8_instanceNumber)
{
  (void)c8_machineNumber;
  (void)c8_chartNumber;
  (void)c8_instanceNumber;
}

static const mxArray *c8_sf_marshallOut(void *chartInstanceVoid, void *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  real_T c8_u;
  const mxArray *c8_y = NULL;
  SFc8_Tanques_quick_startInstanceStruct *chartInstance;
  chartInstance = (SFc8_Tanques_quick_startInstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  c8_u = *(real_T *)c8_inData;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_create("y", &c8_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c8_mxArrayOutData, c8_y, false);
  return c8_mxArrayOutData;
}

static real_T c8_emlrt_marshallIn(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c8_y, const char_T *c8_identifier)
{
  real_T c8_b_y;
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_b_y = c8_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_y), &c8_thisId);
  sf_mex_destroy(&c8_y);
  return c8_b_y;
}

static real_T c8_b_emlrt_marshallIn(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId)
{
  real_T c8_y;
  real_T c8_d0;
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), &c8_d0, 1, 0, 0U, 0, 0U, 0);
  c8_y = c8_d0;
  sf_mex_destroy(&c8_u);
  return c8_y;
}

static void c8_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData)
{
  const mxArray *c8_y;
  const char_T *c8_identifier;
  emlrtMsgIdentifier c8_thisId;
  real_T c8_b_y;
  SFc8_Tanques_quick_startInstanceStruct *chartInstance;
  chartInstance = (SFc8_Tanques_quick_startInstanceStruct *)chartInstanceVoid;
  c8_y = sf_mex_dup(c8_mxArrayInData);
  c8_identifier = c8_varName;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_b_y = c8_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_y), &c8_thisId);
  sf_mex_destroy(&c8_y);
  *(real_T *)c8_outData = c8_b_y;
  sf_mex_destroy(&c8_mxArrayInData);
}

const mxArray *sf_c8_Tanques_quick_start_get_eml_resolved_functions_info(void)
{
  const mxArray *c8_nameCaptureInfo = NULL;
  c8_nameCaptureInfo = NULL;
  sf_mex_assign(&c8_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c8_nameCaptureInfo;
}

static const mxArray *c8_b_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  int32_T c8_u;
  const mxArray *c8_y = NULL;
  SFc8_Tanques_quick_startInstanceStruct *chartInstance;
  chartInstance = (SFc8_Tanques_quick_startInstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  c8_u = *(int32_T *)c8_inData;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_create("y", &c8_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c8_mxArrayOutData, c8_y, false);
  return c8_mxArrayOutData;
}

static int32_T c8_c_emlrt_marshallIn(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId)
{
  int32_T c8_y;
  int32_T c8_i0;
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), &c8_i0, 1, 6, 0U, 0, 0U, 0);
  c8_y = c8_i0;
  sf_mex_destroy(&c8_u);
  return c8_y;
}

static void c8_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData)
{
  const mxArray *c8_b_sfEvent;
  const char_T *c8_identifier;
  emlrtMsgIdentifier c8_thisId;
  int32_T c8_y;
  SFc8_Tanques_quick_startInstanceStruct *chartInstance;
  chartInstance = (SFc8_Tanques_quick_startInstanceStruct *)chartInstanceVoid;
  c8_b_sfEvent = sf_mex_dup(c8_mxArrayInData);
  c8_identifier = c8_varName;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_y = c8_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_sfEvent),
    &c8_thisId);
  sf_mex_destroy(&c8_b_sfEvent);
  *(int32_T *)c8_outData = c8_y;
  sf_mex_destroy(&c8_mxArrayInData);
}

static uint8_T c8_d_emlrt_marshallIn(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c8_b_is_active_c8_Tanques_quick_start, const
  char_T *c8_identifier)
{
  uint8_T c8_y;
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_y = c8_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c8_b_is_active_c8_Tanques_quick_start), &c8_thisId);
  sf_mex_destroy(&c8_b_is_active_c8_Tanques_quick_start);
  return c8_y;
}

static uint8_T c8_e_emlrt_marshallIn(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId)
{
  uint8_T c8_y;
  uint8_T c8_u0;
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), &c8_u0, 1, 3, 0U, 0, 0U, 0);
  c8_y = c8_u0;
  sf_mex_destroy(&c8_u);
  return c8_y;
}

static real_T c8_get_integral(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b)
{
  ssReadFromDataStoreElement(chartInstance->S, 0, NULL, c8_b);
  if (chartInstance->c8_integral_address == 0) {
    sf_mex_error_message("Invalid access to Data Store Memory data \'integral\' (#308) in the initialization routine of the chart.\n");
  }

  return *chartInstance->c8_integral_address;
}

static void c8_set_integral(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b, real_T c8_c)
{
  ssWriteToDataStoreElement(chartInstance->S, 0, NULL, c8_b);
  if (chartInstance->c8_integral_address == 0) {
    sf_mex_error_message("Invalid access to Data Store Memory data \'integral\' (#308) in the initialization routine of the chart.\n");
  }

  *chartInstance->c8_integral_address = c8_c;
}

static real_T *c8_access_integral(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b)
{
  real_T *c8_c;
  ssReadFromDataStore(chartInstance->S, 0, NULL);
  if (chartInstance->c8_integral_address == 0) {
    sf_mex_error_message("Invalid access to Data Store Memory data \'integral\' (#308) in the initialization routine of the chart.\n");
  }

  c8_c = chartInstance->c8_integral_address;
  if (c8_b == 0) {
    ssWriteToDataStore(chartInstance->S, 0, NULL);
  }

  return c8_c;
}

static real_T c8_get_pidPreviousTime(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b)
{
  ssReadFromDataStoreElement(chartInstance->S, 1, NULL, c8_b);
  if (chartInstance->c8_pidPreviousTime_address == 0) {
    sf_mex_error_message("Invalid access to Data Store Memory data \'pidPreviousTime\' (#310) in the initialization routine of the chart.\n");
  }

  return *chartInstance->c8_pidPreviousTime_address;
}

static void c8_set_pidPreviousTime(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b, real_T c8_c)
{
  ssWriteToDataStoreElement(chartInstance->S, 1, NULL, c8_b);
  if (chartInstance->c8_pidPreviousTime_address == 0) {
    sf_mex_error_message("Invalid access to Data Store Memory data \'pidPreviousTime\' (#310) in the initialization routine of the chart.\n");
  }

  *chartInstance->c8_pidPreviousTime_address = c8_c;
}

static real_T *c8_access_pidPreviousTime(SFc8_Tanques_quick_startInstanceStruct *
  chartInstance, uint32_T c8_b)
{
  real_T *c8_c;
  ssReadFromDataStore(chartInstance->S, 1, NULL);
  if (chartInstance->c8_pidPreviousTime_address == 0) {
    sf_mex_error_message("Invalid access to Data Store Memory data \'pidPreviousTime\' (#310) in the initialization routine of the chart.\n");
  }

  c8_c = chartInstance->c8_pidPreviousTime_address;
  if (c8_b == 0) {
    ssWriteToDataStore(chartInstance->S, 1, NULL);
  }

  return c8_c;
}

static real_T c8_get_previousError(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b)
{
  ssReadFromDataStoreElement(chartInstance->S, 2, NULL, c8_b);
  if (chartInstance->c8_previousError_address == 0) {
    sf_mex_error_message("Invalid access to Data Store Memory data \'previousError\' (#309) in the initialization routine of the chart.\n");
  }

  return *chartInstance->c8_previousError_address;
}

static void c8_set_previousError(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b, real_T c8_c)
{
  ssWriteToDataStoreElement(chartInstance->S, 2, NULL, c8_b);
  if (chartInstance->c8_previousError_address == 0) {
    sf_mex_error_message("Invalid access to Data Store Memory data \'previousError\' (#309) in the initialization routine of the chart.\n");
  }

  *chartInstance->c8_previousError_address = c8_c;
}

static real_T *c8_access_previousError(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance, uint32_T c8_b)
{
  real_T *c8_c;
  ssReadFromDataStore(chartInstance->S, 2, NULL);
  if (chartInstance->c8_previousError_address == 0) {
    sf_mex_error_message("Invalid access to Data Store Memory data \'previousError\' (#309) in the initialization routine of the chart.\n");
  }

  c8_c = chartInstance->c8_previousError_address;
  if (c8_b == 0) {
    ssWriteToDataStore(chartInstance->S, 2, NULL);
  }

  return c8_c;
}

static void init_dsm_address_info(SFc8_Tanques_quick_startInstanceStruct
  *chartInstance)
{
  ssGetSFcnDataStoreNameAddrIdx(chartInstance->S, "integral", (void **)
    &chartInstance->c8_integral_address, &chartInstance->c8_integral_index);
  ssGetSFcnDataStoreNameAddrIdx(chartInstance->S, "pidPreviousTime", (void **)
    &chartInstance->c8_pidPreviousTime_address,
    &chartInstance->c8_pidPreviousTime_index);
  ssGetSFcnDataStoreNameAddrIdx(chartInstance->S, "previousError", (void **)
    &chartInstance->c8_previousError_address,
    &chartInstance->c8_previousError_index);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c8_Tanques_quick_start_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4272449161U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(607755354U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(887703104U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1420408500U);
}

mxArray *sf_c8_Tanques_quick_start_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("sIYGctNoU7t1k16Erjr5rB");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c8_Tanques_quick_start_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c8_Tanques_quick_start_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c8_Tanques_quick_start(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"y\",},{M[8],M[0],T\"is_active_c8_Tanques_quick_start\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c8_Tanques_quick_start_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc8_Tanques_quick_startInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc8_Tanques_quick_startInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _Tanques_quick_startMachineNumber_,
           8,
           1,
           1,
           0,
           7,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           (void *)S);

        /* Each instance must initialize ist own list of scripts */
        init_script_number_translation(_Tanques_quick_startMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_Tanques_quick_startMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _Tanques_quick_startMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"kp");
          _SFD_SET_DATA_PROPS(1,1,1,0,"ki");
          _SFD_SET_DATA_PROPS(2,1,1,0,"error");
          _SFD_SET_DATA_PROPS(3,2,0,1,"y");
          _SFD_SET_DATA_PROPS(4,11,0,0,"integral");
          _SFD_SET_DATA_PROPS(5,11,0,0,"previousError");
          _SFD_SET_DATA_PROPS(6,11,0,0,"pidPreviousTime");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,191);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_sf_marshallOut,(MexInFcnForType)c8_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_sf_marshallOut,(MexInFcnForType)c8_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_sf_marshallOut,(MexInFcnForType)c8_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_sf_marshallOut,(MexInFcnForType)c8_sf_marshallIn);

        {
          real_T *c8_kp;
          real_T *c8_ki;
          real_T *c8_error;
          real_T *c8_y;
          c8_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c8_error = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c8_ki = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c8_kp = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c8_kp);
          _SFD_SET_DATA_VALUE_PTR(1U, c8_ki);
          _SFD_SET_DATA_VALUE_PTR(2U, c8_error);
          _SFD_SET_DATA_VALUE_PTR(3U, c8_y);
          _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c8_integral_address);
          _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c8_previousError_address);
          _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c8_pidPreviousTime_address);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _Tanques_quick_startMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "onftzMriIvITNYjw7ti1IB";
}

static void sf_opaque_initialize_c8_Tanques_quick_start(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc8_Tanques_quick_startInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c8_Tanques_quick_start
    ((SFc8_Tanques_quick_startInstanceStruct*) chartInstanceVar);
  initialize_c8_Tanques_quick_start((SFc8_Tanques_quick_startInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c8_Tanques_quick_start(void *chartInstanceVar)
{
  enable_c8_Tanques_quick_start((SFc8_Tanques_quick_startInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c8_Tanques_quick_start(void *chartInstanceVar)
{
  disable_c8_Tanques_quick_start((SFc8_Tanques_quick_startInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c8_Tanques_quick_start(void *chartInstanceVar)
{
  sf_gateway_c8_Tanques_quick_start((SFc8_Tanques_quick_startInstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c8_Tanques_quick_start(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c8_Tanques_quick_start
    ((SFc8_Tanques_quick_startInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c8_Tanques_quick_start();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_raw2high'.\n");
  }

  return plhs[0];
}

extern void sf_internal_set_sim_state_c8_Tanques_quick_start(SimStruct* S, const
  mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[3];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxDuplicateArray(st);      /* high level simctx */
  prhs[2] = (mxArray*) sf_get_sim_state_info_c8_Tanques_quick_start();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c8_Tanques_quick_start((SFc8_Tanques_quick_startInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c8_Tanques_quick_start(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c8_Tanques_quick_start(S);
}

static void sf_opaque_set_sim_state_c8_Tanques_quick_start(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c8_Tanques_quick_start(S, st);
}

static void sf_opaque_terminate_c8_Tanques_quick_start(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc8_Tanques_quick_startInstanceStruct*) chartInstanceVar
      )->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_Tanques_quick_start_optimization_info();
    }

    finalize_c8_Tanques_quick_start((SFc8_Tanques_quick_startInstanceStruct*)
      chartInstanceVar);
    utFree((void *)chartInstanceVar);
    if (crtInfo != NULL) {
      utFree((void *)crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc8_Tanques_quick_start((SFc8_Tanques_quick_startInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c8_Tanques_quick_start(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    initialize_params_c8_Tanques_quick_start
      ((SFc8_Tanques_quick_startInstanceStruct*)(chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c8_Tanques_quick_start(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_Tanques_quick_start_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,8);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,8,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,8,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,8);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,8,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,8,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 3; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,8);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3790372740U));
  ssSetChecksum1(S,(2096346775U));
  ssSetChecksum2(S,(2848357606U));
  ssSetChecksum3(S,(1573089004U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,0);
}

static void mdlRTW_c8_Tanques_quick_start(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c8_Tanques_quick_start(SimStruct *S)
{
  SFc8_Tanques_quick_startInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc8_Tanques_quick_startInstanceStruct *)utMalloc(sizeof
    (SFc8_Tanques_quick_startInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc8_Tanques_quick_startInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c8_Tanques_quick_start;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c8_Tanques_quick_start;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c8_Tanques_quick_start;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c8_Tanques_quick_start;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c8_Tanques_quick_start;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c8_Tanques_quick_start;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c8_Tanques_quick_start;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c8_Tanques_quick_start;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c8_Tanques_quick_start;
  chartInstance->chartInfo.mdlStart = mdlStart_c8_Tanques_quick_start;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c8_Tanques_quick_start;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  crtInfo->instanceInfo = (&(chartInstance->chartInfo));
  crtInfo->isJITEnabled = false;
  ssSetUserData(S,(void *)(crtInfo));  /* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c8_Tanques_quick_start_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c8_Tanques_quick_start(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c8_Tanques_quick_start(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c8_Tanques_quick_start(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c8_Tanques_quick_start_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
