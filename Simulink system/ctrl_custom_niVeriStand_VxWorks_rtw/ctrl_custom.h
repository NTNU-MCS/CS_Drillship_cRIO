/*
 * ctrl_custom.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ctrl_custom".
 *
 * Model version              : 1.84
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Tue Jul 18 10:57:13 2017
 *
 * Target selection: NIVeriStand_VxWorks.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ctrl_custom_h_
#define RTW_HEADER_ctrl_custom_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef ctrl_custom_COMMON_INCLUDES_
# define ctrl_custom_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#endif                                 /* ctrl_custom_COMMON_INCLUDES_ */

#include "ctrl_custom_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
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
# define rtmGetFirstInitCondFlag(rtm)  ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
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

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
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
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
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
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
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

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
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
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
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
# define rtmGetRootDWork(rtm)          ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->dwork = (val))
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

#ifndef rtmGetSelf
# define rtmGetSelf(rtm)               ()
#endif

#ifndef rtmSetSelf
# define rtmSetSelf(rtm, val)          ()
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
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
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
# define rtmGetU(rtm)                  ((rtm)->inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->dwork[idx] = (val))
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
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmSetFirstInitCond
# define rtmSetFirstInitCond(rtm, val) ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmIsFirstInitCond
# define rtmIsFirstInitCond(rtm)       ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
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
#define ctrl_custom_rtModel            RT_MODEL_ctrl_custom_T

/* Block signals for system '<S8>/MATLAB Function' */
typedef struct {
  real_T y[9];                         /* '<S8>/MATLAB Function' */
} B_MATLABFunction_ctrl_custom_T;

/* Block signals for system '<S40>/CoreSubsys' */
typedef struct {
  real_T angle;                        /* '<S40>/Discrete-Time Integrator' */
  real_T Delay;                        /* '<S40>/Delay' */
  real_T MaxRotationRate;              /* '<S40>/Max Rotation Rate' */
} B_CoreSubsys_ctrl_custom_T;

/* Block states (auto storage) for system '<S40>/CoreSubsys' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S40>/Discrete-Time Integrator' */
  real_T Delay_DSTATE;                 /* '<S40>/Delay' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S40>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator_IC_LOADI;/* '<S40>/Discrete-Time Integrator' */
} DW_CoreSubsys_ctrl_custom_T;

/* Block signals for system '<S47>/MATLAB Function2' */
typedef struct {
  real_T Tc_out;                       /* '<S47>/MATLAB Function2' */
} B_MATLABFunction2_ctrl_custom_T;

/* Block signals for system '<S65>/Core controller: Torque,Power and Combined Torque//Power' */
typedef struct {
  real_T Qcq;                          /* '<S65>/Core controller: Torque,Power and Combined Torque//Power' */
  real_T Qcp;                          /* '<S65>/Core controller: Torque,Power and Combined Torque//Power' */
  real_T Qcc;                          /* '<S65>/Core controller: Torque,Power and Combined Torque//Power' */
} B_CorecontrollerTorquePoweran_T;

/* Block signals for system '<S63>/Supervisor' */
typedef struct {
  real_T u;                            /* '<S63>/Supervisor' */
} B_Supervisor_ctrl_custom_T;

/* Block signals for system '<S70>/Actual Force and Torque' */
typedef struct {
  real_T Ta;                           /* '<S70>/Actual Force and Torque' */
  real_T Qa;                           /* '<S70>/Actual Force and Torque' */
} B_ActualForceandTorque_ctrl_c_T;

/* Block signals for system '<S72>/MATLAB Function' */
typedef struct {
  real_T n_d;                          /* '<S72>/MATLAB Function' */
  real_T T_r;                          /* '<S72>/MATLAB Function' */
} B_MATLABFunction_ctrl_custo_a_T;

/* Block signals (auto storage) */
typedef struct {
  real_T Inputtomodel;                 /* '<Root>/Input to model' */
  real_T start;                        /* '<Root>/start' */
  real_T K_p_x;                        /* '<S14>/K_p_x' */
  real_T K_p_y;                        /* '<S14>/K_p_y' */
  real_T K_p_psi;                      /* '<S14>/K_p_psi' */
  real_T K_i_psi;                      /* '<S14>/K_i_psi' */
  real_T K_i_x;                        /* '<S14>/K_i_x' */
  real_T K_i_y;                        /* '<S14>/K_i_y' */
  real_T K_d_psi;                      /* '<S14>/K_d_psi' */
  real_T K_d_x;                        /* '<S14>/K_d_x' */
  real_T K_d_y;                        /* '<S14>/K_d_y' */
  real_T x_m;                          /* '<S7>/x_m' */
  real_T Gain;                         /* '<S7>/Gain' */
  real_T y_m;                          /* '<S7>/y_m' */
  real_T Gain1;                        /* '<S7>/Gain1' */
  real_T psi_m;                        /* '<S7>/psi_m' */
  real_T Sum;                          /* '<S7>/Sum' */
  real_T Integrator[3];                /* '<S4>/Integrator' */
  real_T Sum_h;                        /* '<S25>/Sum' */
  real_T regulationerror[3];           /* '<S6>/Sum4' */
  real_T TmpSignalConversionAtMatrixMult[3];/* '<S6>/Transposed rotation  matrix in yaw1' */
  real_T Integrator1[3];               /* '<S8>/Integrator1' */
  real_T Integrator1_a[3];             /* '<S4>/Integrator1' */
  real_T Sum1[3];                      /* '<S6>/Sum1' */
  real_T Gain5;                        /* '<Root>/Gain5' */
  real_T Gain_h;                       /* '<Root>/Gain' */
  real_T Integrator2[3];               /* '<S4>/Integrator2' */
  real_T CreateDiagonalMatrix2[9];     /* '<S16>/Create Diagonal Matrix2' */
  real_T M1[3];                        /* '<S4>/M^-1' */
  real_T thr_angle_1;                  /* '<S12>/thr_angle_1' */
  real_T thr_angle_2;                  /* '<S12>/thr_angle_2' */
  real_T thr_angle_3;                  /* '<S12>/thr_angle_3' */
  real_T thr_angle_4;                  /* '<S12>/thr_angle_4' */
  real_T thr_angle_5;                  /* '<S12>/thr_angle_5' */
  real_T thr_angle_6;                  /* '<S12>/thr_angle_6' */
  real_T reset[6];                     /* '<S9>/reset' */
  real_T Angle_controller;             /* '<S9>/Angle_controller' */
  real_T ChoosingFixedAzimuthangle[6]; /* '<S9>/Choosing Fixed // Azimuth angle' */
  real_T Saturation1;                  /* '<S46>/Saturation 1' */
  real_T Saturation2;                  /* '<S46>/Saturation 2' */
  real_T Saturation3;                  /* '<S46>/Saturation 3' */
  real_T Saturation4;                  /* '<S46>/Saturation 4' */
  real_T Saturation5;                  /* '<S46>/Saturation 5' */
  real_T Saturation6;                  /* '<S46>/Saturation 6' */
  real_T reset_c;                      /* '<S62>/reset' */
  real_T reset_e;                      /* '<S71>/reset' */
  real_T reset_n;                      /* '<S80>/reset' */
  real_T reset_i;                      /* '<S89>/reset' */
  real_T reset_nr;                     /* '<S98>/reset' */
  real_T reset_l;                      /* '<S107>/reset' */
  real_T rpm1;                         /* '<S47>/rpm1 ' */
  real_T rpm2;                         /* '<S47>/rpm2' */
  real_T rpm3;                         /* '<S47>/rpm3' */
  real_T rpm4;                         /* '<S47>/rpm4' */
  real_T rpm5;                         /* '<S47>/rpm5' */
  real_T rpm6;                         /* '<S47>/rpm6' */
  real_T Gain1_n;                      /* '<Root>/Gain1' */
  real_T CreateDiagonalMatrix[9];      /* '<S16>/Create Diagonal Matrix' */
  real_T CreateDiagonalMatrix1[9];     /* '<S16>/Create Diagonal Matrix1' */
  real_T MatrixMultiply1[3];           /* '<S4>/Matrix Multiply1' */
  real_T Sum1_g[3];                    /* '<S4>/Sum1' */
  real_T x_ref;                        /* '<S8>/x_ref' */
  real_T y_ref;                        /* '<S8>/y_ref' */
  real_T w_x;                          /* '<S15>/w_x' */
  real_T w_y;                          /* '<S15>/w_y' */
  real_T w_psi;                        /* '<S15>/w_psi' */
  real_T zeta_psi;                     /* '<S15>/zeta_psi' */
  real_T zeta_x;                       /* '<S15>/zeta_x' */
  real_T zeta_y;                       /* '<S15>/zeta_y' */
  real_T T_psi;                        /* '<S15>/T_psi' */
  real_T T_x;                          /* '<S15>/T_x' */
  real_T T_y;                          /* '<S15>/T_y' */
  real_T psi_ref;                      /* '<S8>/psi_ref' */
  real_T Sum_m[3];                     /* '<S8>/Sum' */
  real_T Sum2[3];                      /* '<S8>/Sum2' */
  real_T Delay[6];                     /* '<S11>/Delay' */
  real_T Delay_d;                      /* '<S48>/Delay' */
  real_T Delay_j;                      /* '<S63>/Delay' */
  real_T DiscreteTransferFcn;          /* '<S63>/Discrete Transfer Fcn' */
  real_T TSamp;                        /* '<S66>/TSamp' */
  real_T Inertiacompensation;          /* '<S63>/Inertia compensation' */
  real_T Sum1_b;                       /* '<S63>/Sum1' */
  real_T Memory;                       /* '<S63>/Memory' */
  real_T Kp;                           /* '<S65>/Kp' */
  real_T reset_p;                      /* '<S65>/reset' */
  real_T Sum_hk;                       /* '<S63>/Sum' */
  real_T DiscreteTransferFcn_b;        /* '<S48>/Discrete Transfer Fcn' */
  real_T Findingrotationspeed;         /* '<S62>/Finding rotation speed' */
  real_T Ki;                           /* '<S65>/Ki' */
  real_T Delay_c;                      /* '<S49>/Delay' */
  real_T Delay_b;                      /* '<S72>/Delay' */
  real_T DiscreteTransferFcn_l;        /* '<S72>/Discrete Transfer Fcn' */
  real_T TSamp_m;                      /* '<S75>/TSamp' */
  real_T Inertiacompensation_b;        /* '<S72>/Inertia compensation' */
  real_T Sum1_l;                       /* '<S72>/Sum1' */
  real_T Memory_l;                     /* '<S72>/Memory' */
  real_T Kp_c;                         /* '<S74>/Kp' */
  real_T reset_l2;                     /* '<S74>/reset' */
  real_T Sum_d;                        /* '<S72>/Sum' */
  real_T DiscreteTransferFcn_c;        /* '<S49>/Discrete Transfer Fcn' */
  real_T Findingrotationspeed_h;       /* '<S71>/Finding rotation speed' */
  real_T Ki_c;                         /* '<S74>/Ki' */
  real_T Delay_h;                      /* '<S50>/Delay' */
  real_T Delay_i;                      /* '<S81>/Delay' */
  real_T DiscreteTransferFcn_d;        /* '<S81>/Discrete Transfer Fcn' */
  real_T TSamp_k;                      /* '<S84>/TSamp' */
  real_T Inertiacompensation_m;        /* '<S81>/Inertia compensation' */
  real_T Sum1_c;                       /* '<S81>/Sum1' */
  real_T Memory_ln;                    /* '<S81>/Memory' */
  real_T Kp_i;                         /* '<S83>/Kp' */
  real_T reset_i0;                     /* '<S83>/reset' */
  real_T Sum_n;                        /* '<S81>/Sum' */
  real_T DiscreteTransferFcn_o;        /* '<S50>/Discrete Transfer Fcn' */
  real_T Findingrotationspeed_m;       /* '<S80>/Finding rotation speed' */
  real_T Ki_o;                         /* '<S83>/Ki' */
  real_T Delay_e;                      /* '<S51>/Delay' */
  real_T Delay_m;                      /* '<S90>/Delay' */
  real_T DiscreteTransferFcn_p;        /* '<S90>/Discrete Transfer Fcn' */
  real_T TSamp_d;                      /* '<S93>/TSamp' */
  real_T Inertiacompensation_bn;       /* '<S90>/Inertia compensation' */
  real_T Sum1_cp;                      /* '<S90>/Sum1' */
  real_T Memory_j;                     /* '<S90>/Memory' */
  real_T Kp_o;                         /* '<S92>/Kp' */
  real_T reset_h;                      /* '<S92>/reset' */
  real_T Sum_a;                        /* '<S90>/Sum' */
  real_T DiscreteTransferFcn_oy;       /* '<S51>/Discrete Transfer Fcn' */
  real_T Findingrotationspeed_p;       /* '<S89>/Finding rotation speed' */
  real_T Ki_g;                         /* '<S92>/Ki' */
  real_T Delay_jj;                     /* '<S52>/Delay' */
  real_T Delay_n;                      /* '<S99>/Delay' */
  real_T DiscreteTransferFcn_br;       /* '<S99>/Discrete Transfer Fcn' */
  real_T TSamp_k4;                     /* '<S102>/TSamp' */
  real_T Inertiacompensation_a;        /* '<S99>/Inertia compensation' */
  real_T Sum1_e;                       /* '<S99>/Sum1' */
  real_T Memory_d;                     /* '<S99>/Memory' */
  real_T Kp_d;                         /* '<S101>/Kp' */
  real_T reset_ep;                     /* '<S101>/reset' */
  real_T Sum_f;                        /* '<S99>/Sum' */
  real_T DiscreteTransferFcn_m;        /* '<S52>/Discrete Transfer Fcn' */
  real_T Findingrotationspeed_j;       /* '<S98>/Finding rotation speed' */
  real_T Ki_m;                         /* '<S101>/Ki' */
  real_T Delay_mu;                     /* '<S53>/Delay' */
  real_T Delay_e5;                     /* '<S108>/Delay' */
  real_T DiscreteTransferFcn_lk;       /* '<S108>/Discrete Transfer Fcn' */
  real_T TSamp_mr;                     /* '<S111>/TSamp' */
  real_T Inertiacompensation_b3;       /* '<S108>/Inertia compensation' */
  real_T Sum1_p;                       /* '<S108>/Sum1' */
  real_T Memory_o;                     /* '<S108>/Memory' */
  real_T Kp_k;                         /* '<S110>/Kp' */
  real_T reset_iu;                     /* '<S110>/reset' */
  real_T Sum_g;                        /* '<S108>/Sum' */
  real_T DiscreteTransferFcn_f;        /* '<S53>/Discrete Transfer Fcn' */
  real_T Findingrotationspeed_c;       /* '<S107>/Finding rotation speed' */
  real_T Ki_l;                         /* '<S110>/Ki' */
  real_T TmpSignalConversionAtDelayInpor[6];/* '<S11>/Thrust and Shaft speed mapped to PWM' */
  real_T Acc_x;                        /* '<S1>/Acc_x' */
  real_T Acc_y;                        /* '<S1>/Acc_y' */
  real_T Acc_z;                        /* '<S1>/Acc_z' */
  real_T Gyro_x;                       /* '<S1>/Gyro_x' */
  real_T Gyro_y;                       /* '<S1>/Gyro_y' */
  real_T Gyro_z;                       /* '<S1>/Gyro_z' */
  real_T n_d;                          /* '<S108>/MATLAB Function' */
  real_T n_d_m;                        /* '<S81>/MATLAB Function' */
  real_T n_d_k;                        /* '<S63>/MATLAB Function' */
  real_T Qa;                           /* '<S61>/Actual Force and Torque' */
  real_T Pa;                           /* '<S61>/Actual Force and Torque' */
  real_T Tc_out;                       /* '<S47>/MATLAB Function1' */
  real_T output[12];                   /* '<S47>/MATLAB Function' */
  B_Supervisor_ctrl_custom_T sf_Supervisor_gj;/* '<S108>/Supervisor' */
  B_CorecontrollerTorquePoweran_T sf_CorecontrollerTorquePowera_g;/* '<S110>/Core controller: Torque,Power and Combined Torque//Power' */
  B_ActualForceandTorque_ctrl_c_T sf_ActualForceandTorque_c;/* '<S106>/Actual Force and Torque' */
  B_Supervisor_ctrl_custom_T sf_Supervisor_p;/* '<S99>/Supervisor' */
  B_MATLABFunction_ctrl_custo_a_T sf_MATLABFunction_o;/* '<S99>/MATLAB Function' */
  B_CorecontrollerTorquePoweran_T sf_CorecontrollerTorquePowera_o;/* '<S101>/Core controller: Torque,Power and Combined Torque//Power' */
  B_ActualForceandTorque_ctrl_c_T sf_ActualForceandTorque_k;/* '<S97>/Actual Force and Torque' */
  B_Supervisor_ctrl_custom_T sf_Supervisor_g;/* '<S90>/Supervisor' */
  B_MATLABFunction_ctrl_custo_a_T sf_MATLABFunction_dv;/* '<S90>/MATLAB Function' */
  B_CorecontrollerTorquePoweran_T sf_CorecontrollerTorquePowera_p;/* '<S92>/Core controller: Torque,Power and Combined Torque//Power' */
  B_ActualForceandTorque_ctrl_c_T sf_ActualForceandTorque_a;/* '<S88>/Actual Force and Torque' */
  B_Supervisor_ctrl_custom_T sf_Supervisor_j;/* '<S81>/Supervisor' */
  B_CorecontrollerTorquePoweran_T sf_CorecontrollerTorquePower_ao;/* '<S83>/Core controller: Torque,Power and Combined Torque//Power' */
  B_ActualForceandTorque_ctrl_c_T sf_ActualForceandTorque_f;/* '<S79>/Actual Force and Torque' */
  B_Supervisor_ctrl_custom_T sf_Supervisor_c;/* '<S72>/Supervisor' */
  B_MATLABFunction_ctrl_custo_a_T sf_MATLABFunction_a;/* '<S72>/MATLAB Function' */
  B_CorecontrollerTorquePoweran_T sf_CorecontrollerTorquePowera_a;/* '<S74>/Core controller: Torque,Power and Combined Torque//Power' */
  B_ActualForceandTorque_ctrl_c_T sf_ActualForceandTorque_m;/* '<S70>/Actual Force and Torque' */
  B_Supervisor_ctrl_custom_T sf_Supervisor;/* '<S63>/Supervisor' */
  B_CorecontrollerTorquePoweran_T sf_CorecontrollerTorquePowerand;/* '<S65>/Core controller: Torque,Power and Combined Torque//Power' */
  B_MATLABFunction2_ctrl_custom_T sf_MATLABFunction6;/* '<S47>/MATLAB Function6' */
  B_MATLABFunction2_ctrl_custom_T sf_MATLABFunction5;/* '<S47>/MATLAB Function5' */
  B_MATLABFunction2_ctrl_custom_T sf_MATLABFunction4;/* '<S47>/MATLAB Function4' */
  B_MATLABFunction2_ctrl_custom_T sf_MATLABFunction3;/* '<S47>/MATLAB Function3' */
  B_MATLABFunction2_ctrl_custom_T sf_MATLABFunction2;/* '<S47>/MATLAB Function2' */
  B_CoreSubsys_ctrl_custom_T CoreSubsys[6];/* '<S40>/CoreSubsys' */
  B_MATLABFunction_ctrl_custom_T sf_MATLABFunction1_k;/* '<S8>/MATLAB Function1' */
  B_MATLABFunction_ctrl_custom_T sf_MATLABFunction_b;/* '<S8>/MATLAB Function' */
} B_ctrl_custom_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Delay_DSTATE[6];              /* '<S11>/Delay' */
  real_T Delay_DSTATE_f;               /* '<S48>/Delay' */
  real_T Delay_DSTATE_k;               /* '<S63>/Delay' */
  real_T DiscreteTransferFcn_states[2];/* '<S63>/Discrete Transfer Fcn' */
  real_T UD_DSTATE;                    /* '<S66>/UD' */
  real_T DiscreteTransferFcn_states_k; /* '<S48>/Discrete Transfer Fcn' */
  real_T Delay_DSTATE_c;               /* '<S49>/Delay' */
  real_T Delay_DSTATE_j;               /* '<S72>/Delay' */
  real_T DiscreteTransferFcn_states_j[2];/* '<S72>/Discrete Transfer Fcn' */
  real_T UD_DSTATE_f;                  /* '<S75>/UD' */
  real_T DiscreteTransferFcn_states_j0;/* '<S49>/Discrete Transfer Fcn' */
  real_T Delay_DSTATE_m;               /* '<S50>/Delay' */
  real_T Delay_DSTATE_e;               /* '<S81>/Delay' */
  real_T DiscreteTransferFcn_states_f[2];/* '<S81>/Discrete Transfer Fcn' */
  real_T UD_DSTATE_p;                  /* '<S84>/UD' */
  real_T DiscreteTransferFcn_states_m; /* '<S50>/Discrete Transfer Fcn' */
  real_T Delay_DSTATE_kg;              /* '<S51>/Delay' */
  real_T Delay_DSTATE_ki;              /* '<S90>/Delay' */
  real_T DiscreteTransferFcn_states_e[2];/* '<S90>/Discrete Transfer Fcn' */
  real_T UD_DSTATE_a;                  /* '<S93>/UD' */
  real_T DiscreteTransferFcn_states_p; /* '<S51>/Discrete Transfer Fcn' */
  real_T Delay_DSTATE_p;               /* '<S52>/Delay' */
  real_T Delay_DSTATE_kf;              /* '<S99>/Delay' */
  real_T DiscreteTransferFcn_states_jn[2];/* '<S99>/Discrete Transfer Fcn' */
  real_T UD_DSTATE_l;                  /* '<S102>/UD' */
  real_T DiscreteTransferFcn_states_g; /* '<S52>/Discrete Transfer Fcn' */
  real_T Delay_DSTATE_o;               /* '<S53>/Delay' */
  real_T Delay_DSTATE_h;               /* '<S108>/Delay' */
  real_T DiscreteTransferFcn_states_k0[2];/* '<S108>/Discrete Transfer Fcn' */
  real_T UD_DSTATE_e;                  /* '<S111>/UD' */
  real_T DiscreteTransferFcn_states_pv;/* '<S53>/Discrete Transfer Fcn' */
  real_T Inputtomodel_DWORK1;          /* '<Root>/Input to model' */
  real_T OutputtoWorkspace_DWORK1;     /* '<Root>/Output to Workspace' */
  real_T start_DWORK1;                 /* '<Root>/start' */
  real_T K_p_x_DWORK1;                 /* '<S14>/K_p_x' */
  real_T K_p_y_DWORK1;                 /* '<S14>/K_p_y' */
  real_T K_p_psi_DWORK1;               /* '<S14>/K_p_psi' */
  real_T K_i_psi_DWORK1;               /* '<S14>/K_i_psi' */
  real_T K_i_x_DWORK1;                 /* '<S14>/K_i_x' */
  real_T K_i_y_DWORK1;                 /* '<S14>/K_i_y' */
  real_T K_d_psi_DWORK1;               /* '<S14>/K_d_psi' */
  real_T K_d_x_DWORK1;                 /* '<S14>/K_d_x' */
  real_T K_d_y_DWORK1;                 /* '<S14>/K_d_y' */
  real_T x_m_DWORK1;                   /* '<S7>/x_m' */
  real_T y_m_DWORK1;                   /* '<S7>/y_m' */
  real_T psi_m_DWORK1;                 /* '<S7>/psi_m' */
  real_T tau_surge_DWORK1;             /* '<Root>/tau_surge' */
  real_T tau_sway_DWORK1;              /* '<Root>/tau_sway' */
  real_T tau_psi_DWORK1;               /* '<Root>/tau_psi' */
  real_T psi_hat_DWORK1;               /* '<Root>/psi_hat' */
  real_T x_hat_DWORK1;                 /* '<Root>/x_hat' */
  real_T x_hat_DWORK1_o;               /* '<S28>/x_hat' */
  real_T y_hat_DWORK1;                 /* '<S28>/y_hat' */
  real_T psi_hat_DWORK1_g;             /* '<S28>/psi_hat' */
  real_T u_hat_DWORK1;                 /* '<S30>/u_hat' */
  real_T v_hat_DWORK1;                 /* '<S30>/v_hat' */
  real_T r_hat_DWORK1;                 /* '<S30>/r_hat' */
  real_T u_dot_hat_DWORK1;             /* '<S29>/u_dot_hat' */
  real_T v_dot_hat_DWORK1;             /* '<S29>/v_dot_hat' */
  real_T r_dot_hat_DWORK1;             /* '<S29>/r_dot_hat' */
  real_T b_x_hat_DWORK1;               /* '<S27>/b_x_hat' */
  real_T b_y_hat_DWORK1;               /* '<S27>/b_y_hat' */
  real_T b_psi_hat_DWORK1;             /* '<S27>/b_psi_hat' */
  real_T thr_angle_1_DWORK1;           /* '<S12>/thr_angle_1' */
  real_T thr_angle_2_DWORK1;           /* '<S12>/thr_angle_2' */
  real_T thr_angle_3_DWORK1;           /* '<S12>/thr_angle_3' */
  real_T thr_angle_4_DWORK1;           /* '<S12>/thr_angle_4' */
  real_T thr_angle_5_DWORK1;           /* '<S12>/thr_angle_5' */
  real_T thr_angle_6_DWORK1;           /* '<S12>/thr_angle_6' */
  real_T reset_DWORK1[6];              /* '<S9>/reset' */
  real_T Angle_controller_DWORK1;      /* '<S9>/Angle_controller' */
  real_T alpha1_DWORK1;                /* '<S13>/alpha1' */
  real_T alpha2_DWORK1;                /* '<S13>/alpha2' */
  real_T alpha3_DWORK1;                /* '<S13>/alpha3' */
  real_T alpha4_DWORK1;                /* '<S13>/alpha4' */
  real_T alpha5_DWORK1;                /* '<S13>/alpha5' */
  real_T alpha6_DWORK1;                /* '<S13>/alpha6' */
  real_T reset_DWORK1_m;               /* '<S62>/reset' */
  real_T reset_DWORK1_l;               /* '<S71>/reset' */
  real_T reset_DWORK1_f;               /* '<S80>/reset' */
  real_T reset_DWORK1_n;               /* '<S89>/reset' */
  real_T reset_DWORK1_d;               /* '<S98>/reset' */
  real_T reset_DWORK1_p;               /* '<S107>/reset' */
  real_T rpm1_DWORK1;                  /* '<S47>/rpm1 ' */
  real_T rpm2_DWORK1;                  /* '<S47>/rpm2' */
  real_T rpm3_DWORK1;                  /* '<S47>/rpm3' */
  real_T rpm4_DWORK1;                  /* '<S47>/rpm4' */
  real_T rpm5_DWORK1;                  /* '<S47>/rpm5' */
  real_T rpm6_DWORK1;                  /* '<S47>/rpm6' */
  real_T u1_DWORK1;                    /* '<S13>/u1' */
  real_T u2_DWORK1;                    /* '<S13>/u2' */
  real_T u3_DWORK1;                    /* '<S13>/u3' */
  real_T u4_DWORK1;                    /* '<S13>/u4' */
  real_T u5_DWORK1;                    /* '<S13>/u5' */
  real_T u6_DWORK1;                    /* '<S13>/u6' */
  real_T y_hat_DWORK1_m;               /* '<Root>/y_hat' */
  real_T y_error_DWORK1;               /* '<S6>/y_error' */
  real_T psi_error_DWORK1;             /* '<S6>/psi_error' */
  real_T x_error_DWORK1;               /* '<S6>/x_error' */
  real_T x_ref_DWORK1;                 /* '<S8>/x_ref' */
  real_T y_ref_DWORK1;                 /* '<S8>/y_ref' */
  real_T w_x_DWORK1;                   /* '<S15>/w_x' */
  real_T w_y_DWORK1;                   /* '<S15>/w_y' */
  real_T w_psi_DWORK1;                 /* '<S15>/w_psi' */
  real_T zeta_psi_DWORK1;              /* '<S15>/zeta_psi' */
  real_T zeta_x_DWORK1;                /* '<S15>/zeta_x' */
  real_T zeta_y_DWORK1;                /* '<S15>/zeta_y' */
  real_T T_psi_DWORK1;                 /* '<S15>/T_psi' */
  real_T T_x_DWORK1;                   /* '<S15>/T_x' */
  real_T T_y_DWORK1;                   /* '<S15>/T_y' */
  real_T psi_ref_DWORK1;               /* '<S8>/psi_ref' */
  real_T DiscreteTransferFcn_tmp;      /* '<S63>/Discrete Transfer Fcn' */
  real_T PrevY;                        /* '<S63>/Acceleration Limit' */
  real_T Memory_PreviousInput;         /* '<S63>/Memory' */
  real_T reset_DWORK1_b;               /* '<S65>/reset' */
  real_T DiscreteTransferFcn_tmp_n;    /* '<S48>/Discrete Transfer Fcn' */
  real_T Control_test_Pa_DWORK1;       /* '<S61>/Control_test_Pa' */
  real_T DiscreteTransferFcn_tmp_f;    /* '<S72>/Discrete Transfer Fcn' */
  real_T PrevY_p;                      /* '<S72>/Acceleration Limit' */
  real_T Memory_PreviousInput_g;       /* '<S72>/Memory' */
  real_T reset_DWORK1_dy;              /* '<S74>/reset' */
  real_T DiscreteTransferFcn_tmp_fg;   /* '<S49>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_k;    /* '<S81>/Discrete Transfer Fcn' */
  real_T PrevY_k;                      /* '<S81>/Acceleration limiter' */
  real_T Memory_PreviousInput_f;       /* '<S81>/Memory' */
  real_T reset_DWORK1_o;               /* '<S83>/reset' */
  real_T DiscreteTransferFcn_tmp_b;    /* '<S50>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_l;    /* '<S90>/Discrete Transfer Fcn' */
  real_T PrevY_m;                      /* '<S90>/Acceleration limiter' */
  real_T Memory_PreviousInput_d;       /* '<S90>/Memory' */
  real_T reset_DWORK1_ls;              /* '<S92>/reset' */
  real_T DiscreteTransferFcn_tmp_fg5;  /* '<S51>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_i;    /* '<S99>/Discrete Transfer Fcn' */
  real_T PrevY_mo;                     /* '<S99>/Acceleration limiter' */
  real_T Memory_PreviousInput_l;       /* '<S99>/Memory' */
  real_T reset_DWORK1_dp;              /* '<S101>/reset' */
  real_T DiscreteTransferFcn_tmp_m;    /* '<S52>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_o;    /* '<S108>/Discrete Transfer Fcn' */
  real_T PrevY_k4;                     /* '<S108>/Acceleration limiter' */
  real_T Memory_PreviousInput_f2;      /* '<S108>/Memory' */
  real_T reset_DWORK1_dy0;             /* '<S110>/reset' */
  real_T DiscreteTransferFcn_tmp_ir;   /* '<S53>/Discrete Transfer Fcn' */
  real_T Acc_x_DWORK1;                 /* '<S1>/Acc_x' */
  real_T Acc_y_DWORK1;                 /* '<S1>/Acc_y' */
  real_T Acc_z_DWORK1;                 /* '<S1>/Acc_z' */
  real_T Gyro_x_DWORK1;                /* '<S1>/Gyro_x' */
  real_T Gyro_y_DWORK1;                /* '<S1>/Gyro_y' */
  real_T Gyro_z_DWORK1;                /* '<S1>/Gyro_z' */
  int_T Integrator_IWORK;              /* '<S4>/Integrator' */
  uint8_T Inputtomodel_DWORK2[12];     /* '<Root>/Input to model' */
  uint8_T OutputtoWorkspace_DWORK2[12];/* '<Root>/Output to Workspace' */
  uint8_T start_DWORK2[12];            /* '<Root>/start' */
  uint8_T K_p_x_DWORK2[12];            /* '<S14>/K_p_x' */
  uint8_T K_p_y_DWORK2[12];            /* '<S14>/K_p_y' */
  uint8_T K_p_psi_DWORK2[12];          /* '<S14>/K_p_psi' */
  uint8_T K_i_psi_DWORK2[12];          /* '<S14>/K_i_psi' */
  uint8_T K_i_x_DWORK2[12];            /* '<S14>/K_i_x' */
  uint8_T K_i_y_DWORK2[12];            /* '<S14>/K_i_y' */
  uint8_T K_d_psi_DWORK2[12];          /* '<S14>/K_d_psi' */
  uint8_T K_d_x_DWORK2[12];            /* '<S14>/K_d_x' */
  uint8_T K_d_y_DWORK2[12];            /* '<S14>/K_d_y' */
  uint8_T x_m_DWORK2[12];              /* '<S7>/x_m' */
  uint8_T y_m_DWORK2[12];              /* '<S7>/y_m' */
  uint8_T psi_m_DWORK2[12];            /* '<S7>/psi_m' */
  uint8_T tau_surge_DWORK2[12];        /* '<Root>/tau_surge' */
  uint8_T tau_sway_DWORK2[12];         /* '<Root>/tau_sway' */
  uint8_T tau_psi_DWORK2[12];          /* '<Root>/tau_psi' */
  uint8_T psi_hat_DWORK2[12];          /* '<Root>/psi_hat' */
  uint8_T x_hat_DWORK2[12];            /* '<Root>/x_hat' */
  uint8_T x_hat_DWORK2_b[12];          /* '<S28>/x_hat' */
  uint8_T y_hat_DWORK2[12];            /* '<S28>/y_hat' */
  uint8_T psi_hat_DWORK2_k[12];        /* '<S28>/psi_hat' */
  uint8_T u_hat_DWORK2[12];            /* '<S30>/u_hat' */
  uint8_T v_hat_DWORK2[12];            /* '<S30>/v_hat' */
  uint8_T r_hat_DWORK2[12];            /* '<S30>/r_hat' */
  uint8_T u_dot_hat_DWORK2[12];        /* '<S29>/u_dot_hat' */
  uint8_T v_dot_hat_DWORK2[12];        /* '<S29>/v_dot_hat' */
  uint8_T r_dot_hat_DWORK2[12];        /* '<S29>/r_dot_hat' */
  uint8_T b_x_hat_DWORK2[12];          /* '<S27>/b_x_hat' */
  uint8_T b_y_hat_DWORK2[12];          /* '<S27>/b_y_hat' */
  uint8_T b_psi_hat_DWORK2[12];        /* '<S27>/b_psi_hat' */
  uint8_T thr_angle_1_DWORK2[12];      /* '<S12>/thr_angle_1' */
  uint8_T thr_angle_2_DWORK2[12];      /* '<S12>/thr_angle_2' */
  uint8_T thr_angle_3_DWORK2[12];      /* '<S12>/thr_angle_3' */
  uint8_T thr_angle_4_DWORK2[12];      /* '<S12>/thr_angle_4' */
  uint8_T thr_angle_5_DWORK2[12];      /* '<S12>/thr_angle_5' */
  uint8_T thr_angle_6_DWORK2[12];      /* '<S12>/thr_angle_6' */
  uint8_T reset_DWORK2[12];            /* '<S9>/reset' */
  uint8_T Angle_controller_DWORK2[12]; /* '<S9>/Angle_controller' */
  uint8_T alpha1_DWORK2[12];           /* '<S13>/alpha1' */
  uint8_T alpha2_DWORK2[12];           /* '<S13>/alpha2' */
  uint8_T alpha3_DWORK2[12];           /* '<S13>/alpha3' */
  uint8_T alpha4_DWORK2[12];           /* '<S13>/alpha4' */
  uint8_T alpha5_DWORK2[12];           /* '<S13>/alpha5' */
  uint8_T alpha6_DWORK2[12];           /* '<S13>/alpha6' */
  uint8_T reset_DWORK2_i[12];          /* '<S62>/reset' */
  uint8_T reset_DWORK2_a[12];          /* '<S71>/reset' */
  uint8_T reset_DWORK2_o[12];          /* '<S80>/reset' */
  uint8_T reset_DWORK2_g[12];          /* '<S89>/reset' */
  uint8_T reset_DWORK2_m[12];          /* '<S98>/reset' */
  uint8_T reset_DWORK2_ie[12];         /* '<S107>/reset' */
  uint8_T rpm1_DWORK2[12];             /* '<S47>/rpm1 ' */
  uint8_T rpm2_DWORK2[12];             /* '<S47>/rpm2' */
  uint8_T rpm3_DWORK2[12];             /* '<S47>/rpm3' */
  uint8_T rpm4_DWORK2[12];             /* '<S47>/rpm4' */
  uint8_T rpm5_DWORK2[12];             /* '<S47>/rpm5' */
  uint8_T rpm6_DWORK2[12];             /* '<S47>/rpm6' */
  uint8_T u1_DWORK2[12];               /* '<S13>/u1' */
  uint8_T u2_DWORK2[12];               /* '<S13>/u2' */
  uint8_T u3_DWORK2[12];               /* '<S13>/u3' */
  uint8_T u4_DWORK2[12];               /* '<S13>/u4' */
  uint8_T u5_DWORK2[12];               /* '<S13>/u5' */
  uint8_T u6_DWORK2[12];               /* '<S13>/u6' */
  uint8_T y_hat_DWORK2_a[12];          /* '<Root>/y_hat' */
  uint8_T y_error_DWORK2[12];          /* '<S6>/y_error' */
  uint8_T psi_error_DWORK2[12];        /* '<S6>/psi_error' */
  uint8_T x_error_DWORK2[12];          /* '<S6>/x_error' */
  uint8_T x_ref_DWORK2[12];            /* '<S8>/x_ref' */
  uint8_T y_ref_DWORK2[12];            /* '<S8>/y_ref' */
  uint8_T w_x_DWORK2[12];              /* '<S15>/w_x' */
  uint8_T w_y_DWORK2[12];              /* '<S15>/w_y' */
  uint8_T w_psi_DWORK2[12];            /* '<S15>/w_psi' */
  uint8_T zeta_psi_DWORK2[12];         /* '<S15>/zeta_psi' */
  uint8_T zeta_x_DWORK2[12];           /* '<S15>/zeta_x' */
  uint8_T zeta_y_DWORK2[12];           /* '<S15>/zeta_y' */
  uint8_T T_psi_DWORK2[12];            /* '<S15>/T_psi' */
  uint8_T T_x_DWORK2[12];              /* '<S15>/T_x' */
  uint8_T T_y_DWORK2[12];              /* '<S15>/T_y' */
  uint8_T psi_ref_DWORK2[12];          /* '<S8>/psi_ref' */
  uint8_T reset_DWORK2_my[12];         /* '<S65>/reset' */
  uint8_T Control_test_Pa_DWORK2[12];  /* '<S61>/Control_test_Pa' */
  uint8_T reset_DWORK2_k[12];          /* '<S74>/reset' */
  uint8_T reset_DWORK2_p[12];          /* '<S83>/reset' */
  uint8_T reset_DWORK2_mn[12];         /* '<S92>/reset' */
  uint8_T reset_DWORK2_i4[12];         /* '<S101>/reset' */
  uint8_T reset_DWORK2_j[12];          /* '<S110>/reset' */
  uint8_T Acc_x_DWORK2[12];            /* '<S1>/Acc_x' */
  uint8_T Acc_y_DWORK2[12];            /* '<S1>/Acc_y' */
  uint8_T Acc_z_DWORK2[12];            /* '<S1>/Acc_z' */
  uint8_T Gyro_x_DWORK2[12];           /* '<S1>/Gyro_x' */
  uint8_T Gyro_y_DWORK2[12];           /* '<S1>/Gyro_y' */
  uint8_T Gyro_z_DWORK2[12];           /* '<S1>/Gyro_z' */
  DW_CoreSubsys_ctrl_custom_T CoreSubsys[6];/* '<S40>/CoreSubsys' */
} DW_ctrl_custom_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T Integrator_CSTATE[3];         /* '<S4>/Integrator' */
  real_T Integrator2_CSTATE[3];        /* '<S8>/Integrator2' */
  real_T Integrator1_CSTATE[3];        /* '<S6>/Integrator1' */
  real_T Integrator1_CSTATE_d[3];      /* '<S8>/Integrator1' */
  real_T Integrator1_CSTATE_n[3];      /* '<S4>/Integrator1' */
  real_T Integrator2_CSTATE_j[3];      /* '<S4>/Integrator2' */
  real_T Integrator_CSTATE_a;          /* '<S62>/Integrator' */
  real_T Integrator_CSTATE_f;          /* '<S71>/Integrator' */
  real_T Integrator_CSTATE_ao;         /* '<S80>/Integrator' */
  real_T Integrator_CSTATE_k;          /* '<S89>/Integrator' */
  real_T Integrator_CSTATE_k2;         /* '<S98>/Integrator' */
  real_T Integrator_CSTATE_i;          /* '<S107>/Integrator' */
  real_T Integrator_CSTATE_f5[3];      /* '<S8>/Integrator' */
  real_T Integrator_CSTATE_m;          /* '<S65>/Integrator' */
  real_T Integrator_CSTATE_ko;         /* '<S74>/Integrator' */
  real_T Integrator_CSTATE_c;          /* '<S83>/Integrator' */
  real_T Integrator_CSTATE_p;          /* '<S92>/Integrator' */
  real_T Integrator_CSTATE_n;          /* '<S101>/Integrator' */
  real_T Integrator_CSTATE_ci;         /* '<S110>/Integrator' */
} X_ctrl_custom_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T Integrator_CSTATE[3];         /* '<S4>/Integrator' */
  real_T Integrator2_CSTATE[3];        /* '<S8>/Integrator2' */
  real_T Integrator1_CSTATE[3];        /* '<S6>/Integrator1' */
  real_T Integrator1_CSTATE_d[3];      /* '<S8>/Integrator1' */
  real_T Integrator1_CSTATE_n[3];      /* '<S4>/Integrator1' */
  real_T Integrator2_CSTATE_j[3];      /* '<S4>/Integrator2' */
  real_T Integrator_CSTATE_a;          /* '<S62>/Integrator' */
  real_T Integrator_CSTATE_f;          /* '<S71>/Integrator' */
  real_T Integrator_CSTATE_ao;         /* '<S80>/Integrator' */
  real_T Integrator_CSTATE_k;          /* '<S89>/Integrator' */
  real_T Integrator_CSTATE_k2;         /* '<S98>/Integrator' */
  real_T Integrator_CSTATE_i;          /* '<S107>/Integrator' */
  real_T Integrator_CSTATE_f5[3];      /* '<S8>/Integrator' */
  real_T Integrator_CSTATE_m;          /* '<S65>/Integrator' */
  real_T Integrator_CSTATE_ko;         /* '<S74>/Integrator' */
  real_T Integrator_CSTATE_c;          /* '<S83>/Integrator' */
  real_T Integrator_CSTATE_p;          /* '<S92>/Integrator' */
  real_T Integrator_CSTATE_n;          /* '<S101>/Integrator' */
  real_T Integrator_CSTATE_ci;         /* '<S110>/Integrator' */
} XDot_ctrl_custom_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE[3];      /* '<S4>/Integrator' */
  boolean_T Integrator2_CSTATE[3];     /* '<S8>/Integrator2' */
  boolean_T Integrator1_CSTATE[3];     /* '<S6>/Integrator1' */
  boolean_T Integrator1_CSTATE_d[3];   /* '<S8>/Integrator1' */
  boolean_T Integrator1_CSTATE_n[3];   /* '<S4>/Integrator1' */
  boolean_T Integrator2_CSTATE_j[3];   /* '<S4>/Integrator2' */
  boolean_T Integrator_CSTATE_a;       /* '<S62>/Integrator' */
  boolean_T Integrator_CSTATE_f;       /* '<S71>/Integrator' */
  boolean_T Integrator_CSTATE_ao;      /* '<S80>/Integrator' */
  boolean_T Integrator_CSTATE_k;       /* '<S89>/Integrator' */
  boolean_T Integrator_CSTATE_k2;      /* '<S98>/Integrator' */
  boolean_T Integrator_CSTATE_i;       /* '<S107>/Integrator' */
  boolean_T Integrator_CSTATE_f5[3];   /* '<S8>/Integrator' */
  boolean_T Integrator_CSTATE_m;       /* '<S65>/Integrator' */
  boolean_T Integrator_CSTATE_ko;      /* '<S74>/Integrator' */
  boolean_T Integrator_CSTATE_c;       /* '<S83>/Integrator' */
  boolean_T Integrator_CSTATE_p;       /* '<S92>/Integrator' */
  boolean_T Integrator_CSTATE_n;       /* '<S101>/Integrator' */
  boolean_T Integrator_CSTATE_ci;      /* '<S110>/Integrator' */
} XDis_ctrl_custom_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator_Reset_ZCE;     /* '<S4>/Integrator' */
  ZCSigState Integrator1_Reset_ZCE;    /* '<S4>/Integrator1' */
  ZCSigState Integrator2_Reset_ZCE;    /* '<S4>/Integrator2' */
  ZCSigState Integrator_Reset_ZCE_g;   /* '<S62>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_n;   /* '<S71>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_e;   /* '<S80>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_l;   /* '<S89>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_j;   /* '<S98>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_m;   /* '<S107>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_lk;  /* '<S65>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_p;   /* '<S74>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_gm;  /* '<S83>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_ja;  /* '<S92>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_i;   /* '<S101>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_b;   /* '<S110>/Integrator' */
} PrevZCX_ctrl_custom_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            ctrl_custom_B
#define BlockIO                        B_ctrl_custom_T
#define rtX                            ctrl_custom_X
#define ContinuousStates               X_ctrl_custom_T
#define rtXdot                         ctrl_custom_XDot
#define StateDerivatives               XDot_ctrl_custom_T
#define tXdis                          ctrl_custom_XDis
#define StateDisabled                  XDis_ctrl_custom_T
#define rtP                            ctrl_custom_P
#define Parameters                     P_ctrl_custom_T
#define rtDWork                        ctrl_custom_DW
#define D_Work                         DW_ctrl_custom_T
#define rtPrevZCSigState               ctrl_custom_PrevZCX
#define PrevZCSigStates                PrevZCX_ctrl_custom_T

/* Parameters for system: '<S40>/CoreSubsys' */
struct P_CoreSubsys_ctrl_custom_T_ {
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S40>/Discrete-Time Integrator'
                                         */
  real_T Gain1_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S43>/Gain1'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<S40>/Delay'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S40>/Delay'
                                        */
};

/* Parameters (auto storage) */
struct P_ctrl_custom_T_ {
  real_T C[24];                        /* Variable: C
                                        * Referenced by: '<S9>/C'
                                        */
  real_T D;                            /* Variable: D
                                        * Referenced by: '<S10>/D'
                                        */
  real_T I_s;                          /* Variable: I_s
                                        * Referenced by:
                                        *   '<S62>/Finding rotation speed'
                                        *   '<S63>/Inertia compensation'
                                        *   '<S71>/Finding rotation speed'
                                        *   '<S72>/Inertia compensation'
                                        *   '<S80>/Finding rotation speed'
                                        *   '<S81>/Inertia compensation'
                                        *   '<S89>/Finding rotation speed'
                                        *   '<S90>/Inertia compensation'
                                        *   '<S98>/Finding rotation speed'
                                        *   '<S99>/Inertia compensation'
                                        *   '<S107>/Finding rotation speed'
                                        *   '<S108>/Inertia compensation'
                                        */
  real_T K_T1f;                        /* Variable: K_T1f
                                        * Referenced by: '<S10>/K_Tf1'
                                        */
  real_T K_T1r;                        /* Variable: K_T1r
                                        * Referenced by: '<S10>/K_Tr1'
                                        */
  real_T K_T2f;                        /* Variable: K_T2f
                                        * Referenced by: '<S10>/K_Tf2'
                                        */
  real_T K_T2r;                        /* Variable: K_T2r
                                        * Referenced by: '<S10>/K_Tr2'
                                        */
  real_T K_T3f;                        /* Variable: K_T3f
                                        * Referenced by: '<S10>/K_Tf3'
                                        */
  real_T K_T3r;                        /* Variable: K_T3r
                                        * Referenced by: '<S10>/K_Tr3'
                                        */
  real_T K_T4f;                        /* Variable: K_T4f
                                        * Referenced by: '<S10>/K_Tf4'
                                        */
  real_T K_T4r;                        /* Variable: K_T4r
                                        * Referenced by: '<S10>/K_Tr4'
                                        */
  real_T K_T5f;                        /* Variable: K_T5f
                                        * Referenced by: '<S10>/K_Tf5'
                                        */
  real_T K_T5r;                        /* Variable: K_T5r
                                        * Referenced by: '<S10>/K_Tr5'
                                        */
  real_T K_T6f;                        /* Variable: K_T6f
                                        * Referenced by: '<S10>/K_Tf6'
                                        */
  real_T K_T6r;                        /* Variable: K_T6r
                                        * Referenced by: '<S10>/K_Tr6'
                                        */
  real_T K_omega;                      /* Variable: K_omega
                                        * Referenced by:
                                        *   '<S62>/K_omega'
                                        *   '<S63>/Qff_1(nr)'
                                        *   '<S71>/K_omega'
                                        *   '<S72>/Qff_1(nr)'
                                        *   '<S80>/K_omega'
                                        *   '<S81>/Qff_1(nr)'
                                        *   '<S89>/K_omega'
                                        *   '<S90>/Qff_1(nr)'
                                        *   '<S98>/K_omega'
                                        *   '<S99>/Qff_1(nr)'
                                        *   '<S107>/K_omega'
                                        *   '<S108>/Qff_1(nr)'
                                        */
  real_T K_q1f;                        /* Variable: K_q1f
                                        * Referenced by: '<S10>/K_Qr1'
                                        */
  real_T K_q1r;                        /* Variable: K_q1r
                                        * Referenced by: '<S10>/K_Qr7'
                                        */
  real_T K_q2f;                        /* Variable: K_q2f
                                        * Referenced by: '<S10>/K_Qr2'
                                        */
  real_T K_q2r;                        /* Variable: K_q2r
                                        * Referenced by: '<S10>/K_Qr8'
                                        */
  real_T K_q3f;                        /* Variable: K_q3f
                                        * Referenced by: '<S10>/K_Qr3'
                                        */
  real_T K_q3r;                        /* Variable: K_q3r
                                        * Referenced by: '<S10>/K_Qr9'
                                        */
  real_T K_q4f;                        /* Variable: K_q4f
                                        * Referenced by: '<S10>/K_Qr4'
                                        */
  real_T K_q4r;                        /* Variable: K_q4r
                                        * Referenced by: '<S10>/K_Qr10'
                                        */
  real_T K_q5f;                        /* Variable: K_q5f
                                        * Referenced by: '<S10>/K_Qr5'
                                        */
  real_T K_q5r;                        /* Variable: K_q5r
                                        * Referenced by: '<S10>/K_Qr11'
                                        */
  real_T K_q6f;                        /* Variable: K_q6f
                                        * Referenced by: '<S10>/K_Qr6'
                                        */
  real_T K_q6r;                        /* Variable: K_q6r
                                        * Referenced by: '<S10>/K_Qr12'
                                        */
  real_T Kp;                           /* Variable: Kp
                                        * Referenced by:
                                        *   '<S65>/Ki'
                                        *   '<S65>/Kp'
                                        *   '<S74>/Ki'
                                        *   '<S74>/Kp'
                                        *   '<S83>/Ki'
                                        *   '<S83>/Kp'
                                        *   '<S92>/Ki'
                                        *   '<S92>/Kp'
                                        *   '<S101>/Ki'
                                        *   '<S101>/Kp'
                                        *   '<S110>/Ki'
                                        *   '<S110>/Kp'
                                        */
  real_T Max_rotation;                 /* Variable: Max_rotation
                                        * Referenced by: '<S40>/Max Rotation Rate'
                                        */
  real_T Max_thrust;                   /* Variable: Max_thrust
                                        * Referenced by:
                                        *   '<S47>/Saturation 1'
                                        *   '<S47>/Saturation 10'
                                        *   '<S47>/Saturation 12'
                                        *   '<S47>/Saturation 3'
                                        *   '<S47>/Saturation 5'
                                        *   '<S47>/Saturation 8'
                                        */
  real_T Min_thrust;                   /* Variable: Min_thrust
                                        * Referenced by:
                                        *   '<S47>/Saturation 11'
                                        *   '<S47>/Saturation 13'
                                        *   '<S47>/Saturation 2'
                                        *   '<S47>/Saturation 4'
                                        *   '<S47>/Saturation 6'
                                        *   '<S47>/Saturation 9'
                                        */
  real_T Q_f0;                         /* Variable: Q_f0
                                        * Referenced by:
                                        *   '<S63>/Qf_0'
                                        *   '<S72>/Qf_0'
                                        *   '<S81>/Qf_0'
                                        *   '<S90>/Qf_0'
                                        *   '<S99>/Qf_0'
                                        *   '<S108>/Qf_0'
                                        */
  real_T Rho;                          /* Variable: Rho
                                        * Referenced by: '<S10>/Rho'
                                        */
  real_T eps;                          /* Variable: eps
                                        * Referenced by: '<S9>/Constant to avoid singularities'
                                        */
  real_T eps_c;                        /* Variable: eps_c
                                        * Referenced by: '<S10>/Constant'
                                        */
  real_T epsilon;                      /* Variable: epsilon
                                        * Referenced by:
                                        *   '<S63>/Qff_0(nr)'
                                        *   '<S72>/Qff_0(nr)'
                                        *   '<S81>/Qff_0(nr)'
                                        *   '<S90>/Qff_0(nr)'
                                        *   '<S99>/Qff_0(nr)'
                                        *   '<S108>/Qff_0(nr)'
                                        */
  real_T k_cc;                         /* Variable: k_cc
                                        * Referenced by: '<S10>/Constant1'
                                        */
  real_T n_c;                          /* Variable: n_c
                                        * Referenced by: '<S10>/Constant5'
                                        */
  real_T n_max;                        /* Variable: n_max
                                        * Referenced by:
                                        *   '<S63>/Qff_0(nr)'
                                        *   '<S72>/Qff_0(nr)'
                                        *   '<S81>/Qff_0(nr)'
                                        *   '<S90>/Qff_0(nr)'
                                        *   '<S99>/Qff_0(nr)'
                                        *   '<S108>/Qff_0(nr)'
                                        */
  real_T p_cc;                         /* Variable: p_cc
                                        * Referenced by: '<S10>/Constant2'
                                        */
  real_T pwm_thr1_backward[6];         /* Variable: pwm_thr1_backward
                                        * Referenced by: '<S47>/negative thrust 1'
                                        */
  real_T pwm_thr1_forward[6];          /* Variable: pwm_thr1_forward
                                        * Referenced by: '<S47>/positive thrust 1'
                                        */
  real_T pwm_thr2_backward[6];         /* Variable: pwm_thr2_backward
                                        * Referenced by: '<S47>/negative thrust 2'
                                        */
  real_T pwm_thr2_forward[6];          /* Variable: pwm_thr2_forward
                                        * Referenced by: '<S47>/positive thrust 2'
                                        */
  real_T pwm_thr3_backward[6];         /* Variable: pwm_thr3_backward
                                        * Referenced by: '<S47>/negative thrust 3'
                                        */
  real_T pwm_thr3_forward[6];          /* Variable: pwm_thr3_forward
                                        * Referenced by: '<S47>/positive thrust 3'
                                        */
  real_T pwm_thr4_backward[6];         /* Variable: pwm_thr4_backward
                                        * Referenced by: '<S47>/negative thrust 4'
                                        */
  real_T pwm_thr4_forward[6];          /* Variable: pwm_thr4_forward
                                        * Referenced by: '<S47>/positive thrust 4'
                                        */
  real_T pwm_thr5_backward[6];         /* Variable: pwm_thr5_backward
                                        * Referenced by: '<S47>/negative thrust 5'
                                        */
  real_T pwm_thr5_forward[6];          /* Variable: pwm_thr5_forward
                                        * Referenced by: '<S47>/positive thrust 5'
                                        */
  real_T pwm_thr6_backward[6];         /* Variable: pwm_thr6_backward
                                        * Referenced by: '<S47>/negative thrust 6'
                                        */
  real_T pwm_thr6_forward[6];          /* Variable: pwm_thr6_forward
                                        * Referenced by: '<S47>/positive thrust 6'
                                        */
  real_T r_cc;                         /* Variable: r_cc
                                        * Referenced by: '<S10>/Constant3'
                                        */
  real_T DiscreteDerivative_ICPrevScaled;/* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                          * Referenced by: '<S66>/UD'
                                          */
  real_T DiscreteDerivative_ICPrevScal_l;/* Mask Parameter: DiscreteDerivative_ICPrevScal_l
                                          * Referenced by: '<S75>/UD'
                                          */
  real_T DiscreteDerivative_ICPrevScal_k;/* Mask Parameter: DiscreteDerivative_ICPrevScal_k
                                          * Referenced by: '<S84>/UD'
                                          */
  real_T DiscreteDerivative_ICPrevScal_i;/* Mask Parameter: DiscreteDerivative_ICPrevScal_i
                                          * Referenced by: '<S93>/UD'
                                          */
  real_T DiscreteDerivative_ICPrevScal_b;/* Mask Parameter: DiscreteDerivative_ICPrevScal_b
                                          * Referenced by: '<S102>/UD'
                                          */
  real_T DiscreteDerivative_ICPrevSca_iv;/* Mask Parameter: DiscreteDerivative_ICPrevSca_iv
                                          * Referenced by: '<S111>/UD'
                                          */
  real_T Inputtomodel_P1;              /* Expression: width
                                        * Referenced by: '<Root>/Input to model'
                                        */
  real_T Inputtomodel_P2;              /* Expression: dtype
                                        * Referenced by: '<Root>/Input to model'
                                        */
  real_T Inputtomodel_P3;              /* Expression: portnum
                                        * Referenced by: '<Root>/Input to model'
                                        */
  real_T Inputtomodel_P4;              /* Expression: stime
                                        * Referenced by: '<Root>/Input to model'
                                        */
  real_T Inputtomodel_P5;              /* Expression: stype
                                        * Referenced by: '<Root>/Input to model'
                                        */
  real_T Inputtomodel_P6;              /* Expression: btype
                                        * Referenced by: '<Root>/Input to model'
                                        */
  real_T OutputtoWorkspace_P1;         /* Expression: width
                                        * Referenced by: '<Root>/Output to Workspace'
                                        */
  real_T OutputtoWorkspace_P2;         /* Expression: dtype
                                        * Referenced by: '<Root>/Output to Workspace'
                                        */
  real_T OutputtoWorkspace_P3;         /* Expression: portnum
                                        * Referenced by: '<Root>/Output to Workspace'
                                        */
  real_T OutputtoWorkspace_P4;         /* Expression: stime
                                        * Referenced by: '<Root>/Output to Workspace'
                                        */
  real_T OutputtoWorkspace_P5;         /* Expression: stype
                                        * Referenced by: '<Root>/Output to Workspace'
                                        */
  real_T OutputtoWorkspace_P6;         /* Expression: btype
                                        * Referenced by: '<Root>/Output to Workspace'
                                        */
  real_T start_P1;                     /* Expression: width
                                        * Referenced by: '<Root>/start'
                                        */
  real_T start_P2;                     /* Expression: dtype
                                        * Referenced by: '<Root>/start'
                                        */
  real_T start_P3;                     /* Expression: portnum
                                        * Referenced by: '<Root>/start'
                                        */
  real_T start_P4;                     /* Expression: stime
                                        * Referenced by: '<Root>/start'
                                        */
  real_T start_P5;                     /* Expression: stype
                                        * Referenced by: '<Root>/start'
                                        */
  real_T start_P6;                     /* Expression: btype
                                        * Referenced by: '<Root>/start'
                                        */
  real_T K_p_x_P1;                     /* Expression: width
                                        * Referenced by: '<S14>/K_p_x'
                                        */
  real_T K_p_x_P2;                     /* Expression: dtype
                                        * Referenced by: '<S14>/K_p_x'
                                        */
  real_T K_p_x_P3;                     /* Expression: portnum
                                        * Referenced by: '<S14>/K_p_x'
                                        */
  real_T K_p_x_P4;                     /* Expression: stime
                                        * Referenced by: '<S14>/K_p_x'
                                        */
  real_T K_p_x_P5;                     /* Expression: stype
                                        * Referenced by: '<S14>/K_p_x'
                                        */
  real_T K_p_x_P6;                     /* Expression: btype
                                        * Referenced by: '<S14>/K_p_x'
                                        */
  real_T K_p_y_P1;                     /* Expression: width
                                        * Referenced by: '<S14>/K_p_y'
                                        */
  real_T K_p_y_P2;                     /* Expression: dtype
                                        * Referenced by: '<S14>/K_p_y'
                                        */
  real_T K_p_y_P3;                     /* Expression: portnum
                                        * Referenced by: '<S14>/K_p_y'
                                        */
  real_T K_p_y_P4;                     /* Expression: stime
                                        * Referenced by: '<S14>/K_p_y'
                                        */
  real_T K_p_y_P5;                     /* Expression: stype
                                        * Referenced by: '<S14>/K_p_y'
                                        */
  real_T K_p_y_P6;                     /* Expression: btype
                                        * Referenced by: '<S14>/K_p_y'
                                        */
  real_T K_p_psi_P1;                   /* Expression: width
                                        * Referenced by: '<S14>/K_p_psi'
                                        */
  real_T K_p_psi_P2;                   /* Expression: dtype
                                        * Referenced by: '<S14>/K_p_psi'
                                        */
  real_T K_p_psi_P3;                   /* Expression: portnum
                                        * Referenced by: '<S14>/K_p_psi'
                                        */
  real_T K_p_psi_P4;                   /* Expression: stime
                                        * Referenced by: '<S14>/K_p_psi'
                                        */
  real_T K_p_psi_P5;                   /* Expression: stype
                                        * Referenced by: '<S14>/K_p_psi'
                                        */
  real_T K_p_psi_P6;                   /* Expression: btype
                                        * Referenced by: '<S14>/K_p_psi'
                                        */
  real_T K_i_psi_P1;                   /* Expression: width
                                        * Referenced by: '<S14>/K_i_psi'
                                        */
  real_T K_i_psi_P2;                   /* Expression: dtype
                                        * Referenced by: '<S14>/K_i_psi'
                                        */
  real_T K_i_psi_P3;                   /* Expression: portnum
                                        * Referenced by: '<S14>/K_i_psi'
                                        */
  real_T K_i_psi_P4;                   /* Expression: stime
                                        * Referenced by: '<S14>/K_i_psi'
                                        */
  real_T K_i_psi_P5;                   /* Expression: stype
                                        * Referenced by: '<S14>/K_i_psi'
                                        */
  real_T K_i_psi_P6;                   /* Expression: btype
                                        * Referenced by: '<S14>/K_i_psi'
                                        */
  real_T K_i_x_P1;                     /* Expression: width
                                        * Referenced by: '<S14>/K_i_x'
                                        */
  real_T K_i_x_P2;                     /* Expression: dtype
                                        * Referenced by: '<S14>/K_i_x'
                                        */
  real_T K_i_x_P3;                     /* Expression: portnum
                                        * Referenced by: '<S14>/K_i_x'
                                        */
  real_T K_i_x_P4;                     /* Expression: stime
                                        * Referenced by: '<S14>/K_i_x'
                                        */
  real_T K_i_x_P5;                     /* Expression: stype
                                        * Referenced by: '<S14>/K_i_x'
                                        */
  real_T K_i_x_P6;                     /* Expression: btype
                                        * Referenced by: '<S14>/K_i_x'
                                        */
  real_T K_i_y_P1;                     /* Expression: width
                                        * Referenced by: '<S14>/K_i_y'
                                        */
  real_T K_i_y_P2;                     /* Expression: dtype
                                        * Referenced by: '<S14>/K_i_y'
                                        */
  real_T K_i_y_P3;                     /* Expression: portnum
                                        * Referenced by: '<S14>/K_i_y'
                                        */
  real_T K_i_y_P4;                     /* Expression: stime
                                        * Referenced by: '<S14>/K_i_y'
                                        */
  real_T K_i_y_P5;                     /* Expression: stype
                                        * Referenced by: '<S14>/K_i_y'
                                        */
  real_T K_i_y_P6;                     /* Expression: btype
                                        * Referenced by: '<S14>/K_i_y'
                                        */
  real_T K_d_psi_P1;                   /* Expression: width
                                        * Referenced by: '<S14>/K_d_psi'
                                        */
  real_T K_d_psi_P2;                   /* Expression: dtype
                                        * Referenced by: '<S14>/K_d_psi'
                                        */
  real_T K_d_psi_P3;                   /* Expression: portnum
                                        * Referenced by: '<S14>/K_d_psi'
                                        */
  real_T K_d_psi_P4;                   /* Expression: stime
                                        * Referenced by: '<S14>/K_d_psi'
                                        */
  real_T K_d_psi_P5;                   /* Expression: stype
                                        * Referenced by: '<S14>/K_d_psi'
                                        */
  real_T K_d_psi_P6;                   /* Expression: btype
                                        * Referenced by: '<S14>/K_d_psi'
                                        */
  real_T K_d_x_P1;                     /* Expression: width
                                        * Referenced by: '<S14>/K_d_x'
                                        */
  real_T K_d_x_P2;                     /* Expression: dtype
                                        * Referenced by: '<S14>/K_d_x'
                                        */
  real_T K_d_x_P3;                     /* Expression: portnum
                                        * Referenced by: '<S14>/K_d_x'
                                        */
  real_T K_d_x_P4;                     /* Expression: stime
                                        * Referenced by: '<S14>/K_d_x'
                                        */
  real_T K_d_x_P5;                     /* Expression: stype
                                        * Referenced by: '<S14>/K_d_x'
                                        */
  real_T K_d_x_P6;                     /* Expression: btype
                                        * Referenced by: '<S14>/K_d_x'
                                        */
  real_T K_d_y_P1;                     /* Expression: width
                                        * Referenced by: '<S14>/K_d_y'
                                        */
  real_T K_d_y_P2;                     /* Expression: dtype
                                        * Referenced by: '<S14>/K_d_y'
                                        */
  real_T K_d_y_P3;                     /* Expression: portnum
                                        * Referenced by: '<S14>/K_d_y'
                                        */
  real_T K_d_y_P4;                     /* Expression: stime
                                        * Referenced by: '<S14>/K_d_y'
                                        */
  real_T K_d_y_P5;                     /* Expression: stype
                                        * Referenced by: '<S14>/K_d_y'
                                        */
  real_T K_d_y_P6;                     /* Expression: btype
                                        * Referenced by: '<S14>/K_d_y'
                                        */
  real_T x_m_P1;                       /* Expression: width
                                        * Referenced by: '<S7>/x_m'
                                        */
  real_T x_m_P2;                       /* Expression: dtype
                                        * Referenced by: '<S7>/x_m'
                                        */
  real_T x_m_P3;                       /* Expression: portnum
                                        * Referenced by: '<S7>/x_m'
                                        */
  real_T x_m_P4;                       /* Expression: stime
                                        * Referenced by: '<S7>/x_m'
                                        */
  real_T x_m_P5;                       /* Expression: stype
                                        * Referenced by: '<S7>/x_m'
                                        */
  real_T x_m_P6;                       /* Expression: btype
                                        * Referenced by: '<S7>/x_m'
                                        */
  real_T Gain_Gain;                    /* Expression: 1/1000
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T y_m_P1;                       /* Expression: width
                                        * Referenced by: '<S7>/y_m'
                                        */
  real_T y_m_P2;                       /* Expression: dtype
                                        * Referenced by: '<S7>/y_m'
                                        */
  real_T y_m_P3;                       /* Expression: portnum
                                        * Referenced by: '<S7>/y_m'
                                        */
  real_T y_m_P4;                       /* Expression: stime
                                        * Referenced by: '<S7>/y_m'
                                        */
  real_T y_m_P5;                       /* Expression: stype
                                        * Referenced by: '<S7>/y_m'
                                        */
  real_T y_m_P6;                       /* Expression: btype
                                        * Referenced by: '<S7>/y_m'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/1000
                                        * Referenced by: '<S7>/Gain1'
                                        */
  real_T psi_m_P1;                     /* Expression: width
                                        * Referenced by: '<S7>/psi_m'
                                        */
  real_T psi_m_P2;                     /* Expression: dtype
                                        * Referenced by: '<S7>/psi_m'
                                        */
  real_T psi_m_P3;                     /* Expression: portnum
                                        * Referenced by: '<S7>/psi_m'
                                        */
  real_T psi_m_P4;                     /* Expression: stime
                                        * Referenced by: '<S7>/psi_m'
                                        */
  real_T psi_m_P5;                     /* Expression: stype
                                        * Referenced by: '<S7>/psi_m'
                                        */
  real_T psi_m_P6;                     /* Expression: btype
                                        * Referenced by: '<S7>/psi_m'
                                        */
  real_T Gain5_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S7>/Gain5'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1e10
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -1e10
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T Gain6_Gain;                   /* Expression: pi
                                        * Referenced by: '<S7>/Gain6'
                                        */
  real_T Constant1_Value;              /* Expression: 2*pi
                                        * Referenced by: '<S7>/Constant1'
                                        */
  real_T Saturation_UpperSat_p;        /* Expression: 1e10
                                        * Referenced by: '<S25>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: -1e10
                                        * Referenced by: '<S25>/Saturation'
                                        */
  real_T Gain_Gain_p;                  /* Expression: pi
                                        * Referenced by: '<S25>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 2*pi
                                        * Referenced by: '<S25>/Constant'
                                        */
  real_T Saturation_UpperSat_i;        /* Expression: 1e10
                                        * Referenced by: '<S34>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: -1e10
                                        * Referenced by: '<S34>/Saturation'
                                        */
  real_T Gain_Gain_o;                  /* Expression: pi
                                        * Referenced by: '<S34>/Gain'
                                        */
  real_T Constant_Value_p;             /* Expression: 2*pi
                                        * Referenced by: '<S34>/Constant'
                                        */
  real_T Integrator2_IC;               /* Expression: 0
                                        * Referenced by: '<S8>/Integrator2'
                                        */
  real_T Saturation_UpperSat_p4;       /* Expression: 1e10
                                        * Referenced by: '<S38>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: -1e10
                                        * Referenced by: '<S38>/Saturation'
                                        */
  real_T Gain_Gain_e;                  /* Expression: pi
                                        * Referenced by: '<S38>/Gain'
                                        */
  real_T Constant_Value_e;             /* Expression: 2*pi
                                        * Referenced by: '<S38>/Constant'
                                        */
  real_T Saturation_UpperSat_ir;       /* Expression: 1e10
                                        * Referenced by: '<S33>/Saturation'
                                        */
  real_T Saturation_LowerSat_l;        /* Expression: -1e10
                                        * Referenced by: '<S33>/Saturation'
                                        */
  real_T Gain_Gain_d;                  /* Expression: pi
                                        * Referenced by: '<S33>/Gain'
                                        */
  real_T Constant_Value_a;             /* Expression: 2*pi
                                        * Referenced by: '<S33>/Constant'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<S6>/Integrator1'
                                        */
  real_T Integrator1_IC_b;             /* Expression: 0
                                        * Referenced by: '<S8>/Integrator1'
                                        */
  real_T Integrator1_IC_g[3];          /* Expression: [0 0 0]'
                                        * Referenced by: '<S4>/Integrator1'
                                        */
  real_T tau_surge_P1;                 /* Expression: width
                                        * Referenced by: '<Root>/tau_surge'
                                        */
  real_T tau_surge_P2;                 /* Expression: dtype
                                        * Referenced by: '<Root>/tau_surge'
                                        */
  real_T tau_surge_P3;                 /* Expression: portnum
                                        * Referenced by: '<Root>/tau_surge'
                                        */
  real_T tau_surge_P4;                 /* Expression: stime
                                        * Referenced by: '<Root>/tau_surge'
                                        */
  real_T tau_surge_P5;                 /* Expression: stype
                                        * Referenced by: '<Root>/tau_surge'
                                        */
  real_T tau_surge_P6;                 /* Expression: btype
                                        * Referenced by: '<Root>/tau_surge'
                                        */
  real_T tau_sway_P1;                  /* Expression: width
                                        * Referenced by: '<Root>/tau_sway'
                                        */
  real_T tau_sway_P2;                  /* Expression: dtype
                                        * Referenced by: '<Root>/tau_sway'
                                        */
  real_T tau_sway_P3;                  /* Expression: portnum
                                        * Referenced by: '<Root>/tau_sway'
                                        */
  real_T tau_sway_P4;                  /* Expression: stime
                                        * Referenced by: '<Root>/tau_sway'
                                        */
  real_T tau_sway_P5;                  /* Expression: stype
                                        * Referenced by: '<Root>/tau_sway'
                                        */
  real_T tau_sway_P6;                  /* Expression: btype
                                        * Referenced by: '<Root>/tau_sway'
                                        */
  real_T tau_psi_P1;                   /* Expression: width
                                        * Referenced by: '<Root>/tau_psi'
                                        */
  real_T tau_psi_P2;                   /* Expression: dtype
                                        * Referenced by: '<Root>/tau_psi'
                                        */
  real_T tau_psi_P3;                   /* Expression: portnum
                                        * Referenced by: '<Root>/tau_psi'
                                        */
  real_T tau_psi_P4;                   /* Expression: stime
                                        * Referenced by: '<Root>/tau_psi'
                                        */
  real_T tau_psi_P5;                   /* Expression: stype
                                        * Referenced by: '<Root>/tau_psi'
                                        */
  real_T tau_psi_P6;                   /* Expression: btype
                                        * Referenced by: '<Root>/tau_psi'
                                        */
  real_T Gain5_Gain_e;                 /* Expression: 180/pi
                                        * Referenced by: '<Root>/Gain5'
                                        */
  real_T psi_hat_P1;                   /* Expression: width
                                        * Referenced by: '<Root>/psi_hat'
                                        */
  real_T psi_hat_P2;                   /* Expression: dtype
                                        * Referenced by: '<Root>/psi_hat'
                                        */
  real_T psi_hat_P3;                   /* Expression: portnum
                                        * Referenced by: '<Root>/psi_hat'
                                        */
  real_T psi_hat_P4;                   /* Expression: stime
                                        * Referenced by: '<Root>/psi_hat'
                                        */
  real_T psi_hat_P5;                   /* Expression: stype
                                        * Referenced by: '<Root>/psi_hat'
                                        */
  real_T psi_hat_P6;                   /* Expression: btype
                                        * Referenced by: '<Root>/psi_hat'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 1000
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T x_hat_P1;                     /* Expression: width
                                        * Referenced by: '<Root>/x_hat'
                                        */
  real_T x_hat_P2;                     /* Expression: dtype
                                        * Referenced by: '<Root>/x_hat'
                                        */
  real_T x_hat_P3;                     /* Expression: portnum
                                        * Referenced by: '<Root>/x_hat'
                                        */
  real_T x_hat_P4;                     /* Expression: stime
                                        * Referenced by: '<Root>/x_hat'
                                        */
  real_T x_hat_P5;                     /* Expression: stype
                                        * Referenced by: '<Root>/x_hat'
                                        */
  real_T x_hat_P6;                     /* Expression: btype
                                        * Referenced by: '<Root>/x_hat'
                                        */
  real_T x_hat_P1_j;                   /* Expression: width
                                        * Referenced by: '<S28>/x_hat'
                                        */
  real_T x_hat_P2_k;                   /* Expression: dtype
                                        * Referenced by: '<S28>/x_hat'
                                        */
  real_T x_hat_P3_e;                   /* Expression: portnum
                                        * Referenced by: '<S28>/x_hat'
                                        */
  real_T x_hat_P4_c;                   /* Expression: stime
                                        * Referenced by: '<S28>/x_hat'
                                        */
  real_T x_hat_P5_h;                   /* Expression: stype
                                        * Referenced by: '<S28>/x_hat'
                                        */
  real_T x_hat_P6_e;                   /* Expression: btype
                                        * Referenced by: '<S28>/x_hat'
                                        */
  real_T y_hat_P1;                     /* Expression: width
                                        * Referenced by: '<S28>/y_hat'
                                        */
  real_T y_hat_P2;                     /* Expression: dtype
                                        * Referenced by: '<S28>/y_hat'
                                        */
  real_T y_hat_P3;                     /* Expression: portnum
                                        * Referenced by: '<S28>/y_hat'
                                        */
  real_T y_hat_P4;                     /* Expression: stime
                                        * Referenced by: '<S28>/y_hat'
                                        */
  real_T y_hat_P5;                     /* Expression: stype
                                        * Referenced by: '<S28>/y_hat'
                                        */
  real_T y_hat_P6;                     /* Expression: btype
                                        * Referenced by: '<S28>/y_hat'
                                        */
  real_T psi_hat_P1_n;                 /* Expression: width
                                        * Referenced by: '<S28>/psi_hat'
                                        */
  real_T psi_hat_P2_l;                 /* Expression: dtype
                                        * Referenced by: '<S28>/psi_hat'
                                        */
  real_T psi_hat_P3_m;                 /* Expression: portnum
                                        * Referenced by: '<S28>/psi_hat'
                                        */
  real_T psi_hat_P4_f;                 /* Expression: stime
                                        * Referenced by: '<S28>/psi_hat'
                                        */
  real_T psi_hat_P5_p;                 /* Expression: stype
                                        * Referenced by: '<S28>/psi_hat'
                                        */
  real_T psi_hat_P6_b;                 /* Expression: btype
                                        * Referenced by: '<S28>/psi_hat'
                                        */
  real_T u_hat_P1;                     /* Expression: width
                                        * Referenced by: '<S30>/u_hat'
                                        */
  real_T u_hat_P2;                     /* Expression: dtype
                                        * Referenced by: '<S30>/u_hat'
                                        */
  real_T u_hat_P3;                     /* Expression: portnum
                                        * Referenced by: '<S30>/u_hat'
                                        */
  real_T u_hat_P4;                     /* Expression: stime
                                        * Referenced by: '<S30>/u_hat'
                                        */
  real_T u_hat_P5;                     /* Expression: stype
                                        * Referenced by: '<S30>/u_hat'
                                        */
  real_T u_hat_P6;                     /* Expression: btype
                                        * Referenced by: '<S30>/u_hat'
                                        */
  real_T v_hat_P1;                     /* Expression: width
                                        * Referenced by: '<S30>/v_hat'
                                        */
  real_T v_hat_P2;                     /* Expression: dtype
                                        * Referenced by: '<S30>/v_hat'
                                        */
  real_T v_hat_P3;                     /* Expression: portnum
                                        * Referenced by: '<S30>/v_hat'
                                        */
  real_T v_hat_P4;                     /* Expression: stime
                                        * Referenced by: '<S30>/v_hat'
                                        */
  real_T v_hat_P5;                     /* Expression: stype
                                        * Referenced by: '<S30>/v_hat'
                                        */
  real_T v_hat_P6;                     /* Expression: btype
                                        * Referenced by: '<S30>/v_hat'
                                        */
  real_T r_hat_P1;                     /* Expression: width
                                        * Referenced by: '<S30>/r_hat'
                                        */
  real_T r_hat_P2;                     /* Expression: dtype
                                        * Referenced by: '<S30>/r_hat'
                                        */
  real_T r_hat_P3;                     /* Expression: portnum
                                        * Referenced by: '<S30>/r_hat'
                                        */
  real_T r_hat_P4;                     /* Expression: stime
                                        * Referenced by: '<S30>/r_hat'
                                        */
  real_T r_hat_P5;                     /* Expression: stype
                                        * Referenced by: '<S30>/r_hat'
                                        */
  real_T r_hat_P6;                     /* Expression: btype
                                        * Referenced by: '<S30>/r_hat'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 1e10
                                        * Referenced by: '<S26>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: -1e10
                                        * Referenced by: '<S26>/Saturation'
                                        */
  real_T Gain_Gain_gg;                 /* Expression: pi
                                        * Referenced by: '<S26>/Gain'
                                        */
  real_T Constant_Value_i;             /* Expression: 2*pi
                                        * Referenced by: '<S26>/Constant'
                                        */
  real_T Integrator2_IC_i[3];          /* Expression: [0 0 0]'
                                        * Referenced by: '<S4>/Integrator2'
                                        */
  real_T Constant6_Value;              /* Expression: 1
                                        * Referenced by: '<S16>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 1
                                        * Referenced by: '<S16>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 1
                                        * Referenced by: '<S16>/Constant8'
                                        */
  real_T M1_Gain[9];                   /* Expression: [0.008021948049864 0 0;0 0.010098125265799 1.104781662647098e-04;0 3.303823257820844e-05 0.020839338676560]
                                        * Referenced by: '<S4>/M^-1'
                                        */
  real_T u_dot_hat_P1;                 /* Expression: width
                                        * Referenced by: '<S29>/u_dot_hat'
                                        */
  real_T u_dot_hat_P2;                 /* Expression: dtype
                                        * Referenced by: '<S29>/u_dot_hat'
                                        */
  real_T u_dot_hat_P3;                 /* Expression: portnum
                                        * Referenced by: '<S29>/u_dot_hat'
                                        */
  real_T u_dot_hat_P4;                 /* Expression: stime
                                        * Referenced by: '<S29>/u_dot_hat'
                                        */
  real_T u_dot_hat_P5;                 /* Expression: stype
                                        * Referenced by: '<S29>/u_dot_hat'
                                        */
  real_T u_dot_hat_P6;                 /* Expression: btype
                                        * Referenced by: '<S29>/u_dot_hat'
                                        */
  real_T v_dot_hat_P1;                 /* Expression: width
                                        * Referenced by: '<S29>/v_dot_hat'
                                        */
  real_T v_dot_hat_P2;                 /* Expression: dtype
                                        * Referenced by: '<S29>/v_dot_hat'
                                        */
  real_T v_dot_hat_P3;                 /* Expression: portnum
                                        * Referenced by: '<S29>/v_dot_hat'
                                        */
  real_T v_dot_hat_P4;                 /* Expression: stime
                                        * Referenced by: '<S29>/v_dot_hat'
                                        */
  real_T v_dot_hat_P5;                 /* Expression: stype
                                        * Referenced by: '<S29>/v_dot_hat'
                                        */
  real_T v_dot_hat_P6;                 /* Expression: btype
                                        * Referenced by: '<S29>/v_dot_hat'
                                        */
  real_T r_dot_hat_P1;                 /* Expression: width
                                        * Referenced by: '<S29>/r_dot_hat'
                                        */
  real_T r_dot_hat_P2;                 /* Expression: dtype
                                        * Referenced by: '<S29>/r_dot_hat'
                                        */
  real_T r_dot_hat_P3;                 /* Expression: portnum
                                        * Referenced by: '<S29>/r_dot_hat'
                                        */
  real_T r_dot_hat_P4;                 /* Expression: stime
                                        * Referenced by: '<S29>/r_dot_hat'
                                        */
  real_T r_dot_hat_P5;                 /* Expression: stype
                                        * Referenced by: '<S29>/r_dot_hat'
                                        */
  real_T r_dot_hat_P6;                 /* Expression: btype
                                        * Referenced by: '<S29>/r_dot_hat'
                                        */
  real_T b_x_hat_P1;                   /* Expression: width
                                        * Referenced by: '<S27>/b_x_hat'
                                        */
  real_T b_x_hat_P2;                   /* Expression: dtype
                                        * Referenced by: '<S27>/b_x_hat'
                                        */
  real_T b_x_hat_P3;                   /* Expression: portnum
                                        * Referenced by: '<S27>/b_x_hat'
                                        */
  real_T b_x_hat_P4;                   /* Expression: stime
                                        * Referenced by: '<S27>/b_x_hat'
                                        */
  real_T b_x_hat_P5;                   /* Expression: stype
                                        * Referenced by: '<S27>/b_x_hat'
                                        */
  real_T b_x_hat_P6;                   /* Expression: btype
                                        * Referenced by: '<S27>/b_x_hat'
                                        */
  real_T b_y_hat_P1;                   /* Expression: width
                                        * Referenced by: '<S27>/b_y_hat'
                                        */
  real_T b_y_hat_P2;                   /* Expression: dtype
                                        * Referenced by: '<S27>/b_y_hat'
                                        */
  real_T b_y_hat_P3;                   /* Expression: portnum
                                        * Referenced by: '<S27>/b_y_hat'
                                        */
  real_T b_y_hat_P4;                   /* Expression: stime
                                        * Referenced by: '<S27>/b_y_hat'
                                        */
  real_T b_y_hat_P5;                   /* Expression: stype
                                        * Referenced by: '<S27>/b_y_hat'
                                        */
  real_T b_y_hat_P6;                   /* Expression: btype
                                        * Referenced by: '<S27>/b_y_hat'
                                        */
  real_T b_psi_hat_P1;                 /* Expression: width
                                        * Referenced by: '<S27>/b_psi_hat'
                                        */
  real_T b_psi_hat_P2;                 /* Expression: dtype
                                        * Referenced by: '<S27>/b_psi_hat'
                                        */
  real_T b_psi_hat_P3;                 /* Expression: portnum
                                        * Referenced by: '<S27>/b_psi_hat'
                                        */
  real_T b_psi_hat_P4;                 /* Expression: stime
                                        * Referenced by: '<S27>/b_psi_hat'
                                        */
  real_T b_psi_hat_P5;                 /* Expression: stype
                                        * Referenced by: '<S27>/b_psi_hat'
                                        */
  real_T b_psi_hat_P6;                 /* Expression: btype
                                        * Referenced by: '<S27>/b_psi_hat'
                                        */
  real_T thr_angle_1_P1;               /* Expression: width
                                        * Referenced by: '<S12>/thr_angle_1'
                                        */
  real_T thr_angle_1_P2;               /* Expression: dtype
                                        * Referenced by: '<S12>/thr_angle_1'
                                        */
  real_T thr_angle_1_P3;               /* Expression: portnum
                                        * Referenced by: '<S12>/thr_angle_1'
                                        */
  real_T thr_angle_1_P4;               /* Expression: stime
                                        * Referenced by: '<S12>/thr_angle_1'
                                        */
  real_T thr_angle_1_P5;               /* Expression: stype
                                        * Referenced by: '<S12>/thr_angle_1'
                                        */
  real_T thr_angle_1_P6;               /* Expression: btype
                                        * Referenced by: '<S12>/thr_angle_1'
                                        */
  real_T thr_angle_2_P1;               /* Expression: width
                                        * Referenced by: '<S12>/thr_angle_2'
                                        */
  real_T thr_angle_2_P2;               /* Expression: dtype
                                        * Referenced by: '<S12>/thr_angle_2'
                                        */
  real_T thr_angle_2_P3;               /* Expression: portnum
                                        * Referenced by: '<S12>/thr_angle_2'
                                        */
  real_T thr_angle_2_P4;               /* Expression: stime
                                        * Referenced by: '<S12>/thr_angle_2'
                                        */
  real_T thr_angle_2_P5;               /* Expression: stype
                                        * Referenced by: '<S12>/thr_angle_2'
                                        */
  real_T thr_angle_2_P6;               /* Expression: btype
                                        * Referenced by: '<S12>/thr_angle_2'
                                        */
  real_T thr_angle_3_P1;               /* Expression: width
                                        * Referenced by: '<S12>/thr_angle_3'
                                        */
  real_T thr_angle_3_P2;               /* Expression: dtype
                                        * Referenced by: '<S12>/thr_angle_3'
                                        */
  real_T thr_angle_3_P3;               /* Expression: portnum
                                        * Referenced by: '<S12>/thr_angle_3'
                                        */
  real_T thr_angle_3_P4;               /* Expression: stime
                                        * Referenced by: '<S12>/thr_angle_3'
                                        */
  real_T thr_angle_3_P5;               /* Expression: stype
                                        * Referenced by: '<S12>/thr_angle_3'
                                        */
  real_T thr_angle_3_P6;               /* Expression: btype
                                        * Referenced by: '<S12>/thr_angle_3'
                                        */
  real_T thr_angle_4_P1;               /* Expression: width
                                        * Referenced by: '<S12>/thr_angle_4'
                                        */
  real_T thr_angle_4_P2;               /* Expression: dtype
                                        * Referenced by: '<S12>/thr_angle_4'
                                        */
  real_T thr_angle_4_P3;               /* Expression: portnum
                                        * Referenced by: '<S12>/thr_angle_4'
                                        */
  real_T thr_angle_4_P4;               /* Expression: stime
                                        * Referenced by: '<S12>/thr_angle_4'
                                        */
  real_T thr_angle_4_P5;               /* Expression: stype
                                        * Referenced by: '<S12>/thr_angle_4'
                                        */
  real_T thr_angle_4_P6;               /* Expression: btype
                                        * Referenced by: '<S12>/thr_angle_4'
                                        */
  real_T thr_angle_5_P1;               /* Expression: width
                                        * Referenced by: '<S12>/thr_angle_5'
                                        */
  real_T thr_angle_5_P2;               /* Expression: dtype
                                        * Referenced by: '<S12>/thr_angle_5'
                                        */
  real_T thr_angle_5_P3;               /* Expression: portnum
                                        * Referenced by: '<S12>/thr_angle_5'
                                        */
  real_T thr_angle_5_P4;               /* Expression: stime
                                        * Referenced by: '<S12>/thr_angle_5'
                                        */
  real_T thr_angle_5_P5;               /* Expression: stype
                                        * Referenced by: '<S12>/thr_angle_5'
                                        */
  real_T thr_angle_5_P6;               /* Expression: btype
                                        * Referenced by: '<S12>/thr_angle_5'
                                        */
  real_T thr_angle_6_P1;               /* Expression: width
                                        * Referenced by: '<S12>/thr_angle_6'
                                        */
  real_T thr_angle_6_P2;               /* Expression: dtype
                                        * Referenced by: '<S12>/thr_angle_6'
                                        */
  real_T thr_angle_6_P3;               /* Expression: portnum
                                        * Referenced by: '<S12>/thr_angle_6'
                                        */
  real_T thr_angle_6_P4;               /* Expression: stime
                                        * Referenced by: '<S12>/thr_angle_6'
                                        */
  real_T thr_angle_6_P5;               /* Expression: stype
                                        * Referenced by: '<S12>/thr_angle_6'
                                        */
  real_T thr_angle_6_P6;               /* Expression: btype
                                        * Referenced by: '<S12>/thr_angle_6'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 180/pi
                                        * Referenced by: '<S41>/Gain'
                                        */
  real_T XpositionThruster_Value[6];   /* Expression: [Thruster.T1(1) Thruster.T2(1) Thruster.T3(1) Thruster.T4(1) Thruster.T5(1) Thruster.T6(1)]
                                        * Referenced by: '<S9>/X-position Thruster'
                                        */
  real_T YpositionThruster_Value[6];   /* Expression: [Thruster.T1(2) Thruster.T2(2) Thruster.T3(2) Thruster.T4(2) Thruster.T5(2) Thruster.T6(2)]
                                        * Referenced by: '<S9>/Y-position Thruster'
                                        */
  real_T reset_P1;                     /* Expression: width
                                        * Referenced by: '<S9>/reset'
                                        */
  real_T reset_P2;                     /* Expression: dtype
                                        * Referenced by: '<S9>/reset'
                                        */
  real_T reset_P3;                     /* Expression: portnum
                                        * Referenced by: '<S9>/reset'
                                        */
  real_T reset_P4;                     /* Expression: stime
                                        * Referenced by: '<S9>/reset'
                                        */
  real_T reset_P5;                     /* Expression: stype
                                        * Referenced by: '<S9>/reset'
                                        */
  real_T reset_P6;                     /* Expression: btype
                                        * Referenced by: '<S9>/reset'
                                        */
  real_T Angle_controller_P1;          /* Expression: width
                                        * Referenced by: '<S9>/Angle_controller'
                                        */
  real_T Angle_controller_P2;          /* Expression: dtype
                                        * Referenced by: '<S9>/Angle_controller'
                                        */
  real_T Angle_controller_P3;          /* Expression: portnum
                                        * Referenced by: '<S9>/Angle_controller'
                                        */
  real_T Angle_controller_P4;          /* Expression: stime
                                        * Referenced by: '<S9>/Angle_controller'
                                        */
  real_T Angle_controller_P5;          /* Expression: stype
                                        * Referenced by: '<S9>/Angle_controller'
                                        */
  real_T Angle_controller_P6;          /* Expression: btype
                                        * Referenced by: '<S9>/Angle_controller'
                                        */
  real_T constantangle_Value[6];       /* Expression: [Thruster.T1(3) Thruster.T2(3) Thruster.T3(3) Thruster.T4(3) Thruster.T5(3) Thruster.T6(3)]
                                        * Referenced by: '<S9>/constant angle'
                                        */
  real_T ChoosingFixedAzimuthangle_Thres;/* Expression: 1
                                          * Referenced by: '<S9>/Choosing Fixed // Azimuth angle'
                                          */
  real_T Saturation1_UpperSat;         /* Expression: pi
                                        * Referenced by: '<S46>/Saturation 1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -pi
                                        * Referenced by: '<S46>/Saturation 1'
                                        */
  real_T alpha1_P1;                    /* Expression: width
                                        * Referenced by: '<S13>/alpha1'
                                        */
  real_T alpha1_P2;                    /* Expression: dtype
                                        * Referenced by: '<S13>/alpha1'
                                        */
  real_T alpha1_P3;                    /* Expression: portnum
                                        * Referenced by: '<S13>/alpha1'
                                        */
  real_T alpha1_P4;                    /* Expression: stime
                                        * Referenced by: '<S13>/alpha1'
                                        */
  real_T alpha1_P5;                    /* Expression: stype
                                        * Referenced by: '<S13>/alpha1'
                                        */
  real_T alpha1_P6;                    /* Expression: btype
                                        * Referenced by: '<S13>/alpha1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: pi
                                        * Referenced by: '<S46>/Saturation 2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -pi
                                        * Referenced by: '<S46>/Saturation 2'
                                        */
  real_T alpha2_P1;                    /* Expression: width
                                        * Referenced by: '<S13>/alpha2'
                                        */
  real_T alpha2_P2;                    /* Expression: dtype
                                        * Referenced by: '<S13>/alpha2'
                                        */
  real_T alpha2_P3;                    /* Expression: portnum
                                        * Referenced by: '<S13>/alpha2'
                                        */
  real_T alpha2_P4;                    /* Expression: stime
                                        * Referenced by: '<S13>/alpha2'
                                        */
  real_T alpha2_P5;                    /* Expression: stype
                                        * Referenced by: '<S13>/alpha2'
                                        */
  real_T alpha2_P6;                    /* Expression: btype
                                        * Referenced by: '<S13>/alpha2'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: pi
                                        * Referenced by: '<S46>/Saturation 3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: -pi
                                        * Referenced by: '<S46>/Saturation 3'
                                        */
  real_T alpha3_P1;                    /* Expression: width
                                        * Referenced by: '<S13>/alpha3'
                                        */
  real_T alpha3_P2;                    /* Expression: dtype
                                        * Referenced by: '<S13>/alpha3'
                                        */
  real_T alpha3_P3;                    /* Expression: portnum
                                        * Referenced by: '<S13>/alpha3'
                                        */
  real_T alpha3_P4;                    /* Expression: stime
                                        * Referenced by: '<S13>/alpha3'
                                        */
  real_T alpha3_P5;                    /* Expression: stype
                                        * Referenced by: '<S13>/alpha3'
                                        */
  real_T alpha3_P6;                    /* Expression: btype
                                        * Referenced by: '<S13>/alpha3'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: pi
                                        * Referenced by: '<S46>/Saturation 4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: -pi
                                        * Referenced by: '<S46>/Saturation 4'
                                        */
  real_T alpha4_P1;                    /* Expression: width
                                        * Referenced by: '<S13>/alpha4'
                                        */
  real_T alpha4_P2;                    /* Expression: dtype
                                        * Referenced by: '<S13>/alpha4'
                                        */
  real_T alpha4_P3;                    /* Expression: portnum
                                        * Referenced by: '<S13>/alpha4'
                                        */
  real_T alpha4_P4;                    /* Expression: stime
                                        * Referenced by: '<S13>/alpha4'
                                        */
  real_T alpha4_P5;                    /* Expression: stype
                                        * Referenced by: '<S13>/alpha4'
                                        */
  real_T alpha4_P6;                    /* Expression: btype
                                        * Referenced by: '<S13>/alpha4'
                                        */
  real_T Saturation5_UpperSat;         /* Expression: pi
                                        * Referenced by: '<S46>/Saturation 5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: -pi
                                        * Referenced by: '<S46>/Saturation 5'
                                        */
  real_T alpha5_P1;                    /* Expression: width
                                        * Referenced by: '<S13>/alpha5'
                                        */
  real_T alpha5_P2;                    /* Expression: dtype
                                        * Referenced by: '<S13>/alpha5'
                                        */
  real_T alpha5_P3;                    /* Expression: portnum
                                        * Referenced by: '<S13>/alpha5'
                                        */
  real_T alpha5_P4;                    /* Expression: stime
                                        * Referenced by: '<S13>/alpha5'
                                        */
  real_T alpha5_P5;                    /* Expression: stype
                                        * Referenced by: '<S13>/alpha5'
                                        */
  real_T alpha5_P6;                    /* Expression: btype
                                        * Referenced by: '<S13>/alpha5'
                                        */
  real_T Saturation6_UpperSat;         /* Expression: pi
                                        * Referenced by: '<S46>/Saturation 6'
                                        */
  real_T Saturation6_LowerSat;         /* Expression: -pi
                                        * Referenced by: '<S46>/Saturation 6'
                                        */
  real_T alpha6_P1;                    /* Expression: width
                                        * Referenced by: '<S13>/alpha6'
                                        */
  real_T alpha6_P2;                    /* Expression: dtype
                                        * Referenced by: '<S13>/alpha6'
                                        */
  real_T alpha6_P3;                    /* Expression: portnum
                                        * Referenced by: '<S13>/alpha6'
                                        */
  real_T alpha6_P4;                    /* Expression: stime
                                        * Referenced by: '<S13>/alpha6'
                                        */
  real_T alpha6_P5;                    /* Expression: stype
                                        * Referenced by: '<S13>/alpha6'
                                        */
  real_T alpha6_P6;                    /* Expression: btype
                                        * Referenced by: '<S13>/alpha6'
                                        */
  real_T reset_P1_h;                   /* Expression: width
                                        * Referenced by: '<S62>/reset'
                                        */
  real_T reset_P2_k;                   /* Expression: dtype
                                        * Referenced by: '<S62>/reset'
                                        */
  real_T reset_P3_h;                   /* Expression: portnum
                                        * Referenced by: '<S62>/reset'
                                        */
  real_T reset_P4_c;                   /* Expression: stime
                                        * Referenced by: '<S62>/reset'
                                        */
  real_T reset_P5_g;                   /* Expression: stype
                                        * Referenced by: '<S62>/reset'
                                        */
  real_T reset_P6_c;                   /* Expression: btype
                                        * Referenced by: '<S62>/reset'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S62>/Integrator'
                                        */
  real_T Lossesplaceholder_Value;      /* Expression: 0
                                        * Referenced by: '<S48>/Losses (placeholder)'
                                        */
  real_T reset_P1_n;                   /* Expression: width
                                        * Referenced by: '<S71>/reset'
                                        */
  real_T reset_P2_a;                   /* Expression: dtype
                                        * Referenced by: '<S71>/reset'
                                        */
  real_T reset_P3_e;                   /* Expression: portnum
                                        * Referenced by: '<S71>/reset'
                                        */
  real_T reset_P4_b;                   /* Expression: stime
                                        * Referenced by: '<S71>/reset'
                                        */
  real_T reset_P5_c;                   /* Expression: stype
                                        * Referenced by: '<S71>/reset'
                                        */
  real_T reset_P6_f;                   /* Expression: btype
                                        * Referenced by: '<S71>/reset'
                                        */
  real_T Integrator_IC_h;              /* Expression: 0
                                        * Referenced by: '<S71>/Integrator'
                                        */
  real_T Lossesplaceholder_Value_e;    /* Expression: 0
                                        * Referenced by: '<S49>/Losses (placeholder)'
                                        */
  real_T reset_P1_p;                   /* Expression: width
                                        * Referenced by: '<S80>/reset'
                                        */
  real_T reset_P2_l;                   /* Expression: dtype
                                        * Referenced by: '<S80>/reset'
                                        */
  real_T reset_P3_hw;                  /* Expression: portnum
                                        * Referenced by: '<S80>/reset'
                                        */
  real_T reset_P4_i;                   /* Expression: stime
                                        * Referenced by: '<S80>/reset'
                                        */
  real_T reset_P5_l;                   /* Expression: stype
                                        * Referenced by: '<S80>/reset'
                                        */
  real_T reset_P6_a;                   /* Expression: btype
                                        * Referenced by: '<S80>/reset'
                                        */
  real_T Integrator_IC_o;              /* Expression: 0
                                        * Referenced by: '<S80>/Integrator'
                                        */
  real_T Lossesplaceholder_Value_d;    /* Expression: 0
                                        * Referenced by: '<S50>/Losses (placeholder)'
                                        */
  real_T reset_P1_k;                   /* Expression: width
                                        * Referenced by: '<S89>/reset'
                                        */
  real_T reset_P2_b;                   /* Expression: dtype
                                        * Referenced by: '<S89>/reset'
                                        */
  real_T reset_P3_d;                   /* Expression: portnum
                                        * Referenced by: '<S89>/reset'
                                        */
  real_T reset_P4_g;                   /* Expression: stime
                                        * Referenced by: '<S89>/reset'
                                        */
  real_T reset_P5_p;                   /* Expression: stype
                                        * Referenced by: '<S89>/reset'
                                        */
  real_T reset_P6_p;                   /* Expression: btype
                                        * Referenced by: '<S89>/reset'
                                        */
  real_T Integrator_IC_hz;             /* Expression: 0
                                        * Referenced by: '<S89>/Integrator'
                                        */
  real_T Lossesplaceholder_Value_n;    /* Expression: 0
                                        * Referenced by: '<S51>/Losses (placeholder)'
                                        */
  real_T reset_P1_pl;                  /* Expression: width
                                        * Referenced by: '<S98>/reset'
                                        */
  real_T reset_P2_p;                   /* Expression: dtype
                                        * Referenced by: '<S98>/reset'
                                        */
  real_T reset_P3_i;                   /* Expression: portnum
                                        * Referenced by: '<S98>/reset'
                                        */
  real_T reset_P4_l;                   /* Expression: stime
                                        * Referenced by: '<S98>/reset'
                                        */
  real_T reset_P5_f;                   /* Expression: stype
                                        * Referenced by: '<S98>/reset'
                                        */
  real_T reset_P6_fu;                  /* Expression: btype
                                        * Referenced by: '<S98>/reset'
                                        */
  real_T Integrator_IC_d;              /* Expression: 0
                                        * Referenced by: '<S98>/Integrator'
                                        */
  real_T Lossesplaceholder_Value_k;    /* Expression: 0
                                        * Referenced by: '<S52>/Losses (placeholder)'
                                        */
  real_T reset_P1_f;                   /* Expression: width
                                        * Referenced by: '<S107>/reset'
                                        */
  real_T reset_P2_ly;                  /* Expression: dtype
                                        * Referenced by: '<S107>/reset'
                                        */
  real_T reset_P3_l;                   /* Expression: portnum
                                        * Referenced by: '<S107>/reset'
                                        */
  real_T reset_P4_d;                   /* Expression: stime
                                        * Referenced by: '<S107>/reset'
                                        */
  real_T reset_P5_gn;                  /* Expression: stype
                                        * Referenced by: '<S107>/reset'
                                        */
  real_T reset_P6_e;                   /* Expression: btype
                                        * Referenced by: '<S107>/reset'
                                        */
  real_T Integrator_IC_b;              /* Expression: 0
                                        * Referenced by: '<S107>/Integrator'
                                        */
  real_T Lossesplaceholder_Value_nh;   /* Expression: 0
                                        * Referenced by: '<S53>/Losses (placeholder)'
                                        */
  real_T rpm1_P1;                      /* Expression: width
                                        * Referenced by: '<S47>/rpm1 '
                                        */
  real_T rpm1_P2;                      /* Expression: dtype
                                        * Referenced by: '<S47>/rpm1 '
                                        */
  real_T rpm1_P3;                      /* Expression: portnum
                                        * Referenced by: '<S47>/rpm1 '
                                        */
  real_T rpm1_P4;                      /* Expression: stime
                                        * Referenced by: '<S47>/rpm1 '
                                        */
  real_T rpm1_P5;                      /* Expression: stype
                                        * Referenced by: '<S47>/rpm1 '
                                        */
  real_T rpm1_P6;                      /* Expression: btype
                                        * Referenced by: '<S47>/rpm1 '
                                        */
  real_T Gain_Gain_a;                  /* Expression: 1/60
                                        * Referenced by: '<S47>/Gain'
                                        */
  real_T rpm2_P1;                      /* Expression: width
                                        * Referenced by: '<S47>/rpm2'
                                        */
  real_T rpm2_P2;                      /* Expression: dtype
                                        * Referenced by: '<S47>/rpm2'
                                        */
  real_T rpm2_P3;                      /* Expression: portnum
                                        * Referenced by: '<S47>/rpm2'
                                        */
  real_T rpm2_P4;                      /* Expression: stime
                                        * Referenced by: '<S47>/rpm2'
                                        */
  real_T rpm2_P5;                      /* Expression: stype
                                        * Referenced by: '<S47>/rpm2'
                                        */
  real_T rpm2_P6;                      /* Expression: btype
                                        * Referenced by: '<S47>/rpm2'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: 1/60
                                        * Referenced by: '<S47>/Gain1'
                                        */
  real_T rpm3_P1;                      /* Expression: width
                                        * Referenced by: '<S47>/rpm3'
                                        */
  real_T rpm3_P2;                      /* Expression: dtype
                                        * Referenced by: '<S47>/rpm3'
                                        */
  real_T rpm3_P3;                      /* Expression: portnum
                                        * Referenced by: '<S47>/rpm3'
                                        */
  real_T rpm3_P4;                      /* Expression: stime
                                        * Referenced by: '<S47>/rpm3'
                                        */
  real_T rpm3_P5;                      /* Expression: stype
                                        * Referenced by: '<S47>/rpm3'
                                        */
  real_T rpm3_P6;                      /* Expression: btype
                                        * Referenced by: '<S47>/rpm3'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1/60
                                        * Referenced by: '<S47>/Gain2'
                                        */
  real_T rpm4_P1;                      /* Expression: width
                                        * Referenced by: '<S47>/rpm4'
                                        */
  real_T rpm4_P2;                      /* Expression: dtype
                                        * Referenced by: '<S47>/rpm4'
                                        */
  real_T rpm4_P3;                      /* Expression: portnum
                                        * Referenced by: '<S47>/rpm4'
                                        */
  real_T rpm4_P4;                      /* Expression: stime
                                        * Referenced by: '<S47>/rpm4'
                                        */
  real_T rpm4_P5;                      /* Expression: stype
                                        * Referenced by: '<S47>/rpm4'
                                        */
  real_T rpm4_P6;                      /* Expression: btype
                                        * Referenced by: '<S47>/rpm4'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1/60
                                        * Referenced by: '<S47>/Gain3'
                                        */
  real_T rpm5_P1;                      /* Expression: width
                                        * Referenced by: '<S47>/rpm5'
                                        */
  real_T rpm5_P2;                      /* Expression: dtype
                                        * Referenced by: '<S47>/rpm5'
                                        */
  real_T rpm5_P3;                      /* Expression: portnum
                                        * Referenced by: '<S47>/rpm5'
                                        */
  real_T rpm5_P4;                      /* Expression: stime
                                        * Referenced by: '<S47>/rpm5'
                                        */
  real_T rpm5_P5;                      /* Expression: stype
                                        * Referenced by: '<S47>/rpm5'
                                        */
  real_T rpm5_P6;                      /* Expression: btype
                                        * Referenced by: '<S47>/rpm5'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1/60
                                        * Referenced by: '<S47>/Gain4'
                                        */
  real_T rpm6_P1;                      /* Expression: width
                                        * Referenced by: '<S47>/rpm6'
                                        */
  real_T rpm6_P2;                      /* Expression: dtype
                                        * Referenced by: '<S47>/rpm6'
                                        */
  real_T rpm6_P3;                      /* Expression: portnum
                                        * Referenced by: '<S47>/rpm6'
                                        */
  real_T rpm6_P4;                      /* Expression: stime
                                        * Referenced by: '<S47>/rpm6'
                                        */
  real_T rpm6_P5;                      /* Expression: stype
                                        * Referenced by: '<S47>/rpm6'
                                        */
  real_T rpm6_P6;                      /* Expression: btype
                                        * Referenced by: '<S47>/rpm6'
                                        */
  real_T Gain5_Gain_f;                 /* Expression: 1/60
                                        * Referenced by: '<S47>/Gain5'
                                        */
  real_T Saturation1_LowerSat_p;       /* Expression: 0
                                        * Referenced by: '<S47>/Saturation 1'
                                        */
  real_T Saturation2_UpperSat_j;       /* Expression: 0
                                        * Referenced by: '<S47>/Saturation 2'
                                        */
  real_T u1_P1;                        /* Expression: width
                                        * Referenced by: '<S13>/u1'
                                        */
  real_T u1_P2;                        /* Expression: dtype
                                        * Referenced by: '<S13>/u1'
                                        */
  real_T u1_P3;                        /* Expression: portnum
                                        * Referenced by: '<S13>/u1'
                                        */
  real_T u1_P4;                        /* Expression: stime
                                        * Referenced by: '<S13>/u1'
                                        */
  real_T u1_P5;                        /* Expression: stype
                                        * Referenced by: '<S13>/u1'
                                        */
  real_T u1_P6;                        /* Expression: btype
                                        * Referenced by: '<S13>/u1'
                                        */
  real_T Saturation8_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S47>/Saturation 8'
                                        */
  real_T Saturation9_UpperSat;         /* Expression: 0
                                        * Referenced by: '<S47>/Saturation 9'
                                        */
  real_T u2_P1;                        /* Expression: width
                                        * Referenced by: '<S13>/u2'
                                        */
  real_T u2_P2;                        /* Expression: dtype
                                        * Referenced by: '<S13>/u2'
                                        */
  real_T u2_P3;                        /* Expression: portnum
                                        * Referenced by: '<S13>/u2'
                                        */
  real_T u2_P4;                        /* Expression: stime
                                        * Referenced by: '<S13>/u2'
                                        */
  real_T u2_P5;                        /* Expression: stype
                                        * Referenced by: '<S13>/u2'
                                        */
  real_T u2_P6;                        /* Expression: btype
                                        * Referenced by: '<S13>/u2'
                                        */
  real_T Saturation10_LowerSat;        /* Expression: 0
                                        * Referenced by: '<S47>/Saturation 10'
                                        */
  real_T Saturation11_UpperSat;        /* Expression: 0
                                        * Referenced by: '<S47>/Saturation 11'
                                        */
  real_T u3_P1;                        /* Expression: width
                                        * Referenced by: '<S13>/u3'
                                        */
  real_T u3_P2;                        /* Expression: dtype
                                        * Referenced by: '<S13>/u3'
                                        */
  real_T u3_P3;                        /* Expression: portnum
                                        * Referenced by: '<S13>/u3'
                                        */
  real_T u3_P4;                        /* Expression: stime
                                        * Referenced by: '<S13>/u3'
                                        */
  real_T u3_P5;                        /* Expression: stype
                                        * Referenced by: '<S13>/u3'
                                        */
  real_T u3_P6;                        /* Expression: btype
                                        * Referenced by: '<S13>/u3'
                                        */
  real_T Saturation3_LowerSat_m;       /* Expression: 0
                                        * Referenced by: '<S47>/Saturation 3'
                                        */
  real_T Saturation4_UpperSat_l;       /* Expression: 0
                                        * Referenced by: '<S47>/Saturation 4'
                                        */
  real_T u4_P1;                        /* Expression: width
                                        * Referenced by: '<S13>/u4'
                                        */
  real_T u4_P2;                        /* Expression: dtype
                                        * Referenced by: '<S13>/u4'
                                        */
  real_T u4_P3;                        /* Expression: portnum
                                        * Referenced by: '<S13>/u4'
                                        */
  real_T u4_P4;                        /* Expression: stime
                                        * Referenced by: '<S13>/u4'
                                        */
  real_T u4_P5;                        /* Expression: stype
                                        * Referenced by: '<S13>/u4'
                                        */
  real_T u4_P6;                        /* Expression: btype
                                        * Referenced by: '<S13>/u4'
                                        */
  real_T Saturation5_LowerSat_j;       /* Expression: 0
                                        * Referenced by: '<S47>/Saturation 5'
                                        */
  real_T Saturation6_UpperSat_c;       /* Expression: 0
                                        * Referenced by: '<S47>/Saturation 6'
                                        */
  real_T u5_P1;                        /* Expression: width
                                        * Referenced by: '<S13>/u5'
                                        */
  real_T u5_P2;                        /* Expression: dtype
                                        * Referenced by: '<S13>/u5'
                                        */
  real_T u5_P3;                        /* Expression: portnum
                                        * Referenced by: '<S13>/u5'
                                        */
  real_T u5_P4;                        /* Expression: stime
                                        * Referenced by: '<S13>/u5'
                                        */
  real_T u5_P5;                        /* Expression: stype
                                        * Referenced by: '<S13>/u5'
                                        */
  real_T u5_P6;                        /* Expression: btype
                                        * Referenced by: '<S13>/u5'
                                        */
  real_T Saturation12_LowerSat;        /* Expression: 0
                                        * Referenced by: '<S47>/Saturation 12'
                                        */
  real_T Saturation13_UpperSat;        /* Expression: 0
                                        * Referenced by: '<S47>/Saturation 13'
                                        */
  real_T u6_P1;                        /* Expression: width
                                        * Referenced by: '<S13>/u6'
                                        */
  real_T u6_P2;                        /* Expression: dtype
                                        * Referenced by: '<S13>/u6'
                                        */
  real_T u6_P3;                        /* Expression: portnum
                                        * Referenced by: '<S13>/u6'
                                        */
  real_T u6_P4;                        /* Expression: stime
                                        * Referenced by: '<S13>/u6'
                                        */
  real_T u6_P5;                        /* Expression: stype
                                        * Referenced by: '<S13>/u6'
                                        */
  real_T u6_P6;                        /* Expression: btype
                                        * Referenced by: '<S13>/u6'
                                        */
  real_T Gain1_Gain_l;                 /* Expression: 1000
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T y_hat_P1_g;                   /* Expression: width
                                        * Referenced by: '<Root>/y_hat'
                                        */
  real_T y_hat_P2_c;                   /* Expression: dtype
                                        * Referenced by: '<Root>/y_hat'
                                        */
  real_T y_hat_P3_l;                   /* Expression: portnum
                                        * Referenced by: '<Root>/y_hat'
                                        */
  real_T y_hat_P4_p;                   /* Expression: stime
                                        * Referenced by: '<Root>/y_hat'
                                        */
  real_T y_hat_P5_b;                   /* Expression: stype
                                        * Referenced by: '<Root>/y_hat'
                                        */
  real_T y_hat_P6_b;                   /* Expression: btype
                                        * Referenced by: '<Root>/y_hat'
                                        */
  real_T Constant_Value_g;             /* Expression: 50
                                        * Referenced by: '<S16>/Constant'
                                        */
  real_T Constant1_Value_o;            /* Expression: 50
                                        * Referenced by: '<S16>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 50
                                        * Referenced by: '<S16>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<S16>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 1
                                        * Referenced by: '<S16>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<S16>/Constant5'
                                        */
  real_T y_error_P1;                   /* Expression: width
                                        * Referenced by: '<S6>/y_error'
                                        */
  real_T y_error_P2;                   /* Expression: dtype
                                        * Referenced by: '<S6>/y_error'
                                        */
  real_T y_error_P3;                   /* Expression: portnum
                                        * Referenced by: '<S6>/y_error'
                                        */
  real_T y_error_P4;                   /* Expression: stime
                                        * Referenced by: '<S6>/y_error'
                                        */
  real_T y_error_P5;                   /* Expression: stype
                                        * Referenced by: '<S6>/y_error'
                                        */
  real_T y_error_P6;                   /* Expression: btype
                                        * Referenced by: '<S6>/y_error'
                                        */
  real_T psi_error_P1;                 /* Expression: width
                                        * Referenced by: '<S6>/psi_error'
                                        */
  real_T psi_error_P2;                 /* Expression: dtype
                                        * Referenced by: '<S6>/psi_error'
                                        */
  real_T psi_error_P3;                 /* Expression: portnum
                                        * Referenced by: '<S6>/psi_error'
                                        */
  real_T psi_error_P4;                 /* Expression: stime
                                        * Referenced by: '<S6>/psi_error'
                                        */
  real_T psi_error_P5;                 /* Expression: stype
                                        * Referenced by: '<S6>/psi_error'
                                        */
  real_T psi_error_P6;                 /* Expression: btype
                                        * Referenced by: '<S6>/psi_error'
                                        */
  real_T x_error_P1;                   /* Expression: width
                                        * Referenced by: '<S6>/x_error'
                                        */
  real_T x_error_P2;                   /* Expression: dtype
                                        * Referenced by: '<S6>/x_error'
                                        */
  real_T x_error_P3;                   /* Expression: portnum
                                        * Referenced by: '<S6>/x_error'
                                        */
  real_T x_error_P4;                   /* Expression: stime
                                        * Referenced by: '<S6>/x_error'
                                        */
  real_T x_error_P5;                   /* Expression: stype
                                        * Referenced by: '<S6>/x_error'
                                        */
  real_T x_error_P6;                   /* Expression: btype
                                        * Referenced by: '<S6>/x_error'
                                        */
  real_T x_ref_P1;                     /* Expression: width
                                        * Referenced by: '<S8>/x_ref'
                                        */
  real_T x_ref_P2;                     /* Expression: dtype
                                        * Referenced by: '<S8>/x_ref'
                                        */
  real_T x_ref_P3;                     /* Expression: portnum
                                        * Referenced by: '<S8>/x_ref'
                                        */
  real_T x_ref_P4;                     /* Expression: stime
                                        * Referenced by: '<S8>/x_ref'
                                        */
  real_T x_ref_P5;                     /* Expression: stype
                                        * Referenced by: '<S8>/x_ref'
                                        */
  real_T x_ref_P6;                     /* Expression: btype
                                        * Referenced by: '<S8>/x_ref'
                                        */
  real_T y_ref_P1;                     /* Expression: width
                                        * Referenced by: '<S8>/y_ref'
                                        */
  real_T y_ref_P2;                     /* Expression: dtype
                                        * Referenced by: '<S8>/y_ref'
                                        */
  real_T y_ref_P3;                     /* Expression: portnum
                                        * Referenced by: '<S8>/y_ref'
                                        */
  real_T y_ref_P4;                     /* Expression: stime
                                        * Referenced by: '<S8>/y_ref'
                                        */
  real_T y_ref_P5;                     /* Expression: stype
                                        * Referenced by: '<S8>/y_ref'
                                        */
  real_T y_ref_P6;                     /* Expression: btype
                                        * Referenced by: '<S8>/y_ref'
                                        */
  real_T Integrator_IC_m;              /* Expression: 0
                                        * Referenced by: '<S8>/Integrator'
                                        */
  real_T w_x_P1;                       /* Expression: width
                                        * Referenced by: '<S15>/w_x'
                                        */
  real_T w_x_P2;                       /* Expression: dtype
                                        * Referenced by: '<S15>/w_x'
                                        */
  real_T w_x_P3;                       /* Expression: portnum
                                        * Referenced by: '<S15>/w_x'
                                        */
  real_T w_x_P4;                       /* Expression: stime
                                        * Referenced by: '<S15>/w_x'
                                        */
  real_T w_x_P5;                       /* Expression: stype
                                        * Referenced by: '<S15>/w_x'
                                        */
  real_T w_x_P6;                       /* Expression: btype
                                        * Referenced by: '<S15>/w_x'
                                        */
  real_T w_y_P1;                       /* Expression: width
                                        * Referenced by: '<S15>/w_y'
                                        */
  real_T w_y_P2;                       /* Expression: dtype
                                        * Referenced by: '<S15>/w_y'
                                        */
  real_T w_y_P3;                       /* Expression: portnum
                                        * Referenced by: '<S15>/w_y'
                                        */
  real_T w_y_P4;                       /* Expression: stime
                                        * Referenced by: '<S15>/w_y'
                                        */
  real_T w_y_P5;                       /* Expression: stype
                                        * Referenced by: '<S15>/w_y'
                                        */
  real_T w_y_P6;                       /* Expression: btype
                                        * Referenced by: '<S15>/w_y'
                                        */
  real_T w_psi_P1;                     /* Expression: width
                                        * Referenced by: '<S15>/w_psi'
                                        */
  real_T w_psi_P2;                     /* Expression: dtype
                                        * Referenced by: '<S15>/w_psi'
                                        */
  real_T w_psi_P3;                     /* Expression: portnum
                                        * Referenced by: '<S15>/w_psi'
                                        */
  real_T w_psi_P4;                     /* Expression: stime
                                        * Referenced by: '<S15>/w_psi'
                                        */
  real_T w_psi_P5;                     /* Expression: stype
                                        * Referenced by: '<S15>/w_psi'
                                        */
  real_T w_psi_P6;                     /* Expression: btype
                                        * Referenced by: '<S15>/w_psi'
                                        */
  real_T zeta_psi_P1;                  /* Expression: width
                                        * Referenced by: '<S15>/zeta_psi'
                                        */
  real_T zeta_psi_P2;                  /* Expression: dtype
                                        * Referenced by: '<S15>/zeta_psi'
                                        */
  real_T zeta_psi_P3;                  /* Expression: portnum
                                        * Referenced by: '<S15>/zeta_psi'
                                        */
  real_T zeta_psi_P4;                  /* Expression: stime
                                        * Referenced by: '<S15>/zeta_psi'
                                        */
  real_T zeta_psi_P5;                  /* Expression: stype
                                        * Referenced by: '<S15>/zeta_psi'
                                        */
  real_T zeta_psi_P6;                  /* Expression: btype
                                        * Referenced by: '<S15>/zeta_psi'
                                        */
  real_T zeta_x_P1;                    /* Expression: width
                                        * Referenced by: '<S15>/zeta_x'
                                        */
  real_T zeta_x_P2;                    /* Expression: dtype
                                        * Referenced by: '<S15>/zeta_x'
                                        */
  real_T zeta_x_P3;                    /* Expression: portnum
                                        * Referenced by: '<S15>/zeta_x'
                                        */
  real_T zeta_x_P4;                    /* Expression: stime
                                        * Referenced by: '<S15>/zeta_x'
                                        */
  real_T zeta_x_P5;                    /* Expression: stype
                                        * Referenced by: '<S15>/zeta_x'
                                        */
  real_T zeta_x_P6;                    /* Expression: btype
                                        * Referenced by: '<S15>/zeta_x'
                                        */
  real_T zeta_y_P1;                    /* Expression: width
                                        * Referenced by: '<S15>/zeta_y'
                                        */
  real_T zeta_y_P2;                    /* Expression: dtype
                                        * Referenced by: '<S15>/zeta_y'
                                        */
  real_T zeta_y_P3;                    /* Expression: portnum
                                        * Referenced by: '<S15>/zeta_y'
                                        */
  real_T zeta_y_P4;                    /* Expression: stime
                                        * Referenced by: '<S15>/zeta_y'
                                        */
  real_T zeta_y_P5;                    /* Expression: stype
                                        * Referenced by: '<S15>/zeta_y'
                                        */
  real_T zeta_y_P6;                    /* Expression: btype
                                        * Referenced by: '<S15>/zeta_y'
                                        */
  real_T T_psi_P1;                     /* Expression: width
                                        * Referenced by: '<S15>/T_psi'
                                        */
  real_T T_psi_P2;                     /* Expression: dtype
                                        * Referenced by: '<S15>/T_psi'
                                        */
  real_T T_psi_P3;                     /* Expression: portnum
                                        * Referenced by: '<S15>/T_psi'
                                        */
  real_T T_psi_P4;                     /* Expression: stime
                                        * Referenced by: '<S15>/T_psi'
                                        */
  real_T T_psi_P5;                     /* Expression: stype
                                        * Referenced by: '<S15>/T_psi'
                                        */
  real_T T_psi_P6;                     /* Expression: btype
                                        * Referenced by: '<S15>/T_psi'
                                        */
  real_T T_x_P1;                       /* Expression: width
                                        * Referenced by: '<S15>/T_x'
                                        */
  real_T T_x_P2;                       /* Expression: dtype
                                        * Referenced by: '<S15>/T_x'
                                        */
  real_T T_x_P3;                       /* Expression: portnum
                                        * Referenced by: '<S15>/T_x'
                                        */
  real_T T_x_P4;                       /* Expression: stime
                                        * Referenced by: '<S15>/T_x'
                                        */
  real_T T_x_P5;                       /* Expression: stype
                                        * Referenced by: '<S15>/T_x'
                                        */
  real_T T_x_P6;                       /* Expression: btype
                                        * Referenced by: '<S15>/T_x'
                                        */
  real_T T_y_P1;                       /* Expression: width
                                        * Referenced by: '<S15>/T_y'
                                        */
  real_T T_y_P2;                       /* Expression: dtype
                                        * Referenced by: '<S15>/T_y'
                                        */
  real_T T_y_P3;                       /* Expression: portnum
                                        * Referenced by: '<S15>/T_y'
                                        */
  real_T T_y_P4;                       /* Expression: stime
                                        * Referenced by: '<S15>/T_y'
                                        */
  real_T T_y_P5;                       /* Expression: stype
                                        * Referenced by: '<S15>/T_y'
                                        */
  real_T T_y_P6;                       /* Expression: btype
                                        * Referenced by: '<S15>/T_y'
                                        */
  real_T psi_ref_P1;                   /* Expression: width
                                        * Referenced by: '<S8>/psi_ref'
                                        */
  real_T psi_ref_P2;                   /* Expression: dtype
                                        * Referenced by: '<S8>/psi_ref'
                                        */
  real_T psi_ref_P3;                   /* Expression: portnum
                                        * Referenced by: '<S8>/psi_ref'
                                        */
  real_T psi_ref_P4;                   /* Expression: stime
                                        * Referenced by: '<S8>/psi_ref'
                                        */
  real_T psi_ref_P5;                   /* Expression: stype
                                        * Referenced by: '<S8>/psi_ref'
                                        */
  real_T psi_ref_P6;                   /* Expression: btype
                                        * Referenced by: '<S8>/psi_ref'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<S11>/Delay'
                                        */
  real_T Constant_Value_j[2];          /* Expression: hd2.den{1,1}
                                        * Referenced by: '<S48>/Constant'
                                        */
  real_T Constant1_Value_i[2];         /* Expression: hd2.num{1,1}
                                        * Referenced by: '<S48>/Constant1'
                                        */
  real_T Delay_InitialCondition_m;     /* Expression: 0
                                        * Referenced by: '<S48>/Delay'
                                        */
  real_T Delay_InitialCondition_a;     /* Expression: 0
                                        * Referenced by: '<S63>/Delay'
                                        */
  real_T Constant1_Value_p[3];         /* Expression: hd.num{1,1}
                                        * Referenced by: '<S63>/Constant1'
                                        */
  real_T Constant2_Value_b[3];         /* Expression: hd.den{1,1}
                                        * Referenced by: '<S63>/Constant2'
                                        */
  real_T DiscreteTransferFcn_InitialStat;/* Expression: 0
                                          * Referenced by: '<S63>/Discrete Transfer Fcn'
                                          */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S66>/TSamp'
                                        */
  real_T AccelerationLimit_RisingLim;  /* Computed Parameter: AccelerationLimit_RisingLim
                                        * Referenced by: '<S63>/Acceleration Limit'
                                        */
  real_T AccelerationLimit_FallingLim; /* Computed Parameter: AccelerationLimit_FallingLim
                                        * Referenced by: '<S63>/Acceleration Limit'
                                        */
  real_T AccelerationLimit_IC;         /* Expression: 0
                                        * Referenced by: '<S63>/Acceleration Limit'
                                        */
  real_T Memory_X0;                    /* Expression: 1
                                        * Referenced by: '<S63>/Memory'
                                        */
  real_T reset_P1_d;                   /* Expression: width
                                        * Referenced by: '<S65>/reset'
                                        */
  real_T reset_P2_m;                   /* Expression: dtype
                                        * Referenced by: '<S65>/reset'
                                        */
  real_T reset_P3_l0;                  /* Expression: portnum
                                        * Referenced by: '<S65>/reset'
                                        */
  real_T reset_P4_la;                  /* Expression: stime
                                        * Referenced by: '<S65>/reset'
                                        */
  real_T reset_P5_b;                   /* Expression: stype
                                        * Referenced by: '<S65>/reset'
                                        */
  real_T reset_P6_l;                   /* Expression: btype
                                        * Referenced by: '<S65>/reset'
                                        */
  real_T Integrator_IC_j;              /* Expression: 0
                                        * Referenced by: '<S65>/Integrator'
                                        */
  real_T NaN_Value;                    /* Expression: 0
                                        * Referenced by: '<S63>/NaN'
                                        */
  real_T DiscreteTransferFcn_InitialSt_i;/* Expression: 0
                                          * Referenced by: '<S48>/Discrete Transfer Fcn'
                                          */
  real_T Control_test_Pa_P1;           /* Expression: width
                                        * Referenced by: '<S61>/Control_test_Pa'
                                        */
  real_T Control_test_Pa_P2;           /* Expression: dtype
                                        * Referenced by: '<S61>/Control_test_Pa'
                                        */
  real_T Control_test_Pa_P3;           /* Expression: portnum
                                        * Referenced by: '<S61>/Control_test_Pa'
                                        */
  real_T Control_test_Pa_P4;           /* Expression: stime
                                        * Referenced by: '<S61>/Control_test_Pa'
                                        */
  real_T Control_test_Pa_P5;           /* Expression: stype
                                        * Referenced by: '<S61>/Control_test_Pa'
                                        */
  real_T Control_test_Pa_P6;           /* Expression: btype
                                        * Referenced by: '<S61>/Control_test_Pa'
                                        */
  real_T Constant_Value_d[2];          /* Expression: hd2.den{1,1}
                                        * Referenced by: '<S49>/Constant'
                                        */
  real_T Constant1_Value_b[2];         /* Expression: hd2.num{1,1}
                                        * Referenced by: '<S49>/Constant1'
                                        */
  real_T Delay_InitialCondition_j;     /* Expression: 0
                                        * Referenced by: '<S49>/Delay'
                                        */
  real_T Delay_InitialCondition_n;     /* Expression: 0
                                        * Referenced by: '<S72>/Delay'
                                        */
  real_T Constant1_Value_m[3];         /* Expression: hd.num{1,1}
                                        * Referenced by: '<S72>/Constant1'
                                        */
  real_T Constant2_Value_k[3];         /* Expression: hd.den{1,1}
                                        * Referenced by: '<S72>/Constant2'
                                        */
  real_T DiscreteTransferFcn_InitialSt_f;/* Expression: 0
                                          * Referenced by: '<S72>/Discrete Transfer Fcn'
                                          */
  real_T TSamp_WtEt_g;                 /* Computed Parameter: TSamp_WtEt_g
                                        * Referenced by: '<S75>/TSamp'
                                        */
  real_T AccelerationLimit_RisingLim_p;/* Computed Parameter: AccelerationLimit_RisingLim_p
                                        * Referenced by: '<S72>/Acceleration Limit'
                                        */
  real_T AccelerationLimit_FallingLim_n;/* Computed Parameter: AccelerationLimit_FallingLim_n
                                         * Referenced by: '<S72>/Acceleration Limit'
                                         */
  real_T AccelerationLimit_IC_l;       /* Expression: 0
                                        * Referenced by: '<S72>/Acceleration Limit'
                                        */
  real_T Memory_X0_h;                  /* Expression: 1
                                        * Referenced by: '<S72>/Memory'
                                        */
  real_T reset_P1_l;                   /* Expression: width
                                        * Referenced by: '<S74>/reset'
                                        */
  real_T reset_P2_j;                   /* Expression: dtype
                                        * Referenced by: '<S74>/reset'
                                        */
  real_T reset_P3_m;                   /* Expression: portnum
                                        * Referenced by: '<S74>/reset'
                                        */
  real_T reset_P4_gp;                  /* Expression: stime
                                        * Referenced by: '<S74>/reset'
                                        */
  real_T reset_P5_d;                   /* Expression: stype
                                        * Referenced by: '<S74>/reset'
                                        */
  real_T reset_P6_m;                   /* Expression: btype
                                        * Referenced by: '<S74>/reset'
                                        */
  real_T Integrator_IC_p;              /* Expression: 0
                                        * Referenced by: '<S74>/Integrator'
                                        */
  real_T NaN_Value_n;                  /* Expression: 0
                                        * Referenced by: '<S72>/NaN'
                                        */
  real_T DiscreteTransferFcn_InitialSt_p;/* Expression: 0
                                          * Referenced by: '<S49>/Discrete Transfer Fcn'
                                          */
  real_T Constant_Value_gq[2];         /* Expression: hd2.den{1,1}
                                        * Referenced by: '<S50>/Constant'
                                        */
  real_T Constant1_Value_l[2];         /* Expression: hd2.num{1,1}
                                        * Referenced by: '<S50>/Constant1'
                                        */
  real_T Delay_InitialCondition_b;     /* Expression: 0
                                        * Referenced by: '<S50>/Delay'
                                        */
  real_T Delay_InitialCondition_o;     /* Expression: 0
                                        * Referenced by: '<S81>/Delay'
                                        */
  real_T Constant1_Value_c[3];         /* Expression: hd.num{1,1}
                                        * Referenced by: '<S81>/Constant1'
                                        */
  real_T Constant2_Value_k5[3];        /* Expression: hd.den{1,1}
                                        * Referenced by: '<S81>/Constant2'
                                        */
  real_T DiscreteTransferFcn_InitialSt_h;/* Expression: 0
                                          * Referenced by: '<S81>/Discrete Transfer Fcn'
                                          */
  real_T TSamp_WtEt_i;                 /* Computed Parameter: TSamp_WtEt_i
                                        * Referenced by: '<S84>/TSamp'
                                        */
  real_T Accelerationlimiter_RisingLim;/* Computed Parameter: Accelerationlimiter_RisingLim
                                        * Referenced by: '<S81>/Acceleration limiter'
                                        */
  real_T Accelerationlimiter_FallingLim;/* Computed Parameter: Accelerationlimiter_FallingLim
                                         * Referenced by: '<S81>/Acceleration limiter'
                                         */
  real_T Accelerationlimiter_IC;       /* Expression: 0
                                        * Referenced by: '<S81>/Acceleration limiter'
                                        */
  real_T Memory_X0_d;                  /* Expression: 1
                                        * Referenced by: '<S81>/Memory'
                                        */
  real_T reset_P1_e;                   /* Expression: width
                                        * Referenced by: '<S83>/reset'
                                        */
  real_T reset_P2_h;                   /* Expression: dtype
                                        * Referenced by: '<S83>/reset'
                                        */
  real_T reset_P3_ea;                  /* Expression: portnum
                                        * Referenced by: '<S83>/reset'
                                        */
  real_T reset_P4_g2;                  /* Expression: stime
                                        * Referenced by: '<S83>/reset'
                                        */
  real_T reset_P5_fq;                  /* Expression: stype
                                        * Referenced by: '<S83>/reset'
                                        */
  real_T reset_P6_a4;                  /* Expression: btype
                                        * Referenced by: '<S83>/reset'
                                        */
  real_T Integrator_IC_k;              /* Expression: 0
                                        * Referenced by: '<S83>/Integrator'
                                        */
  real_T NaN_Value_k;                  /* Expression: 0
                                        * Referenced by: '<S81>/NaN'
                                        */
  real_T DiscreteTransferFcn_InitialSt_n;/* Expression: 0
                                          * Referenced by: '<S50>/Discrete Transfer Fcn'
                                          */
  real_T Constant_Value_m[2];          /* Expression: hd2.den{1,1}
                                        * Referenced by: '<S51>/Constant'
                                        */
  real_T Constant1_Value_h[2];         /* Expression: hd2.num{1,1}
                                        * Referenced by: '<S51>/Constant1'
                                        */
  real_T Delay_InitialCondition_d;     /* Expression: 0
                                        * Referenced by: '<S51>/Delay'
                                        */
  real_T Delay_InitialCondition_b4;    /* Expression: 0
                                        * Referenced by: '<S90>/Delay'
                                        */
  real_T Constant1_Value_d[3];         /* Expression: hd.num{1,1}
                                        * Referenced by: '<S90>/Constant1'
                                        */
  real_T Constant2_Value_h[3];         /* Expression: hd.den{1,1}
                                        * Referenced by: '<S90>/Constant2'
                                        */
  real_T DiscreteTransferFcn_InitialS_nq;/* Expression: 0
                                          * Referenced by: '<S90>/Discrete Transfer Fcn'
                                          */
  real_T TSamp_WtEt_n;                 /* Computed Parameter: TSamp_WtEt_n
                                        * Referenced by: '<S93>/TSamp'
                                        */
  real_T Accelerationlimiter_RisingLim_i;/* Computed Parameter: Accelerationlimiter_RisingLim_i
                                          * Referenced by: '<S90>/Acceleration limiter'
                                          */
  real_T Accelerationlimiter_FallingLi_i;/* Computed Parameter: Accelerationlimiter_FallingLi_i
                                          * Referenced by: '<S90>/Acceleration limiter'
                                          */
  real_T Accelerationlimiter_IC_i;     /* Expression: 0
                                        * Referenced by: '<S90>/Acceleration limiter'
                                        */
  real_T Memory_X0_b;                  /* Expression: 1
                                        * Referenced by: '<S90>/Memory'
                                        */
  real_T reset_P1_pb;                  /* Expression: width
                                        * Referenced by: '<S92>/reset'
                                        */
  real_T reset_P2_f;                   /* Expression: dtype
                                        * Referenced by: '<S92>/reset'
                                        */
  real_T reset_P3_n;                   /* Expression: portnum
                                        * Referenced by: '<S92>/reset'
                                        */
  real_T reset_P4_h;                   /* Expression: stime
                                        * Referenced by: '<S92>/reset'
                                        */
  real_T reset_P5_i;                   /* Expression: stype
                                        * Referenced by: '<S92>/reset'
                                        */
  real_T reset_P6_g;                   /* Expression: btype
                                        * Referenced by: '<S92>/reset'
                                        */
  real_T Integrator_IC_l;              /* Expression: 0
                                        * Referenced by: '<S92>/Integrator'
                                        */
  real_T NaN_Value_ks;                 /* Expression: 0
                                        * Referenced by: '<S90>/NaN'
                                        */
  real_T DiscreteTransferFcn_InitialSt_g;/* Expression: 0
                                          * Referenced by: '<S51>/Discrete Transfer Fcn'
                                          */
  real_T Constant_Value_gh[2];         /* Expression: hd2.den{1,1}
                                        * Referenced by: '<S52>/Constant'
                                        */
  real_T Constant1_Value_e[2];         /* Expression: hd2.num{1,1}
                                        * Referenced by: '<S52>/Constant1'
                                        */
  real_T Delay_InitialCondition_g;     /* Expression: 0
                                        * Referenced by: '<S52>/Delay'
                                        */
  real_T Delay_InitialCondition_p;     /* Expression: 0
                                        * Referenced by: '<S99>/Delay'
                                        */
  real_T Constant1_Value_k[3];         /* Expression: hd.num{1,1}
                                        * Referenced by: '<S99>/Constant1'
                                        */
  real_T Constant2_Value_b0[3];        /* Expression: hd.den{1,1}
                                        * Referenced by: '<S99>/Constant2'
                                        */
  real_T DiscreteTransferFcn_InitialS_il;/* Expression: 0
                                          * Referenced by: '<S99>/Discrete Transfer Fcn'
                                          */
  real_T TSamp_WtEt_ih;                /* Computed Parameter: TSamp_WtEt_ih
                                        * Referenced by: '<S102>/TSamp'
                                        */
  real_T Accelerationlimiter_RisingLim_k;/* Computed Parameter: Accelerationlimiter_RisingLim_k
                                          * Referenced by: '<S99>/Acceleration limiter'
                                          */
  real_T Accelerationlimiter_FallingLi_c;/* Computed Parameter: Accelerationlimiter_FallingLi_c
                                          * Referenced by: '<S99>/Acceleration limiter'
                                          */
  real_T Accelerationlimiter_IC_d;     /* Expression: 0
                                        * Referenced by: '<S99>/Acceleration limiter'
                                        */
  real_T Memory_X0_n;                  /* Expression: 1
                                        * Referenced by: '<S99>/Memory'
                                        */
  real_T reset_P1_kj;                  /* Expression: width
                                        * Referenced by: '<S101>/reset'
                                        */
  real_T reset_P2_ae;                  /* Expression: dtype
                                        * Referenced by: '<S101>/reset'
                                        */
  real_T reset_P3_mr;                  /* Expression: portnum
                                        * Referenced by: '<S101>/reset'
                                        */
  real_T reset_P4_hn;                  /* Expression: stime
                                        * Referenced by: '<S101>/reset'
                                        */
  real_T reset_P5_fh;                  /* Expression: stype
                                        * Referenced by: '<S101>/reset'
                                        */
  real_T reset_P6_fg;                  /* Expression: btype
                                        * Referenced by: '<S101>/reset'
                                        */
  real_T Integrator_IC_hh;             /* Expression: 0
                                        * Referenced by: '<S101>/Integrator'
                                        */
  real_T NaN_Value_ny;                 /* Expression: 0
                                        * Referenced by: '<S99>/NaN'
                                        */
  real_T DiscreteTransferFcn_InitialSt_k;/* Expression: 0
                                          * Referenced by: '<S52>/Discrete Transfer Fcn'
                                          */
  real_T Constant_Value_b[2];          /* Expression: hd2.den{1,1}
                                        * Referenced by: '<S53>/Constant'
                                        */
  real_T Constant1_Value_oi[2];        /* Expression: hd2.num{1,1}
                                        * Referenced by: '<S53>/Constant1'
                                        */
  real_T Delay_InitialCondition_md;    /* Expression: 0
                                        * Referenced by: '<S53>/Delay'
                                        */
  real_T Delay_InitialCondition_gp;    /* Expression: 0
                                        * Referenced by: '<S108>/Delay'
                                        */
  real_T Constant1_Value_pu[3];        /* Expression: hd.num{1,1}
                                        * Referenced by: '<S108>/Constant1'
                                        */
  real_T Constant2_Value_p[3];         /* Expression: hd.den{1,1}
                                        * Referenced by: '<S108>/Constant2'
                                        */
  real_T DiscreteTransferFcn_InitialS_fz;/* Expression: 0
                                          * Referenced by: '<S108>/Discrete Transfer Fcn'
                                          */
  real_T TSamp_WtEt_l;                 /* Computed Parameter: TSamp_WtEt_l
                                        * Referenced by: '<S111>/TSamp'
                                        */
  real_T Accelerationlimiter_RisingLim_b;/* Computed Parameter: Accelerationlimiter_RisingLim_b
                                          * Referenced by: '<S108>/Acceleration limiter'
                                          */
  real_T Accelerationlimiter_FallingLi_j;/* Computed Parameter: Accelerationlimiter_FallingLi_j
                                          * Referenced by: '<S108>/Acceleration limiter'
                                          */
  real_T Accelerationlimiter_IC_g;     /* Expression: 0
                                        * Referenced by: '<S108>/Acceleration limiter'
                                        */
  real_T Memory_X0_m;                  /* Expression: 1
                                        * Referenced by: '<S108>/Memory'
                                        */
  real_T reset_P1_fv;                  /* Expression: width
                                        * Referenced by: '<S110>/reset'
                                        */
  real_T reset_P2_i;                   /* Expression: dtype
                                        * Referenced by: '<S110>/reset'
                                        */
  real_T reset_P3_dc;                  /* Expression: portnum
                                        * Referenced by: '<S110>/reset'
                                        */
  real_T reset_P4_lv;                  /* Expression: stime
                                        * Referenced by: '<S110>/reset'
                                        */
  real_T reset_P5_j;                   /* Expression: stype
                                        * Referenced by: '<S110>/reset'
                                        */
  real_T reset_P6_o;                   /* Expression: btype
                                        * Referenced by: '<S110>/reset'
                                        */
  real_T Integrator_IC_pr;             /* Expression: 0
                                        * Referenced by: '<S110>/Integrator'
                                        */
  real_T NaN_Value_m;                  /* Expression: 0
                                        * Referenced by: '<S108>/NaN'
                                        */
  real_T DiscreteTransferFcn_InitialSt_j;/* Expression: 0
                                          * Referenced by: '<S53>/Discrete Transfer Fcn'
                                          */
  real_T Acc_x_P1;                     /* Expression: width
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  real_T Acc_x_P2;                     /* Expression: dtype
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  real_T Acc_x_P3;                     /* Expression: portnum
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  real_T Acc_x_P4;                     /* Expression: stime
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  real_T Acc_x_P5;                     /* Expression: stype
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  real_T Acc_x_P6;                     /* Expression: btype
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  real_T Acc_y_P1;                     /* Expression: width
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  real_T Acc_y_P2;                     /* Expression: dtype
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  real_T Acc_y_P3;                     /* Expression: portnum
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  real_T Acc_y_P4;                     /* Expression: stime
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  real_T Acc_y_P5;                     /* Expression: stype
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  real_T Acc_y_P6;                     /* Expression: btype
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  real_T Acc_z_P1;                     /* Expression: width
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  real_T Acc_z_P2;                     /* Expression: dtype
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  real_T Acc_z_P3;                     /* Expression: portnum
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  real_T Acc_z_P4;                     /* Expression: stime
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  real_T Acc_z_P5;                     /* Expression: stype
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  real_T Acc_z_P6;                     /* Expression: btype
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  real_T Gyro_x_P1;                    /* Expression: width
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  real_T Gyro_x_P2;                    /* Expression: dtype
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  real_T Gyro_x_P3;                    /* Expression: portnum
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  real_T Gyro_x_P4;                    /* Expression: stime
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  real_T Gyro_x_P5;                    /* Expression: stype
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  real_T Gyro_x_P6;                    /* Expression: btype
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  real_T Gyro_y_P1;                    /* Expression: width
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  real_T Gyro_y_P2;                    /* Expression: dtype
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  real_T Gyro_y_P3;                    /* Expression: portnum
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  real_T Gyro_y_P4;                    /* Expression: stime
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  real_T Gyro_y_P5;                    /* Expression: stype
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  real_T Gyro_y_P6;                    /* Expression: btype
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  real_T Gyro_z_P1;                    /* Expression: width
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  real_T Gyro_z_P2;                    /* Expression: dtype
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  real_T Gyro_z_P3;                    /* Expression: portnum
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  real_T Gyro_z_P4;                    /* Expression: stime
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  real_T Gyro_z_P5;                    /* Expression: stype
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  real_T Gyro_z_P6;                    /* Expression: btype
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S11>/Delay'
                                        */
  uint32_T Delay_DelayLength_a;        /* Computed Parameter: Delay_DelayLength_a
                                        * Referenced by: '<S48>/Delay'
                                        */
  uint32_T Delay_DelayLength_h;        /* Computed Parameter: Delay_DelayLength_h
                                        * Referenced by: '<S63>/Delay'
                                        */
  uint32_T Delay_DelayLength_f;        /* Computed Parameter: Delay_DelayLength_f
                                        * Referenced by: '<S49>/Delay'
                                        */
  uint32_T Delay_DelayLength_o;        /* Computed Parameter: Delay_DelayLength_o
                                        * Referenced by: '<S72>/Delay'
                                        */
  uint32_T Delay_DelayLength_e;        /* Computed Parameter: Delay_DelayLength_e
                                        * Referenced by: '<S50>/Delay'
                                        */
  uint32_T Delay_DelayLength_o2;       /* Computed Parameter: Delay_DelayLength_o2
                                        * Referenced by: '<S81>/Delay'
                                        */
  uint32_T Delay_DelayLength_k;        /* Computed Parameter: Delay_DelayLength_k
                                        * Referenced by: '<S51>/Delay'
                                        */
  uint32_T Delay_DelayLength_kr;       /* Computed Parameter: Delay_DelayLength_kr
                                        * Referenced by: '<S90>/Delay'
                                        */
  uint32_T Delay_DelayLength_n;        /* Computed Parameter: Delay_DelayLength_n
                                        * Referenced by: '<S52>/Delay'
                                        */
  uint32_T Delay_DelayLength_n4;       /* Computed Parameter: Delay_DelayLength_n4
                                        * Referenced by: '<S99>/Delay'
                                        */
  uint32_T Delay_DelayLength_ho;       /* Computed Parameter: Delay_DelayLength_ho
                                        * Referenced by: '<S53>/Delay'
                                        */
  uint32_T Delay_DelayLength_hw;       /* Computed Parameter: Delay_DelayLength_hw
                                        * Referenced by: '<S108>/Delay'
                                        */
  P_CoreSubsys_ctrl_custom_T CoreSubsys;/* '<S40>/CoreSubsys' */
};

/* Real-time Model Data Structure */
struct tag_RTM_ctrl_custom_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;
  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T blkStateChange;
  real_T odeY[33];
  real_T odeF[3][33];
  ODE3_IntgData intgData;
  void *dwork;

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
    int_T numPeriodicContStates;
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
    boolean_T firstInitCondFlag;
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
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_ctrl_custom_T ctrl_custom_P;

/* Block signals (auto storage) */
extern B_ctrl_custom_T ctrl_custom_B;

/* Continuous states (auto storage) */
extern X_ctrl_custom_T ctrl_custom_X;

/* Block states (auto storage) */
extern DW_ctrl_custom_T ctrl_custom_DW;

/* External data declarations for dependent source files */
extern const real_T ctrl_custom_RGND;  /* real_T ground */

/* Model entry point functions */
extern void ctrl_custom_initialize(void);
extern void ctrl_custom_output(void);
extern void ctrl_custom_update(void);
extern void ctrl_custom_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern ctrl_custom_rtModel *ctrl_custom(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_ctrl_custom_T *const ctrl_custom_M;

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
 * '<Root>' : 'ctrl_custom'
 * '<S1>'   : 'ctrl_custom/IMU'
 * '<S2>'   : 'ctrl_custom/Initialization of parameters'
 * '<S3>'   : 'ctrl_custom/Model Info'
 * '<S4>'   : 'ctrl_custom/Nonlinear Passisve Observer'
 * '<S5>'   : 'ctrl_custom/Observer output '
 * '<S6>'   : 'ctrl_custom/PID controller1'
 * '<S7>'   : 'ctrl_custom/Pose'
 * '<S8>'   : 'ctrl_custom/Referance1'
 * '<S9>'   : 'ctrl_custom/Thrust allocation'
 * '<S10>'  : 'ctrl_custom/Thruster Parameters '
 * '<S11>'  : 'ctrl_custom/Thruster control '
 * '<S12>'  : 'ctrl_custom/Thruster measurment'
 * '<S13>'  : 'ctrl_custom/gain'
 * '<S14>'  : 'ctrl_custom/Initialization of parameters/Control Gains'
 * '<S15>'  : 'ctrl_custom/Initialization of parameters/Guidance Gains'
 * '<S16>'  : 'ctrl_custom/Initialization of parameters/Observer Gains'
 * '<S17>'  : 'ctrl_custom/Initialization of parameters/Guidance Gains/MATLAB Function'
 * '<S18>'  : 'ctrl_custom/Initialization of parameters/Guidance Gains/MATLAB Function1'
 * '<S19>'  : 'ctrl_custom/Initialization of parameters/Guidance Gains/MATLAB Function2'
 * '<S20>'  : 'ctrl_custom/Nonlinear Passisve Observer/C(nu)*nu'
 * '<S21>'  : 'ctrl_custom/Nonlinear Passisve Observer/D(nu)*nu'
 * '<S22>'  : 'ctrl_custom/Nonlinear Passisve Observer/Rotation matrix in yaw 1'
 * '<S23>'  : 'ctrl_custom/Nonlinear Passisve Observer/Transpose Rotation Matrix'
 * '<S24>'  : 'ctrl_custom/Nonlinear Passisve Observer/Transpose Rotation matrix'
 * '<S25>'  : 'ctrl_custom/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]'
 * '<S26>'  : 'ctrl_custom/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]1'
 * '<S27>'  : 'ctrl_custom/Observer output /b_hat output'
 * '<S28>'  : 'ctrl_custom/Observer output /eta_hat output'
 * '<S29>'  : 'ctrl_custom/Observer output /nu_dot_hat output'
 * '<S30>'  : 'ctrl_custom/Observer output /nu_hat output'
 * '<S31>'  : 'ctrl_custom/PID controller1/Transposed rotation  matrix in yaw1'
 * '<S32>'  : 'ctrl_custom/PID controller1/Transposed rotation  matrix in yaw2'
 * '<S33>'  : 'ctrl_custom/PID controller1/[-inf inf] to [-pi pi]'
 * '<S34>'  : 'ctrl_custom/PID controller1/[-inf inf] to [-pi pi]1'
 * '<S35>'  : 'ctrl_custom/Referance1/MATLAB Function'
 * '<S36>'  : 'ctrl_custom/Referance1/MATLAB Function1'
 * '<S37>'  : 'ctrl_custom/Referance1/MATLAB Function2'
 * '<S38>'  : 'ctrl_custom/Referance1/[-inf inf] to [-pi pi]'
 * '<S39>'  : 'ctrl_custom/Thrust allocation/MATLAB Function'
 * '<S40>'  : 'ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed'
 * '<S41>'  : 'ctrl_custom/Thrust allocation/Radians to Degrees'
 * '<S42>'  : 'ctrl_custom/Thrust allocation/angle between  [-180 180]'
 * '<S43>'  : 'ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/Degrees to Radians'
 * '<S44>'  : 'ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/Ensuring angle is  [-pi pi]'
 * '<S45>'  : 'ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/MATLAB Function1'
 * '<S46>'  : 'ctrl_custom/Thruster control /Subsystem1'
 * '<S47>'  : 'ctrl_custom/Thruster control /Thrust and Shaft speed mapped to PWM'
 * '<S48>'  : 'ctrl_custom/Thruster control /Thruster 1'
 * '<S49>'  : 'ctrl_custom/Thruster control /Thruster 2'
 * '<S50>'  : 'ctrl_custom/Thruster control /Thruster 3'
 * '<S51>'  : 'ctrl_custom/Thruster control /Thruster 4'
 * '<S52>'  : 'ctrl_custom/Thruster control /Thruster 5'
 * '<S53>'  : 'ctrl_custom/Thruster control /Thruster 6'
 * '<S54>'  : 'ctrl_custom/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function'
 * '<S55>'  : 'ctrl_custom/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function1'
 * '<S56>'  : 'ctrl_custom/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function2'
 * '<S57>'  : 'ctrl_custom/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function3'
 * '<S58>'  : 'ctrl_custom/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function4'
 * '<S59>'  : 'ctrl_custom/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function5'
 * '<S60>'  : 'ctrl_custom/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function6'
 * '<S61>'  : 'ctrl_custom/Thruster control /Thruster 1/Propeller Hydrodynamics'
 * '<S62>'  : 'ctrl_custom/Thruster control /Thruster 1/Shaft dynamics'
 * '<S63>'  : 'ctrl_custom/Thruster control /Thruster 1/Thruster control'
 * '<S64>'  : 'ctrl_custom/Thruster control /Thruster 1/Propeller Hydrodynamics/Actual Force and Torque'
 * '<S65>'  : 'ctrl_custom/Thruster control /Thruster 1/Thruster control/Core controller'
 * '<S66>'  : 'ctrl_custom/Thruster control /Thruster 1/Thruster control/Discrete Derivative'
 * '<S67>'  : 'ctrl_custom/Thruster control /Thruster 1/Thruster control/MATLAB Function'
 * '<S68>'  : 'ctrl_custom/Thruster control /Thruster 1/Thruster control/Supervisor'
 * '<S69>'  : 'ctrl_custom/Thruster control /Thruster 1/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power'
 * '<S70>'  : 'ctrl_custom/Thruster control /Thruster 2/Propeller Hydrodynamics'
 * '<S71>'  : 'ctrl_custom/Thruster control /Thruster 2/Shaft dynamics'
 * '<S72>'  : 'ctrl_custom/Thruster control /Thruster 2/Thruster control'
 * '<S73>'  : 'ctrl_custom/Thruster control /Thruster 2/Propeller Hydrodynamics/Actual Force and Torque'
 * '<S74>'  : 'ctrl_custom/Thruster control /Thruster 2/Thruster control/Core controller'
 * '<S75>'  : 'ctrl_custom/Thruster control /Thruster 2/Thruster control/Discrete Derivative'
 * '<S76>'  : 'ctrl_custom/Thruster control /Thruster 2/Thruster control/MATLAB Function'
 * '<S77>'  : 'ctrl_custom/Thruster control /Thruster 2/Thruster control/Supervisor'
 * '<S78>'  : 'ctrl_custom/Thruster control /Thruster 2/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power'
 * '<S79>'  : 'ctrl_custom/Thruster control /Thruster 3/Propeller Hydrodynamics'
 * '<S80>'  : 'ctrl_custom/Thruster control /Thruster 3/Shaft dynamics'
 * '<S81>'  : 'ctrl_custom/Thruster control /Thruster 3/Thruster control'
 * '<S82>'  : 'ctrl_custom/Thruster control /Thruster 3/Propeller Hydrodynamics/Actual Force and Torque'
 * '<S83>'  : 'ctrl_custom/Thruster control /Thruster 3/Thruster control/Core controller'
 * '<S84>'  : 'ctrl_custom/Thruster control /Thruster 3/Thruster control/Discrete Derivative'
 * '<S85>'  : 'ctrl_custom/Thruster control /Thruster 3/Thruster control/MATLAB Function'
 * '<S86>'  : 'ctrl_custom/Thruster control /Thruster 3/Thruster control/Supervisor'
 * '<S87>'  : 'ctrl_custom/Thruster control /Thruster 3/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power'
 * '<S88>'  : 'ctrl_custom/Thruster control /Thruster 4/Propeller Hydrodynamics'
 * '<S89>'  : 'ctrl_custom/Thruster control /Thruster 4/Shaft dynamics'
 * '<S90>'  : 'ctrl_custom/Thruster control /Thruster 4/Thruster control'
 * '<S91>'  : 'ctrl_custom/Thruster control /Thruster 4/Propeller Hydrodynamics/Actual Force and Torque'
 * '<S92>'  : 'ctrl_custom/Thruster control /Thruster 4/Thruster control/Core controller'
 * '<S93>'  : 'ctrl_custom/Thruster control /Thruster 4/Thruster control/Discrete Derivative'
 * '<S94>'  : 'ctrl_custom/Thruster control /Thruster 4/Thruster control/MATLAB Function'
 * '<S95>'  : 'ctrl_custom/Thruster control /Thruster 4/Thruster control/Supervisor'
 * '<S96>'  : 'ctrl_custom/Thruster control /Thruster 4/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power'
 * '<S97>'  : 'ctrl_custom/Thruster control /Thruster 5/Propeller Hydrodynamics'
 * '<S98>'  : 'ctrl_custom/Thruster control /Thruster 5/Shaft dynamics'
 * '<S99>'  : 'ctrl_custom/Thruster control /Thruster 5/Thruster control'
 * '<S100>' : 'ctrl_custom/Thruster control /Thruster 5/Propeller Hydrodynamics/Actual Force and Torque'
 * '<S101>' : 'ctrl_custom/Thruster control /Thruster 5/Thruster control/Core controller'
 * '<S102>' : 'ctrl_custom/Thruster control /Thruster 5/Thruster control/Discrete Derivative'
 * '<S103>' : 'ctrl_custom/Thruster control /Thruster 5/Thruster control/MATLAB Function'
 * '<S104>' : 'ctrl_custom/Thruster control /Thruster 5/Thruster control/Supervisor'
 * '<S105>' : 'ctrl_custom/Thruster control /Thruster 5/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power'
 * '<S106>' : 'ctrl_custom/Thruster control /Thruster 6/Propeller Hydrodynamics'
 * '<S107>' : 'ctrl_custom/Thruster control /Thruster 6/Shaft dynamics'
 * '<S108>' : 'ctrl_custom/Thruster control /Thruster 6/Thruster control'
 * '<S109>' : 'ctrl_custom/Thruster control /Thruster 6/Propeller Hydrodynamics/Actual Force and Torque'
 * '<S110>' : 'ctrl_custom/Thruster control /Thruster 6/Thruster control/Core controller'
 * '<S111>' : 'ctrl_custom/Thruster control /Thruster 6/Thruster control/Discrete Derivative'
 * '<S112>' : 'ctrl_custom/Thruster control /Thruster 6/Thruster control/MATLAB Function'
 * '<S113>' : 'ctrl_custom/Thruster control /Thruster 6/Thruster control/Supervisor'
 * '<S114>' : 'ctrl_custom/Thruster control /Thruster 6/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power'
 */
#endif                                 /* RTW_HEADER_ctrl_custom_h_ */

/*========================================================================*
 * NI VeriStand Model Framework code generation
 *
 * Model : ctrl_custom
 * Model version : 1.84
 * VeriStand Model Framework version : 2017.0.0.143 (2017)
 * Source generated on : Tue Jul 18 10:57:11 2017
 *========================================================================*/
#if !defined(NI_HEADER_ctrl_custom_h_)
#define NI_HEADER_ctrl_custom_h_
#ifdef NI_ROOTMODEL_ctrl_custom

/* main model definitions enabled by makefile */
#include "ni_pglobals.h"
#ifndef NI_VERISTAND_MODELDATAFILE
#ifdef NI_VERISTAND_MAINMODELFILE

/* ctrl_custom.c definitions */
int READSIDE = 0;
int tid = 0;

#ifdef MULTITASKING

/* multi-rate model */
P_ctrl_custom_T rtParameter[NUMST+!TID01EQ];
P_ctrl_custom_T *param_lookup[NUMST][2] = {
  { &rtParameter[0], &rtParameter[1] },

  { &rtParameter[0], &rtParameter[1] },
};

#else

/* single-rate model */
P_ctrl_custom_T rtParameter[2];

#endif

#else

extern int READSIDE;

#ifdef MULTITASKING

/* multi-rate model */
extern int tid;
extern P_ctrl_custom_T* param_lookup[NUMST][2];

#else

/* single-rate model */
extern P_ctrl_custom_T rtParameter[];

#endif
#endif

/* Declare parameter macros */
#define _NI_DEFINE_PARAMS_DBL_BUFFER_
#include "ni_pglobals.h"
#endif
#endif
#endif                                 /* NI_HEADER_ctrl_custom_h_ */
