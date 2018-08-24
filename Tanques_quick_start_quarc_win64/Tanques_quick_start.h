/*
 * Tanques_quick_start.h
 *
 * Code generation for model "Tanques_quick_start".
 *
 * Model version              : 1.785
 * Simulink Coder version : 8.6 (R2014a) 27-Dec-2013
 * C source code generated on : Fri Aug 24 08:08:57 2018
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#ifndef RTW_HEADER_Tanques_quick_start_h_
#define RTW_HEADER_Tanques_quick_start_h_
#include <math.h>
#include <string.h>
#ifndef Tanques_quick_start_COMMON_INCLUDES_
# define Tanques_quick_start_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "hil.h"
#include "quanser_messages.h"
#include "quanser_extern.h"
#endif                                 /* Tanques_quick_start_COMMON_INCLUDES_ */

#include "Tanques_quick_start_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->ModelData.intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->ModelData.intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ()
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->ModelData.odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->ModelData.odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ((rtm)->Timing.RateInteraction)
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ((rtm)->Timing.RateInteraction = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ()
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->ModelData.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->ModelData.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ((rtm)->Timing.TaskCounters = (val))
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->ModelData.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->ModelData.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) <= 1)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) (((rtm)->Timing.sampleTimeTaskIDPtr[sti] == (tid)))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define Tanques_quick_start_rtModel    RT_MODEL_Tanques_quick_start_T

/* Block signals (auto storage) */
typedef struct {
  real_T TransferFcn;                  /* '<Root>/Transfer Fcn' */
  real_T TransferFcn1;                 /* '<Root>/Transfer Fcn1' */
  real_T ZeroConstant;                 /* '<Root>/Zero Constant' */
  real_T ControllerEnabler;            /* '<Root>/Controller Enabler ' */
  real_T switch_input_signal;          /* '<Root>/switch_input_signal' */
  real_T offset;                       /* '<Root>/offset' */
  real_T step;                         /* '<Root>/step' */
  real_T RateTransition;               /* '<Root>/Rate Transition' */
  real_T MultiportSwitch;              /* '<Root>/Multiport Switch' */
  real_T ControllerEntry;              /* '<Root>/Controller Entry' */
  real_T TankEntry;                    /* '<Root>/Tank Entry' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T PID_Kp;                       /* '<Root>/PID_Kp' */
  real_T PID_Kd;                       /* '<Root>/PID_Kd' */
  real_T Derivative;                   /* '<S6>/Derivative' */
  real_T Integrator;                   /* '<S6>/Integrator' */
  real_T Sum3;                         /* '<S6>/Sum3' */
  real_T PID_Kp_g;                     /* '<Root>/PI-D_Kp' */
  real_T PID_Kd_h;                     /* '<Root>/PI-D_Kd' */
  real_T Derivative_c;                 /* '<S5>/Derivative' */
  real_T Integrator_j;                 /* '<S5>/Integrator' */
  real_T Sum3_p;                       /* '<S5>/Sum3' */
  real_T IPD_Kp;                       /* '<Root>/I-PD_Kp' */
  real_T IPD_Kd;                       /* '<Root>/I-PD_Kd' */
  real_T Derivative_g;                 /* '<S2>/Derivative' */
  real_T Integrator_b;                 /* '<S2>/Integrator' */
  real_T Sum3_j;                       /* '<S2>/Sum3' */
  real_T ControllerSwitch;             /* '<Root>/Controller Switch' */
  real_T Switch;                       /* '<Root>/Switch' */
  real_T IPD_Ki;                       /* '<Root>/I-PD_Ki' */
  real_T PID_Ki;                       /* '<Root>/PI-D_Ki ' */
  real_T PID_Ki_k;                     /* '<Root>/PID_Ki' */
  real_T VoltstocmTank1;               /* '<Root>/Volts to cm Tank 1 ' */
  real_T VoltstocmTank2;               /* '<Root>/Volts to cm Tank 2' */
  real_T amp;                          /* '<Root>/PRS' */
  real_T tensao;                       /* '<Root>/MATLAB Function2' */
  real_T tensao_h;                     /* '<Root>/MATLAB Function1' */
  uint16_T FixPtSwitch;                /* '<S10>/FixPt Switch' */
} B_Tanques_quick_start_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T HILInitialize_AIMinimums[2];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AIMaximums[2];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AOMinimums[2];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AOMaximums[2];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AOVoltages[2];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_FilterFrequency[2];/* '<Root>/HIL Initialize' */
  real_T RateTransition_Buffer0;       /* '<Root>/Rate Transition' */
  real_T TimeStampA;                   /* '<S6>/Derivative' */
  real_T LastUAtTimeA;                 /* '<S6>/Derivative' */
  real_T TimeStampB;                   /* '<S6>/Derivative' */
  real_T LastUAtTimeB;                 /* '<S6>/Derivative' */
  real_T TimeStampA_e;                 /* '<S5>/Derivative' */
  real_T LastUAtTimeA_c;               /* '<S5>/Derivative' */
  real_T TimeStampB_g;                 /* '<S5>/Derivative' */
  real_T LastUAtTimeB_a;               /* '<S5>/Derivative' */
  real_T TimeStampA_h;                 /* '<S2>/Derivative' */
  real_T LastUAtTimeA_d;               /* '<S2>/Derivative' */
  real_T TimeStampB_c;                 /* '<S2>/Derivative' */
  real_T LastUAtTimeB_b;               /* '<S2>/Derivative' */
  real_T HILReadAnalog_Buffer[2];      /* '<Root>/HIL Read Analog' */
  real_T RandomSource_STATE_DWORK[35]; /* '<S8>/Random Source' */
  real_T currAmp;                      /* '<Root>/currAmp' */
  real_T integral;                     /* '<Root>/integral' */
  real_T pidPreviousTime;              /* '<Root>/pidPreviousTime' */
  real_T previousError;                /* '<Root>/previousError' */
  t_card HILInitialize_Card;           /* '<Root>/HIL Initialize' */
  struct {
    void *LoggedData;
  } AlturadoTanque1cm_PWORK;           /* '<Root>/Altura do Tanque 1 (cm)' */

  struct {
    void *LoggedData;
  } AlturadoTanque2cm_PWORK;           /* '<Root>/Altura do Tanque 2 (cm)' */

  void *HILWriteAnalog_PWORK;          /* '<Root>/HIL Write Analog' */
  struct {
    void *LoggedData;
  } SinaldeErro_PWORK;                 /* '<Root>/Sinal de Erro' */

  struct {
    void *LoggedData;
  } SinaldeSadadaMalhaAberta_PWORK;    /* '<Root>/Sinal de Saída da Malha Aberta' */

  struct {
    void *LoggedData;
  } SinaldeSadadaMalhaFechada_PWORK;   /* '<Root>/Sinal de Saída da Malha Fechada' */

  struct {
    void *LoggedData;
  } SinaldeSadadoControlador_PWORK;    /* '<Root>/Sinal de Saída do Controlador' */

  struct {
    void *LoggedData;
  } SinaldeSadadoIPD_PWORK;            /* '<Root>/Sinal de Saída do I-PD' */

  struct {
    void *LoggedData;
  } SinaldeSadadoPID_PWORK;            /* '<Root>/Sinal de Saída do PI-D' */

  struct {
    void *LoggedData;
  } SinaldeSadadoPID_PWORK_o;          /* '<Root>/Sinal de Saída do PID' */

  struct {
    void *LoggedData;
  } TensonaBombaV_PWORK;               /* '<Root>/Tensão na Bomba (V)' */

  void *HILReadAnalog_PWORK;           /* '<Root>/HIL Read Analog' */
  struct {
    void *LoggedData;
  } controller_signals1_PWORK;         /* '<S2>/controller_signals1' */

  struct {
    void *LoggedData;
  } controller_signals_PWORK;          /* '<S5>/controller_signals' */

  struct {
    void *LoggedData;
  } AcoesdeControle_PWORK;             /* '<S6>/Acoes de Controle' */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S6>/Scope' */

  int32_T HILInitialize_ClockModes;    /* '<Root>/HIL Initialize' */
  int32_T HILInitialize_QuadratureModes[2];/* '<Root>/HIL Initialize' */
  int32_T HILInitialize_InitialEICounts[2];/* '<Root>/HIL Initialize' */
  uint32_T RandomSource_SEED_DWORK;    /* '<S8>/Random Source' */
  uint32_T method;                     /* '<Root>/PRS' */
  uint32_T state;                      /* '<Root>/PRS' */
  uint32_T state_e[2];                 /* '<Root>/PRS' */
  uint32_T state_i[625];               /* '<Root>/PRS' */
  uint16_T Output_DSTATE;              /* '<S1>/Output' */
  uint16_T currPeriod;                 /* '<Root>/currPeriod' */
  uint16_T prevTime;                   /* '<Root>/prevTime' */
  boolean_T state_not_empty;           /* '<Root>/PRS' */
} DW_Tanques_quick_start_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T TransferFcn_CSTATE;           /* '<Root>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE;          /* '<Root>/Transfer Fcn1' */
  real_T Integrator_CSTATE;            /* '<S6>/Integrator' */
  real_T Integrator_CSTATE_j;          /* '<S5>/Integrator' */
  real_T Integrator_CSTATE_p;          /* '<S2>/Integrator' */
} X_Tanques_quick_start_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T TransferFcn_CSTATE;           /* '<Root>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE;          /* '<Root>/Transfer Fcn1' */
  real_T Integrator_CSTATE;            /* '<S6>/Integrator' */
  real_T Integrator_CSTATE_j;          /* '<S5>/Integrator' */
  real_T Integrator_CSTATE_p;          /* '<S2>/Integrator' */
} XDot_Tanques_quick_start_T;

/* State disabled  */
typedef struct {
  boolean_T TransferFcn_CSTATE;        /* '<Root>/Transfer Fcn' */
  boolean_T TransferFcn1_CSTATE;       /* '<Root>/Transfer Fcn1' */
  boolean_T Integrator_CSTATE;         /* '<S6>/Integrator' */
  boolean_T Integrator_CSTATE_j;       /* '<S5>/Integrator' */
  boolean_T Integrator_CSTATE_p;       /* '<S2>/Integrator' */
} XDis_Tanques_quick_start_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            Tanques_quick_start_B
#define BlockIO                        B_Tanques_quick_start_T
#define rtX                            Tanques_quick_start_X
#define ContinuousStates               X_Tanques_quick_start_T
#define rtXdot                         Tanques_quick_start_XDot
#define StateDerivatives               XDot_Tanques_quick_start_T
#define tXdis                          Tanques_quick_start_XDis
#define StateDisabled                  XDis_Tanques_quick_start_T
#define rtP                            Tanques_quick_start_P
#define Parameters                     P_Tanques_quick_start_T
#define rtDWork                        Tanques_quick_start_DW
#define D_Work                         DW_Tanques_quick_start_T

/* Parameters (auto storage) */
struct P_Tanques_quick_start_T_ {
  real_T RandomSource_MinVal;          /* Mask Parameter: RandomSource_MinVal
                                        * Referenced by: '<S8>/Random Source'
                                        */
  real_T HILInitialize_analog_input_maxi;/* Mask Parameter: HILInitialize_analog_input_maxi
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_analog_input_mini;/* Mask Parameter: HILInitialize_analog_input_mini
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_analog_output_max;/* Mask Parameter: HILInitialize_analog_output_max
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_analog_output_min;/* Mask Parameter: HILInitialize_analog_output_min
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_final_analog_outp;/* Mask Parameter: HILInitialize_final_analog_outp
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_final_pwm_outputs;/* Mask Parameter: HILInitialize_final_pwm_outputs
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_initial_analog_ou;/* Mask Parameter: HILInitialize_initial_analog_ou
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_initial_pwm_outpu;/* Mask Parameter: HILInitialize_initial_pwm_outpu
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_pwm_frequency;  /* Mask Parameter: HILInitialize_pwm_frequency
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_set_other_outputs;/* Mask Parameter: HILInitialize_set_other_outputs
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_set_other_outpu_d;/* Mask Parameter: HILInitialize_set_other_outpu_d
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_set_other_outpu_p;/* Mask Parameter: HILInitialize_set_other_outpu_p
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_set_other_outpu_f;/* Mask Parameter: HILInitialize_set_other_outpu_f
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_watchdog_analog_o;/* Mask Parameter: HILInitialize_watchdog_analog_o
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_watchdog_pwm_outp;/* Mask Parameter: HILInitialize_watchdog_pwm_outp
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  int32_T HILInitialize_hardware_clocks;/* Mask Parameter: HILInitialize_hardware_clocks
                                         * Referenced by: '<Root>/HIL Initialize'
                                         */
  int32_T HILInitialize_initial_encoder_c;/* Mask Parameter: HILInitialize_initial_encoder_c
                                           * Referenced by: '<Root>/HIL Initialize'
                                           */
  int32_T HILInitialize_pwm_modes;     /* Mask Parameter: HILInitialize_pwm_modes
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  int32_T HILInitialize_watchdog_digital_;/* Mask Parameter: HILInitialize_watchdog_digital_
                                           * Referenced by: '<Root>/HIL Initialize'
                                           */
  uint32_T HILInitialize_analog_input_chan[2];/* Mask Parameter: HILInitialize_analog_input_chan
                                               * Referenced by: '<Root>/HIL Initialize'
                                               */
  uint32_T HILInitialize_analog_output_cha[2];/* Mask Parameter: HILInitialize_analog_output_cha
                                               * Referenced by: '<Root>/HIL Initialize'
                                               */
  uint32_T HILWriteAnalog_channels;    /* Mask Parameter: HILWriteAnalog_channels
                                        * Referenced by: '<Root>/HIL Write Analog'
                                        */
  uint32_T HILReadAnalog_channels[2];  /* Mask Parameter: HILReadAnalog_channels
                                        * Referenced by: '<Root>/HIL Read Analog'
                                        */
  uint32_T HILInitialize_encoder_channels[2];/* Mask Parameter: HILInitialize_encoder_channels
                                              * Referenced by: '<Root>/HIL Initialize'
                                              */
  uint32_T HILInitialize_quadrature;   /* Mask Parameter: HILInitialize_quadrature
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  uint32_T randP_seed;                 /* Mask Parameter: randP_seed
                                        * Referenced by: '<S8>/Random Source'
                                        */
  uint16_T WrapToZero_Threshold;       /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S10>/FixPt Switch'
                                        */
  boolean_T HILInitialize_active;      /* Mask Parameter: HILInitialize_active
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  boolean_T HILInitialize_final_digital_out;/* Mask Parameter: HILInitialize_final_digital_out
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_initial_digital_o;/* Mask Parameter: HILInitialize_initial_digital_o
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_input_;/* Mask Parameter: HILInitialize_set_analog_input_
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_inpu_h;/* Mask Parameter: HILInitialize_set_analog_inpu_h
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_output;/* Mask Parameter: HILInitialize_set_analog_output
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_c;/* Mask Parameter: HILInitialize_set_analog_outp_c
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_o;/* Mask Parameter: HILInitialize_set_analog_outp_o
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_e;/* Mask Parameter: HILInitialize_set_analog_outp_e
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_b;/* Mask Parameter: HILInitialize_set_analog_outp_b
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_h;/* Mask Parameter: HILInitialize_set_analog_outp_h
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_out_bm;/* Mask Parameter: HILInitialize_set_analog_out_bm
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_clock_frequen;/* Mask Parameter: HILInitialize_set_clock_frequen
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_clock_frequ_i;/* Mask Parameter: HILInitialize_set_clock_frequ_i
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_clock_params_;/* Mask Parameter: HILInitialize_set_clock_params_
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_clock_param_n;/* Mask Parameter: HILInitialize_set_clock_param_n
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_outpu;/* Mask Parameter: HILInitialize_set_digital_outpu
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_l;/* Mask Parameter: HILInitialize_set_digital_out_l
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_k;/* Mask Parameter: HILInitialize_set_digital_out_k
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_o;/* Mask Parameter: HILInitialize_set_digital_out_o
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_j;/* Mask Parameter: HILInitialize_set_digital_out_j
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_ou_ol;/* Mask Parameter: HILInitialize_set_digital_ou_ol
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_i;/* Mask Parameter: HILInitialize_set_digital_out_i
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_encoder_count;/* Mask Parameter: HILInitialize_set_encoder_count
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_encoder_cou_e;/* Mask Parameter: HILInitialize_set_encoder_cou_e
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_encoder_param;/* Mask Parameter: HILInitialize_set_encoder_param
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_encoder_par_a;/* Mask Parameter: HILInitialize_set_encoder_par_a
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_other_outpu_a;/* Mask Parameter: HILInitialize_set_other_outpu_a
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_a;/* Mask Parameter: HILInitialize_set_pwm_outputs_a
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_i;/* Mask Parameter: HILInitialize_set_pwm_outputs_i
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_j;/* Mask Parameter: HILInitialize_set_pwm_outputs_j
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_b;/* Mask Parameter: HILInitialize_set_pwm_outputs_b
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_o;/* Mask Parameter: HILInitialize_set_pwm_outputs_o
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_params_at;/* Mask Parameter: HILInitialize_set_pwm_params_at
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_params__e;/* Mask Parameter: HILInitialize_set_pwm_params__e
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<Root>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<Root>/Transfer Fcn'
                                        */
  real_T TransferFcn1_A;               /* Computed Parameter: TransferFcn1_A
                                        * Referenced by: '<Root>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C;               /* Computed Parameter: TransferFcn1_C
                                        * Referenced by: '<Root>/Transfer Fcn1'
                                        */
  real_T ZeroConstant_Value;           /* Expression: 0
                                        * Referenced by: '<Root>/Zero Constant'
                                        */
  real_T ControllerEnabler_Value;      /* Expression: 2
                                        * Referenced by: '<Root>/Controller Enabler '
                                        */
  real_T switch_input_signal_Value;    /* Expression: 2
                                        * Referenced by: '<Root>/switch_input_signal'
                                        */
  real_T SignalGenerator_Amplitude;    /* Expression: 15
                                        * Referenced by: '<Root>/Signal Generator'
                                        */
  real_T SignalGenerator_Frequency;    /* Expression: 6.2832
                                        * Referenced by: '<Root>/Signal Generator'
                                        */
  real_T offset_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/offset'
                                        */
  real_T step_Value;                   /* Expression: 15
                                        * Referenced by: '<Root>/step'
                                        */
  real_T RateTransition_X0;            /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
  real_T ControllerEntry_Value;        /* Expression: 1
                                        * Referenced by: '<Root>/Controller Entry'
                                        */
  real_T TankEntry_Value;              /* Expression: 2
                                        * Referenced by: '<Root>/Tank Entry'
                                        */
  real_T PID_Kp_Gain;                  /* Expression: 1.3
                                        * Referenced by: '<Root>/PID_Kp'
                                        */
  real_T PID_Kd_Gain;                  /* Expression: 0
                                        * Referenced by: '<Root>/PID_Kd'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S6>/Integrator'
                                        */
  real_T Integrator_UpperSat;          /* Expression: inf
                                        * Referenced by: '<S6>/Integrator'
                                        */
  real_T Integrator_LowerSat;          /* Expression: -inf
                                        * Referenced by: '<S6>/Integrator'
                                        */
  real_T PID_Kp_Gain_b;                /* Expression: 2.2
                                        * Referenced by: '<Root>/PI-D_Kp'
                                        */
  real_T PID_Kd_Gain_a;                /* Expression: 0.001
                                        * Referenced by: '<Root>/PI-D_Kd'
                                        */
  real_T Integrator_IC_b;              /* Expression: 0
                                        * Referenced by: '<S5>/Integrator'
                                        */
  real_T IPD_Kp_Gain;                  /* Expression: 1.3
                                        * Referenced by: '<Root>/I-PD_Kp'
                                        */
  real_T IPD_Kd_Gain;                  /* Expression: 0.01
                                        * Referenced by: '<Root>/I-PD_Kd'
                                        */
  real_T Integrator_IC_p;              /* Expression: 0
                                        * Referenced by: '<S2>/Integrator'
                                        */
  real_T Integrator_UpperSat_i;        /* Expression: 35
                                        * Referenced by: '<S2>/Integrator'
                                        */
  real_T Integrator_LowerSat_g;        /* Expression: -1
                                        * Referenced by: '<S2>/Integrator'
                                        */
  real_T Switch_Threshold;             /* Expression: 28
                                        * Referenced by: '<Root>/Switch'
                                        */
  real_T IPD_Ki_Gain;                  /* Expression: 0.05
                                        * Referenced by: '<Root>/I-PD_Ki'
                                        */
  real_T PID_Ki_Gain;                  /* Expression: 0.05
                                        * Referenced by: '<Root>/PI-D_Ki '
                                        */
  real_T PID_Ki_Gain_g;                /* Expression: 0
                                        * Referenced by: '<Root>/PID_Ki'
                                        */
  real_T amin_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/amin'
                                        */
  real_T amax_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/amax'
                                        */
  real_T RandomSource_MaxRTP;          /* Expression: MaxVal
                                        * Referenced by: '<S8>/Random Source'
                                        */
  real_T VoltstocmTank1_Gain;          /* Expression: 30/4.8
                                        * Referenced by: '<Root>/Volts to cm Tank 1 '
                                        */
  real_T VoltstocmTank2_Gain;          /* Expression: 30/4.8
                                        * Referenced by: '<Root>/Volts to cm Tank 2'
                                        */
  real_T currAmp_InitialValue;         /* Expression: 0
                                        * Referenced by: '<Root>/currAmp'
                                        */
  real_T integral_InitialValue;        /* Expression: 0
                                        * Referenced by: '<Root>/integral'
                                        */
  real_T pidPreviousTime_InitialValue; /* Expression: 0
                                        * Referenced by: '<Root>/pidPreviousTime'
                                        */
  real_T previousError_InitialValue;   /* Expression: 0
                                        * Referenced by: '<Root>/previousError'
                                        */
  uint16_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S10>/Constant'
                                        */
  uint16_T FixPtConstant_Value;        /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S9>/FixPt Constant'
                                        */
  uint16_T Output_InitialCondition;    /* Computed Parameter: Output_InitialCondition
                                        * Referenced by: '<S1>/Output'
                                        */
  uint16_T pmin_Value;                 /* Computed Parameter: pmin_Value
                                        * Referenced by: '<Root>/pmin'
                                        */
  uint16_T pmax_Value;                 /* Computed Parameter: pmax_Value
                                        * Referenced by: '<Root>/pmax'
                                        */
  uint16_T currPeriod_InitialValue;    /* Computed Parameter: currPeriod_InitialValue
                                        * Referenced by: '<Root>/currPeriod'
                                        */
  uint16_T prevTime_InitialValue;      /* Computed Parameter: prevTime_InitialValue
                                        * Referenced by: '<Root>/prevTime'
                                        */
  boolean_T HILWriteAnalog_Active;     /* Computed Parameter: HILWriteAnalog_Active
                                        * Referenced by: '<Root>/HIL Write Analog'
                                        */
  boolean_T HILReadAnalog_Active;      /* Computed Parameter: HILReadAnalog_Active
                                        * Referenced by: '<Root>/HIL Read Analog'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Tanques_quick_start_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    real_T odeF[1][5];
    ODE1_IntgData intgData;
    void *dwork;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    struct {
      boolean_T TID1_2;
    } RateInteraction;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[3];
    time_T offsetTimesArray[3];
    int_T sampleTimeTaskIDArray[3];
    int_T sampleHitArray[3];
    int_T perTaskSampleHitsArray[9];
    time_T tArray[3];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Tanques_quick_start_T Tanques_quick_start_P;

/* Block signals (auto storage) */
extern B_Tanques_quick_start_T Tanques_quick_start_B;

/* Continuous states (auto storage) */
extern X_Tanques_quick_start_T Tanques_quick_start_X;

/* Block states (auto storage) */
extern DW_Tanques_quick_start_T Tanques_quick_start_DW;

/* External function called from main */
extern time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
  ;

/* Model entry point functions */
extern void Tanques_quick_start_initialize(void);
extern void Tanques_quick_start_output0(void);
extern void Tanques_quick_start_update0(void);
extern void Tanques_quick_start_output(int_T tid);
extern void Tanques_quick_start_update(int_T tid);
extern void Tanques_quick_start_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Tanques_quick_start_T *const Tanques_quick_start_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Tanques_quick_start'
 * '<S1>'   : 'Tanques_quick_start/Counter Free-Running'
 * '<S2>'   : 'Tanques_quick_start/I-PD'
 * '<S3>'   : 'Tanques_quick_start/MATLAB Function1'
 * '<S4>'   : 'Tanques_quick_start/MATLAB Function2'
 * '<S5>'   : 'Tanques_quick_start/PI-D'
 * '<S6>'   : 'Tanques_quick_start/PID'
 * '<S7>'   : 'Tanques_quick_start/PRS'
 * '<S8>'   : 'Tanques_quick_start/randP'
 * '<S9>'   : 'Tanques_quick_start/Counter Free-Running/Increment Real World'
 * '<S10>'  : 'Tanques_quick_start/Counter Free-Running/Wrap To Zero'
 */
#endif                                 /* RTW_HEADER_Tanques_quick_start_h_ */
