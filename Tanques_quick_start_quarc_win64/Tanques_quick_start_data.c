/*
 * Tanques_quick_start_data.c
 *
 * Code generation for model "Tanques_quick_start".
 *
 * Model version              : 1.843
 * Simulink Coder version : 8.6 (R2014a) 27-Dec-2013
 * C source code generated on : Mon Oct 08 13:14:10 2018
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "Tanques_quick_start.h"
#include "Tanques_quick_start_private.h"

/* Block parameters (auto storage) */
P_Tanques_quick_start_T Tanques_quick_start_P = {
  /*  Variable: L
   * Referenced by: '<Root>/Constant'
   */
  { 1.5467373877505939, 0.18848268997273218 },

  /*  Variable: a
   * Referenced by: '<Root>/Constant3'
   */
  { 0.99424134498636607, 0.00574204203969976, 0.0, 0.99424134498636607 },

  /*  Variable: b
   * Referenced by: '<Root>/Constant1'
   */
  { 0.073943571319681378, 0.0002133176271239159 },

  /*  Variable: c
   * Referenced by: '<Root>/Constant2'
   */
  { 0.0, 1.0 },

  /*  Variable: k
   * Referenced by: '<Root>/Constant4'
   */
  { -0.05, 0.12 },
  6.0,                                 /* Variable: ke
                                        * Referenced by: '<Root>/Constant5'
                                        */
  -0.99999999999999978,                /* Mask Parameter: RandomSource_MinVal
                                        * Referenced by: '<S14>/Random Source'
                                        */
  10.0,                                /* Mask Parameter: HILInitialize_analog_input_maxi
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  -10.0,                               /* Mask Parameter: HILInitialize_analog_input_mini
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  10.0,                                /* Mask Parameter: HILInitialize_analog_output_max
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  -10.0,                               /* Mask Parameter: HILInitialize_analog_output_min
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_final_analog_outp
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_final_pwm_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_initial_analog_ou
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_initial_pwm_outpu
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  50.0,                                /* Mask Parameter: HILInitialize_pwm_frequency
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_set_other_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_set_other_outpu_d
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_set_other_outpu_p
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_set_other_outpu_f
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_watchdog_analog_o
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_watchdog_pwm_outp
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_hardware_clocks
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_initial_encoder_c
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_pwm_modes
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_watchdog_digital_
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */

  /*  Mask Parameter: HILInitialize_analog_input_chan
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0U, 1U },

  /*  Mask Parameter: HILInitialize_analog_output_cha
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0U, 1U },
  0U,                                  /* Mask Parameter: HILWriteAnalog_channels
                                        * Referenced by: '<Root>/HIL Write Analog'
                                        */

  /*  Mask Parameter: HILReadAnalog_channels
   * Referenced by: '<Root>/HIL Read Analog'
   */
  { 0U, 1U },

  /*  Mask Parameter: HILInitialize_encoder_channels
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0U, 1U },
  4U,                                  /* Mask Parameter: HILInitialize_quadrature
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  37U,                                 /* Mask Parameter: randP_seed
                                        * Referenced by: '<S14>/Random Source'
                                        */
  65535U,                              /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S16>/FixPt Switch'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_active
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_final_digital_out
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_initial_digital_o
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_analog_input_
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_analog_inpu_h
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_analog_output
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_analog_outp_c
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_analog_outp_o
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_analog_outp_e
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_analog_outp_b
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_analog_outp_h
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_analog_out_bm
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_clock_frequen
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_clock_frequ_i
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_clock_params_
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_clock_param_n
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_digital_outpu
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_digital_out_l
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_digital_out_k
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_digital_out_o
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_digital_out_j
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_digital_ou_ol
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_digital_out_i
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_encoder_count
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_encoder_cou_e
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_encoder_param
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_encoder_par_a
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_other_outpu_a
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_pwm_outputs_a
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_pwm_outputs_i
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_pwm_outputs_j
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_pwm_outputs_b
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_pwm_outputs_o
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_pwm_params_at
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_pwm_params__e
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  -6.2814070351758788,                 /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<Root>/Transfer Fcn'
                                        */
  6.2814070351758788,                  /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<Root>/Transfer Fcn'
                                        */
  -6.2814070351758788,                 /* Computed Parameter: TransferFcn1_A
                                        * Referenced by: '<Root>/Transfer Fcn1'
                                        */
  6.2814070351758788,                  /* Computed Parameter: TransferFcn1_C
                                        * Referenced by: '<Root>/Transfer Fcn1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<Root>/switch_input_signal'
                                        */
  15.0,                                /* Expression: 15
                                        * Referenced by: '<Root>/Signal Generator'
                                        */
  6.2832,                              /* Expression: 6.2832
                                        * Referenced by: '<Root>/Signal Generator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/offset'
                                        */
  15.0,                                /* Expression: 15
                                        * Referenced by: '<Root>/step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<Root>/Tank Entry'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Zero Constant'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<Root>/Controller Enabler '
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<Root>/Controller Entry'
                                        */
  1.3,                                 /* Expression: 1.3
                                        * Referenced by: '<Root>/PID_Kp'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<Root>/PID_Kd'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S12>/Integrator'
                                        */
  0.0,                                 /* Expression: inf
                                        * Referenced by: '<S12>/Integrator'
                                        */
  0.0,                                 /* Expression: -inf
                                        * Referenced by: '<S12>/Integrator'
                                        */
  2.2,                                 /* Expression: 2.2
                                        * Referenced by: '<Root>/PI-D_Kp'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<Root>/PI-D_Kd'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/Integrator'
                                        */
  1.3,                                 /* Expression: 1.3
                                        * Referenced by: '<Root>/I-PD_Kp'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<Root>/I-PD_Kd'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Integrator'
                                        */
  35.0,                                /* Expression: 35
                                        * Referenced by: '<S2>/Integrator'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S2>/Integrator'
                                        */
  28.0,                                /* Expression: 28
                                        * Referenced by: '<Root>/Switch'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<Root>/I-PD_Ki'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<Root>/PI-D_Ki '
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<Root>/PID_Ki'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/amin'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/amax'
                                        */
  4.0,                                 /* Expression: MaxVal
                                        * Referenced by: '<S14>/Random Source'
                                        */
  6.25,                                /* Expression: 30/4.8
                                        * Referenced by: '<Root>/Volts to cm Tank 1 '
                                        */
  6.25,                                /* Expression: 30/4.8
                                        * Referenced by: '<Root>/Volts to cm Tank 2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/currAmp'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/integral'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/pidPreviousTime'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/previousError'
                                        */
  0U,                                  /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S16>/Constant'
                                        */
  1U,                                  /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S15>/FixPt Constant'
                                        */
  0U,                                  /* Computed Parameter: Output_InitialCondition
                                        * Referenced by: '<S1>/Output'
                                        */
  0U,                                  /* Computed Parameter: pmin_Value
                                        * Referenced by: '<Root>/pmin'
                                        */
  0U,                                  /* Computed Parameter: pmax_Value
                                        * Referenced by: '<Root>/pmax'
                                        */
  0U,                                  /* Computed Parameter: currPeriod_InitialValue
                                        * Referenced by: '<Root>/currPeriod'
                                        */
  0U,                                  /* Computed Parameter: prevTime_InitialValue
                                        * Referenced by: '<Root>/prevTime'
                                        */
  0,                                   /* Computed Parameter: HILWriteAnalog_Active
                                        * Referenced by: '<Root>/HIL Write Analog'
                                        */
  1                                    /* Computed Parameter: HILReadAnalog_Active
                                        * Referenced by: '<Root>/HIL Read Analog'
                                        */
};
