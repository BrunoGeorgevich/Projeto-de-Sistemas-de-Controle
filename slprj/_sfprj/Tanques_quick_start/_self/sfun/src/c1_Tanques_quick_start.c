/* Include files */

#include <stddef.h>
#include "blas.h"
#include "Tanques_quick_start_sfun.h"
#include "c1_Tanques_quick_start.h"
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
static const char * c1_debug_family_names[7] = { "hmax", "nargin", "nargout",
  "tensaoconst", "tank1_level", "tank2_level", "tensao" };

/* Function Declarations */
static void initialize_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance);
static void initialize_params_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance);
static void enable_c1_Tanques_quick_start(SFc1_Tanques_quick_startInstanceStruct
  *chartInstance);
static void disable_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance);
static void c1_update_debugger_state_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance);
static void set_sim_state_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance, const mxArray *c1_st);
static void finalize_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance);
static void sf_gateway_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance);
static void initSimStructsc1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber, uint32_T c1_instanceNumber);
static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData);
static real_T c1_emlrt_marshallIn(SFc1_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c1_tensao, const char_T *c1_identifier);
static real_T c1_b_emlrt_marshallIn(SFc1_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static int32_T c1_c_emlrt_marshallIn(SFc1_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static uint8_T c1_d_emlrt_marshallIn(SFc1_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_Tanques_quick_start, const
  char_T *c1_identifier);
static uint8_T c1_e_emlrt_marshallIn(SFc1_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void init_dsm_address_info(SFc1_Tanques_quick_startInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance)
{
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_is_active_c1_Tanques_quick_start = 0U;
}

static void initialize_params_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c1_Tanques_quick_start(SFc1_Tanques_quick_startInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c1_update_debugger_state_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance)
{
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  real_T c1_hoistedGlobal;
  real_T c1_u;
  const mxArray *c1_b_y = NULL;
  uint8_T c1_b_hoistedGlobal;
  uint8_T c1_b_u;
  const mxArray *c1_c_y = NULL;
  real_T *c1_tensao;
  c1_tensao = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(2, 1), false);
  c1_hoistedGlobal = *c1_tensao;
  c1_u = c1_hoistedGlobal;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_b_hoistedGlobal = chartInstance->c1_is_active_c1_Tanques_quick_start;
  c1_b_u = c1_b_hoistedGlobal;
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &c1_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  real_T *c1_tensao;
  c1_tensao = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  *c1_tensao = c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u,
    0)), "tensao");
  chartInstance->c1_is_active_c1_Tanques_quick_start = c1_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 1)),
     "is_active_c1_Tanques_quick_start");
  sf_mex_destroy(&c1_u);
  c1_update_debugger_state_c1_Tanques_quick_start(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void finalize_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance)
{
  real_T c1_hoistedGlobal;
  real_T c1_b_hoistedGlobal;
  real_T c1_c_hoistedGlobal;
  real_T c1_tensaoconst;
  real_T c1_tank1_level;
  real_T c1_tank2_level;
  uint32_T c1_debug_family_var_map[7];
  real_T c1_hmax;
  real_T c1_nargin = 3.0;
  real_T c1_nargout = 1.0;
  real_T c1_tensao;
  real_T *c1_b_tensaoconst;
  real_T *c1_b_tensao;
  real_T *c1_b_tank1_level;
  real_T *c1_b_tank2_level;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T guard5 = false;
  boolean_T guard6 = false;
  boolean_T guard7 = false;
  c1_b_tank2_level = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c1_b_tank1_level = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_b_tensao = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_b_tensaoconst = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c1_b_tensaoconst, 0U);
  chartInstance->c1_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  c1_hoistedGlobal = *c1_b_tensaoconst;
  c1_b_hoistedGlobal = *c1_b_tank1_level;
  c1_c_hoistedGlobal = *c1_b_tank2_level;
  c1_tensaoconst = c1_hoistedGlobal;
  c1_tank1_level = c1_b_hoistedGlobal;
  c1_tank2_level = c1_c_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 7U, 7U, c1_debug_family_names,
    c1_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_hmax, 0U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_nargin, 1U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_nargout, 2U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_tensaoconst, 3U, c1_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_tank1_level, 4U, c1_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_tank2_level, 5U, c1_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_tensao, 6U, c1_sf_marshallOut,
    c1_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 5);
  if (CV_EML_IF(0, 1, 0, c1_tensaoconst > 4.0)) {
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 6);
    c1_tensaoconst = 4.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 7);
    if (CV_EML_IF(0, 1, 1, c1_tensaoconst < -4.0)) {
      _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 8);
      c1_tensaoconst = -4.0;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 12);
  c1_hmax = 30.0;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 14);
  guard1 = false;
  if (CV_EML_COND(0, 1, 0, c1_tank1_level < 2.0)) {
    if (CV_EML_COND(0, 1, 1, c1_tensaoconst < 0.0)) {
      CV_EML_MCDC(0, 1, 0, true);
      CV_EML_IF(0, 1, 2, true);
      _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 15);
      c1_tensaoconst = 0.0;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1 == true) {
    CV_EML_MCDC(0, 1, 0, false);
    CV_EML_IF(0, 1, 2, false);
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 16);
    guard2 = false;
    if (CV_EML_COND(0, 1, 2, -c1_tank1_level + c1_hmax > 5.0)) {
      if (CV_EML_COND(0, 1, 3, -c1_tank1_level + c1_hmax < 6.0)) {
        CV_EML_MCDC(0, 1, 1, true);
        CV_EML_IF(0, 1, 3, true);
        _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 17);
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }

    if (guard2 == true) {
      CV_EML_MCDC(0, 1, 1, false);
      CV_EML_IF(0, 1, 3, false);
      _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 18);
      guard3 = false;
      if (CV_EML_COND(0, 1, 4, -c1_tank1_level + c1_hmax > 4.0)) {
        if (CV_EML_COND(0, 1, 5, -c1_tank1_level + c1_hmax < 5.0)) {
          CV_EML_MCDC(0, 1, 2, true);
          CV_EML_IF(0, 1, 4, true);
          _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 19);
          c1_tensaoconst *= 0.9;
        } else {
          guard3 = true;
        }
      } else {
        guard3 = true;
      }

      if (guard3 == true) {
        CV_EML_MCDC(0, 1, 2, false);
        CV_EML_IF(0, 1, 4, false);
        _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 20);
        guard4 = false;
        if (CV_EML_COND(0, 1, 6, -c1_tank1_level + c1_hmax > 3.0)) {
          if (CV_EML_COND(0, 1, 7, -c1_tank1_level + c1_hmax < 4.0)) {
            CV_EML_MCDC(0, 1, 3, true);
            CV_EML_IF(0, 1, 5, true);
            _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 21);
            c1_tensaoconst *= 0.8;
          } else {
            guard4 = true;
          }
        } else {
          guard4 = true;
        }

        if (guard4 == true) {
          CV_EML_MCDC(0, 1, 3, false);
          CV_EML_IF(0, 1, 5, false);
          _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 22);
          guard5 = false;
          if (CV_EML_COND(0, 1, 8, -c1_tank1_level + c1_hmax > 2.0)) {
            if (CV_EML_COND(0, 1, 9, -c1_tank1_level + c1_hmax < 3.0)) {
              CV_EML_MCDC(0, 1, 4, true);
              CV_EML_IF(0, 1, 6, true);
              _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 23);
              c1_tensaoconst *= 0.79;
            } else {
              guard5 = true;
            }
          } else {
            guard5 = true;
          }

          if (guard5 == true) {
            CV_EML_MCDC(0, 1, 4, false);
            CV_EML_IF(0, 1, 6, false);
            _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 24);
            guard6 = false;
            if (CV_EML_COND(0, 1, 10, -c1_tank1_level + c1_hmax > 1.0)) {
              if (CV_EML_COND(0, 1, 11, -c1_tank1_level + c1_hmax < 1.5)) {
                CV_EML_MCDC(0, 1, 5, true);
                CV_EML_IF(0, 1, 7, true);
                _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 25);
                c1_tensaoconst *= 0.7;
              } else {
                guard6 = true;
              }
            } else {
              guard6 = true;
            }

            if (guard6 == true) {
              CV_EML_MCDC(0, 1, 5, false);
              CV_EML_IF(0, 1, 7, false);
              _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 26);
              guard7 = false;
              if (CV_EML_COND(0, 1, 12, -c1_tank1_level + c1_hmax > 0.5)) {
                if (CV_EML_COND(0, 1, 13, -c1_tank1_level + c1_hmax < 0.8)) {
                  CV_EML_MCDC(0, 1, 6, true);
                  CV_EML_IF(0, 1, 8, true);
                  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 27);
                  c1_tensaoconst *= 0.55;
                } else {
                  guard7 = true;
                }
              } else {
                guard7 = true;
              }

              if (guard7 == true) {
                CV_EML_MCDC(0, 1, 6, false);
                CV_EML_IF(0, 1, 8, false);
              }
            }
          }
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 30);
  c1_tensao = c1_tensaoconst;
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, -30);
  _SFD_SYMBOL_SCOPE_POP();
  *c1_b_tensao = c1_tensao;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_Tanques_quick_startMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK(*c1_b_tensao, 1U);
  _SFD_DATA_RANGE_CHECK(*c1_b_tank1_level, 2U);
  _SFD_DATA_RANGE_CHECK(*c1_b_tank2_level, 3U);
}

static void initSimStructsc1_Tanques_quick_start
  (SFc1_Tanques_quick_startInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber, uint32_T c1_instanceNumber)
{
  (void)c1_machineNumber;
  (void)c1_chartNumber;
  (void)c1_instanceNumber;
}

static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  real_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_Tanques_quick_startInstanceStruct *chartInstance;
  chartInstance = (SFc1_Tanques_quick_startInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(real_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static real_T c1_emlrt_marshallIn(SFc1_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c1_tensao, const char_T *c1_identifier)
{
  real_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_tensao), &c1_thisId);
  sf_mex_destroy(&c1_tensao);
  return c1_y;
}

static real_T c1_b_emlrt_marshallIn(SFc1_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  real_T c1_y;
  real_T c1_d0;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_d0, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d0;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_tensao;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  SFc1_Tanques_quick_startInstanceStruct *chartInstance;
  chartInstance = (SFc1_Tanques_quick_startInstanceStruct *)chartInstanceVoid;
  c1_tensao = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_tensao), &c1_thisId);
  sf_mex_destroy(&c1_tensao);
  *(real_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

const mxArray *sf_c1_Tanques_quick_start_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_Tanques_quick_startInstanceStruct *chartInstance;
  chartInstance = (SFc1_Tanques_quick_startInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(int32_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static int32_T c1_c_emlrt_marshallIn(SFc1_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  int32_T c1_y;
  int32_T c1_i0;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_i0, 1, 6, 0U, 0, 0U, 0);
  c1_y = c1_i0;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_sfEvent;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  int32_T c1_y;
  SFc1_Tanques_quick_startInstanceStruct *chartInstance;
  chartInstance = (SFc1_Tanques_quick_startInstanceStruct *)chartInstanceVoid;
  c1_b_sfEvent = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_sfEvent),
    &c1_thisId);
  sf_mex_destroy(&c1_b_sfEvent);
  *(int32_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static uint8_T c1_d_emlrt_marshallIn(SFc1_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_Tanques_quick_start, const
  char_T *c1_identifier)
{
  uint8_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_Tanques_quick_start), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_Tanques_quick_start);
  return c1_y;
}

static uint8_T c1_e_emlrt_marshallIn(SFc1_Tanques_quick_startInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_y;
  uint8_T c1_u0;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_u0, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_u0;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void init_dsm_address_info(SFc1_Tanques_quick_startInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
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

void sf_c1_Tanques_quick_start_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(496447595U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1011155743U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1993349230U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(343773141U);
}

mxArray *sf_c1_Tanques_quick_start_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("9KTOZKVVymxp58Ffbj178F");
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

mxArray *sf_c1_Tanques_quick_start_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c1_Tanques_quick_start_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_Tanques_quick_start(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[4],T\"tensao\",},{M[8],M[0],T\"is_active_c1_Tanques_quick_start\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_Tanques_quick_start_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_Tanques_quick_startInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc1_Tanques_quick_startInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _Tanques_quick_startMachineNumber_,
           1,
           1,
           1,
           0,
           4,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"tensaoconst");
          _SFD_SET_DATA_PROPS(1,2,0,1,"tensao");
          _SFD_SET_DATA_PROPS(2,1,1,0,"tank1_level");
          _SFD_SET_DATA_PROPS(3,1,1,0,"tank2_level");
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
        _SFD_CV_INIT_EML(0,1,1,9,0,0,0,0,0,14,7);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,835);
        _SFD_CV_INIT_EML_IF(0,1,0,96,115,136,160);
        _SFD_CV_INIT_EML_IF(0,1,1,136,160,-1,160);
        _SFD_CV_INIT_EML_IF(0,1,2,219,257,277,331);
        _SFD_CV_INIT_EML_IF(0,1,3,277,331,361,812);
        _SFD_CV_INIT_EML_IF(0,1,4,361,415,449,812);
        _SFD_CV_INIT_EML_IF(0,1,5,449,503,537,812);
        _SFD_CV_INIT_EML_IF(0,1,6,537,590,625,812);
        _SFD_CV_INIT_EML_IF(0,1,7,625,681,716,812);
        _SFD_CV_INIT_EML_IF(0,1,8,716,774,-1,774);

        {
          static int condStart[] = { 222, 241 };

          static int condEnd[] = { 237, 256 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,0,222,256,2,0,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 284, 309 };

          static int condEnd[] = { 305, 330 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,1,284,330,2,2,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 368, 393 };

          static int condEnd[] = { 389, 414 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,2,368,414,2,4,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 456, 481 };

          static int condEnd[] = { 477, 502 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,3,456,502,2,6,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 544, 569 };

          static int condEnd[] = { 565, 589 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,4,544,589,2,8,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 632, 657 };

          static int condEnd[] = { 653, 680 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,5,632,680,2,10,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 723, 750 };

          static int condEnd[] = { 746, 773 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,6,723,773,2,12,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)c1_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c1_tensaoconst;
          real_T *c1_tensao;
          real_T *c1_tank1_level;
          real_T *c1_tank2_level;
          c1_tank2_level = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c1_tank1_level = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c1_tensao = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c1_tensaoconst = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c1_tensaoconst);
          _SFD_SET_DATA_VALUE_PTR(1U, c1_tensao);
          _SFD_SET_DATA_VALUE_PTR(2U, c1_tank1_level);
          _SFD_SET_DATA_VALUE_PTR(3U, c1_tank2_level);
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
  return "bqZVTkulPPfWk3TOpEIlC";
}

static void sf_opaque_initialize_c1_Tanques_quick_start(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc1_Tanques_quick_startInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c1_Tanques_quick_start
    ((SFc1_Tanques_quick_startInstanceStruct*) chartInstanceVar);
  initialize_c1_Tanques_quick_start((SFc1_Tanques_quick_startInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_Tanques_quick_start(void *chartInstanceVar)
{
  enable_c1_Tanques_quick_start((SFc1_Tanques_quick_startInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c1_Tanques_quick_start(void *chartInstanceVar)
{
  disable_c1_Tanques_quick_start((SFc1_Tanques_quick_startInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c1_Tanques_quick_start(void *chartInstanceVar)
{
  sf_gateway_c1_Tanques_quick_start((SFc1_Tanques_quick_startInstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c1_Tanques_quick_start(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c1_Tanques_quick_start
    ((SFc1_Tanques_quick_startInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_Tanques_quick_start();/* state var info */
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

extern void sf_internal_set_sim_state_c1_Tanques_quick_start(SimStruct* S, const
  mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[3];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxDuplicateArray(st);      /* high level simctx */
  prhs[2] = (mxArray*) sf_get_sim_state_info_c1_Tanques_quick_start();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c1_Tanques_quick_start((SFc1_Tanques_quick_startInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c1_Tanques_quick_start(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c1_Tanques_quick_start(S);
}

static void sf_opaque_set_sim_state_c1_Tanques_quick_start(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c1_Tanques_quick_start(S, st);
}

static void sf_opaque_terminate_c1_Tanques_quick_start(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_Tanques_quick_startInstanceStruct*) chartInstanceVar
      )->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_Tanques_quick_start_optimization_info();
    }

    finalize_c1_Tanques_quick_start((SFc1_Tanques_quick_startInstanceStruct*)
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
  initSimStructsc1_Tanques_quick_start((SFc1_Tanques_quick_startInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_Tanques_quick_start(SimStruct *S)
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
    initialize_params_c1_Tanques_quick_start
      ((SFc1_Tanques_quick_startInstanceStruct*)(chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c1_Tanques_quick_start(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_Tanques_quick_start_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,1,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,1,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,1);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,1,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,1,1);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3030142411U));
  ssSetChecksum1(S,(3565777891U));
  ssSetChecksum2(S,(1760515690U));
  ssSetChecksum3(S,(391420994U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c1_Tanques_quick_start(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c1_Tanques_quick_start(SimStruct *S)
{
  SFc1_Tanques_quick_startInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc1_Tanques_quick_startInstanceStruct *)utMalloc(sizeof
    (SFc1_Tanques_quick_startInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc1_Tanques_quick_startInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_Tanques_quick_start;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_Tanques_quick_start;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c1_Tanques_quick_start;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_Tanques_quick_start;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_Tanques_quick_start;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_Tanques_quick_start;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_Tanques_quick_start;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_Tanques_quick_start;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_Tanques_quick_start;
  chartInstance->chartInfo.mdlStart = mdlStart_c1_Tanques_quick_start;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_Tanques_quick_start;
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

void c1_Tanques_quick_start_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_Tanques_quick_start(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_Tanques_quick_start(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_Tanques_quick_start(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_Tanques_quick_start_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
