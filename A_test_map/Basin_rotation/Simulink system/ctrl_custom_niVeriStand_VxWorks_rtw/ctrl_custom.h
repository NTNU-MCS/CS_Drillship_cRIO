/*
 * ctrl_custom.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ctrl_custom".
 *
 * Model version              : 1.160
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Sat Jul 29 13:12:00 2017
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

/* Block signals for system '<S11>/MATLAB Function' */
typedef struct {
  real_T y[9];                         /* '<S11>/MATLAB Function' */
} B_MATLABFunction_ctrl_custom_T;

/* Block signals for system '<S45>/CoreSubsys' */
typedef struct {
  real_T angle;                        /* '<S45>/Discrete-Time Integrator' */
  real_T Delay;                        /* '<S45>/Delay' */
  real_T MaxRotationRate;              /* '<S45>/Max Rotation Rate' */
} B_CoreSubsys_ctrl_custom_T;

/* Block states (auto storage) for system '<S45>/CoreSubsys' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S45>/Discrete-Time Integrator' */
  real_T Delay_DSTATE;                 /* '<S45>/Delay' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S45>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator_IC_LOADI;/* '<S45>/Discrete-Time Integrator' */
} DW_CoreSubsys_ctrl_custom_T;

/* Block signals for system '<S52>/MATLAB Function2' */
typedef struct {
  real_T Tc_out;                       /* '<S52>/MATLAB Function2' */
} B_MATLABFunction2_ctrl_custom_T;

/* Block signals for system '<S70>/Core controller: Torque,Power and Combined Torque//Power' */
typedef struct {
  real_T Qcq;                          /* '<S70>/Core controller: Torque,Power and Combined Torque//Power' */
  real_T Qcp;                          /* '<S70>/Core controller: Torque,Power and Combined Torque//Power' */
  real_T Qcc;                          /* '<S70>/Core controller: Torque,Power and Combined Torque//Power' */
} B_CorecontrollerTorquePoweran_T;

/* Block signals for system '<S68>/Supervisor' */
typedef struct {
  real_T u;                            /* '<S68>/Supervisor' */
} B_Supervisor_ctrl_custom_T;

/* Block signals for system '<S75>/Actual Force and Torque' */
typedef struct {
  real_T Ta;                           /* '<S75>/Actual Force and Torque' */
  real_T Qa;                           /* '<S75>/Actual Force and Torque' */
} B_ActualForceandTorque_ctrl_c_T;

/* Block signals for system '<S77>/MATLAB Function' */
typedef struct {
  real_T n_d;                          /* '<S77>/MATLAB Function' */
  real_T T_r;                          /* '<S77>/MATLAB Function' */
} B_MATLABFunction_ctrl_custo_l_T;

/* Block signals (auto storage) */
typedef struct {
  real_T Inputtomodel;                 /* '<Root>/Input to model' */
  real_T Startbutton;                  /* '<Root>/Startbutton' */
  real_T K_p_x;                        /* '<S18>/K_p_x' */
  real_T K_p_y;                        /* '<S18>/K_p_y' */
  real_T K_p_psi;                      /* '<S18>/K_p_psi' */
  real_T K_i_psi;                      /* '<S18>/K_i_psi' */
  real_T K_i_x;                        /* '<S18>/K_i_x' */
  real_T K_i_y;                        /* '<S18>/K_i_y' */
  real_T K_d_psi;                      /* '<S18>/K_d_psi' */
  real_T K_d_x;                        /* '<S18>/K_d_x' */
  real_T K_d_y;                        /* '<S18>/K_d_y' */
  real_T x_m;                          /* '<S9>/x_m' */
  real_T y_m;                          /* '<S9>/y_m' */
  real_T psi_m;                        /* '<S9>/psi_m' */
  real_T Basin_rotation;               /* '<S12>/Basin_rotation' */
  real_T Gain5;                        /* '<S12>/Gain5' */
  real_T Controllswitch;               /* '<Root>/Controll switch' */
  real_T Switch1[3];                   /* '<Root>/Switch1' */
  real_T Integrator[3];                /* '<S5>/Integrator' */
  real_T Sum;                          /* '<S29>/Sum' */
  real_T Sum_e;                        /* '<S39>/Sum' */
  real_T Integrator1[3];               /* '<S5>/Integrator1' */
  real_T regulationerror[3];           /* '<S7>/Sum4' */
  real_T TmpSignalConversionAtMatrixMult[3];/* '<S7>/Transposed rotation  matrix in yaw1' */
  real_T MatrixMultiply1[3];           /* '<S7>/Matrix Multiply1' */
  real_T Switch[3];                    /* '<Root>/Switch' */
  real_T Startbutton1[6];              /* '<Root>/Startbutton1' */
  real_T Gain5_n;                      /* '<Root>/Gain5' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T rpm1;                         /* '<S52>/rpm1 ' */
  real_T rpm2;                         /* '<S52>/rpm2' */
  real_T rpm3;                         /* '<S52>/rpm3' */
  real_T rpm4;                         /* '<S52>/rpm4' */
  real_T rpm5;                         /* '<S52>/rpm5' */
  real_T rpm6;                         /* '<S52>/rpm6' */
  real_T thr_angle_1;                  /* '<S16>/thr_angle_1' */
  real_T thr_angle_2;                  /* '<S16>/thr_angle_2' */
  real_T thr_angle_3;                  /* '<S16>/thr_angle_3' */
  real_T thr_angle_4;                  /* '<S16>/thr_angle_4' */
  real_T thr_angle_5;                  /* '<S16>/thr_angle_5' */
  real_T thr_angle_6;                  /* '<S16>/thr_angle_6' */
  real_T Angle_controller;             /* '<S13>/Angle_controller' */
  real_T ChoosingFixedAzimuthangle[6]; /* '<S13>/Choosing Fixed // Azimuth angle' */
  real_T Saturation1;                  /* '<S51>/Saturation 1' */
  real_T Saturation2;                  /* '<S51>/Saturation 2' */
  real_T Saturation3;                  /* '<S51>/Saturation 3' */
  real_T Saturation4;                  /* '<S51>/Saturation 4' */
  real_T Saturation5;                  /* '<S51>/Saturation 5' */
  real_T Saturation6;                  /* '<S51>/Saturation 6' */
  real_T Gain_h[6];                    /* '<S10>/Gain' */
  real_T Gain4;                        /* '<Root>/Gain4' */
  real_T Gain2;                        /* '<Root>/Gain2' */
  real_T Gain3;                        /* '<Root>/Gain3' */
  real_T Integrator2[3];               /* '<S5>/Integrator2' */
  real_T CreateDiagonalMatrix2[9];     /* '<S20>/Create Diagonal Matrix2' */
  real_T M1[3];                        /* '<S5>/M^-1' */
  real_T Gain8;                        /* '<Root>/Gain8' */
  real_T CreateDiagonalMatrix[9];      /* '<S20>/Create Diagonal Matrix' */
  real_T CreateDiagonalMatrix1[9];     /* '<S20>/Create Diagonal Matrix1' */
  real_T MatrixMultiply1_j[3];         /* '<S5>/Matrix Multiply1' */
  real_T Sum1[3];                      /* '<S5>/Sum1' */
  real_T Gain5_a;                      /* '<S7>/Gain5' */
  real_T x_ref;                        /* '<S11>/x_ref' */
  real_T Integrator1_i[3];             /* '<S11>/Integrator1' */
  real_T w_x;                          /* '<S19>/w_x' */
  real_T w_y;                          /* '<S19>/w_y' */
  real_T w_psi;                        /* '<S19>/w_psi' */
  real_T zeta_psi;                     /* '<S19>/zeta_psi' */
  real_T zeta_x;                       /* '<S19>/zeta_x' */
  real_T zeta_y;                       /* '<S19>/zeta_y' */
  real_T T_psi;                        /* '<S19>/T_psi' */
  real_T T_x;                          /* '<S19>/T_x' */
  real_T T_y;                          /* '<S19>/T_y' */
  real_T y_ref;                        /* '<S11>/y_ref' */
  real_T Sum_m[3];                     /* '<S11>/Sum' */
  real_T Sum2[3];                      /* '<S11>/Sum2' */
  real_T Delay[6];                     /* '<S15>/Delay' */
  real_T Delay_n;                      /* '<S53>/Delay' */
  real_T Delay_o;                      /* '<S68>/Delay' */
  real_T DiscreteTransferFcn;          /* '<S68>/Discrete Transfer Fcn' */
  real_T TSamp;                        /* '<S71>/TSamp' */
  real_T Inertiacompensation;          /* '<S68>/Inertia compensation' */
  real_T Sum1_i;                       /* '<S68>/Sum1' */
  real_T Memory;                       /* '<S68>/Memory' */
  real_T Kp;                           /* '<S70>/Kp' */
  real_T reset;                        /* '<S70>/reset' */
  real_T Sum_j;                        /* '<S68>/Sum' */
  real_T DiscreteTransferFcn_b;        /* '<S53>/Discrete Transfer Fcn' */
  real_T Findingrotationspeed;         /* '<S67>/Finding rotation speed' */
  real_T Ki;                           /* '<S70>/Ki' */
  real_T Delay_f;                      /* '<S54>/Delay' */
  real_T Delay_fg;                     /* '<S77>/Delay' */
  real_T DiscreteTransferFcn_h;        /* '<S77>/Discrete Transfer Fcn' */
  real_T TSamp_g;                      /* '<S80>/TSamp' */
  real_T Inertiacompensation_f;        /* '<S77>/Inertia compensation' */
  real_T Sum1_c;                       /* '<S77>/Sum1' */
  real_T Memory_a;                     /* '<S77>/Memory' */
  real_T Kp_c;                         /* '<S79>/Kp' */
  real_T reset_i;                      /* '<S79>/reset' */
  real_T Sum_ms;                       /* '<S77>/Sum' */
  real_T DiscreteTransferFcn_hl;       /* '<S54>/Discrete Transfer Fcn' */
  real_T Findingrotationspeed_d;       /* '<S76>/Finding rotation speed' */
  real_T Ki_n;                         /* '<S79>/Ki' */
  real_T Delay_h;                      /* '<S55>/Delay' */
  real_T Delay_l;                      /* '<S86>/Delay' */
  real_T DiscreteTransferFcn_k;        /* '<S86>/Discrete Transfer Fcn' */
  real_T TSamp_f;                      /* '<S89>/TSamp' */
  real_T Inertiacompensation_k;        /* '<S86>/Inertia compensation' */
  real_T Sum1_b;                       /* '<S86>/Sum1' */
  real_T Memory_i;                     /* '<S86>/Memory' */
  real_T Kp_h;                         /* '<S88>/Kp' */
  real_T reset_f;                      /* '<S88>/reset' */
  real_T Sum_l;                        /* '<S86>/Sum' */
  real_T DiscreteTransferFcn_ho;       /* '<S55>/Discrete Transfer Fcn' */
  real_T Findingrotationspeed_g;       /* '<S85>/Finding rotation speed' */
  real_T Ki_f;                         /* '<S88>/Ki' */
  real_T Delay_g;                      /* '<S56>/Delay' */
  real_T Delay_nh;                     /* '<S95>/Delay' */
  real_T DiscreteTransferFcn_j;        /* '<S95>/Discrete Transfer Fcn' */
  real_T TSamp_a;                      /* '<S98>/TSamp' */
  real_T Inertiacompensation_p;        /* '<S95>/Inertia compensation' */
  real_T Sum1_h;                       /* '<S95>/Sum1' */
  real_T Memory_c;                     /* '<S95>/Memory' */
  real_T Kp_b;                         /* '<S97>/Kp' */
  real_T reset_im;                     /* '<S97>/reset' */
  real_T Sum_mg;                       /* '<S95>/Sum' */
  real_T DiscreteTransferFcn_p;        /* '<S56>/Discrete Transfer Fcn' */
  real_T Findingrotationspeed_e;       /* '<S94>/Finding rotation speed' */
  real_T Ki_h;                         /* '<S97>/Ki' */
  real_T Delay_f4;                     /* '<S57>/Delay' */
  real_T Delay_a;                      /* '<S104>/Delay' */
  real_T DiscreteTransferFcn_jz;       /* '<S104>/Discrete Transfer Fcn' */
  real_T TSamp_aa;                     /* '<S107>/TSamp' */
  real_T Inertiacompensation_d;        /* '<S104>/Inertia compensation' */
  real_T Sum1_o;                       /* '<S104>/Sum1' */
  real_T Memory_j;                     /* '<S104>/Memory' */
  real_T Kp_ht;                        /* '<S106>/Kp' */
  real_T reset_m;                      /* '<S106>/reset' */
  real_T Sum_i;                        /* '<S104>/Sum' */
  real_T DiscreteTransferFcn_ky;       /* '<S57>/Discrete Transfer Fcn' */
  real_T Findingrotationspeed_n;       /* '<S103>/Finding rotation speed' */
  real_T Ki_j;                         /* '<S106>/Ki' */
  real_T Delay_j;                      /* '<S58>/Delay' */
  real_T Delay_hd;                     /* '<S113>/Delay' */
  real_T DiscreteTransferFcn_a;        /* '<S113>/Discrete Transfer Fcn' */
  real_T TSamp_d;                      /* '<S116>/TSamp' */
  real_T Inertiacompensation_a;        /* '<S113>/Inertia compensation' */
  real_T Sum1_ie;                      /* '<S113>/Sum1' */
  real_T Memory_g;                     /* '<S113>/Memory' */
  real_T Kp_n;                         /* '<S115>/Kp' */
  real_T reset_n;                      /* '<S115>/reset' */
  real_T Sum_o;                        /* '<S113>/Sum' */
  real_T DiscreteTransferFcn_o;        /* '<S58>/Discrete Transfer Fcn' */
  real_T Findingrotationspeed_p;       /* '<S112>/Finding rotation speed' */
  real_T Ki_a;                         /* '<S115>/Ki' */
  real_T TmpSignalConversionAtDelayInpor[6];/* '<S15>/Thrust and Shaft speed mapped to PWM' */
  real_T Acc_x;                        /* '<S1>/Acc_x' */
  real_T Acc_y;                        /* '<S1>/Acc_y' */
  real_T Acc_z;                        /* '<S1>/Acc_z' */
  real_T Gyro_x;                       /* '<S1>/Gyro_x' */
  real_T Gyro_y;                       /* '<S1>/Gyro_y' */
  real_T Gyro_z;                       /* '<S1>/Gyro_z' */
  real_T n_d;                          /* '<S113>/MATLAB Function' */
  real_T n_d_h;                        /* '<S86>/MATLAB Function' */
  real_T n_d_f;                        /* '<S68>/MATLAB Function' */
  real_T Qa;                           /* '<S66>/Actual Force and Torque' */
  real_T Pa;                           /* '<S66>/Actual Force and Torque' */
  real_T Tc_out;                       /* '<S52>/MATLAB Function1' */
  real_T output[12];                   /* '<S52>/MATLAB Function' */
  real_T commanded_tau[3];             /* '<Root>/MATLAB Function' */
  B_Supervisor_ctrl_custom_T sf_Supervisor_h;/* '<S113>/Supervisor' */
  B_CorecontrollerTorquePoweran_T sf_CorecontrollerTorquePowera_i;/* '<S115>/Core controller: Torque,Power and Combined Torque//Power' */
  B_ActualForceandTorque_ctrl_c_T sf_ActualForceandTorque_oa;/* '<S111>/Actual Force and Torque' */
  B_Supervisor_ctrl_custom_T sf_Supervisor_l;/* '<S104>/Supervisor' */
  B_MATLABFunction_ctrl_custo_l_T sf_MATLABFunction_i;/* '<S104>/MATLAB Function' */
  B_CorecontrollerTorquePoweran_T sf_CorecontrollerTorquePowera_h;/* '<S106>/Core controller: Torque,Power and Combined Torque//Power' */
  B_ActualForceandTorque_ctrl_c_T sf_ActualForceandTorque_o;/* '<S102>/Actual Force and Torque' */
  B_Supervisor_ctrl_custom_T sf_Supervisor_c;/* '<S95>/Supervisor' */
  B_MATLABFunction_ctrl_custo_l_T sf_MATLABFunction_ai;/* '<S95>/MATLAB Function' */
  B_CorecontrollerTorquePoweran_T sf_CorecontrollerTorquePowera_d;/* '<S97>/Core controller: Torque,Power and Combined Torque//Power' */
  B_ActualForceandTorque_ctrl_c_T sf_ActualForceandTorque_j3;/* '<S93>/Actual Force and Torque' */
  B_Supervisor_ctrl_custom_T sf_Supervisor_k;/* '<S86>/Supervisor' */
  B_CorecontrollerTorquePoweran_T sf_CorecontrollerTorquePowera_j;/* '<S88>/Core controller: Torque,Power and Combined Torque//Power' */
  B_ActualForceandTorque_ctrl_c_T sf_ActualForceandTorque_i;/* '<S84>/Actual Force and Torque' */
  B_Supervisor_ctrl_custom_T sf_Supervisor_f;/* '<S77>/Supervisor' */
  B_MATLABFunction_ctrl_custo_l_T sf_MATLABFunction_a;/* '<S77>/MATLAB Function' */
  B_CorecontrollerTorquePoweran_T sf_CorecontrollerTorquePowera_c;/* '<S79>/Core controller: Torque,Power and Combined Torque//Power' */
  B_ActualForceandTorque_ctrl_c_T sf_ActualForceandTorque_j;/* '<S75>/Actual Force and Torque' */
  B_Supervisor_ctrl_custom_T sf_Supervisor;/* '<S68>/Supervisor' */
  B_CorecontrollerTorquePoweran_T sf_CorecontrollerTorquePowerand;/* '<S70>/Core controller: Torque,Power and Combined Torque//Power' */
  B_MATLABFunction2_ctrl_custom_T sf_MATLABFunction6;/* '<S52>/MATLAB Function6' */
  B_MATLABFunction2_ctrl_custom_T sf_MATLABFunction5;/* '<S52>/MATLAB Function5' */
  B_MATLABFunction2_ctrl_custom_T sf_MATLABFunction4;/* '<S52>/MATLAB Function4' */
  B_MATLABFunction2_ctrl_custom_T sf_MATLABFunction3;/* '<S52>/MATLAB Function3' */
  B_MATLABFunction2_ctrl_custom_T sf_MATLABFunction2;/* '<S52>/MATLAB Function2' */
  B_CoreSubsys_ctrl_custom_T CoreSubsys[6];/* '<S45>/CoreSubsys' */
  B_MATLABFunction_ctrl_custom_T sf_MATLABFunction1_k;/* '<S11>/MATLAB Function1' */
  B_MATLABFunction_ctrl_custom_T sf_MATLABFunction_b;/* '<S11>/MATLAB Function' */
} B_ctrl_custom_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Delay_DSTATE[6];              /* '<S15>/Delay' */
  real_T Delay_DSTATE_i;               /* '<S53>/Delay' */
  real_T Delay_DSTATE_l;               /* '<S68>/Delay' */
  real_T DiscreteTransferFcn_states[2];/* '<S68>/Discrete Transfer Fcn' */
  real_T UD_DSTATE;                    /* '<S71>/UD' */
  real_T DiscreteTransferFcn_states_h; /* '<S53>/Discrete Transfer Fcn' */
  real_T Delay_DSTATE_f;               /* '<S54>/Delay' */
  real_T Delay_DSTATE_d;               /* '<S77>/Delay' */
  real_T DiscreteTransferFcn_states_d[2];/* '<S77>/Discrete Transfer Fcn' */
  real_T UD_DSTATE_i;                  /* '<S80>/UD' */
  real_T DiscreteTransferFcn_states_i; /* '<S54>/Discrete Transfer Fcn' */
  real_T Delay_DSTATE_j;               /* '<S55>/Delay' */
  real_T Delay_DSTATE_c;               /* '<S86>/Delay' */
  real_T DiscreteTransferFcn_states_o[2];/* '<S86>/Discrete Transfer Fcn' */
  real_T UD_DSTATE_a;                  /* '<S89>/UD' */
  real_T DiscreteTransferFcn_states_c; /* '<S55>/Discrete Transfer Fcn' */
  real_T Delay_DSTATE_g;               /* '<S56>/Delay' */
  real_T Delay_DSTATE_k;               /* '<S95>/Delay' */
  real_T DiscreteTransferFcn_states_cl[2];/* '<S95>/Discrete Transfer Fcn' */
  real_T UD_DSTATE_g;                  /* '<S98>/UD' */
  real_T DiscreteTransferFcn_states_m; /* '<S56>/Discrete Transfer Fcn' */
  real_T Delay_DSTATE_n;               /* '<S57>/Delay' */
  real_T Delay_DSTATE_jt;              /* '<S104>/Delay' */
  real_T DiscreteTransferFcn_states_dh[2];/* '<S104>/Discrete Transfer Fcn' */
  real_T UD_DSTATE_gf;                 /* '<S107>/UD' */
  real_T DiscreteTransferFcn_states_ho;/* '<S57>/Discrete Transfer Fcn' */
  real_T Delay_DSTATE_k2;              /* '<S58>/Delay' */
  real_T Delay_DSTATE_kz;              /* '<S113>/Delay' */
  real_T DiscreteTransferFcn_states_e[2];/* '<S113>/Discrete Transfer Fcn' */
  real_T UD_DSTATE_go;                 /* '<S116>/UD' */
  real_T DiscreteTransferFcn_states_b; /* '<S58>/Discrete Transfer Fcn' */
  real_T Inputtomodel_DWORK1;          /* '<Root>/Input to model' */
  real_T OutputtoWorkspace_DWORK1;     /* '<Root>/Output to Workspace' */
  real_T Startbutton_DWORK1;           /* '<Root>/Startbutton' */
  real_T K_p_x_DWORK1;                 /* '<S18>/K_p_x' */
  real_T K_p_y_DWORK1;                 /* '<S18>/K_p_y' */
  real_T K_p_psi_DWORK1;               /* '<S18>/K_p_psi' */
  real_T K_i_psi_DWORK1;               /* '<S18>/K_i_psi' */
  real_T K_i_x_DWORK1;                 /* '<S18>/K_i_x' */
  real_T K_i_y_DWORK1;                 /* '<S18>/K_i_y' */
  real_T K_d_psi_DWORK1;               /* '<S18>/K_d_psi' */
  real_T K_d_x_DWORK1;                 /* '<S18>/K_d_x' */
  real_T K_d_y_DWORK1;                 /* '<S18>/K_d_y' */
  real_T x_m_DWORK1;                   /* '<S9>/x_m' */
  real_T y_m_DWORK1;                   /* '<S9>/y_m' */
  real_T psi_m_DWORK1;                 /* '<S9>/psi_m' */
  real_T Basin_rotation_DWORK1;        /* '<S12>/Basin_rotation' */
  real_T Controllswitch_DWORK1;        /* '<Root>/Controll switch' */
  real_T tau_surge_DWORK1;             /* '<Root>/tau_surge' */
  real_T tau_sway_DWORK1;              /* '<Root>/tau_sway' */
  real_T Startbutton1_DWORK1[6];       /* '<Root>/Startbutton1' */
  real_T tau_psi_DWORK1;               /* '<Root>/tau_psi' */
  real_T psi_hat_DWORK1;               /* '<Root>/psi_hat' */
  real_T x_hat_DWORK1;                 /* '<Root>/x_hat' */
  real_T y_hat_DWORK1;                 /* '<Root>/y_hat' */
  real_T rpm1_DWORK1;                  /* '<S52>/rpm1 ' */
  real_T rpm2_DWORK1;                  /* '<S52>/rpm2' */
  real_T rpm3_DWORK1;                  /* '<S52>/rpm3' */
  real_T rpm4_DWORK1;                  /* '<S52>/rpm4' */
  real_T rpm5_DWORK1;                  /* '<S52>/rpm5' */
  real_T rpm6_DWORK1;                  /* '<S52>/rpm6' */
  real_T thr_angle_1_DWORK1;           /* '<S16>/thr_angle_1' */
  real_T thr_angle_2_DWORK1;           /* '<S16>/thr_angle_2' */
  real_T thr_angle_3_DWORK1;           /* '<S16>/thr_angle_3' */
  real_T thr_angle_4_DWORK1;           /* '<S16>/thr_angle_4' */
  real_T thr_angle_5_DWORK1;           /* '<S16>/thr_angle_5' */
  real_T thr_angle_6_DWORK1;           /* '<S16>/thr_angle_6' */
  real_T Angle_controller_DWORK1;      /* '<S13>/Angle_controller' */
  real_T tau_commanded_psi_DWORK1;     /* '<Root>/tau_commanded_psi' */
  real_T tau_commanded_x_DWORK1;       /* '<Root>/tau_commanded_x' */
  real_T tau_commanded_y_DWORK1;       /* '<Root>/tau_commanded_y' */
  real_T psi_ref_filter_DWORK1;        /* '<Root>/psi_ref_filter' */
  real_T x_ref_filter_DWORK1;          /* '<Root>/x_ref_filter' */
  real_T y_ref_filter_DWORK1;          /* '<Root>/y_ref_filter' */
  real_T x_hat_DWORK1_o;               /* '<S32>/x_hat' */
  real_T y_hat_DWORK1_d;               /* '<S32>/y_hat' */
  real_T psi_hat_DWORK1_g;             /* '<S32>/psi_hat' */
  real_T u_hat_DWORK1;                 /* '<S34>/u_hat' */
  real_T v_hat_DWORK1;                 /* '<S34>/v_hat' */
  real_T r_hat_DWORK1;                 /* '<S34>/r_hat' */
  real_T u_dot_hat_DWORK1;             /* '<S33>/u_dot_hat' */
  real_T v_dot_hat_DWORK1;             /* '<S33>/v_dot_hat' */
  real_T r_dot_hat_DWORK1;             /* '<S33>/r_dot_hat' */
  real_T b_x_hat_DWORK1;               /* '<S31>/b_x_hat' */
  real_T b_y_hat_DWORK1;               /* '<S31>/b_y_hat' */
  real_T b_psi_hat_DWORK1;             /* '<S31>/b_psi_hat' */
  real_T alpha1_DWORK1;                /* '<S17>/alpha1' */
  real_T alpha2_DWORK1;                /* '<S17>/alpha2' */
  real_T alpha3_DWORK1;                /* '<S17>/alpha3' */
  real_T alpha4_DWORK1;                /* '<S17>/alpha4' */
  real_T alpha5_DWORK1;                /* '<S17>/alpha5' */
  real_T alpha6_DWORK1;                /* '<S17>/alpha6' */
  real_T u1_DWORK1;                    /* '<S17>/u1' */
  real_T u2_DWORK1;                    /* '<S17>/u2' */
  real_T u3_DWORK1;                    /* '<S17>/u3' */
  real_T u4_DWORK1;                    /* '<S17>/u4' */
  real_T u5_DWORK1;                    /* '<S17>/u5' */
  real_T u6_DWORK1;                    /* '<S17>/u6' */
  real_T heading_DWORK1;               /* '<Root>/heading' */
  real_T y_error_DWORK1;               /* '<S7>/y_error' */
  real_T psi_error_DWORK1;             /* '<S7>/psi_error' */
  real_T x_error_DWORK1;               /* '<S7>/x_error' */
  real_T Integral_x_DWORK1;            /* '<S7>/Integral_x' */
  real_T Integral_psi_DWORK1;          /* '<S7>/Integral_psi' */
  real_T Integral_y_DWORK1;            /* '<S7>/Integral_y' */
  real_T x_ref_DWORK1;                 /* '<S11>/x_ref' */
  real_T w_x_DWORK1;                   /* '<S19>/w_x' */
  real_T w_y_DWORK1;                   /* '<S19>/w_y' */
  real_T w_psi_DWORK1;                 /* '<S19>/w_psi' */
  real_T zeta_psi_DWORK1;              /* '<S19>/zeta_psi' */
  real_T zeta_x_DWORK1;                /* '<S19>/zeta_x' */
  real_T zeta_y_DWORK1;                /* '<S19>/zeta_y' */
  real_T T_psi_DWORK1;                 /* '<S19>/T_psi' */
  real_T T_x_DWORK1;                   /* '<S19>/T_x' */
  real_T T_y_DWORK1;                   /* '<S19>/T_y' */
  real_T y_ref_DWORK1;                 /* '<S11>/y_ref' */
  real_T DiscreteTransferFcn_tmp;      /* '<S68>/Discrete Transfer Fcn' */
  real_T PrevY;                        /* '<S68>/Acceleration Limit' */
  real_T Memory_PreviousInput;         /* '<S68>/Memory' */
  real_T reset_DWORK1;                 /* '<S70>/reset' */
  real_T DiscreteTransferFcn_tmp_n;    /* '<S53>/Discrete Transfer Fcn' */
  real_T Control_test_Pa_DWORK1;       /* '<S66>/Control_test_Pa' */
  real_T DiscreteTransferFcn_tmp_h;    /* '<S77>/Discrete Transfer Fcn' */
  real_T PrevY_a;                      /* '<S77>/Acceleration Limit' */
  real_T Memory_PreviousInput_c;       /* '<S77>/Memory' */
  real_T reset_DWORK1_a;               /* '<S79>/reset' */
  real_T DiscreteTransferFcn_tmp_a;    /* '<S54>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_g;    /* '<S86>/Discrete Transfer Fcn' */
  real_T PrevY_an;                     /* '<S86>/Acceleration limiter' */
  real_T Memory_PreviousInput_b;       /* '<S86>/Memory' */
  real_T reset_DWORK1_e;               /* '<S88>/reset' */
  real_T DiscreteTransferFcn_tmp_hw;   /* '<S55>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_l;    /* '<S95>/Discrete Transfer Fcn' */
  real_T PrevY_e;                      /* '<S95>/Acceleration limiter' */
  real_T Memory_PreviousInput_g;       /* '<S95>/Memory' */
  real_T reset_DWORK1_aw;              /* '<S97>/reset' */
  real_T DiscreteTransferFcn_tmp_hu;   /* '<S56>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_d;    /* '<S104>/Discrete Transfer Fcn' */
  real_T PrevY_i;                      /* '<S104>/Acceleration limiter' */
  real_T Memory_PreviousInput_f;       /* '<S104>/Memory' */
  real_T reset_DWORK1_f;               /* '<S106>/reset' */
  real_T DiscreteTransferFcn_tmp_m;    /* '<S57>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn_tmp_o;    /* '<S113>/Discrete Transfer Fcn' */
  real_T PrevY_n;                      /* '<S113>/Acceleration limiter' */
  real_T Memory_PreviousInput_o;       /* '<S113>/Memory' */
  real_T reset_DWORK1_m;               /* '<S115>/reset' */
  real_T DiscreteTransferFcn_tmp_k;    /* '<S58>/Discrete Transfer Fcn' */
  real_T Acc_x_DWORK1;                 /* '<S1>/Acc_x' */
  real_T Acc_y_DWORK1;                 /* '<S1>/Acc_y' */
  real_T Acc_z_DWORK1;                 /* '<S1>/Acc_z' */
  real_T Gyro_x_DWORK1;                /* '<S1>/Gyro_x' */
  real_T Gyro_y_DWORK1;                /* '<S1>/Gyro_y' */
  real_T Gyro_z_DWORK1;                /* '<S1>/Gyro_z' */
  int_T Integrator_IWORK;              /* '<S5>/Integrator' */
  uint8_T Inputtomodel_DWORK2[12];     /* '<Root>/Input to model' */
  uint8_T OutputtoWorkspace_DWORK2[12];/* '<Root>/Output to Workspace' */
  uint8_T Startbutton_DWORK2[12];      /* '<Root>/Startbutton' */
  uint8_T K_p_x_DWORK2[12];            /* '<S18>/K_p_x' */
  uint8_T K_p_y_DWORK2[12];            /* '<S18>/K_p_y' */
  uint8_T K_p_psi_DWORK2[12];          /* '<S18>/K_p_psi' */
  uint8_T K_i_psi_DWORK2[12];          /* '<S18>/K_i_psi' */
  uint8_T K_i_x_DWORK2[12];            /* '<S18>/K_i_x' */
  uint8_T K_i_y_DWORK2[12];            /* '<S18>/K_i_y' */
  uint8_T K_d_psi_DWORK2[12];          /* '<S18>/K_d_psi' */
  uint8_T K_d_x_DWORK2[12];            /* '<S18>/K_d_x' */
  uint8_T K_d_y_DWORK2[12];            /* '<S18>/K_d_y' */
  uint8_T x_m_DWORK2[12];              /* '<S9>/x_m' */
  uint8_T y_m_DWORK2[12];              /* '<S9>/y_m' */
  uint8_T psi_m_DWORK2[12];            /* '<S9>/psi_m' */
  uint8_T Basin_rotation_DWORK2[12];   /* '<S12>/Basin_rotation' */
  uint8_T Controllswitch_DWORK2[12];   /* '<Root>/Controll switch' */
  uint8_T tau_surge_DWORK2[12];        /* '<Root>/tau_surge' */
  uint8_T tau_sway_DWORK2[12];         /* '<Root>/tau_sway' */
  uint8_T Startbutton1_DWORK2[12];     /* '<Root>/Startbutton1' */
  uint8_T tau_psi_DWORK2[12];          /* '<Root>/tau_psi' */
  uint8_T psi_hat_DWORK2[12];          /* '<Root>/psi_hat' */
  uint8_T x_hat_DWORK2[12];            /* '<Root>/x_hat' */
  uint8_T y_hat_DWORK2[12];            /* '<Root>/y_hat' */
  uint8_T rpm1_DWORK2[12];             /* '<S52>/rpm1 ' */
  uint8_T rpm2_DWORK2[12];             /* '<S52>/rpm2' */
  uint8_T rpm3_DWORK2[12];             /* '<S52>/rpm3' */
  uint8_T rpm4_DWORK2[12];             /* '<S52>/rpm4' */
  uint8_T rpm5_DWORK2[12];             /* '<S52>/rpm5' */
  uint8_T rpm6_DWORK2[12];             /* '<S52>/rpm6' */
  uint8_T thr_angle_1_DWORK2[12];      /* '<S16>/thr_angle_1' */
  uint8_T thr_angle_2_DWORK2[12];      /* '<S16>/thr_angle_2' */
  uint8_T thr_angle_3_DWORK2[12];      /* '<S16>/thr_angle_3' */
  uint8_T thr_angle_4_DWORK2[12];      /* '<S16>/thr_angle_4' */
  uint8_T thr_angle_5_DWORK2[12];      /* '<S16>/thr_angle_5' */
  uint8_T thr_angle_6_DWORK2[12];      /* '<S16>/thr_angle_6' */
  uint8_T Angle_controller_DWORK2[12]; /* '<S13>/Angle_controller' */
  uint8_T tau_commanded_psi_DWORK2[12];/* '<Root>/tau_commanded_psi' */
  uint8_T tau_commanded_x_DWORK2[12];  /* '<Root>/tau_commanded_x' */
  uint8_T tau_commanded_y_DWORK2[12];  /* '<Root>/tau_commanded_y' */
  uint8_T psi_ref_filter_DWORK2[12];   /* '<Root>/psi_ref_filter' */
  uint8_T x_ref_filter_DWORK2[12];     /* '<Root>/x_ref_filter' */
  uint8_T y_ref_filter_DWORK2[12];     /* '<Root>/y_ref_filter' */
  uint8_T x_hat_DWORK2_b[12];          /* '<S32>/x_hat' */
  uint8_T y_hat_DWORK2_l[12];          /* '<S32>/y_hat' */
  uint8_T psi_hat_DWORK2_k[12];        /* '<S32>/psi_hat' */
  uint8_T u_hat_DWORK2[12];            /* '<S34>/u_hat' */
  uint8_T v_hat_DWORK2[12];            /* '<S34>/v_hat' */
  uint8_T r_hat_DWORK2[12];            /* '<S34>/r_hat' */
  uint8_T u_dot_hat_DWORK2[12];        /* '<S33>/u_dot_hat' */
  uint8_T v_dot_hat_DWORK2[12];        /* '<S33>/v_dot_hat' */
  uint8_T r_dot_hat_DWORK2[12];        /* '<S33>/r_dot_hat' */
  uint8_T b_x_hat_DWORK2[12];          /* '<S31>/b_x_hat' */
  uint8_T b_y_hat_DWORK2[12];          /* '<S31>/b_y_hat' */
  uint8_T b_psi_hat_DWORK2[12];        /* '<S31>/b_psi_hat' */
  uint8_T alpha1_DWORK2[12];           /* '<S17>/alpha1' */
  uint8_T alpha2_DWORK2[12];           /* '<S17>/alpha2' */
  uint8_T alpha3_DWORK2[12];           /* '<S17>/alpha3' */
  uint8_T alpha4_DWORK2[12];           /* '<S17>/alpha4' */
  uint8_T alpha5_DWORK2[12];           /* '<S17>/alpha5' */
  uint8_T alpha6_DWORK2[12];           /* '<S17>/alpha6' */
  uint8_T u1_DWORK2[12];               /* '<S17>/u1' */
  uint8_T u2_DWORK2[12];               /* '<S17>/u2' */
  uint8_T u3_DWORK2[12];               /* '<S17>/u3' */
  uint8_T u4_DWORK2[12];               /* '<S17>/u4' */
  uint8_T u5_DWORK2[12];               /* '<S17>/u5' */
  uint8_T u6_DWORK2[12];               /* '<S17>/u6' */
  uint8_T heading_DWORK2[12];          /* '<Root>/heading' */
  uint8_T y_error_DWORK2[12];          /* '<S7>/y_error' */
  uint8_T psi_error_DWORK2[12];        /* '<S7>/psi_error' */
  uint8_T x_error_DWORK2[12];          /* '<S7>/x_error' */
  uint8_T Integral_x_DWORK2[12];       /* '<S7>/Integral_x' */
  uint8_T Integral_psi_DWORK2[12];     /* '<S7>/Integral_psi' */
  uint8_T Integral_y_DWORK2[12];       /* '<S7>/Integral_y' */
  uint8_T x_ref_DWORK2[12];            /* '<S11>/x_ref' */
  uint8_T w_x_DWORK2[12];              /* '<S19>/w_x' */
  uint8_T w_y_DWORK2[12];              /* '<S19>/w_y' */
  uint8_T w_psi_DWORK2[12];            /* '<S19>/w_psi' */
  uint8_T zeta_psi_DWORK2[12];         /* '<S19>/zeta_psi' */
  uint8_T zeta_x_DWORK2[12];           /* '<S19>/zeta_x' */
  uint8_T zeta_y_DWORK2[12];           /* '<S19>/zeta_y' */
  uint8_T T_psi_DWORK2[12];            /* '<S19>/T_psi' */
  uint8_T T_x_DWORK2[12];              /* '<S19>/T_x' */
  uint8_T T_y_DWORK2[12];              /* '<S19>/T_y' */
  uint8_T y_ref_DWORK2[12];            /* '<S11>/y_ref' */
  uint8_T reset_DWORK2[12];            /* '<S70>/reset' */
  uint8_T Control_test_Pa_DWORK2[12];  /* '<S66>/Control_test_Pa' */
  uint8_T reset_DWORK2_l[12];          /* '<S79>/reset' */
  uint8_T reset_DWORK2_d[12];          /* '<S88>/reset' */
  uint8_T reset_DWORK2_df[12];         /* '<S97>/reset' */
  uint8_T reset_DWORK2_p[12];          /* '<S106>/reset' */
  uint8_T reset_DWORK2_g[12];          /* '<S115>/reset' */
  uint8_T Acc_x_DWORK2[12];            /* '<S1>/Acc_x' */
  uint8_T Acc_y_DWORK2[12];            /* '<S1>/Acc_y' */
  uint8_T Acc_z_DWORK2[12];            /* '<S1>/Acc_z' */
  uint8_T Gyro_x_DWORK2[12];           /* '<S1>/Gyro_x' */
  uint8_T Gyro_y_DWORK2[12];           /* '<S1>/Gyro_y' */
  uint8_T Gyro_z_DWORK2[12];           /* '<S1>/Gyro_z' */
  DW_CoreSubsys_ctrl_custom_T CoreSubsys[6];/* '<S45>/CoreSubsys' */
} DW_ctrl_custom_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T Integrator_CSTATE[3];         /* '<S5>/Integrator' */
  real_T TransferFcn2_CSTATE;          /* '<S12>/Transfer Fcn2' */
  real_T Integrator1_CSTATE;           /* '<S8>/Integrator1' */
  real_T Integrator1_CSTATE_n[3];      /* '<S5>/Integrator1' */
  real_T Integrator2_CSTATE[3];        /* '<S11>/Integrator2' */
  real_T Integrator1_CSTATE_m[3];      /* '<S7>/Integrator1' */
  real_T Integrator_CSTATE_p;          /* '<S67>/Integrator' */
  real_T Integrator_CSTATE_g;          /* '<S76>/Integrator' */
  real_T Integrator_CSTATE_n;          /* '<S85>/Integrator' */
  real_T Integrator_CSTATE_b;          /* '<S94>/Integrator' */
  real_T Integrator_CSTATE_c;          /* '<S103>/Integrator' */
  real_T Integrator_CSTATE_l;          /* '<S112>/Integrator' */
  real_T Integrator2_CSTATE_j[3];      /* '<S5>/Integrator2' */
  real_T Integrator_CSTATE_f[3];       /* '<S11>/Integrator' */
  real_T Integrator1_CSTATE_d[3];      /* '<S11>/Integrator1' */
  real_T Integrator_CSTATE_ph;         /* '<S70>/Integrator' */
  real_T Integrator_CSTATE_o;          /* '<S79>/Integrator' */
  real_T Integrator_CSTATE_or;         /* '<S88>/Integrator' */
  real_T Integrator_CSTATE_h;          /* '<S97>/Integrator' */
  real_T Integrator_CSTATE_fm;         /* '<S106>/Integrator' */
  real_T Integrator_CSTATE_m;          /* '<S115>/Integrator' */
} X_ctrl_custom_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T Integrator_CSTATE[3];         /* '<S5>/Integrator' */
  real_T TransferFcn2_CSTATE;          /* '<S12>/Transfer Fcn2' */
  real_T Integrator1_CSTATE;           /* '<S8>/Integrator1' */
  real_T Integrator1_CSTATE_n[3];      /* '<S5>/Integrator1' */
  real_T Integrator2_CSTATE[3];        /* '<S11>/Integrator2' */
  real_T Integrator1_CSTATE_m[3];      /* '<S7>/Integrator1' */
  real_T Integrator_CSTATE_p;          /* '<S67>/Integrator' */
  real_T Integrator_CSTATE_g;          /* '<S76>/Integrator' */
  real_T Integrator_CSTATE_n;          /* '<S85>/Integrator' */
  real_T Integrator_CSTATE_b;          /* '<S94>/Integrator' */
  real_T Integrator_CSTATE_c;          /* '<S103>/Integrator' */
  real_T Integrator_CSTATE_l;          /* '<S112>/Integrator' */
  real_T Integrator2_CSTATE_j[3];      /* '<S5>/Integrator2' */
  real_T Integrator_CSTATE_f[3];       /* '<S11>/Integrator' */
  real_T Integrator1_CSTATE_d[3];      /* '<S11>/Integrator1' */
  real_T Integrator_CSTATE_ph;         /* '<S70>/Integrator' */
  real_T Integrator_CSTATE_o;          /* '<S79>/Integrator' */
  real_T Integrator_CSTATE_or;         /* '<S88>/Integrator' */
  real_T Integrator_CSTATE_h;          /* '<S97>/Integrator' */
  real_T Integrator_CSTATE_fm;         /* '<S106>/Integrator' */
  real_T Integrator_CSTATE_m;          /* '<S115>/Integrator' */
} XDot_ctrl_custom_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE[3];      /* '<S5>/Integrator' */
  boolean_T TransferFcn2_CSTATE;       /* '<S12>/Transfer Fcn2' */
  boolean_T Integrator1_CSTATE;        /* '<S8>/Integrator1' */
  boolean_T Integrator1_CSTATE_n[3];   /* '<S5>/Integrator1' */
  boolean_T Integrator2_CSTATE[3];     /* '<S11>/Integrator2' */
  boolean_T Integrator1_CSTATE_m[3];   /* '<S7>/Integrator1' */
  boolean_T Integrator_CSTATE_p;       /* '<S67>/Integrator' */
  boolean_T Integrator_CSTATE_g;       /* '<S76>/Integrator' */
  boolean_T Integrator_CSTATE_n;       /* '<S85>/Integrator' */
  boolean_T Integrator_CSTATE_b;       /* '<S94>/Integrator' */
  boolean_T Integrator_CSTATE_c;       /* '<S103>/Integrator' */
  boolean_T Integrator_CSTATE_l;       /* '<S112>/Integrator' */
  boolean_T Integrator2_CSTATE_j[3];   /* '<S5>/Integrator2' */
  boolean_T Integrator_CSTATE_f[3];    /* '<S11>/Integrator' */
  boolean_T Integrator1_CSTATE_d[3];   /* '<S11>/Integrator1' */
  boolean_T Integrator_CSTATE_ph;      /* '<S70>/Integrator' */
  boolean_T Integrator_CSTATE_o;       /* '<S79>/Integrator' */
  boolean_T Integrator_CSTATE_or;      /* '<S88>/Integrator' */
  boolean_T Integrator_CSTATE_h;       /* '<S97>/Integrator' */
  boolean_T Integrator_CSTATE_fm;      /* '<S106>/Integrator' */
  boolean_T Integrator_CSTATE_m;       /* '<S115>/Integrator' */
} XDis_ctrl_custom_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator1_Reset_ZCE;    /* '<S8>/Integrator1' */
  ZCSigState Integrator1_Reset_ZCE_g;  /* '<S7>/Integrator1' */
  ZCSigState Integrator_Reset_ZCE;     /* '<S67>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_a;   /* '<S76>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_h;   /* '<S85>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_j;   /* '<S94>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_e;   /* '<S103>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_i;   /* '<S112>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_ju;  /* '<S70>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_o;   /* '<S79>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_l;   /* '<S88>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_n;   /* '<S97>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_aa;  /* '<S106>/Integrator' */
  ZCSigState Integrator_Reset_ZCE_li;  /* '<S115>/Integrator' */
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

/* Parameters for system: '<S45>/CoreSubsys' */
struct P_CoreSubsys_ctrl_custom_T_ {
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S45>/Discrete-Time Integrator'
                                         */
  real_T Gain1_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S48>/Gain1'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<S45>/Delay'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S45>/Delay'
                                        */
};

/* Parameters (auto storage) */
struct P_ctrl_custom_T_ {
  real_T C[24];                        /* Variable: C
                                        * Referenced by: '<S13>/C'
                                        */
  real_T D;                            /* Variable: D
                                        * Referenced by: '<S14>/D'
                                        */
  real_T I_s;                          /* Variable: I_s
                                        * Referenced by:
                                        *   '<S67>/Finding rotation speed'
                                        *   '<S68>/Inertia compensation'
                                        *   '<S76>/Finding rotation speed'
                                        *   '<S77>/Inertia compensation'
                                        *   '<S85>/Finding rotation speed'
                                        *   '<S86>/Inertia compensation'
                                        *   '<S94>/Finding rotation speed'
                                        *   '<S95>/Inertia compensation'
                                        *   '<S103>/Finding rotation speed'
                                        *   '<S104>/Inertia compensation'
                                        *   '<S112>/Finding rotation speed'
                                        *   '<S113>/Inertia compensation'
                                        */
  real_T K_T1f;                        /* Variable: K_T1f
                                        * Referenced by: '<S14>/K_Tf1'
                                        */
  real_T K_T1r;                        /* Variable: K_T1r
                                        * Referenced by: '<S14>/K_Tr1'
                                        */
  real_T K_T2f;                        /* Variable: K_T2f
                                        * Referenced by: '<S14>/K_Tf2'
                                        */
  real_T K_T2r;                        /* Variable: K_T2r
                                        * Referenced by: '<S14>/K_Tr2'
                                        */
  real_T K_T3f;                        /* Variable: K_T3f
                                        * Referenced by: '<S14>/K_Tf3'
                                        */
  real_T K_T3r;                        /* Variable: K_T3r
                                        * Referenced by: '<S14>/K_Tr3'
                                        */
  real_T K_T4f;                        /* Variable: K_T4f
                                        * Referenced by: '<S14>/K_Tf4'
                                        */
  real_T K_T4r;                        /* Variable: K_T4r
                                        * Referenced by: '<S14>/K_Tr4'
                                        */
  real_T K_T5f;                        /* Variable: K_T5f
                                        * Referenced by: '<S14>/K_Tf5'
                                        */
  real_T K_T5r;                        /* Variable: K_T5r
                                        * Referenced by: '<S14>/K_Tr5'
                                        */
  real_T K_T6f;                        /* Variable: K_T6f
                                        * Referenced by: '<S14>/K_Tf6'
                                        */
  real_T K_T6r;                        /* Variable: K_T6r
                                        * Referenced by: '<S14>/K_Tr6'
                                        */
  real_T K_omega;                      /* Variable: K_omega
                                        * Referenced by:
                                        *   '<S67>/K_omega'
                                        *   '<S68>/Qff_1(nr)'
                                        *   '<S76>/K_omega'
                                        *   '<S77>/Qff_1(nr)'
                                        *   '<S85>/K_omega'
                                        *   '<S86>/Qff_1(nr)'
                                        *   '<S94>/K_omega'
                                        *   '<S95>/Qff_1(nr)'
                                        *   '<S103>/K_omega'
                                        *   '<S104>/Qff_1(nr)'
                                        *   '<S112>/K_omega'
                                        *   '<S113>/Qff_1(nr)'
                                        */
  real_T K_q1f;                        /* Variable: K_q1f
                                        * Referenced by: '<S14>/K_Qr1'
                                        */
  real_T K_q1r;                        /* Variable: K_q1r
                                        * Referenced by: '<S14>/K_Qr7'
                                        */
  real_T K_q2f;                        /* Variable: K_q2f
                                        * Referenced by: '<S14>/K_Qr2'
                                        */
  real_T K_q2r;                        /* Variable: K_q2r
                                        * Referenced by: '<S14>/K_Qr8'
                                        */
  real_T K_q3f;                        /* Variable: K_q3f
                                        * Referenced by: '<S14>/K_Qr3'
                                        */
  real_T K_q3r;                        /* Variable: K_q3r
                                        * Referenced by: '<S14>/K_Qr9'
                                        */
  real_T K_q4f;                        /* Variable: K_q4f
                                        * Referenced by: '<S14>/K_Qr4'
                                        */
  real_T K_q4r;                        /* Variable: K_q4r
                                        * Referenced by: '<S14>/K_Qr10'
                                        */
  real_T K_q5f;                        /* Variable: K_q5f
                                        * Referenced by: '<S14>/K_Qr5'
                                        */
  real_T K_q5r;                        /* Variable: K_q5r
                                        * Referenced by: '<S14>/K_Qr11'
                                        */
  real_T K_q6f;                        /* Variable: K_q6f
                                        * Referenced by: '<S14>/K_Qr6'
                                        */
  real_T K_q6r;                        /* Variable: K_q6r
                                        * Referenced by: '<S14>/K_Qr12'
                                        */
  real_T Kp;                           /* Variable: Kp
                                        * Referenced by:
                                        *   '<S70>/Ki'
                                        *   '<S70>/Kp'
                                        *   '<S79>/Ki'
                                        *   '<S79>/Kp'
                                        *   '<S88>/Ki'
                                        *   '<S88>/Kp'
                                        *   '<S97>/Ki'
                                        *   '<S97>/Kp'
                                        *   '<S106>/Ki'
                                        *   '<S106>/Kp'
                                        *   '<S115>/Ki'
                                        *   '<S115>/Kp'
                                        */
  real_T Max_rotation;                 /* Variable: Max_rotation
                                        * Referenced by: '<S45>/Max Rotation Rate'
                                        */
  real_T Max_thrust;                   /* Variable: Max_thrust
                                        * Referenced by:
                                        *   '<S52>/Saturation 1'
                                        *   '<S52>/Saturation 10'
                                        *   '<S52>/Saturation 12'
                                        *   '<S52>/Saturation 3'
                                        *   '<S52>/Saturation 5'
                                        *   '<S52>/Saturation 7'
                                        *   '<S52>/Saturation 8'
                                        */
  real_T Min_thrust;                   /* Variable: Min_thrust
                                        * Referenced by:
                                        *   '<S52>/Saturation 11'
                                        *   '<S52>/Saturation 13'
                                        *   '<S52>/Saturation 2'
                                        *   '<S52>/Saturation 4'
                                        *   '<S52>/Saturation 6'
                                        *   '<S52>/Saturation 9'
                                        */
  real_T Q_f0;                         /* Variable: Q_f0
                                        * Referenced by:
                                        *   '<S68>/Qf_0'
                                        *   '<S77>/Qf_0'
                                        *   '<S86>/Qf_0'
                                        *   '<S95>/Qf_0'
                                        *   '<S104>/Qf_0'
                                        *   '<S113>/Qf_0'
                                        */
  real_T Rho;                          /* Variable: Rho
                                        * Referenced by: '<S14>/Rho'
                                        */
  real_T eps;                          /* Variable: eps
                                        * Referenced by: '<S13>/Constant to avoid singularities'
                                        */
  real_T eps_c;                        /* Variable: eps_c
                                        * Referenced by: '<S14>/Constant'
                                        */
  real_T epsilon;                      /* Variable: epsilon
                                        * Referenced by:
                                        *   '<S68>/Qff_0(nr)'
                                        *   '<S77>/Qff_0(nr)'
                                        *   '<S86>/Qff_0(nr)'
                                        *   '<S95>/Qff_0(nr)'
                                        *   '<S104>/Qff_0(nr)'
                                        *   '<S113>/Qff_0(nr)'
                                        */
  real_T k_cc;                         /* Variable: k_cc
                                        * Referenced by: '<S14>/Constant1'
                                        */
  real_T n_c;                          /* Variable: n_c
                                        * Referenced by: '<S14>/Constant5'
                                        */
  real_T n_max;                        /* Variable: n_max
                                        * Referenced by:
                                        *   '<S68>/Qff_0(nr)'
                                        *   '<S77>/Qff_0(nr)'
                                        *   '<S86>/Qff_0(nr)'
                                        *   '<S95>/Qff_0(nr)'
                                        *   '<S104>/Qff_0(nr)'
                                        *   '<S113>/Qff_0(nr)'
                                        */
  real_T p_cc;                         /* Variable: p_cc
                                        * Referenced by: '<S14>/Constant2'
                                        */
  real_T pwm_thr1_backward[6];         /* Variable: pwm_thr1_backward
                                        * Referenced by: '<S52>/negative thrust 1'
                                        */
  real_T pwm_thr1_forward[6];          /* Variable: pwm_thr1_forward
                                        * Referenced by: '<S52>/positive thrust 1'
                                        */
  real_T pwm_thr2_backward[6];         /* Variable: pwm_thr2_backward
                                        * Referenced by: '<S52>/negative thrust 2'
                                        */
  real_T pwm_thr2_forward[6];          /* Variable: pwm_thr2_forward
                                        * Referenced by: '<S52>/positive thrust 2'
                                        */
  real_T pwm_thr3_backward[6];         /* Variable: pwm_thr3_backward
                                        * Referenced by: '<S52>/negative thrust 3'
                                        */
  real_T pwm_thr3_forward[6];          /* Variable: pwm_thr3_forward
                                        * Referenced by: '<S52>/positive thrust 3'
                                        */
  real_T pwm_thr4_backward[6];         /* Variable: pwm_thr4_backward
                                        * Referenced by: '<S52>/negative thrust 4'
                                        */
  real_T pwm_thr4_forward[6];          /* Variable: pwm_thr4_forward
                                        * Referenced by: '<S52>/positive thrust 4'
                                        */
  real_T pwm_thr5_backward[6];         /* Variable: pwm_thr5_backward
                                        * Referenced by: '<S52>/negative thrust 5'
                                        */
  real_T pwm_thr5_forward[6];          /* Variable: pwm_thr5_forward
                                        * Referenced by: '<S52>/positive thrust 5'
                                        */
  real_T pwm_thr6_backward[6];         /* Variable: pwm_thr6_backward
                                        * Referenced by: '<S52>/negative thrust 6'
                                        */
  real_T pwm_thr6_forward[6];          /* Variable: pwm_thr6_forward
                                        * Referenced by: '<S52>/positive thrust 6'
                                        */
  real_T r_cc;                         /* Variable: r_cc
                                        * Referenced by: '<S14>/Constant3'
                                        */
  real_T DiscreteDerivative_ICPrevScaled;/* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                          * Referenced by: '<S71>/UD'
                                          */
  real_T DiscreteDerivative_ICPrevScal_k;/* Mask Parameter: DiscreteDerivative_ICPrevScal_k
                                          * Referenced by: '<S80>/UD'
                                          */
  real_T DiscreteDerivative_ICPrevScal_h;/* Mask Parameter: DiscreteDerivative_ICPrevScal_h
                                          * Referenced by: '<S89>/UD'
                                          */
  real_T DiscreteDerivative_ICPrevSca_kv;/* Mask Parameter: DiscreteDerivative_ICPrevSca_kv
                                          * Referenced by: '<S98>/UD'
                                          */
  real_T DiscreteDerivative_ICPrevScal_c;/* Mask Parameter: DiscreteDerivative_ICPrevScal_c
                                          * Referenced by: '<S107>/UD'
                                          */
  real_T DiscreteDerivative_ICPrevSca_hs;/* Mask Parameter: DiscreteDerivative_ICPrevSca_hs
                                          * Referenced by: '<S116>/UD'
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
  real_T Startbutton_P1;               /* Expression: width
                                        * Referenced by: '<Root>/Startbutton'
                                        */
  real_T Startbutton_P2;               /* Expression: dtype
                                        * Referenced by: '<Root>/Startbutton'
                                        */
  real_T Startbutton_P3;               /* Expression: portnum
                                        * Referenced by: '<Root>/Startbutton'
                                        */
  real_T Startbutton_P4;               /* Expression: stime
                                        * Referenced by: '<Root>/Startbutton'
                                        */
  real_T Startbutton_P5;               /* Expression: stype
                                        * Referenced by: '<Root>/Startbutton'
                                        */
  real_T Startbutton_P6;               /* Expression: btype
                                        * Referenced by: '<Root>/Startbutton'
                                        */
  real_T K_p_x_P1;                     /* Expression: width
                                        * Referenced by: '<S18>/K_p_x'
                                        */
  real_T K_p_x_P2;                     /* Expression: dtype
                                        * Referenced by: '<S18>/K_p_x'
                                        */
  real_T K_p_x_P3;                     /* Expression: portnum
                                        * Referenced by: '<S18>/K_p_x'
                                        */
  real_T K_p_x_P4;                     /* Expression: stime
                                        * Referenced by: '<S18>/K_p_x'
                                        */
  real_T K_p_x_P5;                     /* Expression: stype
                                        * Referenced by: '<S18>/K_p_x'
                                        */
  real_T K_p_x_P6;                     /* Expression: btype
                                        * Referenced by: '<S18>/K_p_x'
                                        */
  real_T K_p_y_P1;                     /* Expression: width
                                        * Referenced by: '<S18>/K_p_y'
                                        */
  real_T K_p_y_P2;                     /* Expression: dtype
                                        * Referenced by: '<S18>/K_p_y'
                                        */
  real_T K_p_y_P3;                     /* Expression: portnum
                                        * Referenced by: '<S18>/K_p_y'
                                        */
  real_T K_p_y_P4;                     /* Expression: stime
                                        * Referenced by: '<S18>/K_p_y'
                                        */
  real_T K_p_y_P5;                     /* Expression: stype
                                        * Referenced by: '<S18>/K_p_y'
                                        */
  real_T K_p_y_P6;                     /* Expression: btype
                                        * Referenced by: '<S18>/K_p_y'
                                        */
  real_T K_p_psi_P1;                   /* Expression: width
                                        * Referenced by: '<S18>/K_p_psi'
                                        */
  real_T K_p_psi_P2;                   /* Expression: dtype
                                        * Referenced by: '<S18>/K_p_psi'
                                        */
  real_T K_p_psi_P3;                   /* Expression: portnum
                                        * Referenced by: '<S18>/K_p_psi'
                                        */
  real_T K_p_psi_P4;                   /* Expression: stime
                                        * Referenced by: '<S18>/K_p_psi'
                                        */
  real_T K_p_psi_P5;                   /* Expression: stype
                                        * Referenced by: '<S18>/K_p_psi'
                                        */
  real_T K_p_psi_P6;                   /* Expression: btype
                                        * Referenced by: '<S18>/K_p_psi'
                                        */
  real_T K_i_psi_P1;                   /* Expression: width
                                        * Referenced by: '<S18>/K_i_psi'
                                        */
  real_T K_i_psi_P2;                   /* Expression: dtype
                                        * Referenced by: '<S18>/K_i_psi'
                                        */
  real_T K_i_psi_P3;                   /* Expression: portnum
                                        * Referenced by: '<S18>/K_i_psi'
                                        */
  real_T K_i_psi_P4;                   /* Expression: stime
                                        * Referenced by: '<S18>/K_i_psi'
                                        */
  real_T K_i_psi_P5;                   /* Expression: stype
                                        * Referenced by: '<S18>/K_i_psi'
                                        */
  real_T K_i_psi_P6;                   /* Expression: btype
                                        * Referenced by: '<S18>/K_i_psi'
                                        */
  real_T K_i_x_P1;                     /* Expression: width
                                        * Referenced by: '<S18>/K_i_x'
                                        */
  real_T K_i_x_P2;                     /* Expression: dtype
                                        * Referenced by: '<S18>/K_i_x'
                                        */
  real_T K_i_x_P3;                     /* Expression: portnum
                                        * Referenced by: '<S18>/K_i_x'
                                        */
  real_T K_i_x_P4;                     /* Expression: stime
                                        * Referenced by: '<S18>/K_i_x'
                                        */
  real_T K_i_x_P5;                     /* Expression: stype
                                        * Referenced by: '<S18>/K_i_x'
                                        */
  real_T K_i_x_P6;                     /* Expression: btype
                                        * Referenced by: '<S18>/K_i_x'
                                        */
  real_T K_i_y_P1;                     /* Expression: width
                                        * Referenced by: '<S18>/K_i_y'
                                        */
  real_T K_i_y_P2;                     /* Expression: dtype
                                        * Referenced by: '<S18>/K_i_y'
                                        */
  real_T K_i_y_P3;                     /* Expression: portnum
                                        * Referenced by: '<S18>/K_i_y'
                                        */
  real_T K_i_y_P4;                     /* Expression: stime
                                        * Referenced by: '<S18>/K_i_y'
                                        */
  real_T K_i_y_P5;                     /* Expression: stype
                                        * Referenced by: '<S18>/K_i_y'
                                        */
  real_T K_i_y_P6;                     /* Expression: btype
                                        * Referenced by: '<S18>/K_i_y'
                                        */
  real_T K_d_psi_P1;                   /* Expression: width
                                        * Referenced by: '<S18>/K_d_psi'
                                        */
  real_T K_d_psi_P2;                   /* Expression: dtype
                                        * Referenced by: '<S18>/K_d_psi'
                                        */
  real_T K_d_psi_P3;                   /* Expression: portnum
                                        * Referenced by: '<S18>/K_d_psi'
                                        */
  real_T K_d_psi_P4;                   /* Expression: stime
                                        * Referenced by: '<S18>/K_d_psi'
                                        */
  real_T K_d_psi_P5;                   /* Expression: stype
                                        * Referenced by: '<S18>/K_d_psi'
                                        */
  real_T K_d_psi_P6;                   /* Expression: btype
                                        * Referenced by: '<S18>/K_d_psi'
                                        */
  real_T K_d_x_P1;                     /* Expression: width
                                        * Referenced by: '<S18>/K_d_x'
                                        */
  real_T K_d_x_P2;                     /* Expression: dtype
                                        * Referenced by: '<S18>/K_d_x'
                                        */
  real_T K_d_x_P3;                     /* Expression: portnum
                                        * Referenced by: '<S18>/K_d_x'
                                        */
  real_T K_d_x_P4;                     /* Expression: stime
                                        * Referenced by: '<S18>/K_d_x'
                                        */
  real_T K_d_x_P5;                     /* Expression: stype
                                        * Referenced by: '<S18>/K_d_x'
                                        */
  real_T K_d_x_P6;                     /* Expression: btype
                                        * Referenced by: '<S18>/K_d_x'
                                        */
  real_T K_d_y_P1;                     /* Expression: width
                                        * Referenced by: '<S18>/K_d_y'
                                        */
  real_T K_d_y_P2;                     /* Expression: dtype
                                        * Referenced by: '<S18>/K_d_y'
                                        */
  real_T K_d_y_P3;                     /* Expression: portnum
                                        * Referenced by: '<S18>/K_d_y'
                                        */
  real_T K_d_y_P4;                     /* Expression: stime
                                        * Referenced by: '<S18>/K_d_y'
                                        */
  real_T K_d_y_P5;                     /* Expression: stype
                                        * Referenced by: '<S18>/K_d_y'
                                        */
  real_T K_d_y_P6;                     /* Expression: btype
                                        * Referenced by: '<S18>/K_d_y'
                                        */
  real_T x_m_P1;                       /* Expression: width
                                        * Referenced by: '<S9>/x_m'
                                        */
  real_T x_m_P2;                       /* Expression: dtype
                                        * Referenced by: '<S9>/x_m'
                                        */
  real_T x_m_P3;                       /* Expression: portnum
                                        * Referenced by: '<S9>/x_m'
                                        */
  real_T x_m_P4;                       /* Expression: stime
                                        * Referenced by: '<S9>/x_m'
                                        */
  real_T x_m_P5;                       /* Expression: stype
                                        * Referenced by: '<S9>/x_m'
                                        */
  real_T x_m_P6;                       /* Expression: btype
                                        * Referenced by: '<S9>/x_m'
                                        */
  real_T Gain_Gain;                    /* Expression: 1/1000
                                        * Referenced by: '<S9>/Gain'
                                        */
  real_T y_m_P1;                       /* Expression: width
                                        * Referenced by: '<S9>/y_m'
                                        */
  real_T y_m_P2;                       /* Expression: dtype
                                        * Referenced by: '<S9>/y_m'
                                        */
  real_T y_m_P3;                       /* Expression: portnum
                                        * Referenced by: '<S9>/y_m'
                                        */
  real_T y_m_P4;                       /* Expression: stime
                                        * Referenced by: '<S9>/y_m'
                                        */
  real_T y_m_P5;                       /* Expression: stype
                                        * Referenced by: '<S9>/y_m'
                                        */
  real_T y_m_P6;                       /* Expression: btype
                                        * Referenced by: '<S9>/y_m'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/1000
                                        * Referenced by: '<S9>/Gain1'
                                        */
  real_T psi_m_P1;                     /* Expression: width
                                        * Referenced by: '<S9>/psi_m'
                                        */
  real_T psi_m_P2;                     /* Expression: dtype
                                        * Referenced by: '<S9>/psi_m'
                                        */
  real_T psi_m_P3;                     /* Expression: portnum
                                        * Referenced by: '<S9>/psi_m'
                                        */
  real_T psi_m_P4;                     /* Expression: stime
                                        * Referenced by: '<S9>/psi_m'
                                        */
  real_T psi_m_P5;                     /* Expression: stype
                                        * Referenced by: '<S9>/psi_m'
                                        */
  real_T psi_m_P6;                     /* Expression: btype
                                        * Referenced by: '<S9>/psi_m'
                                        */
  real_T Gain5_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S9>/Gain5'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1e10
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -1e10
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T Gain6_Gain;                   /* Expression: pi
                                        * Referenced by: '<S9>/Gain6'
                                        */
  real_T Constant1_Value;              /* Expression: 2*pi
                                        * Referenced by: '<S9>/Constant1'
                                        */
  real_T Basin_rotation_P1;            /* Expression: width
                                        * Referenced by: '<S12>/Basin_rotation'
                                        */
  real_T Basin_rotation_P2;            /* Expression: dtype
                                        * Referenced by: '<S12>/Basin_rotation'
                                        */
  real_T Basin_rotation_P3;            /* Expression: portnum
                                        * Referenced by: '<S12>/Basin_rotation'
                                        */
  real_T Basin_rotation_P4;            /* Expression: stime
                                        * Referenced by: '<S12>/Basin_rotation'
                                        */
  real_T Basin_rotation_P5;            /* Expression: stype
                                        * Referenced by: '<S12>/Basin_rotation'
                                        */
  real_T Basin_rotation_P6;            /* Expression: btype
                                        * Referenced by: '<S12>/Basin_rotation'
                                        */
  real_T Gain5_Gain_h;                 /* Expression: pi/180
                                        * Referenced by: '<S12>/Gain5'
                                        */
  real_T Controllswitch_P1;            /* Expression: width
                                        * Referenced by: '<Root>/Controll switch'
                                        */
  real_T Controllswitch_P2;            /* Expression: dtype
                                        * Referenced by: '<Root>/Controll switch'
                                        */
  real_T Controllswitch_P3;            /* Expression: portnum
                                        * Referenced by: '<Root>/Controll switch'
                                        */
  real_T Controllswitch_P4;            /* Expression: stime
                                        * Referenced by: '<Root>/Controll switch'
                                        */
  real_T Controllswitch_P5;            /* Expression: stype
                                        * Referenced by: '<Root>/Controll switch'
                                        */
  real_T Controllswitch_P6;            /* Expression: btype
                                        * Referenced by: '<Root>/Controll switch'
                                        */
  real_T Switch1_Threshold;            /* Expression: 1
                                        * Referenced by: '<Root>/Switch1'
                                        */
  real_T Saturation_UpperSat_p;        /* Expression: 1e10
                                        * Referenced by: '<S29>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: -1e10
                                        * Referenced by: '<S29>/Saturation'
                                        */
  real_T Gain_Gain_p;                  /* Expression: pi
                                        * Referenced by: '<S29>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 2*pi
                                        * Referenced by: '<S29>/Constant'
                                        */
  real_T TransferFcn2_A;               /* Computed Parameter: TransferFcn2_A
                                        * Referenced by: '<S12>/Transfer Fcn2'
                                        */
  real_T TransferFcn2_C;               /* Computed Parameter: TransferFcn2_C
                                        * Referenced by: '<S12>/Transfer Fcn2'
                                        */
  real_T Saturation_UpperSat_l;        /* Expression: 1e10
                                        * Referenced by: '<S39>/Saturation'
                                        */
  real_T Saturation_LowerSat_i;        /* Expression: -1e10
                                        * Referenced by: '<S39>/Saturation'
                                        */
  real_T Gain_Gain_o;                  /* Expression: pi
                                        * Referenced by: '<S39>/Gain'
                                        */
  real_T Constant_Value_e;             /* Expression: 2*pi
                                        * Referenced by: '<S39>/Constant'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<S8>/Integrator1'
                                        */
  real_T Integrator1_IC_g[3];          /* Expression: [0 0 0]'
                                        * Referenced by: '<S5>/Integrator1'
                                        */
  real_T Saturation_UpperSat_i;        /* Expression: 1e10
                                        * Referenced by: '<S38>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: -1e10
                                        * Referenced by: '<S38>/Saturation'
                                        */
  real_T Gain_Gain_ov;                 /* Expression: pi
                                        * Referenced by: '<S38>/Gain'
                                        */
  real_T Constant_Value_p;             /* Expression: 2*pi
                                        * Referenced by: '<S38>/Constant'
                                        */
  real_T Integrator2_IC;               /* Expression: 0
                                        * Referenced by: '<S11>/Integrator2'
                                        */
  real_T Saturation_UpperSat_p4;       /* Expression: 1e10
                                        * Referenced by: '<S43>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: -1e10
                                        * Referenced by: '<S43>/Saturation'
                                        */
  real_T Gain_Gain_e;                  /* Expression: pi
                                        * Referenced by: '<S43>/Gain'
                                        */
  real_T Constant_Value_ey;            /* Expression: 2*pi
                                        * Referenced by: '<S43>/Constant'
                                        */
  real_T Saturation_UpperSat_ir;       /* Expression: 1e10
                                        * Referenced by: '<S37>/Saturation'
                                        */
  real_T Saturation_LowerSat_l;        /* Expression: -1e10
                                        * Referenced by: '<S37>/Saturation'
                                        */
  real_T Gain_Gain_d;                  /* Expression: pi
                                        * Referenced by: '<S37>/Gain'
                                        */
  real_T Constant_Value_a;             /* Expression: 2*pi
                                        * Referenced by: '<S37>/Constant'
                                        */
  real_T Integrator1_IC_e;             /* Expression: 0
                                        * Referenced by: '<S7>/Integrator1'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Switch_Threshold;             /* Expression: 1
                                        * Referenced by: '<Root>/Switch'
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
  real_T Startbutton1_P1;              /* Expression: width
                                        * Referenced by: '<Root>/Startbutton1'
                                        */
  real_T Startbutton1_P2;              /* Expression: dtype
                                        * Referenced by: '<Root>/Startbutton1'
                                        */
  real_T Startbutton1_P3;              /* Expression: portnum
                                        * Referenced by: '<Root>/Startbutton1'
                                        */
  real_T Startbutton1_P4;              /* Expression: stime
                                        * Referenced by: '<Root>/Startbutton1'
                                        */
  real_T Startbutton1_P5;              /* Expression: stype
                                        * Referenced by: '<Root>/Startbutton1'
                                        */
  real_T Startbutton1_P6;              /* Expression: btype
                                        * Referenced by: '<Root>/Startbutton1'
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
  real_T Gain1_Gain_l;                 /* Expression: 1000
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T y_hat_P1;                     /* Expression: width
                                        * Referenced by: '<Root>/y_hat'
                                        */
  real_T y_hat_P2;                     /* Expression: dtype
                                        * Referenced by: '<Root>/y_hat'
                                        */
  real_T y_hat_P3;                     /* Expression: portnum
                                        * Referenced by: '<Root>/y_hat'
                                        */
  real_T y_hat_P4;                     /* Expression: stime
                                        * Referenced by: '<Root>/y_hat'
                                        */
  real_T y_hat_P5;                     /* Expression: stype
                                        * Referenced by: '<Root>/y_hat'
                                        */
  real_T y_hat_P6;                     /* Expression: btype
                                        * Referenced by: '<Root>/y_hat'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S67>/Integrator'
                                        */
  real_T Lossesplaceholder_Value;      /* Expression: 0
                                        * Referenced by: '<S53>/Losses (placeholder)'
                                        */
  real_T Integrator_IC_h;              /* Expression: 0
                                        * Referenced by: '<S76>/Integrator'
                                        */
  real_T Lossesplaceholder_Value_n;    /* Expression: 0
                                        * Referenced by: '<S54>/Losses (placeholder)'
                                        */
  real_T Integrator_IC_e;              /* Expression: 0
                                        * Referenced by: '<S85>/Integrator'
                                        */
  real_T Lossesplaceholder_Value_j;    /* Expression: 0
                                        * Referenced by: '<S55>/Losses (placeholder)'
                                        */
  real_T Integrator_IC_d;              /* Expression: 0
                                        * Referenced by: '<S94>/Integrator'
                                        */
  real_T Lossesplaceholder_Value_c;    /* Expression: 0
                                        * Referenced by: '<S56>/Losses (placeholder)'
                                        */
  real_T Integrator_IC_eb;             /* Expression: 0
                                        * Referenced by: '<S103>/Integrator'
                                        */
  real_T Lossesplaceholder_Value_o;    /* Expression: 0
                                        * Referenced by: '<S57>/Losses (placeholder)'
                                        */
  real_T Integrator_IC_a;              /* Expression: 0
                                        * Referenced by: '<S112>/Integrator'
                                        */
  real_T Lossesplaceholder_Value_d;    /* Expression: 0
                                        * Referenced by: '<S58>/Losses (placeholder)'
                                        */
  real_T controller_Value;             /* Expression: 2
                                        * Referenced by: '<S14>/controller'
                                        */
  real_T rpm1_P1;                      /* Expression: width
                                        * Referenced by: '<S52>/rpm1 '
                                        */
  real_T rpm1_P2;                      /* Expression: dtype
                                        * Referenced by: '<S52>/rpm1 '
                                        */
  real_T rpm1_P3;                      /* Expression: portnum
                                        * Referenced by: '<S52>/rpm1 '
                                        */
  real_T rpm1_P4;                      /* Expression: stime
                                        * Referenced by: '<S52>/rpm1 '
                                        */
  real_T rpm1_P5;                      /* Expression: stype
                                        * Referenced by: '<S52>/rpm1 '
                                        */
  real_T rpm1_P6;                      /* Expression: btype
                                        * Referenced by: '<S52>/rpm1 '
                                        */
  real_T Gain_Gain_ol;                 /* Expression: 1/60
                                        * Referenced by: '<S52>/Gain'
                                        */
  real_T rpm2_P1;                      /* Expression: width
                                        * Referenced by: '<S52>/rpm2'
                                        */
  real_T rpm2_P2;                      /* Expression: dtype
                                        * Referenced by: '<S52>/rpm2'
                                        */
  real_T rpm2_P3;                      /* Expression: portnum
                                        * Referenced by: '<S52>/rpm2'
                                        */
  real_T rpm2_P4;                      /* Expression: stime
                                        * Referenced by: '<S52>/rpm2'
                                        */
  real_T rpm2_P5;                      /* Expression: stype
                                        * Referenced by: '<S52>/rpm2'
                                        */
  real_T rpm2_P6;                      /* Expression: btype
                                        * Referenced by: '<S52>/rpm2'
                                        */
  real_T Gain1_Gain_g;                 /* Expression: 1/60
                                        * Referenced by: '<S52>/Gain1'
                                        */
  real_T rpm3_P1;                      /* Expression: width
                                        * Referenced by: '<S52>/rpm3'
                                        */
  real_T rpm3_P2;                      /* Expression: dtype
                                        * Referenced by: '<S52>/rpm3'
                                        */
  real_T rpm3_P3;                      /* Expression: portnum
                                        * Referenced by: '<S52>/rpm3'
                                        */
  real_T rpm3_P4;                      /* Expression: stime
                                        * Referenced by: '<S52>/rpm3'
                                        */
  real_T rpm3_P5;                      /* Expression: stype
                                        * Referenced by: '<S52>/rpm3'
                                        */
  real_T rpm3_P6;                      /* Expression: btype
                                        * Referenced by: '<S52>/rpm3'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1/60
                                        * Referenced by: '<S52>/Gain2'
                                        */
  real_T rpm4_P1;                      /* Expression: width
                                        * Referenced by: '<S52>/rpm4'
                                        */
  real_T rpm4_P2;                      /* Expression: dtype
                                        * Referenced by: '<S52>/rpm4'
                                        */
  real_T rpm4_P3;                      /* Expression: portnum
                                        * Referenced by: '<S52>/rpm4'
                                        */
  real_T rpm4_P4;                      /* Expression: stime
                                        * Referenced by: '<S52>/rpm4'
                                        */
  real_T rpm4_P5;                      /* Expression: stype
                                        * Referenced by: '<S52>/rpm4'
                                        */
  real_T rpm4_P6;                      /* Expression: btype
                                        * Referenced by: '<S52>/rpm4'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1/60
                                        * Referenced by: '<S52>/Gain3'
                                        */
  real_T rpm5_P1;                      /* Expression: width
                                        * Referenced by: '<S52>/rpm5'
                                        */
  real_T rpm5_P2;                      /* Expression: dtype
                                        * Referenced by: '<S52>/rpm5'
                                        */
  real_T rpm5_P3;                      /* Expression: portnum
                                        * Referenced by: '<S52>/rpm5'
                                        */
  real_T rpm5_P4;                      /* Expression: stime
                                        * Referenced by: '<S52>/rpm5'
                                        */
  real_T rpm5_P5;                      /* Expression: stype
                                        * Referenced by: '<S52>/rpm5'
                                        */
  real_T rpm5_P6;                      /* Expression: btype
                                        * Referenced by: '<S52>/rpm5'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1/60
                                        * Referenced by: '<S52>/Gain4'
                                        */
  real_T rpm6_P1;                      /* Expression: width
                                        * Referenced by: '<S52>/rpm6'
                                        */
  real_T rpm6_P2;                      /* Expression: dtype
                                        * Referenced by: '<S52>/rpm6'
                                        */
  real_T rpm6_P3;                      /* Expression: portnum
                                        * Referenced by: '<S52>/rpm6'
                                        */
  real_T rpm6_P4;                      /* Expression: stime
                                        * Referenced by: '<S52>/rpm6'
                                        */
  real_T rpm6_P5;                      /* Expression: stype
                                        * Referenced by: '<S52>/rpm6'
                                        */
  real_T rpm6_P6;                      /* Expression: btype
                                        * Referenced by: '<S52>/rpm6'
                                        */
  real_T Gain5_Gain_es;                /* Expression: 1/60
                                        * Referenced by: '<S52>/Gain5'
                                        */
  real_T thr_angle_1_P1;               /* Expression: width
                                        * Referenced by: '<S16>/thr_angle_1'
                                        */
  real_T thr_angle_1_P2;               /* Expression: dtype
                                        * Referenced by: '<S16>/thr_angle_1'
                                        */
  real_T thr_angle_1_P3;               /* Expression: portnum
                                        * Referenced by: '<S16>/thr_angle_1'
                                        */
  real_T thr_angle_1_P4;               /* Expression: stime
                                        * Referenced by: '<S16>/thr_angle_1'
                                        */
  real_T thr_angle_1_P5;               /* Expression: stype
                                        * Referenced by: '<S16>/thr_angle_1'
                                        */
  real_T thr_angle_1_P6;               /* Expression: btype
                                        * Referenced by: '<S16>/thr_angle_1'
                                        */
  real_T thr_angle_2_P1;               /* Expression: width
                                        * Referenced by: '<S16>/thr_angle_2'
                                        */
  real_T thr_angle_2_P2;               /* Expression: dtype
                                        * Referenced by: '<S16>/thr_angle_2'
                                        */
  real_T thr_angle_2_P3;               /* Expression: portnum
                                        * Referenced by: '<S16>/thr_angle_2'
                                        */
  real_T thr_angle_2_P4;               /* Expression: stime
                                        * Referenced by: '<S16>/thr_angle_2'
                                        */
  real_T thr_angle_2_P5;               /* Expression: stype
                                        * Referenced by: '<S16>/thr_angle_2'
                                        */
  real_T thr_angle_2_P6;               /* Expression: btype
                                        * Referenced by: '<S16>/thr_angle_2'
                                        */
  real_T thr_angle_3_P1;               /* Expression: width
                                        * Referenced by: '<S16>/thr_angle_3'
                                        */
  real_T thr_angle_3_P2;               /* Expression: dtype
                                        * Referenced by: '<S16>/thr_angle_3'
                                        */
  real_T thr_angle_3_P3;               /* Expression: portnum
                                        * Referenced by: '<S16>/thr_angle_3'
                                        */
  real_T thr_angle_3_P4;               /* Expression: stime
                                        * Referenced by: '<S16>/thr_angle_3'
                                        */
  real_T thr_angle_3_P5;               /* Expression: stype
                                        * Referenced by: '<S16>/thr_angle_3'
                                        */
  real_T thr_angle_3_P6;               /* Expression: btype
                                        * Referenced by: '<S16>/thr_angle_3'
                                        */
  real_T thr_angle_4_P1;               /* Expression: width
                                        * Referenced by: '<S16>/thr_angle_4'
                                        */
  real_T thr_angle_4_P2;               /* Expression: dtype
                                        * Referenced by: '<S16>/thr_angle_4'
                                        */
  real_T thr_angle_4_P3;               /* Expression: portnum
                                        * Referenced by: '<S16>/thr_angle_4'
                                        */
  real_T thr_angle_4_P4;               /* Expression: stime
                                        * Referenced by: '<S16>/thr_angle_4'
                                        */
  real_T thr_angle_4_P5;               /* Expression: stype
                                        * Referenced by: '<S16>/thr_angle_4'
                                        */
  real_T thr_angle_4_P6;               /* Expression: btype
                                        * Referenced by: '<S16>/thr_angle_4'
                                        */
  real_T thr_angle_5_P1;               /* Expression: width
                                        * Referenced by: '<S16>/thr_angle_5'
                                        */
  real_T thr_angle_5_P2;               /* Expression: dtype
                                        * Referenced by: '<S16>/thr_angle_5'
                                        */
  real_T thr_angle_5_P3;               /* Expression: portnum
                                        * Referenced by: '<S16>/thr_angle_5'
                                        */
  real_T thr_angle_5_P4;               /* Expression: stime
                                        * Referenced by: '<S16>/thr_angle_5'
                                        */
  real_T thr_angle_5_P5;               /* Expression: stype
                                        * Referenced by: '<S16>/thr_angle_5'
                                        */
  real_T thr_angle_5_P6;               /* Expression: btype
                                        * Referenced by: '<S16>/thr_angle_5'
                                        */
  real_T thr_angle_6_P1;               /* Expression: width
                                        * Referenced by: '<S16>/thr_angle_6'
                                        */
  real_T thr_angle_6_P2;               /* Expression: dtype
                                        * Referenced by: '<S16>/thr_angle_6'
                                        */
  real_T thr_angle_6_P3;               /* Expression: portnum
                                        * Referenced by: '<S16>/thr_angle_6'
                                        */
  real_T thr_angle_6_P4;               /* Expression: stime
                                        * Referenced by: '<S16>/thr_angle_6'
                                        */
  real_T thr_angle_6_P5;               /* Expression: stype
                                        * Referenced by: '<S16>/thr_angle_6'
                                        */
  real_T thr_angle_6_P6;               /* Expression: btype
                                        * Referenced by: '<S16>/thr_angle_6'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 180/pi
                                        * Referenced by: '<S46>/Gain'
                                        */
  real_T XpositionThruster_Value[6];   /* Expression: [Thruster.T1(1) Thruster.T2(1) Thruster.T3(1) Thruster.T4(1) Thruster.T5(1) Thruster.T6(1)]
                                        * Referenced by: '<S13>/X-position Thruster'
                                        */
  real_T YpositionThruster_Value[6];   /* Expression: [Thruster.T1(2) Thruster.T2(2) Thruster.T3(2) Thruster.T4(2) Thruster.T5(2) Thruster.T6(2)]
                                        * Referenced by: '<S13>/Y-position Thruster'
                                        */
  real_T Angle_controller_P1;          /* Expression: width
                                        * Referenced by: '<S13>/Angle_controller'
                                        */
  real_T Angle_controller_P2;          /* Expression: dtype
                                        * Referenced by: '<S13>/Angle_controller'
                                        */
  real_T Angle_controller_P3;          /* Expression: portnum
                                        * Referenced by: '<S13>/Angle_controller'
                                        */
  real_T Angle_controller_P4;          /* Expression: stime
                                        * Referenced by: '<S13>/Angle_controller'
                                        */
  real_T Angle_controller_P5;          /* Expression: stype
                                        * Referenced by: '<S13>/Angle_controller'
                                        */
  real_T Angle_controller_P6;          /* Expression: btype
                                        * Referenced by: '<S13>/Angle_controller'
                                        */
  real_T constantangle_Value[6];       /* Expression: [Thruster.T1(3) Thruster.T2(3) Thruster.T3(3) Thruster.T4(3) Thruster.T5(3) Thruster.T6(3)]
                                        * Referenced by: '<S13>/constant angle'
                                        */
  real_T ChoosingFixedAzimuthangle_Thres;/* Expression: 1
                                          * Referenced by: '<S13>/Choosing Fixed // Azimuth angle'
                                          */
  real_T Saturation1_UpperSat;         /* Expression: pi
                                        * Referenced by: '<S51>/Saturation 1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -pi
                                        * Referenced by: '<S51>/Saturation 1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: pi
                                        * Referenced by: '<S51>/Saturation 2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -pi
                                        * Referenced by: '<S51>/Saturation 2'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: pi
                                        * Referenced by: '<S51>/Saturation 3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: -pi
                                        * Referenced by: '<S51>/Saturation 3'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: pi
                                        * Referenced by: '<S51>/Saturation 4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: -pi
                                        * Referenced by: '<S51>/Saturation 4'
                                        */
  real_T Saturation5_UpperSat;         /* Expression: pi
                                        * Referenced by: '<S51>/Saturation 5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: -pi
                                        * Referenced by: '<S51>/Saturation 5'
                                        */
  real_T Saturation6_UpperSat;         /* Expression: pi
                                        * Referenced by: '<S51>/Saturation 6'
                                        */
  real_T Saturation6_LowerSat;         /* Expression: -pi
                                        * Referenced by: '<S51>/Saturation 6'
                                        */
  real_T Gain_Gain_oe;                 /* Expression: 180/pi
                                        * Referenced by: '<S10>/Gain'
                                        */
  real_T XpositionThruster_Value_k[6]; /* Expression: [Thruster.T1(1) Thruster.T2(1) Thruster.T3(1) Thruster.T4(1) Thruster.T5(1) Thruster.T6(1)]
                                        * Referenced by: '<Root>/X-position Thruster'
                                        */
  real_T YpositionThruster_Value_l[6]; /* Expression: [Thruster.T1(2) Thruster.T2(2) Thruster.T3(2) Thruster.T4(2) Thruster.T5(2) Thruster.T6(2)]
                                        * Referenced by: '<Root>/Y-position Thruster'
                                        */
  real_T tau_commanded_psi_P1;         /* Expression: width
                                        * Referenced by: '<Root>/tau_commanded_psi'
                                        */
  real_T tau_commanded_psi_P2;         /* Expression: dtype
                                        * Referenced by: '<Root>/tau_commanded_psi'
                                        */
  real_T tau_commanded_psi_P3;         /* Expression: portnum
                                        * Referenced by: '<Root>/tau_commanded_psi'
                                        */
  real_T tau_commanded_psi_P4;         /* Expression: stime
                                        * Referenced by: '<Root>/tau_commanded_psi'
                                        */
  real_T tau_commanded_psi_P5;         /* Expression: stype
                                        * Referenced by: '<Root>/tau_commanded_psi'
                                        */
  real_T tau_commanded_psi_P6;         /* Expression: btype
                                        * Referenced by: '<Root>/tau_commanded_psi'
                                        */
  real_T tau_commanded_x_P1;           /* Expression: width
                                        * Referenced by: '<Root>/tau_commanded_x'
                                        */
  real_T tau_commanded_x_P2;           /* Expression: dtype
                                        * Referenced by: '<Root>/tau_commanded_x'
                                        */
  real_T tau_commanded_x_P3;           /* Expression: portnum
                                        * Referenced by: '<Root>/tau_commanded_x'
                                        */
  real_T tau_commanded_x_P4;           /* Expression: stime
                                        * Referenced by: '<Root>/tau_commanded_x'
                                        */
  real_T tau_commanded_x_P5;           /* Expression: stype
                                        * Referenced by: '<Root>/tau_commanded_x'
                                        */
  real_T tau_commanded_x_P6;           /* Expression: btype
                                        * Referenced by: '<Root>/tau_commanded_x'
                                        */
  real_T tau_commanded_y_P1;           /* Expression: width
                                        * Referenced by: '<Root>/tau_commanded_y'
                                        */
  real_T tau_commanded_y_P2;           /* Expression: dtype
                                        * Referenced by: '<Root>/tau_commanded_y'
                                        */
  real_T tau_commanded_y_P3;           /* Expression: portnum
                                        * Referenced by: '<Root>/tau_commanded_y'
                                        */
  real_T tau_commanded_y_P4;           /* Expression: stime
                                        * Referenced by: '<Root>/tau_commanded_y'
                                        */
  real_T tau_commanded_y_P5;           /* Expression: stype
                                        * Referenced by: '<Root>/tau_commanded_y'
                                        */
  real_T tau_commanded_y_P6;           /* Expression: btype
                                        * Referenced by: '<Root>/tau_commanded_y'
                                        */
  real_T Gain4_Gain_d;                 /* Expression: 180/pi
                                        * Referenced by: '<Root>/Gain4'
                                        */
  real_T psi_ref_filter_P1;            /* Expression: width
                                        * Referenced by: '<Root>/psi_ref_filter'
                                        */
  real_T psi_ref_filter_P2;            /* Expression: dtype
                                        * Referenced by: '<Root>/psi_ref_filter'
                                        */
  real_T psi_ref_filter_P3;            /* Expression: portnum
                                        * Referenced by: '<Root>/psi_ref_filter'
                                        */
  real_T psi_ref_filter_P4;            /* Expression: stime
                                        * Referenced by: '<Root>/psi_ref_filter'
                                        */
  real_T psi_ref_filter_P5;            /* Expression: stype
                                        * Referenced by: '<Root>/psi_ref_filter'
                                        */
  real_T psi_ref_filter_P6;            /* Expression: btype
                                        * Referenced by: '<Root>/psi_ref_filter'
                                        */
  real_T Gain2_Gain_d;                 /* Expression: 1000
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T x_ref_filter_P1;              /* Expression: width
                                        * Referenced by: '<Root>/x_ref_filter'
                                        */
  real_T x_ref_filter_P2;              /* Expression: dtype
                                        * Referenced by: '<Root>/x_ref_filter'
                                        */
  real_T x_ref_filter_P3;              /* Expression: portnum
                                        * Referenced by: '<Root>/x_ref_filter'
                                        */
  real_T x_ref_filter_P4;              /* Expression: stime
                                        * Referenced by: '<Root>/x_ref_filter'
                                        */
  real_T x_ref_filter_P5;              /* Expression: stype
                                        * Referenced by: '<Root>/x_ref_filter'
                                        */
  real_T x_ref_filter_P6;              /* Expression: btype
                                        * Referenced by: '<Root>/x_ref_filter'
                                        */
  real_T Gain3_Gain_f;                 /* Expression: 1000
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real_T y_ref_filter_P1;              /* Expression: width
                                        * Referenced by: '<Root>/y_ref_filter'
                                        */
  real_T y_ref_filter_P2;              /* Expression: dtype
                                        * Referenced by: '<Root>/y_ref_filter'
                                        */
  real_T y_ref_filter_P3;              /* Expression: portnum
                                        * Referenced by: '<Root>/y_ref_filter'
                                        */
  real_T y_ref_filter_P4;              /* Expression: stime
                                        * Referenced by: '<Root>/y_ref_filter'
                                        */
  real_T y_ref_filter_P5;              /* Expression: stype
                                        * Referenced by: '<Root>/y_ref_filter'
                                        */
  real_T y_ref_filter_P6;              /* Expression: btype
                                        * Referenced by: '<Root>/y_ref_filter'
                                        */
  real_T x_hat_P1_j;                   /* Expression: width
                                        * Referenced by: '<S32>/x_hat'
                                        */
  real_T x_hat_P2_k;                   /* Expression: dtype
                                        * Referenced by: '<S32>/x_hat'
                                        */
  real_T x_hat_P3_e;                   /* Expression: portnum
                                        * Referenced by: '<S32>/x_hat'
                                        */
  real_T x_hat_P4_c;                   /* Expression: stime
                                        * Referenced by: '<S32>/x_hat'
                                        */
  real_T x_hat_P5_h;                   /* Expression: stype
                                        * Referenced by: '<S32>/x_hat'
                                        */
  real_T x_hat_P6_e;                   /* Expression: btype
                                        * Referenced by: '<S32>/x_hat'
                                        */
  real_T y_hat_P1_o;                   /* Expression: width
                                        * Referenced by: '<S32>/y_hat'
                                        */
  real_T y_hat_P2_e;                   /* Expression: dtype
                                        * Referenced by: '<S32>/y_hat'
                                        */
  real_T y_hat_P3_b;                   /* Expression: portnum
                                        * Referenced by: '<S32>/y_hat'
                                        */
  real_T y_hat_P4_j;                   /* Expression: stime
                                        * Referenced by: '<S32>/y_hat'
                                        */
  real_T y_hat_P5_f;                   /* Expression: stype
                                        * Referenced by: '<S32>/y_hat'
                                        */
  real_T y_hat_P6_i;                   /* Expression: btype
                                        * Referenced by: '<S32>/y_hat'
                                        */
  real_T psi_hat_P1_n;                 /* Expression: width
                                        * Referenced by: '<S32>/psi_hat'
                                        */
  real_T psi_hat_P2_l;                 /* Expression: dtype
                                        * Referenced by: '<S32>/psi_hat'
                                        */
  real_T psi_hat_P3_m;                 /* Expression: portnum
                                        * Referenced by: '<S32>/psi_hat'
                                        */
  real_T psi_hat_P4_f;                 /* Expression: stime
                                        * Referenced by: '<S32>/psi_hat'
                                        */
  real_T psi_hat_P5_p;                 /* Expression: stype
                                        * Referenced by: '<S32>/psi_hat'
                                        */
  real_T psi_hat_P6_b;                 /* Expression: btype
                                        * Referenced by: '<S32>/psi_hat'
                                        */
  real_T u_hat_P1;                     /* Expression: width
                                        * Referenced by: '<S34>/u_hat'
                                        */
  real_T u_hat_P2;                     /* Expression: dtype
                                        * Referenced by: '<S34>/u_hat'
                                        */
  real_T u_hat_P3;                     /* Expression: portnum
                                        * Referenced by: '<S34>/u_hat'
                                        */
  real_T u_hat_P4;                     /* Expression: stime
                                        * Referenced by: '<S34>/u_hat'
                                        */
  real_T u_hat_P5;                     /* Expression: stype
                                        * Referenced by: '<S34>/u_hat'
                                        */
  real_T u_hat_P6;                     /* Expression: btype
                                        * Referenced by: '<S34>/u_hat'
                                        */
  real_T v_hat_P1;                     /* Expression: width
                                        * Referenced by: '<S34>/v_hat'
                                        */
  real_T v_hat_P2;                     /* Expression: dtype
                                        * Referenced by: '<S34>/v_hat'
                                        */
  real_T v_hat_P3;                     /* Expression: portnum
                                        * Referenced by: '<S34>/v_hat'
                                        */
  real_T v_hat_P4;                     /* Expression: stime
                                        * Referenced by: '<S34>/v_hat'
                                        */
  real_T v_hat_P5;                     /* Expression: stype
                                        * Referenced by: '<S34>/v_hat'
                                        */
  real_T v_hat_P6;                     /* Expression: btype
                                        * Referenced by: '<S34>/v_hat'
                                        */
  real_T r_hat_P1;                     /* Expression: width
                                        * Referenced by: '<S34>/r_hat'
                                        */
  real_T r_hat_P2;                     /* Expression: dtype
                                        * Referenced by: '<S34>/r_hat'
                                        */
  real_T r_hat_P3;                     /* Expression: portnum
                                        * Referenced by: '<S34>/r_hat'
                                        */
  real_T r_hat_P4;                     /* Expression: stime
                                        * Referenced by: '<S34>/r_hat'
                                        */
  real_T r_hat_P5;                     /* Expression: stype
                                        * Referenced by: '<S34>/r_hat'
                                        */
  real_T r_hat_P6;                     /* Expression: btype
                                        * Referenced by: '<S34>/r_hat'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 1e10
                                        * Referenced by: '<S30>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: -1e10
                                        * Referenced by: '<S30>/Saturation'
                                        */
  real_T Gain_Gain_gg;                 /* Expression: pi
                                        * Referenced by: '<S30>/Gain'
                                        */
  real_T Constant_Value_i;             /* Expression: 2*pi
                                        * Referenced by: '<S30>/Constant'
                                        */
  real_T Integrator2_IC_i[3];          /* Expression: [0 0 0]'
                                        * Referenced by: '<S5>/Integrator2'
                                        */
  real_T Constant6_Value;              /* Expression: 1
                                        * Referenced by: '<S20>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 1
                                        * Referenced by: '<S20>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 1
                                        * Referenced by: '<S20>/Constant8'
                                        */
  real_T M1_Gain[9];                   /* Expression: [0.008021948049864 0 0;0 0.010098125265799 1.104781662647098e-04;0 3.303823257820844e-05 0.020839338676560]
                                        * Referenced by: '<S5>/M^-1'
                                        */
  real_T u_dot_hat_P1;                 /* Expression: width
                                        * Referenced by: '<S33>/u_dot_hat'
                                        */
  real_T u_dot_hat_P2;                 /* Expression: dtype
                                        * Referenced by: '<S33>/u_dot_hat'
                                        */
  real_T u_dot_hat_P3;                 /* Expression: portnum
                                        * Referenced by: '<S33>/u_dot_hat'
                                        */
  real_T u_dot_hat_P4;                 /* Expression: stime
                                        * Referenced by: '<S33>/u_dot_hat'
                                        */
  real_T u_dot_hat_P5;                 /* Expression: stype
                                        * Referenced by: '<S33>/u_dot_hat'
                                        */
  real_T u_dot_hat_P6;                 /* Expression: btype
                                        * Referenced by: '<S33>/u_dot_hat'
                                        */
  real_T v_dot_hat_P1;                 /* Expression: width
                                        * Referenced by: '<S33>/v_dot_hat'
                                        */
  real_T v_dot_hat_P2;                 /* Expression: dtype
                                        * Referenced by: '<S33>/v_dot_hat'
                                        */
  real_T v_dot_hat_P3;                 /* Expression: portnum
                                        * Referenced by: '<S33>/v_dot_hat'
                                        */
  real_T v_dot_hat_P4;                 /* Expression: stime
                                        * Referenced by: '<S33>/v_dot_hat'
                                        */
  real_T v_dot_hat_P5;                 /* Expression: stype
                                        * Referenced by: '<S33>/v_dot_hat'
                                        */
  real_T v_dot_hat_P6;                 /* Expression: btype
                                        * Referenced by: '<S33>/v_dot_hat'
                                        */
  real_T r_dot_hat_P1;                 /* Expression: width
                                        * Referenced by: '<S33>/r_dot_hat'
                                        */
  real_T r_dot_hat_P2;                 /* Expression: dtype
                                        * Referenced by: '<S33>/r_dot_hat'
                                        */
  real_T r_dot_hat_P3;                 /* Expression: portnum
                                        * Referenced by: '<S33>/r_dot_hat'
                                        */
  real_T r_dot_hat_P4;                 /* Expression: stime
                                        * Referenced by: '<S33>/r_dot_hat'
                                        */
  real_T r_dot_hat_P5;                 /* Expression: stype
                                        * Referenced by: '<S33>/r_dot_hat'
                                        */
  real_T r_dot_hat_P6;                 /* Expression: btype
                                        * Referenced by: '<S33>/r_dot_hat'
                                        */
  real_T b_x_hat_P1;                   /* Expression: width
                                        * Referenced by: '<S31>/b_x_hat'
                                        */
  real_T b_x_hat_P2;                   /* Expression: dtype
                                        * Referenced by: '<S31>/b_x_hat'
                                        */
  real_T b_x_hat_P3;                   /* Expression: portnum
                                        * Referenced by: '<S31>/b_x_hat'
                                        */
  real_T b_x_hat_P4;                   /* Expression: stime
                                        * Referenced by: '<S31>/b_x_hat'
                                        */
  real_T b_x_hat_P5;                   /* Expression: stype
                                        * Referenced by: '<S31>/b_x_hat'
                                        */
  real_T b_x_hat_P6;                   /* Expression: btype
                                        * Referenced by: '<S31>/b_x_hat'
                                        */
  real_T b_y_hat_P1;                   /* Expression: width
                                        * Referenced by: '<S31>/b_y_hat'
                                        */
  real_T b_y_hat_P2;                   /* Expression: dtype
                                        * Referenced by: '<S31>/b_y_hat'
                                        */
  real_T b_y_hat_P3;                   /* Expression: portnum
                                        * Referenced by: '<S31>/b_y_hat'
                                        */
  real_T b_y_hat_P4;                   /* Expression: stime
                                        * Referenced by: '<S31>/b_y_hat'
                                        */
  real_T b_y_hat_P5;                   /* Expression: stype
                                        * Referenced by: '<S31>/b_y_hat'
                                        */
  real_T b_y_hat_P6;                   /* Expression: btype
                                        * Referenced by: '<S31>/b_y_hat'
                                        */
  real_T b_psi_hat_P1;                 /* Expression: width
                                        * Referenced by: '<S31>/b_psi_hat'
                                        */
  real_T b_psi_hat_P2;                 /* Expression: dtype
                                        * Referenced by: '<S31>/b_psi_hat'
                                        */
  real_T b_psi_hat_P3;                 /* Expression: portnum
                                        * Referenced by: '<S31>/b_psi_hat'
                                        */
  real_T b_psi_hat_P4;                 /* Expression: stime
                                        * Referenced by: '<S31>/b_psi_hat'
                                        */
  real_T b_psi_hat_P5;                 /* Expression: stype
                                        * Referenced by: '<S31>/b_psi_hat'
                                        */
  real_T b_psi_hat_P6;                 /* Expression: btype
                                        * Referenced by: '<S31>/b_psi_hat'
                                        */
  real_T alpha1_P1;                    /* Expression: width
                                        * Referenced by: '<S17>/alpha1'
                                        */
  real_T alpha1_P2;                    /* Expression: dtype
                                        * Referenced by: '<S17>/alpha1'
                                        */
  real_T alpha1_P3;                    /* Expression: portnum
                                        * Referenced by: '<S17>/alpha1'
                                        */
  real_T alpha1_P4;                    /* Expression: stime
                                        * Referenced by: '<S17>/alpha1'
                                        */
  real_T alpha1_P5;                    /* Expression: stype
                                        * Referenced by: '<S17>/alpha1'
                                        */
  real_T alpha1_P6;                    /* Expression: btype
                                        * Referenced by: '<S17>/alpha1'
                                        */
  real_T alpha2_P1;                    /* Expression: width
                                        * Referenced by: '<S17>/alpha2'
                                        */
  real_T alpha2_P2;                    /* Expression: dtype
                                        * Referenced by: '<S17>/alpha2'
                                        */
  real_T alpha2_P3;                    /* Expression: portnum
                                        * Referenced by: '<S17>/alpha2'
                                        */
  real_T alpha2_P4;                    /* Expression: stime
                                        * Referenced by: '<S17>/alpha2'
                                        */
  real_T alpha2_P5;                    /* Expression: stype
                                        * Referenced by: '<S17>/alpha2'
                                        */
  real_T alpha2_P6;                    /* Expression: btype
                                        * Referenced by: '<S17>/alpha2'
                                        */
  real_T alpha3_P1;                    /* Expression: width
                                        * Referenced by: '<S17>/alpha3'
                                        */
  real_T alpha3_P2;                    /* Expression: dtype
                                        * Referenced by: '<S17>/alpha3'
                                        */
  real_T alpha3_P3;                    /* Expression: portnum
                                        * Referenced by: '<S17>/alpha3'
                                        */
  real_T alpha3_P4;                    /* Expression: stime
                                        * Referenced by: '<S17>/alpha3'
                                        */
  real_T alpha3_P5;                    /* Expression: stype
                                        * Referenced by: '<S17>/alpha3'
                                        */
  real_T alpha3_P6;                    /* Expression: btype
                                        * Referenced by: '<S17>/alpha3'
                                        */
  real_T alpha4_P1;                    /* Expression: width
                                        * Referenced by: '<S17>/alpha4'
                                        */
  real_T alpha4_P2;                    /* Expression: dtype
                                        * Referenced by: '<S17>/alpha4'
                                        */
  real_T alpha4_P3;                    /* Expression: portnum
                                        * Referenced by: '<S17>/alpha4'
                                        */
  real_T alpha4_P4;                    /* Expression: stime
                                        * Referenced by: '<S17>/alpha4'
                                        */
  real_T alpha4_P5;                    /* Expression: stype
                                        * Referenced by: '<S17>/alpha4'
                                        */
  real_T alpha4_P6;                    /* Expression: btype
                                        * Referenced by: '<S17>/alpha4'
                                        */
  real_T alpha5_P1;                    /* Expression: width
                                        * Referenced by: '<S17>/alpha5'
                                        */
  real_T alpha5_P2;                    /* Expression: dtype
                                        * Referenced by: '<S17>/alpha5'
                                        */
  real_T alpha5_P3;                    /* Expression: portnum
                                        * Referenced by: '<S17>/alpha5'
                                        */
  real_T alpha5_P4;                    /* Expression: stime
                                        * Referenced by: '<S17>/alpha5'
                                        */
  real_T alpha5_P5;                    /* Expression: stype
                                        * Referenced by: '<S17>/alpha5'
                                        */
  real_T alpha5_P6;                    /* Expression: btype
                                        * Referenced by: '<S17>/alpha5'
                                        */
  real_T alpha6_P1;                    /* Expression: width
                                        * Referenced by: '<S17>/alpha6'
                                        */
  real_T alpha6_P2;                    /* Expression: dtype
                                        * Referenced by: '<S17>/alpha6'
                                        */
  real_T alpha6_P3;                    /* Expression: portnum
                                        * Referenced by: '<S17>/alpha6'
                                        */
  real_T alpha6_P4;                    /* Expression: stime
                                        * Referenced by: '<S17>/alpha6'
                                        */
  real_T alpha6_P5;                    /* Expression: stype
                                        * Referenced by: '<S17>/alpha6'
                                        */
  real_T alpha6_P6;                    /* Expression: btype
                                        * Referenced by: '<S17>/alpha6'
                                        */
  real_T Saturation1_LowerSat_k;       /* Expression: 0
                                        * Referenced by: '<S52>/Saturation 1'
                                        */
  real_T Saturation2_UpperSat_j;       /* Expression: 0
                                        * Referenced by: '<S52>/Saturation 2'
                                        */
  real_T u1_P1;                        /* Expression: width
                                        * Referenced by: '<S17>/u1'
                                        */
  real_T u1_P2;                        /* Expression: dtype
                                        * Referenced by: '<S17>/u1'
                                        */
  real_T u1_P3;                        /* Expression: portnum
                                        * Referenced by: '<S17>/u1'
                                        */
  real_T u1_P4;                        /* Expression: stime
                                        * Referenced by: '<S17>/u1'
                                        */
  real_T u1_P5;                        /* Expression: stype
                                        * Referenced by: '<S17>/u1'
                                        */
  real_T u1_P6;                        /* Expression: btype
                                        * Referenced by: '<S17>/u1'
                                        */
  real_T Saturation8_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S52>/Saturation 8'
                                        */
  real_T Saturation9_UpperSat;         /* Expression: 0
                                        * Referenced by: '<S52>/Saturation 9'
                                        */
  real_T u2_P1;                        /* Expression: width
                                        * Referenced by: '<S17>/u2'
                                        */
  real_T u2_P2;                        /* Expression: dtype
                                        * Referenced by: '<S17>/u2'
                                        */
  real_T u2_P3;                        /* Expression: portnum
                                        * Referenced by: '<S17>/u2'
                                        */
  real_T u2_P4;                        /* Expression: stime
                                        * Referenced by: '<S17>/u2'
                                        */
  real_T u2_P5;                        /* Expression: stype
                                        * Referenced by: '<S17>/u2'
                                        */
  real_T u2_P6;                        /* Expression: btype
                                        * Referenced by: '<S17>/u2'
                                        */
  real_T Saturation10_LowerSat;        /* Expression: 0
                                        * Referenced by: '<S52>/Saturation 10'
                                        */
  real_T Saturation11_UpperSat;        /* Expression: 0
                                        * Referenced by: '<S52>/Saturation 11'
                                        */
  real_T u3_P1;                        /* Expression: width
                                        * Referenced by: '<S17>/u3'
                                        */
  real_T u3_P2;                        /* Expression: dtype
                                        * Referenced by: '<S17>/u3'
                                        */
  real_T u3_P3;                        /* Expression: portnum
                                        * Referenced by: '<S17>/u3'
                                        */
  real_T u3_P4;                        /* Expression: stime
                                        * Referenced by: '<S17>/u3'
                                        */
  real_T u3_P5;                        /* Expression: stype
                                        * Referenced by: '<S17>/u3'
                                        */
  real_T u3_P6;                        /* Expression: btype
                                        * Referenced by: '<S17>/u3'
                                        */
  real_T Saturation3_LowerSat_a;       /* Expression: 0
                                        * Referenced by: '<S52>/Saturation 3'
                                        */
  real_T Saturation4_UpperSat_m;       /* Expression: 0
                                        * Referenced by: '<S52>/Saturation 4'
                                        */
  real_T u4_P1;                        /* Expression: width
                                        * Referenced by: '<S17>/u4'
                                        */
  real_T u4_P2;                        /* Expression: dtype
                                        * Referenced by: '<S17>/u4'
                                        */
  real_T u4_P3;                        /* Expression: portnum
                                        * Referenced by: '<S17>/u4'
                                        */
  real_T u4_P4;                        /* Expression: stime
                                        * Referenced by: '<S17>/u4'
                                        */
  real_T u4_P5;                        /* Expression: stype
                                        * Referenced by: '<S17>/u4'
                                        */
  real_T u4_P6;                        /* Expression: btype
                                        * Referenced by: '<S17>/u4'
                                        */
  real_T Saturation5_LowerSat_a;       /* Expression: 0
                                        * Referenced by: '<S52>/Saturation 5'
                                        */
  real_T Saturation6_UpperSat_j;       /* Expression: 0
                                        * Referenced by: '<S52>/Saturation 6'
                                        */
  real_T u5_P1;                        /* Expression: width
                                        * Referenced by: '<S17>/u5'
                                        */
  real_T u5_P2;                        /* Expression: dtype
                                        * Referenced by: '<S17>/u5'
                                        */
  real_T u5_P3;                        /* Expression: portnum
                                        * Referenced by: '<S17>/u5'
                                        */
  real_T u5_P4;                        /* Expression: stime
                                        * Referenced by: '<S17>/u5'
                                        */
  real_T u5_P5;                        /* Expression: stype
                                        * Referenced by: '<S17>/u5'
                                        */
  real_T u5_P6;                        /* Expression: btype
                                        * Referenced by: '<S17>/u5'
                                        */
  real_T Saturation12_LowerSat;        /* Expression: 0
                                        * Referenced by: '<S52>/Saturation 12'
                                        */
  real_T Saturation13_UpperSat;        /* Expression: 0
                                        * Referenced by: '<S52>/Saturation 13'
                                        */
  real_T u6_P1;                        /* Expression: width
                                        * Referenced by: '<S17>/u6'
                                        */
  real_T u6_P2;                        /* Expression: dtype
                                        * Referenced by: '<S17>/u6'
                                        */
  real_T u6_P3;                        /* Expression: portnum
                                        * Referenced by: '<S17>/u6'
                                        */
  real_T u6_P4;                        /* Expression: stime
                                        * Referenced by: '<S17>/u6'
                                        */
  real_T u6_P5;                        /* Expression: stype
                                        * Referenced by: '<S17>/u6'
                                        */
  real_T u6_P6;                        /* Expression: btype
                                        * Referenced by: '<S17>/u6'
                                        */
  real_T Gain8_Gain;                   /* Expression: 180/pi
                                        * Referenced by: '<Root>/Gain8'
                                        */
  real_T heading_P1;                   /* Expression: width
                                        * Referenced by: '<Root>/heading'
                                        */
  real_T heading_P2;                   /* Expression: dtype
                                        * Referenced by: '<Root>/heading'
                                        */
  real_T heading_P3;                   /* Expression: portnum
                                        * Referenced by: '<Root>/heading'
                                        */
  real_T heading_P4;                   /* Expression: stime
                                        * Referenced by: '<Root>/heading'
                                        */
  real_T heading_P5;                   /* Expression: stype
                                        * Referenced by: '<Root>/heading'
                                        */
  real_T heading_P6;                   /* Expression: btype
                                        * Referenced by: '<Root>/heading'
                                        */
  real_T Constant_Value_g;             /* Expression: 50
                                        * Referenced by: '<S20>/Constant'
                                        */
  real_T Constant1_Value_o;            /* Expression: 50
                                        * Referenced by: '<S20>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 50
                                        * Referenced by: '<S20>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<S20>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 1
                                        * Referenced by: '<S20>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<S20>/Constant5'
                                        */
  real_T y_error_P1;                   /* Expression: width
                                        * Referenced by: '<S7>/y_error'
                                        */
  real_T y_error_P2;                   /* Expression: dtype
                                        * Referenced by: '<S7>/y_error'
                                        */
  real_T y_error_P3;                   /* Expression: portnum
                                        * Referenced by: '<S7>/y_error'
                                        */
  real_T y_error_P4;                   /* Expression: stime
                                        * Referenced by: '<S7>/y_error'
                                        */
  real_T y_error_P5;                   /* Expression: stype
                                        * Referenced by: '<S7>/y_error'
                                        */
  real_T y_error_P6;                   /* Expression: btype
                                        * Referenced by: '<S7>/y_error'
                                        */
  real_T Gain5_Gain_a;                 /* Expression: 180/pi
                                        * Referenced by: '<S7>/Gain5'
                                        */
  real_T psi_error_P1;                 /* Expression: width
                                        * Referenced by: '<S7>/psi_error'
                                        */
  real_T psi_error_P2;                 /* Expression: dtype
                                        * Referenced by: '<S7>/psi_error'
                                        */
  real_T psi_error_P3;                 /* Expression: portnum
                                        * Referenced by: '<S7>/psi_error'
                                        */
  real_T psi_error_P4;                 /* Expression: stime
                                        * Referenced by: '<S7>/psi_error'
                                        */
  real_T psi_error_P5;                 /* Expression: stype
                                        * Referenced by: '<S7>/psi_error'
                                        */
  real_T psi_error_P6;                 /* Expression: btype
                                        * Referenced by: '<S7>/psi_error'
                                        */
  real_T x_error_P1;                   /* Expression: width
                                        * Referenced by: '<S7>/x_error'
                                        */
  real_T x_error_P2;                   /* Expression: dtype
                                        * Referenced by: '<S7>/x_error'
                                        */
  real_T x_error_P3;                   /* Expression: portnum
                                        * Referenced by: '<S7>/x_error'
                                        */
  real_T x_error_P4;                   /* Expression: stime
                                        * Referenced by: '<S7>/x_error'
                                        */
  real_T x_error_P5;                   /* Expression: stype
                                        * Referenced by: '<S7>/x_error'
                                        */
  real_T x_error_P6;                   /* Expression: btype
                                        * Referenced by: '<S7>/x_error'
                                        */
  real_T Integral_x_P1;                /* Expression: width
                                        * Referenced by: '<S7>/Integral_x'
                                        */
  real_T Integral_x_P2;                /* Expression: dtype
                                        * Referenced by: '<S7>/Integral_x'
                                        */
  real_T Integral_x_P3;                /* Expression: portnum
                                        * Referenced by: '<S7>/Integral_x'
                                        */
  real_T Integral_x_P4;                /* Expression: stime
                                        * Referenced by: '<S7>/Integral_x'
                                        */
  real_T Integral_x_P5;                /* Expression: stype
                                        * Referenced by: '<S7>/Integral_x'
                                        */
  real_T Integral_x_P6;                /* Expression: btype
                                        * Referenced by: '<S7>/Integral_x'
                                        */
  real_T Integral_psi_P1;              /* Expression: width
                                        * Referenced by: '<S7>/Integral_psi'
                                        */
  real_T Integral_psi_P2;              /* Expression: dtype
                                        * Referenced by: '<S7>/Integral_psi'
                                        */
  real_T Integral_psi_P3;              /* Expression: portnum
                                        * Referenced by: '<S7>/Integral_psi'
                                        */
  real_T Integral_psi_P4;              /* Expression: stime
                                        * Referenced by: '<S7>/Integral_psi'
                                        */
  real_T Integral_psi_P5;              /* Expression: stype
                                        * Referenced by: '<S7>/Integral_psi'
                                        */
  real_T Integral_psi_P6;              /* Expression: btype
                                        * Referenced by: '<S7>/Integral_psi'
                                        */
  real_T Integral_y_P1;                /* Expression: width
                                        * Referenced by: '<S7>/Integral_y'
                                        */
  real_T Integral_y_P2;                /* Expression: dtype
                                        * Referenced by: '<S7>/Integral_y'
                                        */
  real_T Integral_y_P3;                /* Expression: portnum
                                        * Referenced by: '<S7>/Integral_y'
                                        */
  real_T Integral_y_P4;                /* Expression: stime
                                        * Referenced by: '<S7>/Integral_y'
                                        */
  real_T Integral_y_P5;                /* Expression: stype
                                        * Referenced by: '<S7>/Integral_y'
                                        */
  real_T Integral_y_P6;                /* Expression: btype
                                        * Referenced by: '<S7>/Integral_y'
                                        */
  real_T x_ref_P1;                     /* Expression: width
                                        * Referenced by: '<S11>/x_ref'
                                        */
  real_T x_ref_P2;                     /* Expression: dtype
                                        * Referenced by: '<S11>/x_ref'
                                        */
  real_T x_ref_P3;                     /* Expression: portnum
                                        * Referenced by: '<S11>/x_ref'
                                        */
  real_T x_ref_P4;                     /* Expression: stime
                                        * Referenced by: '<S11>/x_ref'
                                        */
  real_T x_ref_P5;                     /* Expression: stype
                                        * Referenced by: '<S11>/x_ref'
                                        */
  real_T x_ref_P6;                     /* Expression: btype
                                        * Referenced by: '<S11>/x_ref'
                                        */
  real_T Gain_Gain_f;                  /* Expression: -1
                                        * Referenced by: '<S11>/Gain'
                                        */
  real_T Integrator_IC_m;              /* Expression: 0
                                        * Referenced by: '<S11>/Integrator'
                                        */
  real_T Integrator1_IC_b;             /* Expression: 0
                                        * Referenced by: '<S11>/Integrator1'
                                        */
  real_T w_x_P1;                       /* Expression: width
                                        * Referenced by: '<S19>/w_x'
                                        */
  real_T w_x_P2;                       /* Expression: dtype
                                        * Referenced by: '<S19>/w_x'
                                        */
  real_T w_x_P3;                       /* Expression: portnum
                                        * Referenced by: '<S19>/w_x'
                                        */
  real_T w_x_P4;                       /* Expression: stime
                                        * Referenced by: '<S19>/w_x'
                                        */
  real_T w_x_P5;                       /* Expression: stype
                                        * Referenced by: '<S19>/w_x'
                                        */
  real_T w_x_P6;                       /* Expression: btype
                                        * Referenced by: '<S19>/w_x'
                                        */
  real_T w_y_P1;                       /* Expression: width
                                        * Referenced by: '<S19>/w_y'
                                        */
  real_T w_y_P2;                       /* Expression: dtype
                                        * Referenced by: '<S19>/w_y'
                                        */
  real_T w_y_P3;                       /* Expression: portnum
                                        * Referenced by: '<S19>/w_y'
                                        */
  real_T w_y_P4;                       /* Expression: stime
                                        * Referenced by: '<S19>/w_y'
                                        */
  real_T w_y_P5;                       /* Expression: stype
                                        * Referenced by: '<S19>/w_y'
                                        */
  real_T w_y_P6;                       /* Expression: btype
                                        * Referenced by: '<S19>/w_y'
                                        */
  real_T w_psi_P1;                     /* Expression: width
                                        * Referenced by: '<S19>/w_psi'
                                        */
  real_T w_psi_P2;                     /* Expression: dtype
                                        * Referenced by: '<S19>/w_psi'
                                        */
  real_T w_psi_P3;                     /* Expression: portnum
                                        * Referenced by: '<S19>/w_psi'
                                        */
  real_T w_psi_P4;                     /* Expression: stime
                                        * Referenced by: '<S19>/w_psi'
                                        */
  real_T w_psi_P5;                     /* Expression: stype
                                        * Referenced by: '<S19>/w_psi'
                                        */
  real_T w_psi_P6;                     /* Expression: btype
                                        * Referenced by: '<S19>/w_psi'
                                        */
  real_T zeta_psi_P1;                  /* Expression: width
                                        * Referenced by: '<S19>/zeta_psi'
                                        */
  real_T zeta_psi_P2;                  /* Expression: dtype
                                        * Referenced by: '<S19>/zeta_psi'
                                        */
  real_T zeta_psi_P3;                  /* Expression: portnum
                                        * Referenced by: '<S19>/zeta_psi'
                                        */
  real_T zeta_psi_P4;                  /* Expression: stime
                                        * Referenced by: '<S19>/zeta_psi'
                                        */
  real_T zeta_psi_P5;                  /* Expression: stype
                                        * Referenced by: '<S19>/zeta_psi'
                                        */
  real_T zeta_psi_P6;                  /* Expression: btype
                                        * Referenced by: '<S19>/zeta_psi'
                                        */
  real_T zeta_x_P1;                    /* Expression: width
                                        * Referenced by: '<S19>/zeta_x'
                                        */
  real_T zeta_x_P2;                    /* Expression: dtype
                                        * Referenced by: '<S19>/zeta_x'
                                        */
  real_T zeta_x_P3;                    /* Expression: portnum
                                        * Referenced by: '<S19>/zeta_x'
                                        */
  real_T zeta_x_P4;                    /* Expression: stime
                                        * Referenced by: '<S19>/zeta_x'
                                        */
  real_T zeta_x_P5;                    /* Expression: stype
                                        * Referenced by: '<S19>/zeta_x'
                                        */
  real_T zeta_x_P6;                    /* Expression: btype
                                        * Referenced by: '<S19>/zeta_x'
                                        */
  real_T zeta_y_P1;                    /* Expression: width
                                        * Referenced by: '<S19>/zeta_y'
                                        */
  real_T zeta_y_P2;                    /* Expression: dtype
                                        * Referenced by: '<S19>/zeta_y'
                                        */
  real_T zeta_y_P3;                    /* Expression: portnum
                                        * Referenced by: '<S19>/zeta_y'
                                        */
  real_T zeta_y_P4;                    /* Expression: stime
                                        * Referenced by: '<S19>/zeta_y'
                                        */
  real_T zeta_y_P5;                    /* Expression: stype
                                        * Referenced by: '<S19>/zeta_y'
                                        */
  real_T zeta_y_P6;                    /* Expression: btype
                                        * Referenced by: '<S19>/zeta_y'
                                        */
  real_T T_psi_P1;                     /* Expression: width
                                        * Referenced by: '<S19>/T_psi'
                                        */
  real_T T_psi_P2;                     /* Expression: dtype
                                        * Referenced by: '<S19>/T_psi'
                                        */
  real_T T_psi_P3;                     /* Expression: portnum
                                        * Referenced by: '<S19>/T_psi'
                                        */
  real_T T_psi_P4;                     /* Expression: stime
                                        * Referenced by: '<S19>/T_psi'
                                        */
  real_T T_psi_P5;                     /* Expression: stype
                                        * Referenced by: '<S19>/T_psi'
                                        */
  real_T T_psi_P6;                     /* Expression: btype
                                        * Referenced by: '<S19>/T_psi'
                                        */
  real_T T_x_P1;                       /* Expression: width
                                        * Referenced by: '<S19>/T_x'
                                        */
  real_T T_x_P2;                       /* Expression: dtype
                                        * Referenced by: '<S19>/T_x'
                                        */
  real_T T_x_P3;                       /* Expression: portnum
                                        * Referenced by: '<S19>/T_x'
                                        */
  real_T T_x_P4;                       /* Expression: stime
                                        * Referenced by: '<S19>/T_x'
                                        */
  real_T T_x_P5;                       /* Expression: stype
                                        * Referenced by: '<S19>/T_x'
                                        */
  real_T T_x_P6;                       /* Expression: btype
                                        * Referenced by: '<S19>/T_x'
                                        */
  real_T T_y_P1;                       /* Expression: width
                                        * Referenced by: '<S19>/T_y'
                                        */
  real_T T_y_P2;                       /* Expression: dtype
                                        * Referenced by: '<S19>/T_y'
                                        */
  real_T T_y_P3;                       /* Expression: portnum
                                        * Referenced by: '<S19>/T_y'
                                        */
  real_T T_y_P4;                       /* Expression: stime
                                        * Referenced by: '<S19>/T_y'
                                        */
  real_T T_y_P5;                       /* Expression: stype
                                        * Referenced by: '<S19>/T_y'
                                        */
  real_T T_y_P6;                       /* Expression: btype
                                        * Referenced by: '<S19>/T_y'
                                        */
  real_T y_ref_P1;                     /* Expression: width
                                        * Referenced by: '<S11>/y_ref'
                                        */
  real_T y_ref_P2;                     /* Expression: dtype
                                        * Referenced by: '<S11>/y_ref'
                                        */
  real_T y_ref_P3;                     /* Expression: portnum
                                        * Referenced by: '<S11>/y_ref'
                                        */
  real_T y_ref_P4;                     /* Expression: stime
                                        * Referenced by: '<S11>/y_ref'
                                        */
  real_T y_ref_P5;                     /* Expression: stype
                                        * Referenced by: '<S11>/y_ref'
                                        */
  real_T y_ref_P6;                     /* Expression: btype
                                        * Referenced by: '<S11>/y_ref'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<S15>/Delay'
                                        */
  real_T Constant_Value_k[2];          /* Expression: hd2.den{1,1}
                                        * Referenced by: '<S53>/Constant'
                                        */
  real_T Constant1_Value_m[2];         /* Expression: hd2.num{1,1}
                                        * Referenced by: '<S53>/Constant1'
                                        */
  real_T Delay_InitialCondition_g;     /* Expression: 0
                                        * Referenced by: '<S53>/Delay'
                                        */
  real_T Delay_InitialCondition_a;     /* Expression: 0
                                        * Referenced by: '<S68>/Delay'
                                        */
  real_T Constant1_Value_i4[3];        /* Expression: hd.num{1,1}
                                        * Referenced by: '<S68>/Constant1'
                                        */
  real_T Constant2_Value_p[3];         /* Expression: hd.den{1,1}
                                        * Referenced by: '<S68>/Constant2'
                                        */
  real_T DiscreteTransferFcn_InitialStat;/* Expression: 0
                                          * Referenced by: '<S68>/Discrete Transfer Fcn'
                                          */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S71>/TSamp'
                                        */
  real_T AccelerationLimit_RisingLim;  /* Computed Parameter: AccelerationLimit_RisingLim
                                        * Referenced by: '<S68>/Acceleration Limit'
                                        */
  real_T AccelerationLimit_FallingLim; /* Computed Parameter: AccelerationLimit_FallingLim
                                        * Referenced by: '<S68>/Acceleration Limit'
                                        */
  real_T AccelerationLimit_IC;         /* Expression: 0
                                        * Referenced by: '<S68>/Acceleration Limit'
                                        */
  real_T Memory_X0;                    /* Expression: 1
                                        * Referenced by: '<S68>/Memory'
                                        */
  real_T reset_P1;                     /* Expression: width
                                        * Referenced by: '<S70>/reset'
                                        */
  real_T reset_P2;                     /* Expression: dtype
                                        * Referenced by: '<S70>/reset'
                                        */
  real_T reset_P3;                     /* Expression: portnum
                                        * Referenced by: '<S70>/reset'
                                        */
  real_T reset_P4;                     /* Expression: stime
                                        * Referenced by: '<S70>/reset'
                                        */
  real_T reset_P5;                     /* Expression: stype
                                        * Referenced by: '<S70>/reset'
                                        */
  real_T reset_P6;                     /* Expression: btype
                                        * Referenced by: '<S70>/reset'
                                        */
  real_T Integrator_IC_p;              /* Expression: 0
                                        * Referenced by: '<S70>/Integrator'
                                        */
  real_T NaN_Value;                    /* Expression: 0
                                        * Referenced by: '<S68>/NaN'
                                        */
  real_T DiscreteTransferFcn_InitialSt_f;/* Expression: 0
                                          * Referenced by: '<S53>/Discrete Transfer Fcn'
                                          */
  real_T Control_test_Pa_P1;           /* Expression: width
                                        * Referenced by: '<S66>/Control_test_Pa'
                                        */
  real_T Control_test_Pa_P2;           /* Expression: dtype
                                        * Referenced by: '<S66>/Control_test_Pa'
                                        */
  real_T Control_test_Pa_P3;           /* Expression: portnum
                                        * Referenced by: '<S66>/Control_test_Pa'
                                        */
  real_T Control_test_Pa_P4;           /* Expression: stime
                                        * Referenced by: '<S66>/Control_test_Pa'
                                        */
  real_T Control_test_Pa_P5;           /* Expression: stype
                                        * Referenced by: '<S66>/Control_test_Pa'
                                        */
  real_T Control_test_Pa_P6;           /* Expression: btype
                                        * Referenced by: '<S66>/Control_test_Pa'
                                        */
  real_T Constant_Value_m[2];          /* Expression: hd2.den{1,1}
                                        * Referenced by: '<S54>/Constant'
                                        */
  real_T Constant1_Value_k[2];         /* Expression: hd2.num{1,1}
                                        * Referenced by: '<S54>/Constant1'
                                        */
  real_T Delay_InitialCondition_i;     /* Expression: 0
                                        * Referenced by: '<S54>/Delay'
                                        */
  real_T Delay_InitialCondition_a0;    /* Expression: 0
                                        * Referenced by: '<S77>/Delay'
                                        */
  real_T Constant1_Value_e[3];         /* Expression: hd.num{1,1}
                                        * Referenced by: '<S77>/Constant1'
                                        */
  real_T Constant2_Value_e[3];         /* Expression: hd.den{1,1}
                                        * Referenced by: '<S77>/Constant2'
                                        */
  real_T DiscreteTransferFcn_InitialSt_m;/* Expression: 0
                                          * Referenced by: '<S77>/Discrete Transfer Fcn'
                                          */
  real_T TSamp_WtEt_o;                 /* Computed Parameter: TSamp_WtEt_o
                                        * Referenced by: '<S80>/TSamp'
                                        */
  real_T AccelerationLimit_RisingLim_h;/* Computed Parameter: AccelerationLimit_RisingLim_h
                                        * Referenced by: '<S77>/Acceleration Limit'
                                        */
  real_T AccelerationLimit_FallingLim_c;/* Computed Parameter: AccelerationLimit_FallingLim_c
                                         * Referenced by: '<S77>/Acceleration Limit'
                                         */
  real_T AccelerationLimit_IC_o;       /* Expression: 0
                                        * Referenced by: '<S77>/Acceleration Limit'
                                        */
  real_T Memory_X0_e;                  /* Expression: 1
                                        * Referenced by: '<S77>/Memory'
                                        */
  real_T reset_P1_a;                   /* Expression: width
                                        * Referenced by: '<S79>/reset'
                                        */
  real_T reset_P2_j;                   /* Expression: dtype
                                        * Referenced by: '<S79>/reset'
                                        */
  real_T reset_P3_m;                   /* Expression: portnum
                                        * Referenced by: '<S79>/reset'
                                        */
  real_T reset_P4_l;                   /* Expression: stime
                                        * Referenced by: '<S79>/reset'
                                        */
  real_T reset_P5_i;                   /* Expression: stype
                                        * Referenced by: '<S79>/reset'
                                        */
  real_T reset_P6_j;                   /* Expression: btype
                                        * Referenced by: '<S79>/reset'
                                        */
  real_T Integrator_IC_k;              /* Expression: 0
                                        * Referenced by: '<S79>/Integrator'
                                        */
  real_T NaN_Value_m;                  /* Expression: 0
                                        * Referenced by: '<S77>/NaN'
                                        */
  real_T DiscreteTransferFcn_InitialSt_d;/* Expression: 0
                                          * Referenced by: '<S54>/Discrete Transfer Fcn'
                                          */
  real_T Constant_Value_n[2];          /* Expression: hd2.den{1,1}
                                        * Referenced by: '<S55>/Constant'
                                        */
  real_T Constant1_Value_mm[2];        /* Expression: hd2.num{1,1}
                                        * Referenced by: '<S55>/Constant1'
                                        */
  real_T Delay_InitialCondition_e;     /* Expression: 0
                                        * Referenced by: '<S55>/Delay'
                                        */
  real_T Delay_InitialCondition_f;     /* Expression: 0
                                        * Referenced by: '<S86>/Delay'
                                        */
  real_T Constant1_Value_g[3];         /* Expression: hd.num{1,1}
                                        * Referenced by: '<S86>/Constant1'
                                        */
  real_T Constant2_Value_f[3];         /* Expression: hd.den{1,1}
                                        * Referenced by: '<S86>/Constant2'
                                        */
  real_T DiscreteTransferFcn_InitialSt_c;/* Expression: 0
                                          * Referenced by: '<S86>/Discrete Transfer Fcn'
                                          */
  real_T TSamp_WtEt_p;                 /* Computed Parameter: TSamp_WtEt_p
                                        * Referenced by: '<S89>/TSamp'
                                        */
  real_T Accelerationlimiter_RisingLim;/* Computed Parameter: Accelerationlimiter_RisingLim
                                        * Referenced by: '<S86>/Acceleration limiter'
                                        */
  real_T Accelerationlimiter_FallingLim;/* Computed Parameter: Accelerationlimiter_FallingLim
                                         * Referenced by: '<S86>/Acceleration limiter'
                                         */
  real_T Accelerationlimiter_IC;       /* Expression: 0
                                        * Referenced by: '<S86>/Acceleration limiter'
                                        */
  real_T Memory_X0_d;                  /* Expression: 1
                                        * Referenced by: '<S86>/Memory'
                                        */
  real_T reset_P1_o;                   /* Expression: width
                                        * Referenced by: '<S88>/reset'
                                        */
  real_T reset_P2_jm;                  /* Expression: dtype
                                        * Referenced by: '<S88>/reset'
                                        */
  real_T reset_P3_a;                   /* Expression: portnum
                                        * Referenced by: '<S88>/reset'
                                        */
  real_T reset_P4_a;                   /* Expression: stime
                                        * Referenced by: '<S88>/reset'
                                        */
  real_T reset_P5_d;                   /* Expression: stype
                                        * Referenced by: '<S88>/reset'
                                        */
  real_T reset_P6_e;                   /* Expression: btype
                                        * Referenced by: '<S88>/reset'
                                        */
  real_T Integrator_IC_hm;             /* Expression: 0
                                        * Referenced by: '<S88>/Integrator'
                                        */
  real_T NaN_Value_a;                  /* Expression: 0
                                        * Referenced by: '<S86>/NaN'
                                        */
  real_T DiscreteTransferFcn_InitialSt_e;/* Expression: 0
                                          * Referenced by: '<S55>/Discrete Transfer Fcn'
                                          */
  real_T Constant_Value_nc[2];         /* Expression: hd2.den{1,1}
                                        * Referenced by: '<S56>/Constant'
                                        */
  real_T Constant1_Value_oy[2];        /* Expression: hd2.num{1,1}
                                        * Referenced by: '<S56>/Constant1'
                                        */
  real_T Delay_InitialCondition_h;     /* Expression: 0
                                        * Referenced by: '<S56>/Delay'
                                        */
  real_T Delay_InitialCondition_o;     /* Expression: 0
                                        * Referenced by: '<S95>/Delay'
                                        */
  real_T Constant1_Value_h[3];         /* Expression: hd.num{1,1}
                                        * Referenced by: '<S95>/Constant1'
                                        */
  real_T Constant2_Value_j[3];         /* Expression: hd.den{1,1}
                                        * Referenced by: '<S95>/Constant2'
                                        */
  real_T DiscreteTransferFcn_InitialSt_n;/* Expression: 0
                                          * Referenced by: '<S95>/Discrete Transfer Fcn'
                                          */
  real_T TSamp_WtEt_j;                 /* Computed Parameter: TSamp_WtEt_j
                                        * Referenced by: '<S98>/TSamp'
                                        */
  real_T Accelerationlimiter_RisingLim_l;/* Computed Parameter: Accelerationlimiter_RisingLim_l
                                          * Referenced by: '<S95>/Acceleration limiter'
                                          */
  real_T Accelerationlimiter_FallingLi_k;/* Computed Parameter: Accelerationlimiter_FallingLi_k
                                          * Referenced by: '<S95>/Acceleration limiter'
                                          */
  real_T Accelerationlimiter_IC_j;     /* Expression: 0
                                        * Referenced by: '<S95>/Acceleration limiter'
                                        */
  real_T Memory_X0_l;                  /* Expression: 1
                                        * Referenced by: '<S95>/Memory'
                                        */
  real_T reset_P1_as;                  /* Expression: width
                                        * Referenced by: '<S97>/reset'
                                        */
  real_T reset_P2_a;                   /* Expression: dtype
                                        * Referenced by: '<S97>/reset'
                                        */
  real_T reset_P3_j;                   /* Expression: portnum
                                        * Referenced by: '<S97>/reset'
                                        */
  real_T reset_P4_d;                   /* Expression: stime
                                        * Referenced by: '<S97>/reset'
                                        */
  real_T reset_P5_id;                  /* Expression: stype
                                        * Referenced by: '<S97>/reset'
                                        */
  real_T reset_P6_c;                   /* Expression: btype
                                        * Referenced by: '<S97>/reset'
                                        */
  real_T Integrator_IC_f;              /* Expression: 0
                                        * Referenced by: '<S97>/Integrator'
                                        */
  real_T NaN_Value_j;                  /* Expression: 0
                                        * Referenced by: '<S95>/NaN'
                                        */
  real_T DiscreteTransferFcn_InitialSt_j;/* Expression: 0
                                          * Referenced by: '<S56>/Discrete Transfer Fcn'
                                          */
  real_T Constant_Value_jy[2];         /* Expression: hd2.den{1,1}
                                        * Referenced by: '<S57>/Constant'
                                        */
  real_T Constant1_Value_hy[2];        /* Expression: hd2.num{1,1}
                                        * Referenced by: '<S57>/Constant1'
                                        */
  real_T Delay_InitialCondition_eo;    /* Expression: 0
                                        * Referenced by: '<S57>/Delay'
                                        */
  real_T Delay_InitialCondition_k;     /* Expression: 0
                                        * Referenced by: '<S104>/Delay'
                                        */
  real_T Constant1_Value_p[3];         /* Expression: hd.num{1,1}
                                        * Referenced by: '<S104>/Constant1'
                                        */
  real_T Constant2_Value_b[3];         /* Expression: hd.den{1,1}
                                        * Referenced by: '<S104>/Constant2'
                                        */
  real_T DiscreteTransferFcn_InitialSt_a;/* Expression: 0
                                          * Referenced by: '<S104>/Discrete Transfer Fcn'
                                          */
  real_T TSamp_WtEt_p1;                /* Computed Parameter: TSamp_WtEt_p1
                                        * Referenced by: '<S107>/TSamp'
                                        */
  real_T Accelerationlimiter_RisingLim_a;/* Computed Parameter: Accelerationlimiter_RisingLim_a
                                          * Referenced by: '<S104>/Acceleration limiter'
                                          */
  real_T Accelerationlimiter_FallingLi_e;/* Computed Parameter: Accelerationlimiter_FallingLi_e
                                          * Referenced by: '<S104>/Acceleration limiter'
                                          */
  real_T Accelerationlimiter_IC_h;     /* Expression: 0
                                        * Referenced by: '<S104>/Acceleration limiter'
                                        */
  real_T Memory_X0_c;                  /* Expression: 1
                                        * Referenced by: '<S104>/Memory'
                                        */
  real_T reset_P1_j;                   /* Expression: width
                                        * Referenced by: '<S106>/reset'
                                        */
  real_T reset_P2_l;                   /* Expression: dtype
                                        * Referenced by: '<S106>/reset'
                                        */
  real_T reset_P3_n;                   /* Expression: portnum
                                        * Referenced by: '<S106>/reset'
                                        */
  real_T reset_P4_p;                   /* Expression: stime
                                        * Referenced by: '<S106>/reset'
                                        */
  real_T reset_P5_e;                   /* Expression: stype
                                        * Referenced by: '<S106>/reset'
                                        */
  real_T reset_P6_g;                   /* Expression: btype
                                        * Referenced by: '<S106>/reset'
                                        */
  real_T Integrator_IC_fh;             /* Expression: 0
                                        * Referenced by: '<S106>/Integrator'
                                        */
  real_T NaN_Value_n;                  /* Expression: 0
                                        * Referenced by: '<S104>/NaN'
                                        */
  real_T DiscreteTransferFcn_InitialSt_o;/* Expression: 0
                                          * Referenced by: '<S57>/Discrete Transfer Fcn'
                                          */
  real_T Constant_Value_j2[2];         /* Expression: hd2.den{1,1}
                                        * Referenced by: '<S58>/Constant'
                                        */
  real_T Constant1_Value_ol[2];        /* Expression: hd2.num{1,1}
                                        * Referenced by: '<S58>/Constant1'
                                        */
  real_T Delay_InitialCondition_l;     /* Expression: 0
                                        * Referenced by: '<S58>/Delay'
                                        */
  real_T Delay_InitialCondition_op;    /* Expression: 0
                                        * Referenced by: '<S113>/Delay'
                                        */
  real_T Constant1_Value_f[3];         /* Expression: hd.num{1,1}
                                        * Referenced by: '<S113>/Constant1'
                                        */
  real_T Constant2_Value_jp[3];        /* Expression: hd.den{1,1}
                                        * Referenced by: '<S113>/Constant2'
                                        */
  real_T DiscreteTransferFcn_InitialS_ok;/* Expression: 0
                                          * Referenced by: '<S113>/Discrete Transfer Fcn'
                                          */
  real_T TSamp_WtEt_h;                 /* Computed Parameter: TSamp_WtEt_h
                                        * Referenced by: '<S116>/TSamp'
                                        */
  real_T Accelerationlimiter_RisingLim_p;/* Computed Parameter: Accelerationlimiter_RisingLim_p
                                          * Referenced by: '<S113>/Acceleration limiter'
                                          */
  real_T Accelerationlimiter_FallingLi_p;/* Computed Parameter: Accelerationlimiter_FallingLi_p
                                          * Referenced by: '<S113>/Acceleration limiter'
                                          */
  real_T Accelerationlimiter_IC_d;     /* Expression: 0
                                        * Referenced by: '<S113>/Acceleration limiter'
                                        */
  real_T Memory_X0_f;                  /* Expression: 1
                                        * Referenced by: '<S113>/Memory'
                                        */
  real_T reset_P1_g;                   /* Expression: width
                                        * Referenced by: '<S115>/reset'
                                        */
  real_T reset_P2_c;                   /* Expression: dtype
                                        * Referenced by: '<S115>/reset'
                                        */
  real_T reset_P3_na;                  /* Expression: portnum
                                        * Referenced by: '<S115>/reset'
                                        */
  real_T reset_P4_j;                   /* Expression: stime
                                        * Referenced by: '<S115>/reset'
                                        */
  real_T reset_P5_h;                   /* Expression: stype
                                        * Referenced by: '<S115>/reset'
                                        */
  real_T reset_P6_o;                   /* Expression: btype
                                        * Referenced by: '<S115>/reset'
                                        */
  real_T Integrator_IC_i;              /* Expression: 0
                                        * Referenced by: '<S115>/Integrator'
                                        */
  real_T NaN_Value_c;                  /* Expression: 0
                                        * Referenced by: '<S113>/NaN'
                                        */
  real_T DiscreteTransferFcn_InitialS_fx;/* Expression: 0
                                          * Referenced by: '<S58>/Discrete Transfer Fcn'
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
                                        * Referenced by: '<S15>/Delay'
                                        */
  uint32_T Delay_DelayLength_n;        /* Computed Parameter: Delay_DelayLength_n
                                        * Referenced by: '<S53>/Delay'
                                        */
  uint32_T Delay_DelayLength_g;        /* Computed Parameter: Delay_DelayLength_g
                                        * Referenced by: '<S68>/Delay'
                                        */
  uint32_T Delay_DelayLength_e;        /* Computed Parameter: Delay_DelayLength_e
                                        * Referenced by: '<S54>/Delay'
                                        */
  uint32_T Delay_DelayLength_f;        /* Computed Parameter: Delay_DelayLength_f
                                        * Referenced by: '<S77>/Delay'
                                        */
  uint32_T Delay_DelayLength_c;        /* Computed Parameter: Delay_DelayLength_c
                                        * Referenced by: '<S55>/Delay'
                                        */
  uint32_T Delay_DelayLength_i;        /* Computed Parameter: Delay_DelayLength_i
                                        * Referenced by: '<S86>/Delay'
                                        */
  uint32_T Delay_DelayLength_o;        /* Computed Parameter: Delay_DelayLength_o
                                        * Referenced by: '<S56>/Delay'
                                        */
  uint32_T Delay_DelayLength_j;        /* Computed Parameter: Delay_DelayLength_j
                                        * Referenced by: '<S95>/Delay'
                                        */
  uint32_T Delay_DelayLength_a;        /* Computed Parameter: Delay_DelayLength_a
                                        * Referenced by: '<S57>/Delay'
                                        */
  uint32_T Delay_DelayLength_l;        /* Computed Parameter: Delay_DelayLength_l
                                        * Referenced by: '<S104>/Delay'
                                        */
  uint32_T Delay_DelayLength_ni;       /* Computed Parameter: Delay_DelayLength_ni
                                        * Referenced by: '<S58>/Delay'
                                        */
  uint32_T Delay_DelayLength_jx;       /* Computed Parameter: Delay_DelayLength_jx
                                        * Referenced by: '<S113>/Delay'
                                        */
  P_CoreSubsys_ctrl_custom_T CoreSubsys;/* '<S45>/CoreSubsys' */
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
  real_T odeY[35];
  real_T odeF[3][35];
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
 * '<S3>'   : 'ctrl_custom/MATLAB Function'
 * '<S4>'   : 'ctrl_custom/Model Info'
 * '<S5>'   : 'ctrl_custom/Nonlinear Passisve Observer'
 * '<S6>'   : 'ctrl_custom/Observer output '
 * '<S7>'   : 'ctrl_custom/PID controller'
 * '<S8>'   : 'ctrl_custom/PID controller1'
 * '<S9>'   : 'ctrl_custom/Pose'
 * '<S10>'  : 'ctrl_custom/Radians to Degrees'
 * '<S11>'  : 'ctrl_custom/Referance'
 * '<S12>'  : 'ctrl_custom/Reference basin'
 * '<S13>'  : 'ctrl_custom/Thrust allocation'
 * '<S14>'  : 'ctrl_custom/Thruster Parameters '
 * '<S15>'  : 'ctrl_custom/Thruster control 1'
 * '<S16>'  : 'ctrl_custom/Thruster measurment'
 * '<S17>'  : 'ctrl_custom/gain'
 * '<S18>'  : 'ctrl_custom/Initialization of parameters/Control Gains'
 * '<S19>'  : 'ctrl_custom/Initialization of parameters/Guidance Gains'
 * '<S20>'  : 'ctrl_custom/Initialization of parameters/Observer Gains'
 * '<S21>'  : 'ctrl_custom/Initialization of parameters/Guidance Gains/MATLAB Function'
 * '<S22>'  : 'ctrl_custom/Initialization of parameters/Guidance Gains/MATLAB Function1'
 * '<S23>'  : 'ctrl_custom/Initialization of parameters/Guidance Gains/MATLAB Function2'
 * '<S24>'  : 'ctrl_custom/Nonlinear Passisve Observer/C(nu)*nu'
 * '<S25>'  : 'ctrl_custom/Nonlinear Passisve Observer/D(nu)*nu'
 * '<S26>'  : 'ctrl_custom/Nonlinear Passisve Observer/Rotation matrix in yaw 1'
 * '<S27>'  : 'ctrl_custom/Nonlinear Passisve Observer/Transpose Rotation Matrix'
 * '<S28>'  : 'ctrl_custom/Nonlinear Passisve Observer/Transpose Rotation matrix'
 * '<S29>'  : 'ctrl_custom/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]'
 * '<S30>'  : 'ctrl_custom/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]1'
 * '<S31>'  : 'ctrl_custom/Observer output /b_hat output'
 * '<S32>'  : 'ctrl_custom/Observer output /eta_hat output'
 * '<S33>'  : 'ctrl_custom/Observer output /nu_dot_hat output'
 * '<S34>'  : 'ctrl_custom/Observer output /nu_hat output'
 * '<S35>'  : 'ctrl_custom/PID controller/Transposed rotation  matrix in yaw1'
 * '<S36>'  : 'ctrl_custom/PID controller/Transposed rotation  matrix in yaw2'
 * '<S37>'  : 'ctrl_custom/PID controller/[-inf inf] to [-pi pi]'
 * '<S38>'  : 'ctrl_custom/PID controller/[-inf inf] to [-pi pi]1'
 * '<S39>'  : 'ctrl_custom/PID controller1/[-inf inf] to [-pi pi]'
 * '<S40>'  : 'ctrl_custom/Referance/MATLAB Function'
 * '<S41>'  : 'ctrl_custom/Referance/MATLAB Function1'
 * '<S42>'  : 'ctrl_custom/Referance/MATLAB Function2'
 * '<S43>'  : 'ctrl_custom/Referance/[-inf inf] to [-pi pi]'
 * '<S44>'  : 'ctrl_custom/Thrust allocation/MATLAB Function'
 * '<S45>'  : 'ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed'
 * '<S46>'  : 'ctrl_custom/Thrust allocation/Radians to Degrees'
 * '<S47>'  : 'ctrl_custom/Thrust allocation/angle between  [-180 180]'
 * '<S48>'  : 'ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/Degrees to Radians'
 * '<S49>'  : 'ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/Ensuring angle is  [-pi pi]'
 * '<S50>'  : 'ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/MATLAB Function1'
 * '<S51>'  : 'ctrl_custom/Thruster control 1/Subsystem1'
 * '<S52>'  : 'ctrl_custom/Thruster control 1/Thrust and Shaft speed mapped to PWM'
 * '<S53>'  : 'ctrl_custom/Thruster control 1/Thruster 1'
 * '<S54>'  : 'ctrl_custom/Thruster control 1/Thruster 2'
 * '<S55>'  : 'ctrl_custom/Thruster control 1/Thruster 3'
 * '<S56>'  : 'ctrl_custom/Thruster control 1/Thruster 4'
 * '<S57>'  : 'ctrl_custom/Thruster control 1/Thruster 5'
 * '<S58>'  : 'ctrl_custom/Thruster control 1/Thruster 6'
 * '<S59>'  : 'ctrl_custom/Thruster control 1/Thrust and Shaft speed mapped to PWM/MATLAB Function'
 * '<S60>'  : 'ctrl_custom/Thruster control 1/Thrust and Shaft speed mapped to PWM/MATLAB Function1'
 * '<S61>'  : 'ctrl_custom/Thruster control 1/Thrust and Shaft speed mapped to PWM/MATLAB Function2'
 * '<S62>'  : 'ctrl_custom/Thruster control 1/Thrust and Shaft speed mapped to PWM/MATLAB Function3'
 * '<S63>'  : 'ctrl_custom/Thruster control 1/Thrust and Shaft speed mapped to PWM/MATLAB Function4'
 * '<S64>'  : 'ctrl_custom/Thruster control 1/Thrust and Shaft speed mapped to PWM/MATLAB Function5'
 * '<S65>'  : 'ctrl_custom/Thruster control 1/Thrust and Shaft speed mapped to PWM/MATLAB Function6'
 * '<S66>'  : 'ctrl_custom/Thruster control 1/Thruster 1/Propeller Hydrodynamics'
 * '<S67>'  : 'ctrl_custom/Thruster control 1/Thruster 1/Shaft dynamics'
 * '<S68>'  : 'ctrl_custom/Thruster control 1/Thruster 1/Thruster control'
 * '<S69>'  : 'ctrl_custom/Thruster control 1/Thruster 1/Propeller Hydrodynamics/Actual Force and Torque'
 * '<S70>'  : 'ctrl_custom/Thruster control 1/Thruster 1/Thruster control/Core controller'
 * '<S71>'  : 'ctrl_custom/Thruster control 1/Thruster 1/Thruster control/Discrete Derivative'
 * '<S72>'  : 'ctrl_custom/Thruster control 1/Thruster 1/Thruster control/MATLAB Function'
 * '<S73>'  : 'ctrl_custom/Thruster control 1/Thruster 1/Thruster control/Supervisor'
 * '<S74>'  : 'ctrl_custom/Thruster control 1/Thruster 1/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power'
 * '<S75>'  : 'ctrl_custom/Thruster control 1/Thruster 2/Propeller Hydrodynamics'
 * '<S76>'  : 'ctrl_custom/Thruster control 1/Thruster 2/Shaft dynamics'
 * '<S77>'  : 'ctrl_custom/Thruster control 1/Thruster 2/Thruster control'
 * '<S78>'  : 'ctrl_custom/Thruster control 1/Thruster 2/Propeller Hydrodynamics/Actual Force and Torque'
 * '<S79>'  : 'ctrl_custom/Thruster control 1/Thruster 2/Thruster control/Core controller'
 * '<S80>'  : 'ctrl_custom/Thruster control 1/Thruster 2/Thruster control/Discrete Derivative'
 * '<S81>'  : 'ctrl_custom/Thruster control 1/Thruster 2/Thruster control/MATLAB Function'
 * '<S82>'  : 'ctrl_custom/Thruster control 1/Thruster 2/Thruster control/Supervisor'
 * '<S83>'  : 'ctrl_custom/Thruster control 1/Thruster 2/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power'
 * '<S84>'  : 'ctrl_custom/Thruster control 1/Thruster 3/Propeller Hydrodynamics'
 * '<S85>'  : 'ctrl_custom/Thruster control 1/Thruster 3/Shaft dynamics'
 * '<S86>'  : 'ctrl_custom/Thruster control 1/Thruster 3/Thruster control'
 * '<S87>'  : 'ctrl_custom/Thruster control 1/Thruster 3/Propeller Hydrodynamics/Actual Force and Torque'
 * '<S88>'  : 'ctrl_custom/Thruster control 1/Thruster 3/Thruster control/Core controller'
 * '<S89>'  : 'ctrl_custom/Thruster control 1/Thruster 3/Thruster control/Discrete Derivative'
 * '<S90>'  : 'ctrl_custom/Thruster control 1/Thruster 3/Thruster control/MATLAB Function'
 * '<S91>'  : 'ctrl_custom/Thruster control 1/Thruster 3/Thruster control/Supervisor'
 * '<S92>'  : 'ctrl_custom/Thruster control 1/Thruster 3/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power'
 * '<S93>'  : 'ctrl_custom/Thruster control 1/Thruster 4/Propeller Hydrodynamics'
 * '<S94>'  : 'ctrl_custom/Thruster control 1/Thruster 4/Shaft dynamics'
 * '<S95>'  : 'ctrl_custom/Thruster control 1/Thruster 4/Thruster control'
 * '<S96>'  : 'ctrl_custom/Thruster control 1/Thruster 4/Propeller Hydrodynamics/Actual Force and Torque'
 * '<S97>'  : 'ctrl_custom/Thruster control 1/Thruster 4/Thruster control/Core controller'
 * '<S98>'  : 'ctrl_custom/Thruster control 1/Thruster 4/Thruster control/Discrete Derivative'
 * '<S99>'  : 'ctrl_custom/Thruster control 1/Thruster 4/Thruster control/MATLAB Function'
 * '<S100>' : 'ctrl_custom/Thruster control 1/Thruster 4/Thruster control/Supervisor'
 * '<S101>' : 'ctrl_custom/Thruster control 1/Thruster 4/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power'
 * '<S102>' : 'ctrl_custom/Thruster control 1/Thruster 5/Propeller Hydrodynamics'
 * '<S103>' : 'ctrl_custom/Thruster control 1/Thruster 5/Shaft dynamics'
 * '<S104>' : 'ctrl_custom/Thruster control 1/Thruster 5/Thruster control'
 * '<S105>' : 'ctrl_custom/Thruster control 1/Thruster 5/Propeller Hydrodynamics/Actual Force and Torque'
 * '<S106>' : 'ctrl_custom/Thruster control 1/Thruster 5/Thruster control/Core controller'
 * '<S107>' : 'ctrl_custom/Thruster control 1/Thruster 5/Thruster control/Discrete Derivative'
 * '<S108>' : 'ctrl_custom/Thruster control 1/Thruster 5/Thruster control/MATLAB Function'
 * '<S109>' : 'ctrl_custom/Thruster control 1/Thruster 5/Thruster control/Supervisor'
 * '<S110>' : 'ctrl_custom/Thruster control 1/Thruster 5/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power'
 * '<S111>' : 'ctrl_custom/Thruster control 1/Thruster 6/Propeller Hydrodynamics'
 * '<S112>' : 'ctrl_custom/Thruster control 1/Thruster 6/Shaft dynamics'
 * '<S113>' : 'ctrl_custom/Thruster control 1/Thruster 6/Thruster control'
 * '<S114>' : 'ctrl_custom/Thruster control 1/Thruster 6/Propeller Hydrodynamics/Actual Force and Torque'
 * '<S115>' : 'ctrl_custom/Thruster control 1/Thruster 6/Thruster control/Core controller'
 * '<S116>' : 'ctrl_custom/Thruster control 1/Thruster 6/Thruster control/Discrete Derivative'
 * '<S117>' : 'ctrl_custom/Thruster control 1/Thruster 6/Thruster control/MATLAB Function'
 * '<S118>' : 'ctrl_custom/Thruster control 1/Thruster 6/Thruster control/Supervisor'
 * '<S119>' : 'ctrl_custom/Thruster control 1/Thruster 6/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power'
 */
#endif                                 /* RTW_HEADER_ctrl_custom_h_ */

/*========================================================================*
 * NI VeriStand Model Framework code generation
 *
 * Model : ctrl_custom
 * Model version : 1.160
 * VeriStand Model Framework version : 2017.0.0.143 (2017)
 * Source generated on : Sat Jul 29 13:11:58 2017
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
