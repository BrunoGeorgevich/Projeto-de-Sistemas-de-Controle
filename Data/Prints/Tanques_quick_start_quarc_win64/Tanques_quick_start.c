/*
 * Tanques_quick_start.c
 *
 * Code generation for model "Tanques_quick_start".
 *
 * Model version              : 1.849
 * Simulink Coder version : 8.6 (R2014a) 27-Dec-2013
 * C source code generated on : Wed Oct 10 08:34:46 2018
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "Tanques_quick_start.h"
#include "Tanques_quick_start_private.h"
#include "Tanques_quick_start_dt.h"

/* Block signals (auto storage) */
B_Tanques_quick_start_T Tanques_quick_start_B;

/* Continuous states */
X_Tanques_quick_start_T Tanques_quick_start_X;

/* Block states (auto storage) */
DW_Tanques_quick_start_T Tanques_quick_start_DW;

/* Real-time model */
RT_MODEL_Tanques_quick_start_T Tanques_quick_start_M_;
RT_MODEL_Tanques_quick_start_T *const Tanques_quick_start_M =
  &Tanques_quick_start_M_;

/* Forward declaration for local functions */
static void Tanques_qu_twister_state_vector(uint32_T mt[625], real_T seed);
static real_T Tanques_quic_eml_rand_mt19937ar(uint32_T state[625]);
static real_T Tanques_quick_start_rand(void);
static void rate_monotonic_scheduler(void);
time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(Tanques_quick_start_M, 1);
  rtmSampleHitPtr[2] = rtmStepTask(Tanques_quick_start_M, 2);
  UNUSED_PARAMETER(rtmNumSampTimes);
  UNUSED_PARAMETER(rtmTimingData);
  UNUSED_PARAMETER(rtmPerTaskSampleHits);
  return(-1);
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 1 shares data with slower tid rate: 2 */
  if (Tanques_quick_start_M->Timing.TaskCounters.TID[1] == 0) {
    Tanques_quick_start_M->Timing.RateInteraction.TID1_2 =
      (Tanques_quick_start_M->Timing.TaskCounters.TID[2] == 0);

    /* update PerTaskSampleHits matrix for non-inline sfcn */
    Tanques_quick_start_M->Timing.perTaskSampleHits[5] =
      Tanques_quick_start_M->Timing.RateInteraction.TID1_2;
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Tanques_quick_start_M->Timing.TaskCounters.TID[2])++;
  if ((Tanques_quick_start_M->Timing.TaskCounters.TID[2]) > 9) {/* Sample time: [1.0s, 0.0s] */
    Tanques_quick_start_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 5;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  Tanques_quick_start_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; i++) {
    *x += h * f0[i];
    x++;
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

void RandSrcInitState_U_64(const uint32_T seed[], real_T state[], int32_T nChans)
{
  int32_T i;
  uint32_T j;
  int32_T k;
  int32_T n;
  real_T d;

  /* InitializeConditions for S-Function (sdsprandsrc2): '<S14>/Random Source' */
  /* RandSrcInitState_U_64 */
  for (i = 0; i < nChans; i++) {
    j = seed[i] != 0U ? seed[i] : 2147483648U;
    state[35 * i + 34] = j;
    for (k = 0; k < 32; k++) {
      d = 0.0;
      for (n = 0; n < 53; n++) {
        j ^= j << 13;
        j ^= j >> 17;
        j ^= j << 5;
        d = (real_T)((int32_T)(j >> 19) & 1) + (d + d);
      }

      state[35 * i + k] = ldexp(d, -53);
    }

    state[35 * i + 32] = 0.0;
    state[35 * i + 33] = 0.0;
  }

  /* End of InitializeConditions for S-Function (sdsprandsrc2): '<S14>/Random Source' */
}

void RandSrc_U_D(real_T y[], const real_T minVec[], int32_T minLen, const real_T
                 maxVec[], int32_T maxLen, real_T state[], int32_T nChans,
                 int32_T nSamps)
{
  int32_T one;
  int32_T lsw;
  int8_T *onePtr;
  int32_T chan;
  real_T min;
  real_T max;
  int32_T samps;
  real_T d;
  int32_T i;
  uint32_T j;

  /* S-Function (sdsprandsrc2): '<S14>/Random Source' */
  /* RandSrc_U_D */
  one = 1;
  onePtr = (int8_T *)&one;
  lsw = (onePtr[0U] == 0);
  for (chan = 0; chan < nChans; chan++) {
    min = minVec[minLen > 1 ? chan : 0];
    max = maxVec[maxLen > 1 ? chan : 0];
    max -= min;
    i = (int32_T)((uint32_T)state[chan * 35 + 33] & 31U);
    j = (uint32_T)state[chan * 35 + 34];
    for (samps = 0; samps < nSamps; samps++) {
      /* "Subtract with borrow" generator */
      d = state[((i + 20) & 31) + chan * 35];
      d -= state[((i + 5) & 31) + chan * 35];
      d -= state[chan * 35 + 32];
      if (d >= 0.0) {
        state[chan * 35 + 32] = 0.0;
      } else {
        d++;

        /* set 1 in LSB */
        state[chan * 35 + 32] = 1.1102230246251565E-16;
      }

      state[chan * 35 + i] = d;
      i = (i + 1) & 31;

      /* XOR with shift register sequence */
      ((int32_T *)&d)[lsw] ^= j;
      j ^= j << 13;
      j ^= j >> 17;
      j ^= j << 5;
      ((int32_T *)&d)[lsw ^ 1] ^= j & 1048575U;
      y[chan * nSamps + samps] = max * d + min;
    }

    state[chan * 35 + 33] = i;
    state[chan * 35 + 34] = j;
  }

  /* End of S-Function (sdsprandsrc2): '<S14>/Random Source' */
}

/* Function for MATLAB Function: '<Root>/PRS' */
static void Tanques_qu_twister_state_vector(uint32_T mt[625], real_T seed)
{
  uint32_T r;
  int32_T mti;
  if (seed < 4.294967296E+9) {
    if (seed >= 0.0) {
      r = (uint32_T)seed;
    } else {
      r = 0U;
    }
  } else {
    r = MAX_uint32_T;
  }

  mt[0] = r;
  for (mti = 0; mti < 623; mti++) {
    r = ((r >> 30U ^ r) * 1812433253U + mti) + 1U;
    mt[mti + 1] = r;
  }

  mt[624] = 624U;
}

/* Function for MATLAB Function: '<Root>/PRS' */
static real_T Tanques_quic_eml_rand_mt19937ar(uint32_T state[625])
{
  real_T r;
  real_T b_r;
  uint32_T u[2];
  uint32_T mti;
  uint32_T y;
  int32_T j;
  int32_T k;
  boolean_T b_isvalid;
  int32_T exitg1;
  boolean_T exitg2;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    u[0] = 0U;
    u[1] = 0U;
    for (j = 0; j < 2; j++) {
      mti = state[624] + 1U;
      if (mti >= 625U) {
        for (k = 0; k < 227; k++) {
          y = (state[1 + k] & 2147483647U) | (state[k] & 2147483648U);
          if ((int32_T)(y & 1U) == 0) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          state[k] = state[397 + k] ^ y;
        }

        for (k = 0; k < 396; k++) {
          y = (state[k + 227] & 2147483648U) | (state[228 + k] & 2147483647U);
          if ((int32_T)(y & 1U) == 0) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          state[k + 227] = state[k] ^ y;
        }

        y = (state[623] & 2147483648U) | (state[0] & 2147483647U);
        if ((int32_T)(y & 1U) == 0) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        state[623] = state[396] ^ y;
        mti = 1U;
      }

      y = state[(int32_T)mti - 1];
      state[624] = mti;
      y ^= y >> 11U;
      y ^= y << 7U & 2636928640U;
      y ^= y << 15U & 4022730752U;
      y ^= y >> 18U;
      u[j] = y;
    }

    b_r = ((real_T)(u[0] >> 5U) * 6.7108864E+7 + (real_T)(u[1] >> 6U)) *
      1.1102230246251565E-16;
    if (b_r == 0.0) {
      b_isvalid = ((state[624] >= 1U) && (state[624] < 625U));
      if (b_isvalid) {
        b_isvalid = false;
        k = 1;
        exitg2 = false;
        while ((!exitg2) && (k < 625)) {
          if (state[k - 1] == 0U) {
            k++;
          } else {
            b_isvalid = true;
            exitg2 = true;
          }
        }
      }

      if (!b_isvalid) {
        Tanques_qu_twister_state_vector(state, 5489.0);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  r = b_r;
  return r;
}

/* Function for MATLAB Function: '<Root>/PRS' */
static real_T Tanques_quick_start_rand(void)
{
  real_T r;
  int32_T hi;
  uint32_T test1;
  uint32_T test2;
  if (Tanques_quick_start_DW.method == 4U) {
    hi = (int32_T)(Tanques_quick_start_DW.state / 127773U);
    test1 = (Tanques_quick_start_DW.state - hi * 127773U) * 16807U;
    test2 = 2836U * hi;
    if (test1 < test2) {
      test1 = (test1 - test2) + 2147483647U;
    } else {
      test1 -= test2;
    }

    Tanques_quick_start_DW.state = test1;
    r = (real_T)test1 * 4.6566128752457969E-10;
  } else if (Tanques_quick_start_DW.method == 5U) {
    test1 = 69069U * Tanques_quick_start_DW.state_e[0] + 1234567U;
    test2 = Tanques_quick_start_DW.state_e[1] << 13 ^
      Tanques_quick_start_DW.state_e[1];
    test2 ^= test2 >> 17;
    test2 ^= test2 << 5;
    Tanques_quick_start_DW.state_e[0] = test1;
    Tanques_quick_start_DW.state_e[1] = test2;
    r = (real_T)(test1 + test2) * 2.328306436538696E-10;
  } else {
    if (!Tanques_quick_start_DW.state_not_empty) {
      memset(&Tanques_quick_start_DW.state_i[0], 0, 625U * sizeof(uint32_T));
      Tanques_qu_twister_state_vector(Tanques_quick_start_DW.state_i, 5489.0);
      Tanques_quick_start_DW.state_not_empty = true;
    }

    r = Tanques_quic_eml_rand_mt19937ar(Tanques_quick_start_DW.state_i);
  }

  return r;
}

/* Model output function for TID0 */
void Tanques_quick_start_output0(void) /* Sample time: [0.0s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_HILReadAnalog_o1;
  real_T rtb_HILReadAnalog_o2;
  real_T *lastU;
  real_T rtb_Temcontroladorouno;
  if (rtmIsMajorTimeStep(Tanques_quick_start_M)) {
    /* set solver stop time */
    if (!(Tanques_quick_start_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&Tanques_quick_start_M->solverInfo,
                            ((Tanques_quick_start_M->Timing.clockTickH0 + 1) *
        Tanques_quick_start_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&Tanques_quick_start_M->solverInfo,
                            ((Tanques_quick_start_M->Timing.clockTick0 + 1) *
        Tanques_quick_start_M->Timing.stepSize0 +
        Tanques_quick_start_M->Timing.clockTickH0 *
        Tanques_quick_start_M->Timing.stepSize0 * 4294967296.0));
    }

    {                                  /* Sample time: [0.0s, 0.0s] */
      rate_monotonic_scheduler();
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Tanques_quick_start_M)) {
    Tanques_quick_start_M->Timing.t[0] = rtsiGetT
      (&Tanques_quick_start_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(Tanques_quick_start_M)) {
  }

  /* TransferFcn: '<Root>/Transfer Fcn' */
  Tanques_quick_start_B.TransferFcn = 0.0;
  Tanques_quick_start_B.TransferFcn += Tanques_quick_start_P.TransferFcn_C *
    Tanques_quick_start_X.TransferFcn_CSTATE;
  if (rtmIsMajorTimeStep(Tanques_quick_start_M)) {
  }

  /* TransferFcn: '<Root>/Transfer Fcn1' */
  Tanques_quick_start_B.TransferFcn1 = 0.0;
  Tanques_quick_start_B.TransferFcn1 += Tanques_quick_start_P.TransferFcn1_C *
    Tanques_quick_start_X.TransferFcn1_CSTATE;
  if (rtmIsMajorTimeStep(Tanques_quick_start_M)) {
    /* UnitDelay: '<Root>/Unit Delay' */
    Tanques_quick_start_B.UnitDelay[0] =
      Tanques_quick_start_DW.UnitDelay_DSTATE[0];
    Tanques_quick_start_B.UnitDelay[1] =
      Tanques_quick_start_DW.UnitDelay_DSTATE[1];

    /* MATLAB Function: '<Root>/MATLAB Function6' incorporates:
     *  Constant: '<Root>/Matrix of Gains k'
     */
    /* MATLAB Function 'MATLAB Function6': '<S9>:1' */
    /* '<S9>:1:2' */
    Tanques_quick_start_B.y = Tanques_quick_start_P.k[0] *
      Tanques_quick_start_B.UnitDelay[0] + Tanques_quick_start_P.k[1] *
      Tanques_quick_start_B.UnitDelay[1];

    /* Constant: '<Root>/Gain Error' */
    Tanques_quick_start_B.GainError = Tanques_quick_start_P.ke;

    /* Constant: '<Root>/switch_input_signal' */
    Tanques_quick_start_B.switch_input_signal =
      Tanques_quick_start_P.switch_input_signal_Value;
  }

  if (rtmIsMajorTimeStep(Tanques_quick_start_M)) {
    /* Constant: '<Root>/offset' */
    Tanques_quick_start_B.offset = Tanques_quick_start_P.offset_Value;

    /* Constant: '<Root>/step' */
    Tanques_quick_start_B.step = Tanques_quick_start_P.step_Value;

    /* RateTransition: '<Root>/Rate Transition' */
    if (Tanques_quick_start_M->Timing.RateInteraction.TID1_2) {
      Tanques_quick_start_B.RateTransition =
        Tanques_quick_start_DW.RateTransition_Buffer0;
    }

    /* End of RateTransition: '<Root>/Rate Transition' */
  }

  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  SignalGenerator: '<Root>/Signal Generator'
   *  Sum: '<Root>/Sum'
   */
  switch ((int32_T)Tanques_quick_start_B.switch_input_signal) {
   case 1:
    Tanques_quick_start_B.MultiportSwitch = sin
      (Tanques_quick_start_P.SignalGenerator_Frequency *
       Tanques_quick_start_M->Timing.t[0]) *
      Tanques_quick_start_P.SignalGenerator_Amplitude +
      Tanques_quick_start_B.offset;
    break;

   case 2:
    Tanques_quick_start_B.MultiportSwitch = Tanques_quick_start_B.step;
    break;

   default:
    Tanques_quick_start_B.MultiportSwitch = Tanques_quick_start_B.RateTransition;
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */
  if (rtmIsMajorTimeStep(Tanques_quick_start_M)) {
    /* Constant: '<Root>/Tank Entry' */
    Tanques_quick_start_B.TankEntry = Tanques_quick_start_P.TankEntry_Value;
  }

  /* MultiPortSwitch: '<Root>/Tank Height Switch' */
  if ((int32_T)Tanques_quick_start_B.TankEntry == 1) {
    Tanques_quick_start_B.TankHeightSwitch = Tanques_quick_start_B.TransferFcn;
  } else {
    Tanques_quick_start_B.TankHeightSwitch = Tanques_quick_start_B.TransferFcn1;
  }

  /* End of MultiPortSwitch: '<Root>/Tank Height Switch' */

  /* Sum: '<Root>/Sum1' */
  Tanques_quick_start_B.Sum1 = Tanques_quick_start_B.MultiportSwitch -
    Tanques_quick_start_B.TankHeightSwitch;

  /* Sum: '<Root>/Sum4' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function7'
   */
  /* MATLAB Function 'MATLAB Function7': '<S10>:1' */
  /* '<S10>:1:2' */
  Tanques_quick_start_B.Sum4 = Tanques_quick_start_B.GainError *
    Tanques_quick_start_B.Sum1 - Tanques_quick_start_B.y;
  if (rtmIsMajorTimeStep(Tanques_quick_start_M)) {
    /* Constant: '<Root>/Zero Constant' */
    Tanques_quick_start_B.ZeroConstant =
      Tanques_quick_start_P.ZeroConstant_Value;

    /* Constant: '<Root>/Controller Enabler ' */
    Tanques_quick_start_B.ControllerEnabler =
      Tanques_quick_start_P.ControllerEnabler_Value;

    /* Constant: '<Root>/Controller Entry' */
    Tanques_quick_start_B.ControllerEntry =
      Tanques_quick_start_P.ControllerEntry_Value;
  }

  /* Gain: '<Root>/PID_Kp' */
  Tanques_quick_start_B.PID_Kp = Tanques_quick_start_P.PID_Kp_Gain *
    Tanques_quick_start_B.Sum1;

  /* Gain: '<Root>/PID_Kd' */
  Tanques_quick_start_B.PID_Kd = Tanques_quick_start_P.PID_Kd_Gain *
    Tanques_quick_start_B.Sum1;

  /* Derivative: '<S12>/Derivative' */
  if ((Tanques_quick_start_DW.TimeStampA >= Tanques_quick_start_M->Timing.t[0]) &&
      (Tanques_quick_start_DW.TimeStampB >= Tanques_quick_start_M->Timing.t[0]))
  {
    Tanques_quick_start_B.Derivative = 0.0;
  } else {
    rtb_Temcontroladorouno = Tanques_quick_start_DW.TimeStampA;
    lastU = &Tanques_quick_start_DW.LastUAtTimeA;
    if (Tanques_quick_start_DW.TimeStampA < Tanques_quick_start_DW.TimeStampB) {
      if (Tanques_quick_start_DW.TimeStampB < Tanques_quick_start_M->Timing.t[0])
      {
        rtb_Temcontroladorouno = Tanques_quick_start_DW.TimeStampB;
        lastU = &Tanques_quick_start_DW.LastUAtTimeB;
      }
    } else {
      if (Tanques_quick_start_DW.TimeStampA >= Tanques_quick_start_M->Timing.t[0])
      {
        rtb_Temcontroladorouno = Tanques_quick_start_DW.TimeStampB;
        lastU = &Tanques_quick_start_DW.LastUAtTimeB;
      }
    }

    Tanques_quick_start_B.Derivative = (Tanques_quick_start_B.PID_Kd - *lastU) /
      (Tanques_quick_start_M->Timing.t[0] - rtb_Temcontroladorouno);
  }

  /* End of Derivative: '<S12>/Derivative' */

  /* Integrator: '<S12>/Integrator'
   *
   * Regarding '<S12>/Integrator':
   *  Limited Integrator
   */
  if (Tanques_quick_start_X.Integrator_CSTATE >=
      Tanques_quick_start_P.Integrator_UpperSat ) {
    Tanques_quick_start_X.Integrator_CSTATE =
      Tanques_quick_start_P.Integrator_UpperSat;
  } else if (Tanques_quick_start_X.Integrator_CSTATE <=
             (Tanques_quick_start_P.Integrator_LowerSat) ) {
    Tanques_quick_start_X.Integrator_CSTATE =
      (Tanques_quick_start_P.Integrator_LowerSat);
  }

  Tanques_quick_start_B.Integrator = Tanques_quick_start_X.Integrator_CSTATE;

  /* Sum: '<S12>/Sum3' */
  Tanques_quick_start_B.Sum3 = (Tanques_quick_start_B.PID_Kp +
    Tanques_quick_start_B.Derivative) + Tanques_quick_start_B.Integrator;

  /* Gain: '<Root>/PI-D_Kp' */
  Tanques_quick_start_B.PID_Kp_g = Tanques_quick_start_P.PID_Kp_Gain_b *
    Tanques_quick_start_B.Sum1;

  /* Gain: '<Root>/PI-D_Kd' */
  Tanques_quick_start_B.PID_Kd_h = Tanques_quick_start_P.PID_Kd_Gain_a *
    Tanques_quick_start_B.TankHeightSwitch;

  /* Derivative: '<S11>/Derivative' */
  if ((Tanques_quick_start_DW.TimeStampA_e >= Tanques_quick_start_M->Timing.t[0])
      && (Tanques_quick_start_DW.TimeStampB_g >= Tanques_quick_start_M->
          Timing.t[0])) {
    Tanques_quick_start_B.Derivative_c = 0.0;
  } else {
    rtb_Temcontroladorouno = Tanques_quick_start_DW.TimeStampA_e;
    lastU = &Tanques_quick_start_DW.LastUAtTimeA_c;
    if (Tanques_quick_start_DW.TimeStampA_e <
        Tanques_quick_start_DW.TimeStampB_g) {
      if (Tanques_quick_start_DW.TimeStampB_g < Tanques_quick_start_M->Timing.t
          [0]) {
        rtb_Temcontroladorouno = Tanques_quick_start_DW.TimeStampB_g;
        lastU = &Tanques_quick_start_DW.LastUAtTimeB_a;
      }
    } else {
      if (Tanques_quick_start_DW.TimeStampA_e >= Tanques_quick_start_M->
          Timing.t[0]) {
        rtb_Temcontroladorouno = Tanques_quick_start_DW.TimeStampB_g;
        lastU = &Tanques_quick_start_DW.LastUAtTimeB_a;
      }
    }

    Tanques_quick_start_B.Derivative_c = (Tanques_quick_start_B.PID_Kd_h -
      *lastU) / (Tanques_quick_start_M->Timing.t[0] - rtb_Temcontroladorouno);
  }

  /* End of Derivative: '<S11>/Derivative' */

  /* Integrator: '<S11>/Integrator' */
  Tanques_quick_start_B.Integrator_j = Tanques_quick_start_X.Integrator_CSTATE_j;

  /* Sum: '<S11>/Sum3' */
  Tanques_quick_start_B.Sum3_p = (Tanques_quick_start_B.PID_Kp_g -
    Tanques_quick_start_B.Derivative_c) + Tanques_quick_start_B.Integrator_j;

  /* Gain: '<Root>/I-PD_Kp' */
  Tanques_quick_start_B.IPD_Kp = Tanques_quick_start_P.IPD_Kp_Gain *
    Tanques_quick_start_B.TankHeightSwitch;

  /* Gain: '<Root>/I-PD_Kd' */
  Tanques_quick_start_B.IPD_Kd = Tanques_quick_start_P.IPD_Kd_Gain *
    Tanques_quick_start_B.TankHeightSwitch;

  /* Derivative: '<S2>/Derivative' */
  if ((Tanques_quick_start_DW.TimeStampA_h >= Tanques_quick_start_M->Timing.t[0])
      && (Tanques_quick_start_DW.TimeStampB_c >= Tanques_quick_start_M->
          Timing.t[0])) {
    Tanques_quick_start_B.Derivative_g = 0.0;
  } else {
    rtb_Temcontroladorouno = Tanques_quick_start_DW.TimeStampA_h;
    lastU = &Tanques_quick_start_DW.LastUAtTimeA_d;
    if (Tanques_quick_start_DW.TimeStampA_h <
        Tanques_quick_start_DW.TimeStampB_c) {
      if (Tanques_quick_start_DW.TimeStampB_c < Tanques_quick_start_M->Timing.t
          [0]) {
        rtb_Temcontroladorouno = Tanques_quick_start_DW.TimeStampB_c;
        lastU = &Tanques_quick_start_DW.LastUAtTimeB_b;
      }
    } else {
      if (Tanques_quick_start_DW.TimeStampA_h >= Tanques_quick_start_M->
          Timing.t[0]) {
        rtb_Temcontroladorouno = Tanques_quick_start_DW.TimeStampB_c;
        lastU = &Tanques_quick_start_DW.LastUAtTimeB_b;
      }
    }

    Tanques_quick_start_B.Derivative_g = (Tanques_quick_start_B.IPD_Kd - *lastU)
      / (Tanques_quick_start_M->Timing.t[0] - rtb_Temcontroladorouno);
  }

  /* End of Derivative: '<S2>/Derivative' */

  /* Integrator: '<S2>/Integrator'
   *
   * Regarding '<S2>/Integrator':
   *  Limited Integrator
   */
  if (Tanques_quick_start_X.Integrator_CSTATE_p >=
      Tanques_quick_start_P.Integrator_UpperSat_i ) {
    Tanques_quick_start_X.Integrator_CSTATE_p =
      Tanques_quick_start_P.Integrator_UpperSat_i;
  } else if (Tanques_quick_start_X.Integrator_CSTATE_p <=
             (Tanques_quick_start_P.Integrator_LowerSat_g) ) {
    Tanques_quick_start_X.Integrator_CSTATE_p =
      (Tanques_quick_start_P.Integrator_LowerSat_g);
  }

  Tanques_quick_start_B.Integrator_b = Tanques_quick_start_X.Integrator_CSTATE_p;

  /* Sum: '<S2>/Sum3' */
  Tanques_quick_start_B.Sum3_j = (Tanques_quick_start_B.Integrator_b -
    Tanques_quick_start_B.IPD_Kp) - Tanques_quick_start_B.Derivative_g;

  /* MultiPortSwitch: '<Root>/Controller Switch' */
  switch ((int32_T)Tanques_quick_start_B.ControllerEntry) {
   case 1:
    Tanques_quick_start_B.ControllerSwitch = Tanques_quick_start_B.Sum3;
    break;

   case 2:
    Tanques_quick_start_B.ControllerSwitch = Tanques_quick_start_B.Sum3_p;
    break;

   default:
    Tanques_quick_start_B.ControllerSwitch = Tanques_quick_start_B.Sum3_j;
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Controller Switch' */

  /* MATLAB Function: '<Root>/MATLAB Function2' */
  rtb_Temcontroladorouno = Tanques_quick_start_B.MultiportSwitch;

  /* MATLAB Function 'MATLAB Function2': '<S5>:1' */
  if (Tanques_quick_start_B.MultiportSwitch > 30.0) {
    /* '<S5>:1:3' */
    /* '<S5>:1:4' */
    rtb_Temcontroladorouno = 30.0;
  } else {
    if (Tanques_quick_start_B.MultiportSwitch < 0.0) {
      /* '<S5>:1:5' */
      /* '<S5>:1:6' */
      rtb_Temcontroladorouno = 0.0;
    }
  }

  /* '<S5>:1:8' */
  Tanques_quick_start_B.tensao = rtb_Temcontroladorouno -
    Tanques_quick_start_B.TransferFcn;

  /* End of MATLAB Function: '<Root>/MATLAB Function2' */

  /* MultiPortSwitch: '<Root>/Tem controlador ou não? ' */
  switch ((int32_T)Tanques_quick_start_B.ControllerEnabler) {
   case 1:
    rtb_Temcontroladorouno = Tanques_quick_start_B.MultiportSwitch;
    break;

   case 2:
    rtb_Temcontroladorouno = Tanques_quick_start_B.ControllerSwitch;
    break;

   case 3:
    rtb_Temcontroladorouno = Tanques_quick_start_B.tensao;
    break;

   default:
    rtb_Temcontroladorouno = Tanques_quick_start_B.Sum4;
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Tem controlador ou não? ' */

  /* MATLAB Function: '<Root>/MATLAB Function1' */
  /* MATLAB Function 'MATLAB Function1': '<S3>:1' */
  /* Trava para a tensão */
  if (rtb_Temcontroladorouno > 4.0) {
    /* '<S3>:1:5' */
    /* '<S3>:1:6' */
    rtb_Temcontroladorouno = 4.0;
  } else {
    if (rtb_Temcontroladorouno < -4.0) {
      /* '<S3>:1:7' */
      /* '<S3>:1:8' */
      rtb_Temcontroladorouno = -4.0;
    }
  }

  /* %Trava pro tanque */
  /* '<S3>:1:12' */
  if ((Tanques_quick_start_B.TransferFcn < 2.0) && (rtb_Temcontroladorouno < 0.0))
  {
    /* '<S3>:1:14' */
    /* '<S3>:1:15' */
    rtb_Temcontroladorouno = 0.0;
  } else if (!((-Tanques_quick_start_B.TransferFcn + 30.0 > 5.0) &&
               (-Tanques_quick_start_B.TransferFcn + 30.0 < 6.0))) {
    if ((-Tanques_quick_start_B.TransferFcn + 30.0 > 4.0) &&
        (-Tanques_quick_start_B.TransferFcn + 30.0 < 5.0)) {
      /* '<S3>:1:18' */
      /* '<S3>:1:19' */
      rtb_Temcontroladorouno *= 0.9;
    } else if ((-Tanques_quick_start_B.TransferFcn + 30.0 > 3.0) &&
               (-Tanques_quick_start_B.TransferFcn + 30.0 < 4.0)) {
      /* '<S3>:1:20' */
      /* '<S3>:1:21' */
      rtb_Temcontroladorouno *= 0.8;
    } else if ((-Tanques_quick_start_B.TransferFcn + 30.0 > 2.0) &&
               (-Tanques_quick_start_B.TransferFcn + 30.0 < 3.0)) {
      /* '<S3>:1:22' */
      /* '<S3>:1:23' */
      rtb_Temcontroladorouno *= 0.79;
    } else if ((-Tanques_quick_start_B.TransferFcn + 30.0 > 1.0) &&
               (-Tanques_quick_start_B.TransferFcn + 30.0 < 1.5)) {
      /* '<S3>:1:24' */
      /* '<S3>:1:25' */
      rtb_Temcontroladorouno *= 0.7;
    } else {
      if ((-Tanques_quick_start_B.TransferFcn + 30.0 > 0.5) &&
          (-Tanques_quick_start_B.TransferFcn + 30.0 < 0.8)) {
        /* '<S3>:1:26' */
        /* '<S3>:1:27' */
        rtb_Temcontroladorouno *= 0.55;
      }
    }
  } else {
    /* '<S3>:1:16' */
    /* '<S3>:1:17' */
  }

  /* '<S3>:1:30' */
  Tanques_quick_start_B.tensao_h = rtb_Temcontroladorouno;

  /* End of MATLAB Function: '<Root>/MATLAB Function1' */

  /* Switch: '<Root>/Switch' */
  if (Tanques_quick_start_B.TransferFcn >=
      Tanques_quick_start_P.Switch_Threshold) {
    Tanques_quick_start_B.Switch = Tanques_quick_start_B.ZeroConstant;
  } else {
    Tanques_quick_start_B.Switch = Tanques_quick_start_B.tensao_h;
  }

  /* End of Switch: '<Root>/Switch' */
  if (rtmIsMajorTimeStep(Tanques_quick_start_M)) {
    /* S-Function (hil_write_analog_block): '<Root>/HIL Write Analog' */

    /* S-Function Block: Tanques_quick_start/HIL Write Analog (hil_write_analog_block) */
    {
      t_error result;
      result = hil_write_analog(Tanques_quick_start_DW.HILInitialize_Card,
        &Tanques_quick_start_P.HILWriteAnalog_channels, 1,
        &Tanques_quick_start_B.Switch);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Tanques_quick_start_M, _rt_error_message);
      }
    }

    /* MATLAB Function: '<Root>/MATLAB Function3' incorporates:
     *  Constant: '<Root>/Matrix C - Discrete'
     */
    /* MATLAB Function 'MATLAB Function3': '<S6>:1' */
    /* '<S6>:1:2' */
    Tanques_quick_start_B.y_m = Tanques_quick_start_P.c[0] *
      Tanques_quick_start_B.UnitDelay[0] + Tanques_quick_start_P.c[1] *
      Tanques_quick_start_B.UnitDelay[1];

    /* S-Function (hil_read_analog_block): '<Root>/HIL Read Analog' */

    /* S-Function Block: Tanques_quick_start/HIL Read Analog (hil_read_analog_block) */
    {
      t_error result = hil_read_analog(Tanques_quick_start_DW.HILInitialize_Card,
        Tanques_quick_start_P.HILReadAnalog_channels, 2,
        &Tanques_quick_start_DW.HILReadAnalog_Buffer[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Tanques_quick_start_M, _rt_error_message);
      }

      rtb_HILReadAnalog_o1 = Tanques_quick_start_DW.HILReadAnalog_Buffer[0];
      rtb_HILReadAnalog_o2 = Tanques_quick_start_DW.HILReadAnalog_Buffer[1];
    }
  }

  /* Gain: '<Root>/I-PD_Ki' */
  Tanques_quick_start_B.IPD_Ki = Tanques_quick_start_P.IPD_Ki_Gain *
    Tanques_quick_start_B.Sum1;
  if (rtmIsMajorTimeStep(Tanques_quick_start_M)) {
    /* Constant: '<Root>/Matrix of Gains L' */
    Tanques_quick_start_B.MatrixofGainsL[0] = Tanques_quick_start_P.L[0];
    Tanques_quick_start_B.MatrixofGainsL[1] = Tanques_quick_start_P.L[1];
  }

  /* Sum: '<Root>/Sum3' */
  rtb_Temcontroladorouno = Tanques_quick_start_B.TankHeightSwitch -
    Tanques_quick_start_B.y_m;

  /* MATLAB Function 'MATLAB Function10': '<S4>:1' */
  /* '<S4>:1:2' */
  if (rtmIsMajorTimeStep(Tanques_quick_start_M)) {
    /* Constant: '<Root>/Matrix B - Discrete' */
    Tanques_quick_start_B.MatrixBDiscrete[0] = Tanques_quick_start_P.b[0];
    Tanques_quick_start_B.MatrixBDiscrete[1] = Tanques_quick_start_P.b[1];
  }

  /* MATLAB Function 'MATLAB Function4': '<S7>:1' */
  /* '<S7>:1:2' */
  if (rtmIsMajorTimeStep(Tanques_quick_start_M)) {
    /* MATLAB Function: '<Root>/MATLAB Function5' incorporates:
     *  Constant: '<Root>/Matrix A - Discrete'
     */
    /* MATLAB Function 'MATLAB Function5': '<S8>:1' */
    /* '<S8>:1:2' */
    Tanques_quick_start_B.y_n[0] = 0.0;
    Tanques_quick_start_B.y_n[0] += Tanques_quick_start_P.a[0] *
      Tanques_quick_start_B.UnitDelay[0];
    Tanques_quick_start_B.y_n[0] += Tanques_quick_start_P.a[2] *
      Tanques_quick_start_B.UnitDelay[1];
    Tanques_quick_start_B.y_n[1] = 0.0;
    Tanques_quick_start_B.y_n[1] += Tanques_quick_start_P.a[1] *
      Tanques_quick_start_B.UnitDelay[0];
    Tanques_quick_start_B.y_n[1] += Tanques_quick_start_P.a[3] *
      Tanques_quick_start_B.UnitDelay[1];
  }

  /* Gain: '<Root>/PI-D_Ki ' */
  Tanques_quick_start_B.PID_Ki = Tanques_quick_start_P.PID_Ki_Gain *
    Tanques_quick_start_B.Sum1;
  if (rtmIsMajorTimeStep(Tanques_quick_start_M)) {
  }

  /* Gain: '<Root>/PID_Ki' */
  Tanques_quick_start_B.PID_Ki_k = Tanques_quick_start_P.PID_Ki_Gain_g *
    Tanques_quick_start_B.Sum1;

  /* Sum: '<Root>/Sum2' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function10'
   *  MATLAB Function: '<Root>/MATLAB Function4'
   */
  Tanques_quick_start_B.Sum2[0] = (Tanques_quick_start_B.MultiportSwitch *
    Tanques_quick_start_B.MatrixBDiscrete[0] + Tanques_quick_start_B.y_n[0]) +
    Tanques_quick_start_B.MatrixofGainsL[0] * rtb_Temcontroladorouno;
  Tanques_quick_start_B.Sum2[1] = (Tanques_quick_start_B.MultiportSwitch *
    Tanques_quick_start_B.MatrixBDiscrete[1] + Tanques_quick_start_B.y_n[1]) +
    Tanques_quick_start_B.MatrixofGainsL[1] * rtb_Temcontroladorouno;
  if (rtmIsMajorTimeStep(Tanques_quick_start_M)) {
    /* Gain: '<Root>/Volts to cm Tank 1 ' */
    Tanques_quick_start_B.VoltstocmTank1 =
      Tanques_quick_start_P.VoltstocmTank1_Gain * rtb_HILReadAnalog_o1;

    /* Gain: '<Root>/Volts to cm Tank 2' */
    Tanques_quick_start_B.VoltstocmTank2 =
      Tanques_quick_start_P.VoltstocmTank2_Gain * rtb_HILReadAnalog_o2;
  }
}

/* Model update function for TID0 */
void Tanques_quick_start_update0(void) /* Sample time: [0.0s, 0.0s] */
{
  real_T *lastU;
  if (rtmIsMajorTimeStep(Tanques_quick_start_M)) {
    /* Update for UnitDelay: '<Root>/Unit Delay' */
    Tanques_quick_start_DW.UnitDelay_DSTATE[0] = Tanques_quick_start_B.Sum2[0];
    Tanques_quick_start_DW.UnitDelay_DSTATE[1] = Tanques_quick_start_B.Sum2[1];
  }

  /* Update for Derivative: '<S12>/Derivative' */
  if (Tanques_quick_start_DW.TimeStampA == (rtInf)) {
    Tanques_quick_start_DW.TimeStampA = Tanques_quick_start_M->Timing.t[0];
    lastU = &Tanques_quick_start_DW.LastUAtTimeA;
  } else if (Tanques_quick_start_DW.TimeStampB == (rtInf)) {
    Tanques_quick_start_DW.TimeStampB = Tanques_quick_start_M->Timing.t[0];
    lastU = &Tanques_quick_start_DW.LastUAtTimeB;
  } else if (Tanques_quick_start_DW.TimeStampA <
             Tanques_quick_start_DW.TimeStampB) {
    Tanques_quick_start_DW.TimeStampA = Tanques_quick_start_M->Timing.t[0];
    lastU = &Tanques_quick_start_DW.LastUAtTimeA;
  } else {
    Tanques_quick_start_DW.TimeStampB = Tanques_quick_start_M->Timing.t[0];
    lastU = &Tanques_quick_start_DW.LastUAtTimeB;
  }

  *lastU = Tanques_quick_start_B.PID_Kd;

  /* End of Update for Derivative: '<S12>/Derivative' */
  /* Update for Derivative: '<S11>/Derivative' */
  if (Tanques_quick_start_DW.TimeStampA_e == (rtInf)) {
    Tanques_quick_start_DW.TimeStampA_e = Tanques_quick_start_M->Timing.t[0];
    lastU = &Tanques_quick_start_DW.LastUAtTimeA_c;
  } else if (Tanques_quick_start_DW.TimeStampB_g == (rtInf)) {
    Tanques_quick_start_DW.TimeStampB_g = Tanques_quick_start_M->Timing.t[0];
    lastU = &Tanques_quick_start_DW.LastUAtTimeB_a;
  } else if (Tanques_quick_start_DW.TimeStampA_e <
             Tanques_quick_start_DW.TimeStampB_g) {
    Tanques_quick_start_DW.TimeStampA_e = Tanques_quick_start_M->Timing.t[0];
    lastU = &Tanques_quick_start_DW.LastUAtTimeA_c;
  } else {
    Tanques_quick_start_DW.TimeStampB_g = Tanques_quick_start_M->Timing.t[0];
    lastU = &Tanques_quick_start_DW.LastUAtTimeB_a;
  }

  *lastU = Tanques_quick_start_B.PID_Kd_h;

  /* End of Update for Derivative: '<S11>/Derivative' */

  /* Update for Derivative: '<S2>/Derivative' */
  if (Tanques_quick_start_DW.TimeStampA_h == (rtInf)) {
    Tanques_quick_start_DW.TimeStampA_h = Tanques_quick_start_M->Timing.t[0];
    lastU = &Tanques_quick_start_DW.LastUAtTimeA_d;
  } else if (Tanques_quick_start_DW.TimeStampB_c == (rtInf)) {
    Tanques_quick_start_DW.TimeStampB_c = Tanques_quick_start_M->Timing.t[0];
    lastU = &Tanques_quick_start_DW.LastUAtTimeB_b;
  } else if (Tanques_quick_start_DW.TimeStampA_h <
             Tanques_quick_start_DW.TimeStampB_c) {
    Tanques_quick_start_DW.TimeStampA_h = Tanques_quick_start_M->Timing.t[0];
    lastU = &Tanques_quick_start_DW.LastUAtTimeA_d;
  } else {
    Tanques_quick_start_DW.TimeStampB_c = Tanques_quick_start_M->Timing.t[0];
    lastU = &Tanques_quick_start_DW.LastUAtTimeB_b;
  }

  *lastU = Tanques_quick_start_B.IPD_Kd;

  /* End of Update for Derivative: '<S2>/Derivative' */
  if (rtmIsMajorTimeStep(Tanques_quick_start_M)) {
    rt_ertODEUpdateContinuousStates(&Tanques_quick_start_M->solverInfo);
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Tanques_quick_start_M->Timing.clockTick0)) {
    ++Tanques_quick_start_M->Timing.clockTickH0;
  }

  Tanques_quick_start_M->Timing.t[0] = rtsiGetSolverStopTime
    (&Tanques_quick_start_M->solverInfo);

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Tanques_quick_start_M->Timing.clockTick1)) {
    ++Tanques_quick_start_M->Timing.clockTickH1;
  }

  Tanques_quick_start_M->Timing.t[1] = Tanques_quick_start_M->Timing.clockTick1 *
    Tanques_quick_start_M->Timing.stepSize1 +
    Tanques_quick_start_M->Timing.clockTickH1 *
    Tanques_quick_start_M->Timing.stepSize1 * 4294967296.0;
}

/* Derivatives for root system: '<Root>' */
void Tanques_quick_start_derivatives(void)
{
  XDot_Tanques_quick_start_T *_rtXdot;
  _rtXdot = ((XDot_Tanques_quick_start_T *)
             Tanques_quick_start_M->ModelData.derivs);

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE = 0.0;
  _rtXdot->TransferFcn_CSTATE += Tanques_quick_start_P.TransferFcn_A *
    Tanques_quick_start_X.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE += Tanques_quick_start_B.VoltstocmTank1;

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn1' */
  _rtXdot->TransferFcn1_CSTATE = 0.0;
  _rtXdot->TransferFcn1_CSTATE += Tanques_quick_start_P.TransferFcn1_A *
    Tanques_quick_start_X.TransferFcn1_CSTATE;
  _rtXdot->TransferFcn1_CSTATE += Tanques_quick_start_B.VoltstocmTank2;

  /* Derivatives for Integrator: '<S12>/Integrator' */
  {
    boolean_T lsat;
    boolean_T usat;
    lsat = ( Tanques_quick_start_X.Integrator_CSTATE <=
            (Tanques_quick_start_P.Integrator_LowerSat) );
    usat = ( Tanques_quick_start_X.Integrator_CSTATE >=
            Tanques_quick_start_P.Integrator_UpperSat );
    if ((!lsat && !usat) ||
        (lsat && (Tanques_quick_start_B.PID_Ki_k > 0)) ||
        (usat && (Tanques_quick_start_B.PID_Ki_k < 0)) ) {
      ((XDot_Tanques_quick_start_T *) Tanques_quick_start_M->ModelData.derivs)
        ->Integrator_CSTATE = Tanques_quick_start_B.PID_Ki_k;
    } else {
      /* in saturation */
      ((XDot_Tanques_quick_start_T *) Tanques_quick_start_M->ModelData.derivs)
        ->Integrator_CSTATE = 0.0;
    }
  }

  /* Derivatives for Integrator: '<S11>/Integrator' */
  _rtXdot->Integrator_CSTATE_j = Tanques_quick_start_B.PID_Ki;

  /* Derivatives for Integrator: '<S2>/Integrator' */
  {
    boolean_T lsat;
    boolean_T usat;
    lsat = ( Tanques_quick_start_X.Integrator_CSTATE_p <=
            (Tanques_quick_start_P.Integrator_LowerSat_g) );
    usat = ( Tanques_quick_start_X.Integrator_CSTATE_p >=
            Tanques_quick_start_P.Integrator_UpperSat_i );
    if ((!lsat && !usat) ||
        (lsat && (Tanques_quick_start_B.IPD_Ki > 0)) ||
        (usat && (Tanques_quick_start_B.IPD_Ki < 0)) ) {
      ((XDot_Tanques_quick_start_T *) Tanques_quick_start_M->ModelData.derivs)
        ->Integrator_CSTATE_p = Tanques_quick_start_B.IPD_Ki;
    } else {
      /* in saturation */
      ((XDot_Tanques_quick_start_T *) Tanques_quick_start_M->ModelData.derivs)
        ->Integrator_CSTATE_p = 0.0;
    }
  }
}

/* Model output function for TID2 */
void Tanques_quick_start_output2(void) /* Sample time: [1.0s, 0.0s] */
{
  real_T amax;
  real_T rtb_RoundingFunction;
  uint16_T rtb_FixPtSum1;
  uint16_T Output;
  uint32_T qY;

  /* UnitDelay: '<S1>/Output' */
  Output = Tanques_quick_start_DW.Output_DSTATE;

  /* Sum: '<S15>/FixPt Sum1' incorporates:
   *  Constant: '<S15>/FixPt Constant'
   *  UnitDelay: '<S1>/Output'
   */
  rtb_FixPtSum1 = (uint16_T)((uint32_T)Tanques_quick_start_DW.Output_DSTATE +
    Tanques_quick_start_P.FixPtConstant_Value);

  /* Switch: '<S16>/FixPt Switch' incorporates:
   *  Constant: '<S16>/Constant'
   */
  if (rtb_FixPtSum1 > Tanques_quick_start_P.WrapToZero_Threshold) {
    Tanques_quick_start_B.FixPtSwitch = Tanques_quick_start_P.Constant_Value;
  } else {
    Tanques_quick_start_B.FixPtSwitch = rtb_FixPtSum1;
  }

  /* End of Switch: '<S16>/FixPt Switch' */

  /* S-Function (sdsprandsrc2): '<S14>/Random Source' */
  RandSrc_U_D(&rtb_RoundingFunction, &Tanques_quick_start_P.RandomSource_MinVal,
              1, &Tanques_quick_start_P.RandomSource_MaxRTP, 1,
              Tanques_quick_start_DW.RandomSource_STATE_DWORK, 1, 1);

  /* Rounding: '<S14>/Rounding Function' */
  rtb_RoundingFunction = ceil(rtb_RoundingFunction);

  /* DataTypeConversion: '<S14>/Data Type Conversion' */
  if (rtIsNaN(rtb_RoundingFunction) || rtIsInf(rtb_RoundingFunction)) {
    rtb_RoundingFunction = 0.0;
  } else {
    rtb_RoundingFunction = fmod(rtb_RoundingFunction, 65536.0);
  }

  rtb_FixPtSum1 = (uint16_T)(rtb_RoundingFunction < 0.0 ? (int32_T)(uint16_T)
    -(int16_T)(uint16_T)-rtb_RoundingFunction : (int32_T)(uint16_T)
    rtb_RoundingFunction);

  /* End of DataTypeConversion: '<S14>/Data Type Conversion' */

  /* MATLAB Function: '<Root>/PRS' incorporates:
   *  Constant: '<Root>/amax'
   *  Constant: '<Root>/amin'
   *  Constant: '<Root>/pmax'
   *  Constant: '<Root>/pmin'
   */
  /* MATLAB Function 'PRS': '<S13>:1' */
  qY = (uint32_T)Output - Tanques_quick_start_DW.prevTime;
  if (qY > Output) {
    qY = 0U;
  }

  if ((int32_T)qY >= Tanques_quick_start_DW.currPeriod) {
    /* '<S13>:1:5' */
    qY = (uint32_T)rtb_FixPtSum1 + Tanques_quick_start_P.pmin_Value;
    if (qY > 65535U) {
      qY = 65535U;
    }

    if ((int32_T)qY < Tanques_quick_start_P.pmax_Value) {
      /* '<S13>:1:6' */
      /* '<S13>:1:7' */
      qY = (uint32_T)Tanques_quick_start_P.pmin_Value + rtb_FixPtSum1;
      if (qY > 65535U) {
        qY = 65535U;
      }

      Tanques_quick_start_DW.currPeriod = (uint16_T)qY;
    } else {
      /* '<S13>:1:9' */
      Tanques_quick_start_DW.currPeriod = rtb_FixPtSum1;
    }

    rtb_RoundingFunction = Tanques_quick_start_P.amin_Value;
    amax = Tanques_quick_start_P.amax_Value;
    Tanques_quick_start_rand();
    Tanques_quick_start_DW.currAmp = (amax - rtb_RoundingFunction) *
      Tanques_quick_start_rand() + rtb_RoundingFunction;

    /* '<S13>:1:11' */
    /* '<S13>:1:12' */
    Tanques_quick_start_DW.prevTime = Output;
  }

  /* '<S13>:1:14' */
  Tanques_quick_start_B.amp = Tanques_quick_start_DW.currAmp;

  /* End of MATLAB Function: '<Root>/PRS' */
}

/* Model update function for TID2 */
void Tanques_quick_start_update2(void) /* Sample time: [1.0s, 0.0s] */
{
  /* Update for RateTransition: '<Root>/Rate Transition' */
  Tanques_quick_start_DW.RateTransition_Buffer0 = Tanques_quick_start_B.amp;

  /* Update for UnitDelay: '<S1>/Output' */
  Tanques_quick_start_DW.Output_DSTATE = Tanques_quick_start_B.FixPtSwitch;

  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Tanques_quick_start_M->Timing.clockTick2)) {
    ++Tanques_quick_start_M->Timing.clockTickH2;
  }

  Tanques_quick_start_M->Timing.t[2] = Tanques_quick_start_M->Timing.clockTick2 *
    Tanques_quick_start_M->Timing.stepSize2 +
    Tanques_quick_start_M->Timing.clockTickH2 *
    Tanques_quick_start_M->Timing.stepSize2 * 4294967296.0;
}

/* Model output wrapper function for compatibility with a static main program */
void Tanques_quick_start_output(int_T tid)
{
  switch (tid) {
   case 0 :
    Tanques_quick_start_output0();
    break;

   case 2 :
    Tanques_quick_start_output2();
    break;

   default :
    break;
  }
}

/* Model update wrapper function for compatibility with a static main program */
void Tanques_quick_start_update(int_T tid)
{
  switch (tid) {
   case 0 :
    Tanques_quick_start_update0();
    break;

   case 2 :
    Tanques_quick_start_update2();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void Tanques_quick_start_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: Tanques_quick_start/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("q2_usb", "0", &Tanques_quick_start_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Tanques_quick_start_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options
      (Tanques_quick_start_DW.HILInitialize_Card,
       "d0=digital;d1=digital;led=auto;update_rate=normal;decimation=1", 63);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Tanques_quick_start_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear(Tanques_quick_start_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Tanques_quick_start_M, _rt_error_message);
      return;
    }

    if ((Tanques_quick_start_P.HILInitialize_set_analog_input_ && !is_switching)
        || (Tanques_quick_start_P.HILInitialize_set_analog_inpu_h &&
            is_switching)) {
      Tanques_quick_start_DW.HILInitialize_AIMinimums[0] =
        Tanques_quick_start_P.HILInitialize_analog_input_mini;
      Tanques_quick_start_DW.HILInitialize_AIMinimums[1] =
        Tanques_quick_start_P.HILInitialize_analog_input_mini;
      Tanques_quick_start_DW.HILInitialize_AIMaximums[0] =
        Tanques_quick_start_P.HILInitialize_analog_input_maxi;
      Tanques_quick_start_DW.HILInitialize_AIMaximums[1] =
        Tanques_quick_start_P.HILInitialize_analog_input_maxi;
      result = hil_set_analog_input_ranges
        (Tanques_quick_start_DW.HILInitialize_Card,
         Tanques_quick_start_P.HILInitialize_analog_input_chan, 2U,
         &Tanques_quick_start_DW.HILInitialize_AIMinimums[0],
         &Tanques_quick_start_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Tanques_quick_start_M, _rt_error_message);
        return;
      }
    }

    if ((Tanques_quick_start_P.HILInitialize_set_analog_output && !is_switching)
        || (Tanques_quick_start_P.HILInitialize_set_analog_outp_c &&
            is_switching)) {
      Tanques_quick_start_DW.HILInitialize_AOMinimums[0] =
        Tanques_quick_start_P.HILInitialize_analog_output_min;
      Tanques_quick_start_DW.HILInitialize_AOMinimums[1] =
        Tanques_quick_start_P.HILInitialize_analog_output_min;
      Tanques_quick_start_DW.HILInitialize_AOMaximums[0] =
        Tanques_quick_start_P.HILInitialize_analog_output_max;
      Tanques_quick_start_DW.HILInitialize_AOMaximums[1] =
        Tanques_quick_start_P.HILInitialize_analog_output_max;
      result = hil_set_analog_output_ranges
        (Tanques_quick_start_DW.HILInitialize_Card,
         Tanques_quick_start_P.HILInitialize_analog_output_cha, 2U,
         &Tanques_quick_start_DW.HILInitialize_AOMinimums[0],
         &Tanques_quick_start_DW.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Tanques_quick_start_M, _rt_error_message);
        return;
      }
    }

    if ((Tanques_quick_start_P.HILInitialize_set_analog_outp_o && !is_switching)
        || (Tanques_quick_start_P.HILInitialize_set_analog_outp_e &&
            is_switching)) {
      Tanques_quick_start_DW.HILInitialize_AOVoltages[0] =
        Tanques_quick_start_P.HILInitialize_initial_analog_ou;
      Tanques_quick_start_DW.HILInitialize_AOVoltages[1] =
        Tanques_quick_start_P.HILInitialize_initial_analog_ou;
      result = hil_write_analog(Tanques_quick_start_DW.HILInitialize_Card,
        Tanques_quick_start_P.HILInitialize_analog_output_cha, 2U,
        &Tanques_quick_start_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Tanques_quick_start_M, _rt_error_message);
        return;
      }
    }

    if (Tanques_quick_start_P.HILInitialize_set_analog_out_bm) {
      Tanques_quick_start_DW.HILInitialize_AOVoltages[0] =
        Tanques_quick_start_P.HILInitialize_watchdog_analog_o;
      Tanques_quick_start_DW.HILInitialize_AOVoltages[1] =
        Tanques_quick_start_P.HILInitialize_watchdog_analog_o;
      result = hil_watchdog_set_analog_expiration_state
        (Tanques_quick_start_DW.HILInitialize_Card,
         Tanques_quick_start_P.HILInitialize_analog_output_cha, 2U,
         &Tanques_quick_start_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Tanques_quick_start_M, _rt_error_message);
        return;
      }
    }

    if ((Tanques_quick_start_P.HILInitialize_set_encoder_param && !is_switching)
        || (Tanques_quick_start_P.HILInitialize_set_encoder_par_a &&
            is_switching)) {
      Tanques_quick_start_DW.HILInitialize_QuadratureModes[0] =
        Tanques_quick_start_P.HILInitialize_quadrature;
      Tanques_quick_start_DW.HILInitialize_QuadratureModes[1] =
        Tanques_quick_start_P.HILInitialize_quadrature;
      result = hil_set_encoder_quadrature_mode
        (Tanques_quick_start_DW.HILInitialize_Card,
         Tanques_quick_start_P.HILInitialize_encoder_channels, 2U,
         (t_encoder_quadrature_mode *)
         &Tanques_quick_start_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Tanques_quick_start_M, _rt_error_message);
        return;
      }
    }

    if ((Tanques_quick_start_P.HILInitialize_set_encoder_count && !is_switching)
        || (Tanques_quick_start_P.HILInitialize_set_encoder_cou_e &&
            is_switching)) {
      Tanques_quick_start_DW.HILInitialize_InitialEICounts[0] =
        Tanques_quick_start_P.HILInitialize_initial_encoder_c;
      Tanques_quick_start_DW.HILInitialize_InitialEICounts[1] =
        Tanques_quick_start_P.HILInitialize_initial_encoder_c;
      result = hil_set_encoder_counts(Tanques_quick_start_DW.HILInitialize_Card,
        Tanques_quick_start_P.HILInitialize_encoder_channels, 2U,
        &Tanques_quick_start_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Tanques_quick_start_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for Constant: '<Root>/Gain Error' */
  Tanques_quick_start_B.GainError = Tanques_quick_start_P.ke;

  /* Start for RateTransition: '<Root>/Rate Transition' */
  Tanques_quick_start_B.RateTransition = Tanques_quick_start_P.RateTransition_X0;

  /* Start for Constant: '<Root>/Matrix of Gains L' */
  Tanques_quick_start_B.MatrixofGainsL[0] = Tanques_quick_start_P.L[0];
  Tanques_quick_start_B.MatrixofGainsL[1] = Tanques_quick_start_P.L[1];

  /* Start for Constant: '<Root>/Matrix B - Discrete' */
  Tanques_quick_start_B.MatrixBDiscrete[0] = Tanques_quick_start_P.b[0];
  Tanques_quick_start_B.MatrixBDiscrete[1] = Tanques_quick_start_P.b[1];

  /* Start for DataStoreMemory: '<Root>/currAmp' */
  Tanques_quick_start_DW.currAmp = Tanques_quick_start_P.currAmp_InitialValue;

  /* Start for DataStoreMemory: '<Root>/currPeriod' */
  Tanques_quick_start_DW.currPeriod =
    Tanques_quick_start_P.currPeriod_InitialValue;

  /* Start for DataStoreMemory: '<Root>/integral' */
  Tanques_quick_start_DW.integral = Tanques_quick_start_P.integral_InitialValue;

  /* Start for DataStoreMemory: '<Root>/pidPreviousTime' */
  Tanques_quick_start_DW.pidPreviousTime =
    Tanques_quick_start_P.pidPreviousTime_InitialValue;

  /* Start for DataStoreMemory: '<Root>/prevTime' */
  Tanques_quick_start_DW.prevTime = Tanques_quick_start_P.prevTime_InitialValue;

  /* Start for DataStoreMemory: '<Root>/previousError' */
  Tanques_quick_start_DW.previousError =
    Tanques_quick_start_P.previousError_InitialValue;

  /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn' */
  Tanques_quick_start_X.TransferFcn_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn1' */
  Tanques_quick_start_X.TransferFcn1_CSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  Tanques_quick_start_DW.UnitDelay_DSTATE[0] =
    Tanques_quick_start_P.UnitDelay_InitialCondition;
  Tanques_quick_start_DW.UnitDelay_DSTATE[1] =
    Tanques_quick_start_P.UnitDelay_InitialCondition;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  Tanques_quick_start_DW.RateTransition_Buffer0 =
    Tanques_quick_start_P.RateTransition_X0;

  /* InitializeConditions for Derivative: '<S12>/Derivative' */
  Tanques_quick_start_DW.TimeStampA = (rtInf);
  Tanques_quick_start_DW.TimeStampB = (rtInf);

  /* InitializeConditions for Integrator: '<S12>/Integrator' */
  Tanques_quick_start_X.Integrator_CSTATE = Tanques_quick_start_P.Integrator_IC;

  /* InitializeConditions for Derivative: '<S11>/Derivative' */
  Tanques_quick_start_DW.TimeStampA_e = (rtInf);
  Tanques_quick_start_DW.TimeStampB_g = (rtInf);

  /* InitializeConditions for Integrator: '<S11>/Integrator' */
  Tanques_quick_start_X.Integrator_CSTATE_j =
    Tanques_quick_start_P.Integrator_IC_b;

  /* InitializeConditions for Derivative: '<S2>/Derivative' */
  Tanques_quick_start_DW.TimeStampA_h = (rtInf);
  Tanques_quick_start_DW.TimeStampB_c = (rtInf);

  /* InitializeConditions for Integrator: '<S2>/Integrator' */
  Tanques_quick_start_X.Integrator_CSTATE_p =
    Tanques_quick_start_P.Integrator_IC_p;

  /* InitializeConditions for UnitDelay: '<S1>/Output' */
  Tanques_quick_start_DW.Output_DSTATE =
    Tanques_quick_start_P.Output_InitialCondition;

  /* InitializeConditions for S-Function (sdsprandsrc2): '<S14>/Random Source' */
  Tanques_quick_start_DW.RandomSource_SEED_DWORK =
    Tanques_quick_start_P.randP_seed;
  RandSrcInitState_U_64(&Tanques_quick_start_DW.RandomSource_SEED_DWORK,
                        Tanques_quick_start_DW.RandomSource_STATE_DWORK, 1);

  /* InitializeConditions for MATLAB Function: '<Root>/PRS' */
  Tanques_quick_start_DW.state_not_empty = false;
  Tanques_quick_start_DW.method = 7U;
  Tanques_quick_start_DW.state = 1144108930U;
  Tanques_quick_start_DW.state_e[0] = 362436069U;
  Tanques_quick_start_DW.state_e[1] = 521288629U;
}

/* Model terminate function */
void Tanques_quick_start_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: Tanques_quick_start/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    hil_task_stop_all(Tanques_quick_start_DW.HILInitialize_Card);
    hil_monitor_stop_all(Tanques_quick_start_DW.HILInitialize_Card);
    is_switching = false;
    if ((Tanques_quick_start_P.HILInitialize_set_analog_outp_h && !is_switching)
        || (Tanques_quick_start_P.HILInitialize_set_analog_outp_b &&
            is_switching)) {
      Tanques_quick_start_DW.HILInitialize_AOVoltages[0] =
        Tanques_quick_start_P.HILInitialize_final_analog_outp;
      Tanques_quick_start_DW.HILInitialize_AOVoltages[1] =
        Tanques_quick_start_P.HILInitialize_final_analog_outp;
      num_final_analog_outputs = 2U;
    }

    if (num_final_analog_outputs > 0) {
      result = hil_write_analog(Tanques_quick_start_DW.HILInitialize_Card,
        Tanques_quick_start_P.HILInitialize_analog_output_cha,
        num_final_analog_outputs,
        &Tanques_quick_start_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Tanques_quick_start_M, _rt_error_message);
      }
    }

    hil_task_delete_all(Tanques_quick_start_DW.HILInitialize_Card);
    hil_monitor_delete_all(Tanques_quick_start_DW.HILInitialize_Card);
    hil_close(Tanques_quick_start_DW.HILInitialize_Card);
    Tanques_quick_start_DW.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  if (tid == 1)
    tid = 0;
  Tanques_quick_start_output(tid);
}

void MdlUpdate(int_T tid)
{
  if (tid == 1)
    tid = 0;
  Tanques_quick_start_update(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  Tanques_quick_start_initialize();
}

void MdlTerminate(void)
{
  Tanques_quick_start_terminate();
}

/* Registration function */
RT_MODEL_Tanques_quick_start_T *Tanques_quick_start(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  Tanques_quick_start_P.Integrator_UpperSat = rtInf;
  Tanques_quick_start_P.Integrator_LowerSat = rtMinusInf;
  Tanques_quick_start_P.Integrator_UpperSat_i = rtInf;

  /* initialize real-time model */
  (void) memset((void *)Tanques_quick_start_M, 0,
                sizeof(RT_MODEL_Tanques_quick_start_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Tanques_quick_start_M->solverInfo,
                          &Tanques_quick_start_M->Timing.simTimeStep);
    rtsiSetTPtr(&Tanques_quick_start_M->solverInfo, &rtmGetTPtr
                (Tanques_quick_start_M));
    rtsiSetStepSizePtr(&Tanques_quick_start_M->solverInfo,
                       &Tanques_quick_start_M->Timing.stepSize0);
    rtsiSetdXPtr(&Tanques_quick_start_M->solverInfo,
                 &Tanques_quick_start_M->ModelData.derivs);
    rtsiSetContStatesPtr(&Tanques_quick_start_M->solverInfo, (real_T **)
                         &Tanques_quick_start_M->ModelData.contStates);
    rtsiSetNumContStatesPtr(&Tanques_quick_start_M->solverInfo,
      &Tanques_quick_start_M->Sizes.numContStates);
    rtsiSetErrorStatusPtr(&Tanques_quick_start_M->solverInfo,
                          (&rtmGetErrorStatus(Tanques_quick_start_M)));
    rtsiSetRTModelPtr(&Tanques_quick_start_M->solverInfo, Tanques_quick_start_M);
  }

  rtsiSetSimTimeStep(&Tanques_quick_start_M->solverInfo, MAJOR_TIME_STEP);
  Tanques_quick_start_M->ModelData.intgData.f[0] =
    Tanques_quick_start_M->ModelData.odeF[0];
  Tanques_quick_start_M->ModelData.contStates = ((real_T *)
    &Tanques_quick_start_X);
  rtsiSetSolverData(&Tanques_quick_start_M->solverInfo, (void *)
                    &Tanques_quick_start_M->ModelData.intgData);
  rtsiSetSolverName(&Tanques_quick_start_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Tanques_quick_start_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    Tanques_quick_start_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Tanques_quick_start_M->Timing.sampleTimes =
      (&Tanques_quick_start_M->Timing.sampleTimesArray[0]);
    Tanques_quick_start_M->Timing.offsetTimes =
      (&Tanques_quick_start_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Tanques_quick_start_M->Timing.sampleTimes[0] = (0.0);
    Tanques_quick_start_M->Timing.sampleTimes[1] = (0.1);
    Tanques_quick_start_M->Timing.sampleTimes[2] = (1.0);

    /* task offsets */
    Tanques_quick_start_M->Timing.offsetTimes[0] = (0.0);
    Tanques_quick_start_M->Timing.offsetTimes[1] = (0.0);
    Tanques_quick_start_M->Timing.offsetTimes[2] = (0.0);
  }

  rtmSetTPtr(Tanques_quick_start_M, &Tanques_quick_start_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Tanques_quick_start_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      Tanques_quick_start_M->Timing.perTaskSampleHitsArray;
    Tanques_quick_start_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    Tanques_quick_start_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Tanques_quick_start_M, 200.0);
  Tanques_quick_start_M->Timing.stepSize0 = 0.1;
  Tanques_quick_start_M->Timing.stepSize1 = 0.1;
  Tanques_quick_start_M->Timing.stepSize2 = 1.0;

  /* External mode info */
  Tanques_quick_start_M->Sizes.checksums[0] = (1984191458U);
  Tanques_quick_start_M->Sizes.checksums[1] = (1566655758U);
  Tanques_quick_start_M->Sizes.checksums[2] = (3235082960U);
  Tanques_quick_start_M->Sizes.checksums[3] = (1968222549U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[12];
    Tanques_quick_start_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
    systemRan[11] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Tanques_quick_start_M->extModeInfo,
      &Tanques_quick_start_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Tanques_quick_start_M->extModeInfo,
                        Tanques_quick_start_M->Sizes.checksums);
    rteiSetTPtr(Tanques_quick_start_M->extModeInfo, rtmGetTPtr
                (Tanques_quick_start_M));
  }

  Tanques_quick_start_M->solverInfoPtr = (&Tanques_quick_start_M->solverInfo);
  Tanques_quick_start_M->Timing.stepSize = (0.1);
  rtsiSetFixedStepSize(&Tanques_quick_start_M->solverInfo, 0.1);
  rtsiSetSolverMode(&Tanques_quick_start_M->solverInfo, SOLVER_MODE_MULTITASKING);

  /* block I/O */
  Tanques_quick_start_M->ModelData.blockIO = ((void *) &Tanques_quick_start_B);
  (void) memset(((void *) &Tanques_quick_start_B), 0,
                sizeof(B_Tanques_quick_start_T));

  {
    Tanques_quick_start_B.TransferFcn = 0.0;
    Tanques_quick_start_B.TransferFcn1 = 0.0;
    Tanques_quick_start_B.UnitDelay[0] = 0.0;
    Tanques_quick_start_B.UnitDelay[1] = 0.0;
    Tanques_quick_start_B.GainError = 0.0;
    Tanques_quick_start_B.switch_input_signal = 0.0;
    Tanques_quick_start_B.offset = 0.0;
    Tanques_quick_start_B.step = 0.0;
    Tanques_quick_start_B.RateTransition = 0.0;
    Tanques_quick_start_B.MultiportSwitch = 0.0;
    Tanques_quick_start_B.TankEntry = 0.0;
    Tanques_quick_start_B.TankHeightSwitch = 0.0;
    Tanques_quick_start_B.Sum1 = 0.0;
    Tanques_quick_start_B.Sum4 = 0.0;
    Tanques_quick_start_B.ZeroConstant = 0.0;
    Tanques_quick_start_B.ControllerEnabler = 0.0;
    Tanques_quick_start_B.ControllerEntry = 0.0;
    Tanques_quick_start_B.PID_Kp = 0.0;
    Tanques_quick_start_B.PID_Kd = 0.0;
    Tanques_quick_start_B.Derivative = 0.0;
    Tanques_quick_start_B.Integrator = 0.0;
    Tanques_quick_start_B.Sum3 = 0.0;
    Tanques_quick_start_B.PID_Kp_g = 0.0;
    Tanques_quick_start_B.PID_Kd_h = 0.0;
    Tanques_quick_start_B.Derivative_c = 0.0;
    Tanques_quick_start_B.Integrator_j = 0.0;
    Tanques_quick_start_B.Sum3_p = 0.0;
    Tanques_quick_start_B.IPD_Kp = 0.0;
    Tanques_quick_start_B.IPD_Kd = 0.0;
    Tanques_quick_start_B.Derivative_g = 0.0;
    Tanques_quick_start_B.Integrator_b = 0.0;
    Tanques_quick_start_B.Sum3_j = 0.0;
    Tanques_quick_start_B.ControllerSwitch = 0.0;
    Tanques_quick_start_B.Switch = 0.0;
    Tanques_quick_start_B.IPD_Ki = 0.0;
    Tanques_quick_start_B.MatrixofGainsL[0] = 0.0;
    Tanques_quick_start_B.MatrixofGainsL[1] = 0.0;
    Tanques_quick_start_B.MatrixBDiscrete[0] = 0.0;
    Tanques_quick_start_B.MatrixBDiscrete[1] = 0.0;
    Tanques_quick_start_B.PID_Ki = 0.0;
    Tanques_quick_start_B.PID_Ki_k = 0.0;
    Tanques_quick_start_B.Sum2[0] = 0.0;
    Tanques_quick_start_B.Sum2[1] = 0.0;
    Tanques_quick_start_B.VoltstocmTank1 = 0.0;
    Tanques_quick_start_B.VoltstocmTank2 = 0.0;
    Tanques_quick_start_B.amp = 0.0;
    Tanques_quick_start_B.y = 0.0;
    Tanques_quick_start_B.y_n[0] = 0.0;
    Tanques_quick_start_B.y_n[1] = 0.0;
    Tanques_quick_start_B.y_m = 0.0;
    Tanques_quick_start_B.tensao = 0.0;
    Tanques_quick_start_B.tensao_h = 0.0;
  }

  /* parameters */
  Tanques_quick_start_M->ModelData.defaultParam = ((real_T *)
    &Tanques_quick_start_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &Tanques_quick_start_X;
    Tanques_quick_start_M->ModelData.contStates = (x);
    (void) memset((void *)&Tanques_quick_start_X, 0,
                  sizeof(X_Tanques_quick_start_T));
  }

  /* states (dwork) */
  Tanques_quick_start_M->ModelData.dwork = ((void *) &Tanques_quick_start_DW);
  (void) memset((void *)&Tanques_quick_start_DW, 0,
                sizeof(DW_Tanques_quick_start_T));
  Tanques_quick_start_DW.UnitDelay_DSTATE[0] = 0.0;
  Tanques_quick_start_DW.UnitDelay_DSTATE[1] = 0.0;
  Tanques_quick_start_DW.HILInitialize_AIMinimums[0] = 0.0;
  Tanques_quick_start_DW.HILInitialize_AIMinimums[1] = 0.0;
  Tanques_quick_start_DW.HILInitialize_AIMaximums[0] = 0.0;
  Tanques_quick_start_DW.HILInitialize_AIMaximums[1] = 0.0;
  Tanques_quick_start_DW.HILInitialize_AOMinimums[0] = 0.0;
  Tanques_quick_start_DW.HILInitialize_AOMinimums[1] = 0.0;
  Tanques_quick_start_DW.HILInitialize_AOMaximums[0] = 0.0;
  Tanques_quick_start_DW.HILInitialize_AOMaximums[1] = 0.0;
  Tanques_quick_start_DW.HILInitialize_AOVoltages[0] = 0.0;
  Tanques_quick_start_DW.HILInitialize_AOVoltages[1] = 0.0;
  Tanques_quick_start_DW.HILInitialize_FilterFrequency[0] = 0.0;
  Tanques_quick_start_DW.HILInitialize_FilterFrequency[1] = 0.0;
  Tanques_quick_start_DW.RateTransition_Buffer0 = 0.0;
  Tanques_quick_start_DW.TimeStampA = 0.0;
  Tanques_quick_start_DW.LastUAtTimeA = 0.0;
  Tanques_quick_start_DW.TimeStampB = 0.0;
  Tanques_quick_start_DW.LastUAtTimeB = 0.0;
  Tanques_quick_start_DW.TimeStampA_e = 0.0;
  Tanques_quick_start_DW.LastUAtTimeA_c = 0.0;
  Tanques_quick_start_DW.TimeStampB_g = 0.0;
  Tanques_quick_start_DW.LastUAtTimeB_a = 0.0;
  Tanques_quick_start_DW.TimeStampA_h = 0.0;
  Tanques_quick_start_DW.LastUAtTimeA_d = 0.0;
  Tanques_quick_start_DW.TimeStampB_c = 0.0;
  Tanques_quick_start_DW.LastUAtTimeB_b = 0.0;
  Tanques_quick_start_DW.HILReadAnalog_Buffer[0] = 0.0;
  Tanques_quick_start_DW.HILReadAnalog_Buffer[1] = 0.0;

  {
    int_T i;
    for (i = 0; i < 35; i++) {
      Tanques_quick_start_DW.RandomSource_STATE_DWORK[i] = 0.0;
    }
  }

  Tanques_quick_start_DW.currAmp = 0.0;
  Tanques_quick_start_DW.integral = 0.0;
  Tanques_quick_start_DW.pidPreviousTime = 0.0;
  Tanques_quick_start_DW.previousError = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Tanques_quick_start_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 15;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Initialize Sizes */
  Tanques_quick_start_M->Sizes.numContStates = (5);/* Number of continuous states */
  Tanques_quick_start_M->Sizes.numY = (0);/* Number of model outputs */
  Tanques_quick_start_M->Sizes.numU = (0);/* Number of model inputs */
  Tanques_quick_start_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Tanques_quick_start_M->Sizes.numSampTimes = (3);/* Number of sample times */
  Tanques_quick_start_M->Sizes.numBlocks = (107);/* Number of blocks */
  Tanques_quick_start_M->Sizes.numBlockIO = (50);/* Number of block outputs */
  Tanques_quick_start_M->Sizes.numBlockPrms = (130);/* Sum of parameter "widths" */
  return Tanques_quick_start_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
