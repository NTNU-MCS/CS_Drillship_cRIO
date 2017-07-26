/*
 * ctrl_custom.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ctrl_custom".
 *
 * Model version              : 1.141
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Wed Jul 26 18:28:30 2017
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

/* Block signals for system '<S10>/MATLAB Function' */
typedef struct {
  real_T y[9];                         /* '<S10>/MATLAB Function' */
} B_MATLABFunction_ctrl_custom_T;

/* Block signals for system '<S42>/CoreSubsys' */
typedef struct {
  real_T angle;                        /* '<S42>/Integrator' */
  real_T Delay;                        /* '<S42>/Delay' */
  real_T MaxRotationRate;              /* '<S42>/Max Rotation Rate' */
} B_CoreSubsys_ctrl_custom_T;

/* Block states (auto storage) for system '<S42>/CoreSubsys' */
typedef struct {
  real_T Delay_DSTATE;                 /* '<S42>/Delay' */
  int_T Integrator_IWORK;              /* '<S42>/Integrator' */
} DW_CoreSubsys_ctrl_custom_T;

/* Continuous states for system '<S42>/CoreSubsys' */
typedef struct {
  real_T Integrator_CSTATE_d;          /* '<S42>/Integrator' */
} X_CoreSubsys_ctrl_custom_T;

/* State derivatives for system '<S42>/CoreSubsys' */
typedef struct {
  real_T Integrator_CSTATE_d;          /* '<S42>/Integrator' */
} XDot_CoreSubsys_ctrl_custom_T;

/* State Disabled for system '<S42>/CoreSubsys' */
typedef struct {
  boolean_T Integrator_CSTATE_d;       /* '<S42>/Integrator' */
} XDis_CoreSubsys_ctrl_custom_T;

/* Zero-crossing (trigger) state for system '<S42>/CoreSubsys' */
typedef struct {
  ZCSigState Integrator_Reset_ZCE_j;   /* '<S42>/Integrator' */
} ZCE_CoreSubsys_ctrl_custom_T;

/* Block signals for system '<S48>/MATLAB Function2' */
typedef struct {
  real_T Tc_out;                       /* '<S48>/MATLAB Function2' */
} B_MATLABFunction2_ctrl_custom_T;

/* Block signals (auto storage) */
typedef struct {
  real_T Inputtomodel;                 /* '<Root>/Input to model' */
  real_T Startbutton;                  /* '<Root>/Startbutton' */
  real_T K_p_x;                        /* '<S16>/K_p_x' */
  real_T K_p_y;                        /* '<S16>/K_p_y' */
  real_T K_p_psi;                      /* '<S16>/K_p_psi' */
  real_T K_i_psi;                      /* '<S16>/K_i_psi' */
  real_T K_i_x;                        /* '<S16>/K_i_x' */
  real_T K_i_y;                        /* '<S16>/K_i_y' */
  real_T K_d_psi;                      /* '<S16>/K_d_psi' */
  real_T K_d_x;                        /* '<S16>/K_d_x' */
  real_T K_d_y;                        /* '<S16>/K_d_y' */
  real_T x_m;                          /* '<S8>/x_m' */
  real_T Gain;                         /* '<S8>/Gain' */
  real_T y_m;                          /* '<S8>/y_m' */
  real_T Gain1;                        /* '<S8>/Gain1' */
  real_T psi_m;                        /* '<S8>/psi_m' */
  real_T Sum;                          /* '<S8>/Sum' */
  real_T Integrator[3];                /* '<S5>/Integrator' */
  real_T Sum_h;                        /* '<S27>/Sum' */
  real_T regulationerror[3];           /* '<S7>/Sum4' */
  real_T TmpSignalConversionAtMatrixMult[3];/* '<S7>/Transposed rotation  matrix in yaw1' */
  real_T Integrator1[3];               /* '<S7>/Integrator1' */
  real_T Integrator1_i[3];             /* '<S10>/Integrator1' */
  real_T Integrator1_a[3];             /* '<S5>/Integrator1' */
  real_T Sum1[3];                      /* '<S7>/Sum1' */
  real_T Startbutton1[6];              /* '<Root>/Startbutton1' */
  real_T Gain5;                        /* '<Root>/Gain5' */
  real_T Gain_h;                       /* '<Root>/Gain' */
  real_T Gain1_n;                      /* '<Root>/Gain1' */
  real_T thr_angle_1;                  /* '<S14>/thr_angle_1' */
  real_T thr_angle_2;                  /* '<S14>/thr_angle_2' */
  real_T thr_angle_3;                  /* '<S14>/thr_angle_3' */
  real_T thr_angle_4;                  /* '<S14>/thr_angle_4' */
  real_T thr_angle_5;                  /* '<S14>/thr_angle_5' */
  real_T thr_angle_6;                  /* '<S14>/thr_angle_6' */
  real_T Angle_controller;             /* '<S11>/Angle_controller' */
  real_T ChoosingFixedAzimuthangle[6]; /* '<S11>/Choosing Fixed // Azimuth angle' */
  real_T Integrator2[3];               /* '<S5>/Integrator2' */
  real_T CreateDiagonalMatrix2[9];     /* '<S18>/Create Diagonal Matrix2' */
  real_T M1[3];                        /* '<S5>/M^-1' */
  real_T CreateDiagonalMatrix[9];      /* '<S18>/Create Diagonal Matrix' */
  real_T CreateDiagonalMatrix1[9];     /* '<S18>/Create Diagonal Matrix1' */
  real_T MatrixMultiply1[3];           /* '<S5>/Matrix Multiply1' */
  real_T Sum1_g[3];                    /* '<S5>/Sum1' */
  real_T Gain5_a;                      /* '<S7>/Gain5' */
  real_T x_ref;                        /* '<S10>/x_ref' */
  real_T y_ref;                        /* '<S10>/y_ref' */
  real_T psi_ref;                      /* '<S10>/psi_ref' */
  real_T w_x;                          /* '<S17>/w_x' */
  real_T w_y;                          /* '<S17>/w_y' */
  real_T w_psi;                        /* '<S17>/w_psi' */
  real_T zeta_psi;                     /* '<S17>/zeta_psi' */
  real_T zeta_x;                       /* '<S17>/zeta_x' */
  real_T zeta_y;                       /* '<S17>/zeta_y' */
  real_T T_psi;                        /* '<S17>/T_psi' */
  real_T T_x;                          /* '<S17>/T_x' */
  real_T T_y;                          /* '<S17>/T_y' */
  real_T Sum_m[3];                     /* '<S10>/Sum' */
  real_T Sum2[3];                      /* '<S10>/Sum2' */
  real_T Acc_x;                        /* '<S1>/Acc_x' */
  real_T Acc_y;                        /* '<S1>/Acc_y' */
  real_T Acc_z;                        /* '<S1>/Acc_z' */
  real_T Gyro_x;                       /* '<S1>/Gyro_x' */
  real_T Gyro_y;                       /* '<S1>/Gyro_y' */
  real_T Gyro_z;                       /* '<S1>/Gyro_z' */
  real_T Tc_out;                       /* '<S48>/MATLAB Function1' */
  real_T ImpAsg_InsertedFor_commandedAng[6];/* '<S42>/Ensuring angle is  [-pi pi]' */
  real_T commanded_tau[3];             /* '<Root>/MATLAB Function' */
  B_MATLABFunction2_ctrl_custom_T sf_MATLABFunction6;/* '<S48>/MATLAB Function6' */
  B_MATLABFunction2_ctrl_custom_T sf_MATLABFunction5;/* '<S48>/MATLAB Function5' */
  B_MATLABFunction2_ctrl_custom_T sf_MATLABFunction4;/* '<S48>/MATLAB Function4' */
  B_MATLABFunction2_ctrl_custom_T sf_MATLABFunction3;/* '<S48>/MATLAB Function3' */
  B_MATLABFunction2_ctrl_custom_T sf_MATLABFunction2;/* '<S48>/MATLAB Function2' */
  B_CoreSubsys_ctrl_custom_T CoreSubsys[6];/* '<S42>/CoreSubsys' */
  B_MATLABFunction_ctrl_custom_T sf_MATLABFunction1_k;/* '<S10>/MATLAB Function1' */
  B_MATLABFunction_ctrl_custom_T sf_MATLABFunction_b;/* '<S10>/MATLAB Function' */
} B_ctrl_custom_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Inputtomodel_DWORK1;          /* '<Root>/Input to model' */
  real_T OutputtoWorkspace_DWORK1;     /* '<Root>/Output to Workspace' */
  real_T Startbutton_DWORK1;           /* '<Root>/Startbutton' */
  real_T K_p_x_DWORK1;                 /* '<S16>/K_p_x' */
  real_T K_p_y_DWORK1;                 /* '<S16>/K_p_y' */
  real_T K_p_psi_DWORK1;               /* '<S16>/K_p_psi' */
  real_T K_i_psi_DWORK1;               /* '<S16>/K_i_psi' */
  real_T K_i_x_DWORK1;                 /* '<S16>/K_i_x' */
  real_T K_i_y_DWORK1;                 /* '<S16>/K_i_y' */
  real_T K_d_psi_DWORK1;               /* '<S16>/K_d_psi' */
  real_T K_d_x_DWORK1;                 /* '<S16>/K_d_x' */
  real_T K_d_y_DWORK1;                 /* '<S16>/K_d_y' */
  real_T x_m_DWORK1;                   /* '<S8>/x_m' */
  real_T y_m_DWORK1;                   /* '<S8>/y_m' */
  real_T psi_m_DWORK1;                 /* '<S8>/psi_m' */
  real_T tau_surge_DWORK1;             /* '<Root>/tau_surge' */
  real_T tau_sway_DWORK1;              /* '<Root>/tau_sway' */
  real_T Startbutton1_DWORK1[6];       /* '<Root>/Startbutton1' */
  real_T tau_psi_DWORK1;               /* '<Root>/tau_psi' */
  real_T psi_hat_DWORK1;               /* '<Root>/psi_hat' */
  real_T x_hat_DWORK1;                 /* '<Root>/x_hat' */
  real_T y_hat_DWORK1;                 /* '<Root>/y_hat' */
  real_T thr_angle_1_DWORK1;           /* '<S14>/thr_angle_1' */
  real_T thr_angle_2_DWORK1;           /* '<S14>/thr_angle_2' */
  real_T thr_angle_3_DWORK1;           /* '<S14>/thr_angle_3' */
  real_T thr_angle_4_DWORK1;           /* '<S14>/thr_angle_4' */
  real_T thr_angle_5_DWORK1;           /* '<S14>/thr_angle_5' */
  real_T thr_angle_6_DWORK1;           /* '<S14>/thr_angle_6' */
  real_T Angle_controller_DWORK1;      /* '<S11>/Angle_controller' */
  real_T tau_commanded_psi_DWORK1;     /* '<Root>/tau_commanded_psi' */
  real_T tau_commanded_x_DWORK1;       /* '<Root>/tau_commanded_x' */
  real_T x_hat_DWORK1_o;               /* '<S30>/x_hat' */
  real_T y_hat_DWORK1_d;               /* '<S30>/y_hat' */
  real_T psi_hat_DWORK1_g;             /* '<S30>/psi_hat' */
  real_T u_hat_DWORK1;                 /* '<S32>/u_hat' */
  real_T v_hat_DWORK1;                 /* '<S32>/v_hat' */
  real_T r_hat_DWORK1;                 /* '<S32>/r_hat' */
  real_T u_dot_hat_DWORK1;             /* '<S31>/u_dot_hat' */
  real_T v_dot_hat_DWORK1;             /* '<S31>/v_dot_hat' */
  real_T r_dot_hat_DWORK1;             /* '<S31>/r_dot_hat' */
  real_T b_x_hat_DWORK1;               /* '<S29>/b_x_hat' */
  real_T b_y_hat_DWORK1;               /* '<S29>/b_y_hat' */
  real_T b_psi_hat_DWORK1;             /* '<S29>/b_psi_hat' */
  real_T alpha1_DWORK1;                /* '<S15>/alpha1' */
  real_T alpha2_DWORK1;                /* '<S15>/alpha2' */
  real_T alpha3_DWORK1;                /* '<S15>/alpha3' */
  real_T alpha4_DWORK1;                /* '<S15>/alpha4' */
  real_T alpha5_DWORK1;                /* '<S15>/alpha5' */
  real_T alpha6_DWORK1;                /* '<S15>/alpha6' */
  real_T u1_DWORK1;                    /* '<S15>/u1' */
  real_T u2_DWORK1;                    /* '<S15>/u2' */
  real_T u3_DWORK1;                    /* '<S15>/u3' */
  real_T u4_DWORK1;                    /* '<S15>/u4' */
  real_T u5_DWORK1;                    /* '<S15>/u5' */
  real_T u6_DWORK1;                    /* '<S15>/u6' */
  real_T tau_commanded_y_DWORK1;       /* '<Root>/tau_commanded_y' */
  real_T y_error_DWORK1;               /* '<S7>/y_error' */
  real_T psi_error_DWORK1;             /* '<S7>/psi_error' */
  real_T x_error_DWORK1;               /* '<S7>/x_error' */
  real_T Integral_x_DWORK1;            /* '<S7>/Integral_x' */
  real_T Integral_psi_DWORK1;          /* '<S7>/Integral_psi' */
  real_T Integral_y_DWORK1;            /* '<S7>/Integral_y' */
  real_T x_ref_DWORK1;                 /* '<S10>/x_ref' */
  real_T y_ref_DWORK1;                 /* '<S10>/y_ref' */
  real_T psi_ref_DWORK1;               /* '<S10>/psi_ref' */
  real_T w_x_DWORK1;                   /* '<S17>/w_x' */
  real_T w_y_DWORK1;                   /* '<S17>/w_y' */
  real_T w_psi_DWORK1;                 /* '<S17>/w_psi' */
  real_T zeta_psi_DWORK1;              /* '<S17>/zeta_psi' */
  real_T zeta_x_DWORK1;                /* '<S17>/zeta_x' */
  real_T zeta_y_DWORK1;                /* '<S17>/zeta_y' */
  real_T T_psi_DWORK1;                 /* '<S17>/T_psi' */
  real_T T_x_DWORK1;                   /* '<S17>/T_x' */
  real_T T_y_DWORK1;                   /* '<S17>/T_y' */
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
  uint8_T K_p_x_DWORK2[12];            /* '<S16>/K_p_x' */
  uint8_T K_p_y_DWORK2[12];            /* '<S16>/K_p_y' */
  uint8_T K_p_psi_DWORK2[12];          /* '<S16>/K_p_psi' */
  uint8_T K_i_psi_DWORK2[12];          /* '<S16>/K_i_psi' */
  uint8_T K_i_x_DWORK2[12];            /* '<S16>/K_i_x' */
  uint8_T K_i_y_DWORK2[12];            /* '<S16>/K_i_y' */
  uint8_T K_d_psi_DWORK2[12];          /* '<S16>/K_d_psi' */
  uint8_T K_d_x_DWORK2[12];            /* '<S16>/K_d_x' */
  uint8_T K_d_y_DWORK2[12];            /* '<S16>/K_d_y' */
  uint8_T x_m_DWORK2[12];              /* '<S8>/x_m' */
  uint8_T y_m_DWORK2[12];              /* '<S8>/y_m' */
  uint8_T psi_m_DWORK2[12];            /* '<S8>/psi_m' */
  uint8_T tau_surge_DWORK2[12];        /* '<Root>/tau_surge' */
  uint8_T tau_sway_DWORK2[12];         /* '<Root>/tau_sway' */
  uint8_T Startbutton1_DWORK2[12];     /* '<Root>/Startbutton1' */
  uint8_T tau_psi_DWORK2[12];          /* '<Root>/tau_psi' */
  uint8_T psi_hat_DWORK2[12];          /* '<Root>/psi_hat' */
  uint8_T x_hat_DWORK2[12];            /* '<Root>/x_hat' */
  uint8_T y_hat_DWORK2[12];            /* '<Root>/y_hat' */
  uint8_T thr_angle_1_DWORK2[12];      /* '<S14>/thr_angle_1' */
  uint8_T thr_angle_2_DWORK2[12];      /* '<S14>/thr_angle_2' */
  uint8_T thr_angle_3_DWORK2[12];      /* '<S14>/thr_angle_3' */
  uint8_T thr_angle_4_DWORK2[12];      /* '<S14>/thr_angle_4' */
  uint8_T thr_angle_5_DWORK2[12];      /* '<S14>/thr_angle_5' */
  uint8_T thr_angle_6_DWORK2[12];      /* '<S14>/thr_angle_6' */
  uint8_T Angle_controller_DWORK2[12]; /* '<S11>/Angle_controller' */
  uint8_T tau_commanded_psi_DWORK2[12];/* '<Root>/tau_commanded_psi' */
  uint8_T tau_commanded_x_DWORK2[12];  /* '<Root>/tau_commanded_x' */
  uint8_T x_hat_DWORK2_b[12];          /* '<S30>/x_hat' */
  uint8_T y_hat_DWORK2_l[12];          /* '<S30>/y_hat' */
  uint8_T psi_hat_DWORK2_k[12];        /* '<S30>/psi_hat' */
  uint8_T u_hat_DWORK2[12];            /* '<S32>/u_hat' */
  uint8_T v_hat_DWORK2[12];            /* '<S32>/v_hat' */
  uint8_T r_hat_DWORK2[12];            /* '<S32>/r_hat' */
  uint8_T u_dot_hat_DWORK2[12];        /* '<S31>/u_dot_hat' */
  uint8_T v_dot_hat_DWORK2[12];        /* '<S31>/v_dot_hat' */
  uint8_T r_dot_hat_DWORK2[12];        /* '<S31>/r_dot_hat' */
  uint8_T b_x_hat_DWORK2[12];          /* '<S29>/b_x_hat' */
  uint8_T b_y_hat_DWORK2[12];          /* '<S29>/b_y_hat' */
  uint8_T b_psi_hat_DWORK2[12];        /* '<S29>/b_psi_hat' */
  uint8_T alpha1_DWORK2[12];           /* '<S15>/alpha1' */
  uint8_T alpha2_DWORK2[12];           /* '<S15>/alpha2' */
  uint8_T alpha3_DWORK2[12];           /* '<S15>/alpha3' */
  uint8_T alpha4_DWORK2[12];           /* '<S15>/alpha4' */
  uint8_T alpha5_DWORK2[12];           /* '<S15>/alpha5' */
  uint8_T alpha6_DWORK2[12];           /* '<S15>/alpha6' */
  uint8_T u1_DWORK2[12];               /* '<S15>/u1' */
  uint8_T u2_DWORK2[12];               /* '<S15>/u2' */
  uint8_T u3_DWORK2[12];               /* '<S15>/u3' */
  uint8_T u4_DWORK2[12];               /* '<S15>/u4' */
  uint8_T u5_DWORK2[12];               /* '<S15>/u5' */
  uint8_T u6_DWORK2[12];               /* '<S15>/u6' */
  uint8_T tau_commanded_y_DWORK2[12];  /* '<Root>/tau_commanded_y' */
  uint8_T y_error_DWORK2[12];          /* '<S7>/y_error' */
  uint8_T psi_error_DWORK2[12];        /* '<S7>/psi_error' */
  uint8_T x_error_DWORK2[12];          /* '<S7>/x_error' */
  uint8_T Integral_x_DWORK2[12];       /* '<S7>/Integral_x' */
  uint8_T Integral_psi_DWORK2[12];     /* '<S7>/Integral_psi' */
  uint8_T Integral_y_DWORK2[12];       /* '<S7>/Integral_y' */
  uint8_T x_ref_DWORK2[12];            /* '<S10>/x_ref' */
  uint8_T y_ref_DWORK2[12];            /* '<S10>/y_ref' */
  uint8_T psi_ref_DWORK2[12];          /* '<S10>/psi_ref' */
  uint8_T w_x_DWORK2[12];              /* '<S17>/w_x' */
  uint8_T w_y_DWORK2[12];              /* '<S17>/w_y' */
  uint8_T w_psi_DWORK2[12];            /* '<S17>/w_psi' */
  uint8_T zeta_psi_DWORK2[12];         /* '<S17>/zeta_psi' */
  uint8_T zeta_x_DWORK2[12];           /* '<S17>/zeta_x' */
  uint8_T zeta_y_DWORK2[12];           /* '<S17>/zeta_y' */
  uint8_T T_psi_DWORK2[12];            /* '<S17>/T_psi' */
  uint8_T T_x_DWORK2[12];              /* '<S17>/T_x' */
  uint8_T T_y_DWORK2[12];              /* '<S17>/T_y' */
  uint8_T Acc_x_DWORK2[12];            /* '<S1>/Acc_x' */
  uint8_T Acc_y_DWORK2[12];            /* '<S1>/Acc_y' */
  uint8_T Acc_z_DWORK2[12];            /* '<S1>/Acc_z' */
  uint8_T Gyro_x_DWORK2[12];           /* '<S1>/Gyro_x' */
  uint8_T Gyro_y_DWORK2[12];           /* '<S1>/Gyro_y' */
  uint8_T Gyro_z_DWORK2[12];           /* '<S1>/Gyro_z' */
  DW_CoreSubsys_ctrl_custom_T CoreSubsys[6];/* '<S42>/CoreSubsys' */
} DW_ctrl_custom_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T Integrator_CSTATE[3];         /* '<S5>/Integrator' */
  real_T Integrator2_CSTATE[3];        /* '<S10>/Integrator2' */
  real_T Integrator1_CSTATE[3];        /* '<S7>/Integrator1' */
  real_T Integrator1_CSTATE_d[3];      /* '<S10>/Integrator1' */
  real_T Integrator1_CSTATE_n[3];      /* '<S5>/Integrator1' */
  real_T Integrator2_CSTATE_j[3];      /* '<S5>/Integrator2' */
  real_T Integrator_CSTATE_f[3];       /* '<S10>/Integrator' */
  X_CoreSubsys_ctrl_custom_T CoreSubsys[6];/* '<S42>/CoreSubsys' */
} X_ctrl_custom_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T Integrator_CSTATE[3];         /* '<S5>/Integrator' */
  real_T Integrator2_CSTATE[3];        /* '<S10>/Integrator2' */
  real_T Integrator1_CSTATE[3];        /* '<S7>/Integrator1' */
  real_T Integrator1_CSTATE_d[3];      /* '<S10>/Integrator1' */
  real_T Integrator1_CSTATE_n[3];      /* '<S5>/Integrator1' */
  real_T Integrator2_CSTATE_j[3];      /* '<S5>/Integrator2' */
  real_T Integrator_CSTATE_f[3];       /* '<S10>/Integrator' */
  XDot_CoreSubsys_ctrl_custom_T CoreSubsys[6];/* '<S42>/CoreSubsys' */
} XDot_ctrl_custom_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE[3];      /* '<S5>/Integrator' */
  boolean_T Integrator2_CSTATE[3];     /* '<S10>/Integrator2' */
  boolean_T Integrator1_CSTATE[3];     /* '<S7>/Integrator1' */
  boolean_T Integrator1_CSTATE_d[3];   /* '<S10>/Integrator1' */
  boolean_T Integrator1_CSTATE_n[3];   /* '<S5>/Integrator1' */
  boolean_T Integrator2_CSTATE_j[3];   /* '<S5>/Integrator2' */
  boolean_T Integrator_CSTATE_f[3];    /* '<S10>/Integrator' */
  XDis_CoreSubsys_ctrl_custom_T CoreSubsys[6];/* '<S42>/CoreSubsys' */
} XDis_ctrl_custom_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Integrator_Reset_ZCE;     /* '<S5>/Integrator' */
  ZCSigState Integrator1_Reset_ZCE;    /* '<S7>/Integrator1' */
  ZCSigState Integrator1_Reset_ZCE_o;  /* '<S5>/Integrator1' */
  ZCSigState Integrator2_Reset_ZCE;    /* '<S5>/Integrator2' */
  ZCE_CoreSubsys_ctrl_custom_T CoreSubsys[6];/* '<S42>/CoreSubsys' */
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

/* Parameters for system: '<S42>/CoreSubsys' */
struct P_CoreSubsys_ctrl_custom_T_ {
  real_T Gain1_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S45>/Gain1'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<S42>/Delay'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S42>/Delay'
                                        */
};

/* Parameters (auto storage) */
struct P_ctrl_custom_T_ {
  real_T C[24];                        /* Variable: C
                                        * Referenced by: '<S11>/C'
                                        */
  real_T Max_rotation;                 /* Variable: Max_rotation
                                        * Referenced by: '<S42>/Max Rotation Rate'
                                        */
  real_T Max_thrust;                   /* Variable: Max_thrust
                                        * Referenced by:
                                        *   '<S48>/Saturation 1'
                                        *   '<S48>/Saturation 10'
                                        *   '<S48>/Saturation 12'
                                        *   '<S48>/Saturation 3'
                                        *   '<S48>/Saturation 5'
                                        *   '<S48>/Saturation 7'
                                        *   '<S48>/Saturation 8'
                                        */
  real_T Min_thrust;                   /* Variable: Min_thrust
                                        * Referenced by:
                                        *   '<S48>/Saturation 11'
                                        *   '<S48>/Saturation 13'
                                        *   '<S48>/Saturation 2'
                                        *   '<S48>/Saturation 4'
                                        *   '<S48>/Saturation 6'
                                        *   '<S48>/Saturation 9'
                                        */
  real_T eps;                          /* Variable: eps
                                        * Referenced by: '<S11>/Constant to avoid singularities'
                                        */
  real_T pwm_thr1_backward[6];         /* Variable: pwm_thr1_backward
                                        * Referenced by: '<S48>/negative thrust 1'
                                        */
  real_T pwm_thr1_forward[6];          /* Variable: pwm_thr1_forward
                                        * Referenced by: '<S48>/positive thrust 1'
                                        */
  real_T pwm_thr2_backward[6];         /* Variable: pwm_thr2_backward
                                        * Referenced by: '<S48>/negative thrust 2'
                                        */
  real_T pwm_thr2_forward[6];          /* Variable: pwm_thr2_forward
                                        * Referenced by: '<S48>/positive thrust 2'
                                        */
  real_T pwm_thr3_backward[6];         /* Variable: pwm_thr3_backward
                                        * Referenced by: '<S48>/negative thrust 3'
                                        */
  real_T pwm_thr3_forward[6];          /* Variable: pwm_thr3_forward
                                        * Referenced by: '<S48>/positive thrust 3'
                                        */
  real_T pwm_thr4_backward[6];         /* Variable: pwm_thr4_backward
                                        * Referenced by: '<S48>/negative thrust 4'
                                        */
  real_T pwm_thr4_forward[6];          /* Variable: pwm_thr4_forward
                                        * Referenced by: '<S48>/positive thrust 4'
                                        */
  real_T pwm_thr5_backward[6];         /* Variable: pwm_thr5_backward
                                        * Referenced by: '<S48>/negative thrust 5'
                                        */
  real_T pwm_thr5_forward[6];          /* Variable: pwm_thr5_forward
                                        * Referenced by: '<S48>/positive thrust 5'
                                        */
  real_T pwm_thr6_backward[6];         /* Variable: pwm_thr6_backward
                                        * Referenced by: '<S48>/negative thrust 6'
                                        */
  real_T pwm_thr6_forward[6];          /* Variable: pwm_thr6_forward
                                        * Referenced by: '<S48>/positive thrust 6'
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
                                        * Referenced by: '<S16>/K_p_x'
                                        */
  real_T K_p_x_P2;                     /* Expression: dtype
                                        * Referenced by: '<S16>/K_p_x'
                                        */
  real_T K_p_x_P3;                     /* Expression: portnum
                                        * Referenced by: '<S16>/K_p_x'
                                        */
  real_T K_p_x_P4;                     /* Expression: stime
                                        * Referenced by: '<S16>/K_p_x'
                                        */
  real_T K_p_x_P5;                     /* Expression: stype
                                        * Referenced by: '<S16>/K_p_x'
                                        */
  real_T K_p_x_P6;                     /* Expression: btype
                                        * Referenced by: '<S16>/K_p_x'
                                        */
  real_T K_p_y_P1;                     /* Expression: width
                                        * Referenced by: '<S16>/K_p_y'
                                        */
  real_T K_p_y_P2;                     /* Expression: dtype
                                        * Referenced by: '<S16>/K_p_y'
                                        */
  real_T K_p_y_P3;                     /* Expression: portnum
                                        * Referenced by: '<S16>/K_p_y'
                                        */
  real_T K_p_y_P4;                     /* Expression: stime
                                        * Referenced by: '<S16>/K_p_y'
                                        */
  real_T K_p_y_P5;                     /* Expression: stype
                                        * Referenced by: '<S16>/K_p_y'
                                        */
  real_T K_p_y_P6;                     /* Expression: btype
                                        * Referenced by: '<S16>/K_p_y'
                                        */
  real_T K_p_psi_P1;                   /* Expression: width
                                        * Referenced by: '<S16>/K_p_psi'
                                        */
  real_T K_p_psi_P2;                   /* Expression: dtype
                                        * Referenced by: '<S16>/K_p_psi'
                                        */
  real_T K_p_psi_P3;                   /* Expression: portnum
                                        * Referenced by: '<S16>/K_p_psi'
                                        */
  real_T K_p_psi_P4;                   /* Expression: stime
                                        * Referenced by: '<S16>/K_p_psi'
                                        */
  real_T K_p_psi_P5;                   /* Expression: stype
                                        * Referenced by: '<S16>/K_p_psi'
                                        */
  real_T K_p_psi_P6;                   /* Expression: btype
                                        * Referenced by: '<S16>/K_p_psi'
                                        */
  real_T K_i_psi_P1;                   /* Expression: width
                                        * Referenced by: '<S16>/K_i_psi'
                                        */
  real_T K_i_psi_P2;                   /* Expression: dtype
                                        * Referenced by: '<S16>/K_i_psi'
                                        */
  real_T K_i_psi_P3;                   /* Expression: portnum
                                        * Referenced by: '<S16>/K_i_psi'
                                        */
  real_T K_i_psi_P4;                   /* Expression: stime
                                        * Referenced by: '<S16>/K_i_psi'
                                        */
  real_T K_i_psi_P5;                   /* Expression: stype
                                        * Referenced by: '<S16>/K_i_psi'
                                        */
  real_T K_i_psi_P6;                   /* Expression: btype
                                        * Referenced by: '<S16>/K_i_psi'
                                        */
  real_T K_i_x_P1;                     /* Expression: width
                                        * Referenced by: '<S16>/K_i_x'
                                        */
  real_T K_i_x_P2;                     /* Expression: dtype
                                        * Referenced by: '<S16>/K_i_x'
                                        */
  real_T K_i_x_P3;                     /* Expression: portnum
                                        * Referenced by: '<S16>/K_i_x'
                                        */
  real_T K_i_x_P4;                     /* Expression: stime
                                        * Referenced by: '<S16>/K_i_x'
                                        */
  real_T K_i_x_P5;                     /* Expression: stype
                                        * Referenced by: '<S16>/K_i_x'
                                        */
  real_T K_i_x_P6;                     /* Expression: btype
                                        * Referenced by: '<S16>/K_i_x'
                                        */
  real_T K_i_y_P1;                     /* Expression: width
                                        * Referenced by: '<S16>/K_i_y'
                                        */
  real_T K_i_y_P2;                     /* Expression: dtype
                                        * Referenced by: '<S16>/K_i_y'
                                        */
  real_T K_i_y_P3;                     /* Expression: portnum
                                        * Referenced by: '<S16>/K_i_y'
                                        */
  real_T K_i_y_P4;                     /* Expression: stime
                                        * Referenced by: '<S16>/K_i_y'
                                        */
  real_T K_i_y_P5;                     /* Expression: stype
                                        * Referenced by: '<S16>/K_i_y'
                                        */
  real_T K_i_y_P6;                     /* Expression: btype
                                        * Referenced by: '<S16>/K_i_y'
                                        */
  real_T K_d_psi_P1;                   /* Expression: width
                                        * Referenced by: '<S16>/K_d_psi'
                                        */
  real_T K_d_psi_P2;                   /* Expression: dtype
                                        * Referenced by: '<S16>/K_d_psi'
                                        */
  real_T K_d_psi_P3;                   /* Expression: portnum
                                        * Referenced by: '<S16>/K_d_psi'
                                        */
  real_T K_d_psi_P4;                   /* Expression: stime
                                        * Referenced by: '<S16>/K_d_psi'
                                        */
  real_T K_d_psi_P5;                   /* Expression: stype
                                        * Referenced by: '<S16>/K_d_psi'
                                        */
  real_T K_d_psi_P6;                   /* Expression: btype
                                        * Referenced by: '<S16>/K_d_psi'
                                        */
  real_T K_d_x_P1;                     /* Expression: width
                                        * Referenced by: '<S16>/K_d_x'
                                        */
  real_T K_d_x_P2;                     /* Expression: dtype
                                        * Referenced by: '<S16>/K_d_x'
                                        */
  real_T K_d_x_P3;                     /* Expression: portnum
                                        * Referenced by: '<S16>/K_d_x'
                                        */
  real_T K_d_x_P4;                     /* Expression: stime
                                        * Referenced by: '<S16>/K_d_x'
                                        */
  real_T K_d_x_P5;                     /* Expression: stype
                                        * Referenced by: '<S16>/K_d_x'
                                        */
  real_T K_d_x_P6;                     /* Expression: btype
                                        * Referenced by: '<S16>/K_d_x'
                                        */
  real_T K_d_y_P1;                     /* Expression: width
                                        * Referenced by: '<S16>/K_d_y'
                                        */
  real_T K_d_y_P2;                     /* Expression: dtype
                                        * Referenced by: '<S16>/K_d_y'
                                        */
  real_T K_d_y_P3;                     /* Expression: portnum
                                        * Referenced by: '<S16>/K_d_y'
                                        */
  real_T K_d_y_P4;                     /* Expression: stime
                                        * Referenced by: '<S16>/K_d_y'
                                        */
  real_T K_d_y_P5;                     /* Expression: stype
                                        * Referenced by: '<S16>/K_d_y'
                                        */
  real_T K_d_y_P6;                     /* Expression: btype
                                        * Referenced by: '<S16>/K_d_y'
                                        */
  real_T x_m_P1;                       /* Expression: width
                                        * Referenced by: '<S8>/x_m'
                                        */
  real_T x_m_P2;                       /* Expression: dtype
                                        * Referenced by: '<S8>/x_m'
                                        */
  real_T x_m_P3;                       /* Expression: portnum
                                        * Referenced by: '<S8>/x_m'
                                        */
  real_T x_m_P4;                       /* Expression: stime
                                        * Referenced by: '<S8>/x_m'
                                        */
  real_T x_m_P5;                       /* Expression: stype
                                        * Referenced by: '<S8>/x_m'
                                        */
  real_T x_m_P6;                       /* Expression: btype
                                        * Referenced by: '<S8>/x_m'
                                        */
  real_T Gain_Gain;                    /* Expression: 1/1000
                                        * Referenced by: '<S8>/Gain'
                                        */
  real_T y_m_P1;                       /* Expression: width
                                        * Referenced by: '<S8>/y_m'
                                        */
  real_T y_m_P2;                       /* Expression: dtype
                                        * Referenced by: '<S8>/y_m'
                                        */
  real_T y_m_P3;                       /* Expression: portnum
                                        * Referenced by: '<S8>/y_m'
                                        */
  real_T y_m_P4;                       /* Expression: stime
                                        * Referenced by: '<S8>/y_m'
                                        */
  real_T y_m_P5;                       /* Expression: stype
                                        * Referenced by: '<S8>/y_m'
                                        */
  real_T y_m_P6;                       /* Expression: btype
                                        * Referenced by: '<S8>/y_m'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/1000
                                        * Referenced by: '<S8>/Gain1'
                                        */
  real_T psi_m_P1;                     /* Expression: width
                                        * Referenced by: '<S8>/psi_m'
                                        */
  real_T psi_m_P2;                     /* Expression: dtype
                                        * Referenced by: '<S8>/psi_m'
                                        */
  real_T psi_m_P3;                     /* Expression: portnum
                                        * Referenced by: '<S8>/psi_m'
                                        */
  real_T psi_m_P4;                     /* Expression: stime
                                        * Referenced by: '<S8>/psi_m'
                                        */
  real_T psi_m_P5;                     /* Expression: stype
                                        * Referenced by: '<S8>/psi_m'
                                        */
  real_T psi_m_P6;                     /* Expression: btype
                                        * Referenced by: '<S8>/psi_m'
                                        */
  real_T Gain5_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S8>/Gain5'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1e10
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -1e10
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Gain6_Gain;                   /* Expression: pi
                                        * Referenced by: '<S8>/Gain6'
                                        */
  real_T Constant1_Value;              /* Expression: 2*pi
                                        * Referenced by: '<S8>/Constant1'
                                        */
  real_T Saturation_UpperSat_p;        /* Expression: 1e10
                                        * Referenced by: '<S27>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: -1e10
                                        * Referenced by: '<S27>/Saturation'
                                        */
  real_T Gain_Gain_p;                  /* Expression: pi
                                        * Referenced by: '<S27>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 2*pi
                                        * Referenced by: '<S27>/Constant'
                                        */
  real_T Saturation_UpperSat_i;        /* Expression: 1e10
                                        * Referenced by: '<S36>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: -1e10
                                        * Referenced by: '<S36>/Saturation'
                                        */
  real_T Gain_Gain_o;                  /* Expression: pi
                                        * Referenced by: '<S36>/Gain'
                                        */
  real_T Constant_Value_p;             /* Expression: 2*pi
                                        * Referenced by: '<S36>/Constant'
                                        */
  real_T Integrator2_IC;               /* Expression: 0
                                        * Referenced by: '<S10>/Integrator2'
                                        */
  real_T Saturation_UpperSat_p4;       /* Expression: 1e10
                                        * Referenced by: '<S40>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: -1e10
                                        * Referenced by: '<S40>/Saturation'
                                        */
  real_T Gain_Gain_e;                  /* Expression: pi
                                        * Referenced by: '<S40>/Gain'
                                        */
  real_T Constant_Value_e;             /* Expression: 2*pi
                                        * Referenced by: '<S40>/Constant'
                                        */
  real_T Saturation_UpperSat_ir;       /* Expression: 1e10
                                        * Referenced by: '<S35>/Saturation'
                                        */
  real_T Saturation_LowerSat_l;        /* Expression: -1e10
                                        * Referenced by: '<S35>/Saturation'
                                        */
  real_T Gain_Gain_d;                  /* Expression: pi
                                        * Referenced by: '<S35>/Gain'
                                        */
  real_T Constant_Value_a;             /* Expression: 2*pi
                                        * Referenced by: '<S35>/Constant'
                                        */
  real_T Integrator1_IC;               /* Expression: 0
                                        * Referenced by: '<S7>/Integrator1'
                                        */
  real_T Integrator1_IC_b;             /* Expression: 0
                                        * Referenced by: '<S10>/Integrator1'
                                        */
  real_T Integrator1_IC_g[3];          /* Expression: [0 0 0]'
                                        * Referenced by: '<S5>/Integrator1'
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
  real_T thr_angle_1_P1;               /* Expression: width
                                        * Referenced by: '<S14>/thr_angle_1'
                                        */
  real_T thr_angle_1_P2;               /* Expression: dtype
                                        * Referenced by: '<S14>/thr_angle_1'
                                        */
  real_T thr_angle_1_P3;               /* Expression: portnum
                                        * Referenced by: '<S14>/thr_angle_1'
                                        */
  real_T thr_angle_1_P4;               /* Expression: stime
                                        * Referenced by: '<S14>/thr_angle_1'
                                        */
  real_T thr_angle_1_P5;               /* Expression: stype
                                        * Referenced by: '<S14>/thr_angle_1'
                                        */
  real_T thr_angle_1_P6;               /* Expression: btype
                                        * Referenced by: '<S14>/thr_angle_1'
                                        */
  real_T thr_angle_2_P1;               /* Expression: width
                                        * Referenced by: '<S14>/thr_angle_2'
                                        */
  real_T thr_angle_2_P2;               /* Expression: dtype
                                        * Referenced by: '<S14>/thr_angle_2'
                                        */
  real_T thr_angle_2_P3;               /* Expression: portnum
                                        * Referenced by: '<S14>/thr_angle_2'
                                        */
  real_T thr_angle_2_P4;               /* Expression: stime
                                        * Referenced by: '<S14>/thr_angle_2'
                                        */
  real_T thr_angle_2_P5;               /* Expression: stype
                                        * Referenced by: '<S14>/thr_angle_2'
                                        */
  real_T thr_angle_2_P6;               /* Expression: btype
                                        * Referenced by: '<S14>/thr_angle_2'
                                        */
  real_T thr_angle_3_P1;               /* Expression: width
                                        * Referenced by: '<S14>/thr_angle_3'
                                        */
  real_T thr_angle_3_P2;               /* Expression: dtype
                                        * Referenced by: '<S14>/thr_angle_3'
                                        */
  real_T thr_angle_3_P3;               /* Expression: portnum
                                        * Referenced by: '<S14>/thr_angle_3'
                                        */
  real_T thr_angle_3_P4;               /* Expression: stime
                                        * Referenced by: '<S14>/thr_angle_3'
                                        */
  real_T thr_angle_3_P5;               /* Expression: stype
                                        * Referenced by: '<S14>/thr_angle_3'
                                        */
  real_T thr_angle_3_P6;               /* Expression: btype
                                        * Referenced by: '<S14>/thr_angle_3'
                                        */
  real_T thr_angle_4_P1;               /* Expression: width
                                        * Referenced by: '<S14>/thr_angle_4'
                                        */
  real_T thr_angle_4_P2;               /* Expression: dtype
                                        * Referenced by: '<S14>/thr_angle_4'
                                        */
  real_T thr_angle_4_P3;               /* Expression: portnum
                                        * Referenced by: '<S14>/thr_angle_4'
                                        */
  real_T thr_angle_4_P4;               /* Expression: stime
                                        * Referenced by: '<S14>/thr_angle_4'
                                        */
  real_T thr_angle_4_P5;               /* Expression: stype
                                        * Referenced by: '<S14>/thr_angle_4'
                                        */
  real_T thr_angle_4_P6;               /* Expression: btype
                                        * Referenced by: '<S14>/thr_angle_4'
                                        */
  real_T thr_angle_5_P1;               /* Expression: width
                                        * Referenced by: '<S14>/thr_angle_5'
                                        */
  real_T thr_angle_5_P2;               /* Expression: dtype
                                        * Referenced by: '<S14>/thr_angle_5'
                                        */
  real_T thr_angle_5_P3;               /* Expression: portnum
                                        * Referenced by: '<S14>/thr_angle_5'
                                        */
  real_T thr_angle_5_P4;               /* Expression: stime
                                        * Referenced by: '<S14>/thr_angle_5'
                                        */
  real_T thr_angle_5_P5;               /* Expression: stype
                                        * Referenced by: '<S14>/thr_angle_5'
                                        */
  real_T thr_angle_5_P6;               /* Expression: btype
                                        * Referenced by: '<S14>/thr_angle_5'
                                        */
  real_T thr_angle_6_P1;               /* Expression: width
                                        * Referenced by: '<S14>/thr_angle_6'
                                        */
  real_T thr_angle_6_P2;               /* Expression: dtype
                                        * Referenced by: '<S14>/thr_angle_6'
                                        */
  real_T thr_angle_6_P3;               /* Expression: portnum
                                        * Referenced by: '<S14>/thr_angle_6'
                                        */
  real_T thr_angle_6_P4;               /* Expression: stime
                                        * Referenced by: '<S14>/thr_angle_6'
                                        */
  real_T thr_angle_6_P5;               /* Expression: stype
                                        * Referenced by: '<S14>/thr_angle_6'
                                        */
  real_T thr_angle_6_P6;               /* Expression: btype
                                        * Referenced by: '<S14>/thr_angle_6'
                                        */
  real_T Gain_Gain_p4;                 /* Expression: 180/pi
                                        * Referenced by: '<S43>/Gain'
                                        */
  real_T XpositionThruster_Value[6];   /* Expression: [Thruster.T1(1) Thruster.T2(1) Thruster.T3(1) Thruster.T4(1) Thruster.T5(1) Thruster.T6(1)]
                                        * Referenced by: '<S11>/X-position Thruster'
                                        */
  real_T YpositionThruster_Value[6];   /* Expression: [Thruster.T1(2) Thruster.T2(2) Thruster.T3(2) Thruster.T4(2) Thruster.T5(2) Thruster.T6(2)]
                                        * Referenced by: '<S11>/Y-position Thruster'
                                        */
  real_T Angle_controller_P1;          /* Expression: width
                                        * Referenced by: '<S11>/Angle_controller'
                                        */
  real_T Angle_controller_P2;          /* Expression: dtype
                                        * Referenced by: '<S11>/Angle_controller'
                                        */
  real_T Angle_controller_P3;          /* Expression: portnum
                                        * Referenced by: '<S11>/Angle_controller'
                                        */
  real_T Angle_controller_P4;          /* Expression: stime
                                        * Referenced by: '<S11>/Angle_controller'
                                        */
  real_T Angle_controller_P5;          /* Expression: stype
                                        * Referenced by: '<S11>/Angle_controller'
                                        */
  real_T Angle_controller_P6;          /* Expression: btype
                                        * Referenced by: '<S11>/Angle_controller'
                                        */
  real_T constantangle_Value[6];       /* Expression: [Thruster.T1(3) Thruster.T2(3) Thruster.T3(3) Thruster.T4(3) Thruster.T5(3) Thruster.T6(3)]
                                        * Referenced by: '<S11>/constant angle'
                                        */
  real_T ChoosingFixedAzimuthangle_Thres;/* Expression: 1
                                          * Referenced by: '<S11>/Choosing Fixed // Azimuth angle'
                                          */
  real_T Gain_Gain_oe;                 /* Expression: 180/pi
                                        * Referenced by: '<S9>/Gain'
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
  real_T x_hat_P1_j;                   /* Expression: width
                                        * Referenced by: '<S30>/x_hat'
                                        */
  real_T x_hat_P2_k;                   /* Expression: dtype
                                        * Referenced by: '<S30>/x_hat'
                                        */
  real_T x_hat_P3_e;                   /* Expression: portnum
                                        * Referenced by: '<S30>/x_hat'
                                        */
  real_T x_hat_P4_c;                   /* Expression: stime
                                        * Referenced by: '<S30>/x_hat'
                                        */
  real_T x_hat_P5_h;                   /* Expression: stype
                                        * Referenced by: '<S30>/x_hat'
                                        */
  real_T x_hat_P6_e;                   /* Expression: btype
                                        * Referenced by: '<S30>/x_hat'
                                        */
  real_T y_hat_P1_o;                   /* Expression: width
                                        * Referenced by: '<S30>/y_hat'
                                        */
  real_T y_hat_P2_e;                   /* Expression: dtype
                                        * Referenced by: '<S30>/y_hat'
                                        */
  real_T y_hat_P3_b;                   /* Expression: portnum
                                        * Referenced by: '<S30>/y_hat'
                                        */
  real_T y_hat_P4_j;                   /* Expression: stime
                                        * Referenced by: '<S30>/y_hat'
                                        */
  real_T y_hat_P5_f;                   /* Expression: stype
                                        * Referenced by: '<S30>/y_hat'
                                        */
  real_T y_hat_P6_i;                   /* Expression: btype
                                        * Referenced by: '<S30>/y_hat'
                                        */
  real_T psi_hat_P1_n;                 /* Expression: width
                                        * Referenced by: '<S30>/psi_hat'
                                        */
  real_T psi_hat_P2_l;                 /* Expression: dtype
                                        * Referenced by: '<S30>/psi_hat'
                                        */
  real_T psi_hat_P3_m;                 /* Expression: portnum
                                        * Referenced by: '<S30>/psi_hat'
                                        */
  real_T psi_hat_P4_f;                 /* Expression: stime
                                        * Referenced by: '<S30>/psi_hat'
                                        */
  real_T psi_hat_P5_p;                 /* Expression: stype
                                        * Referenced by: '<S30>/psi_hat'
                                        */
  real_T psi_hat_P6_b;                 /* Expression: btype
                                        * Referenced by: '<S30>/psi_hat'
                                        */
  real_T u_hat_P1;                     /* Expression: width
                                        * Referenced by: '<S32>/u_hat'
                                        */
  real_T u_hat_P2;                     /* Expression: dtype
                                        * Referenced by: '<S32>/u_hat'
                                        */
  real_T u_hat_P3;                     /* Expression: portnum
                                        * Referenced by: '<S32>/u_hat'
                                        */
  real_T u_hat_P4;                     /* Expression: stime
                                        * Referenced by: '<S32>/u_hat'
                                        */
  real_T u_hat_P5;                     /* Expression: stype
                                        * Referenced by: '<S32>/u_hat'
                                        */
  real_T u_hat_P6;                     /* Expression: btype
                                        * Referenced by: '<S32>/u_hat'
                                        */
  real_T v_hat_P1;                     /* Expression: width
                                        * Referenced by: '<S32>/v_hat'
                                        */
  real_T v_hat_P2;                     /* Expression: dtype
                                        * Referenced by: '<S32>/v_hat'
                                        */
  real_T v_hat_P3;                     /* Expression: portnum
                                        * Referenced by: '<S32>/v_hat'
                                        */
  real_T v_hat_P4;                     /* Expression: stime
                                        * Referenced by: '<S32>/v_hat'
                                        */
  real_T v_hat_P5;                     /* Expression: stype
                                        * Referenced by: '<S32>/v_hat'
                                        */
  real_T v_hat_P6;                     /* Expression: btype
                                        * Referenced by: '<S32>/v_hat'
                                        */
  real_T r_hat_P1;                     /* Expression: width
                                        * Referenced by: '<S32>/r_hat'
                                        */
  real_T r_hat_P2;                     /* Expression: dtype
                                        * Referenced by: '<S32>/r_hat'
                                        */
  real_T r_hat_P3;                     /* Expression: portnum
                                        * Referenced by: '<S32>/r_hat'
                                        */
  real_T r_hat_P4;                     /* Expression: stime
                                        * Referenced by: '<S32>/r_hat'
                                        */
  real_T r_hat_P5;                     /* Expression: stype
                                        * Referenced by: '<S32>/r_hat'
                                        */
  real_T r_hat_P6;                     /* Expression: btype
                                        * Referenced by: '<S32>/r_hat'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 1e10
                                        * Referenced by: '<S28>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: -1e10
                                        * Referenced by: '<S28>/Saturation'
                                        */
  real_T Gain_Gain_gg;                 /* Expression: pi
                                        * Referenced by: '<S28>/Gain'
                                        */
  real_T Constant_Value_i;             /* Expression: 2*pi
                                        * Referenced by: '<S28>/Constant'
                                        */
  real_T Integrator2_IC_i[3];          /* Expression: [0 0 0]'
                                        * Referenced by: '<S5>/Integrator2'
                                        */
  real_T Constant6_Value;              /* Expression: 1
                                        * Referenced by: '<S18>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 1
                                        * Referenced by: '<S18>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 1
                                        * Referenced by: '<S18>/Constant8'
                                        */
  real_T M1_Gain[9];                   /* Expression: [0.008021948049864 0 0;0 0.010098125265799 1.104781662647098e-04;0 3.303823257820844e-05 0.020839338676560]
                                        * Referenced by: '<S5>/M^-1'
                                        */
  real_T u_dot_hat_P1;                 /* Expression: width
                                        * Referenced by: '<S31>/u_dot_hat'
                                        */
  real_T u_dot_hat_P2;                 /* Expression: dtype
                                        * Referenced by: '<S31>/u_dot_hat'
                                        */
  real_T u_dot_hat_P3;                 /* Expression: portnum
                                        * Referenced by: '<S31>/u_dot_hat'
                                        */
  real_T u_dot_hat_P4;                 /* Expression: stime
                                        * Referenced by: '<S31>/u_dot_hat'
                                        */
  real_T u_dot_hat_P5;                 /* Expression: stype
                                        * Referenced by: '<S31>/u_dot_hat'
                                        */
  real_T u_dot_hat_P6;                 /* Expression: btype
                                        * Referenced by: '<S31>/u_dot_hat'
                                        */
  real_T v_dot_hat_P1;                 /* Expression: width
                                        * Referenced by: '<S31>/v_dot_hat'
                                        */
  real_T v_dot_hat_P2;                 /* Expression: dtype
                                        * Referenced by: '<S31>/v_dot_hat'
                                        */
  real_T v_dot_hat_P3;                 /* Expression: portnum
                                        * Referenced by: '<S31>/v_dot_hat'
                                        */
  real_T v_dot_hat_P4;                 /* Expression: stime
                                        * Referenced by: '<S31>/v_dot_hat'
                                        */
  real_T v_dot_hat_P5;                 /* Expression: stype
                                        * Referenced by: '<S31>/v_dot_hat'
                                        */
  real_T v_dot_hat_P6;                 /* Expression: btype
                                        * Referenced by: '<S31>/v_dot_hat'
                                        */
  real_T r_dot_hat_P1;                 /* Expression: width
                                        * Referenced by: '<S31>/r_dot_hat'
                                        */
  real_T r_dot_hat_P2;                 /* Expression: dtype
                                        * Referenced by: '<S31>/r_dot_hat'
                                        */
  real_T r_dot_hat_P3;                 /* Expression: portnum
                                        * Referenced by: '<S31>/r_dot_hat'
                                        */
  real_T r_dot_hat_P4;                 /* Expression: stime
                                        * Referenced by: '<S31>/r_dot_hat'
                                        */
  real_T r_dot_hat_P5;                 /* Expression: stype
                                        * Referenced by: '<S31>/r_dot_hat'
                                        */
  real_T r_dot_hat_P6;                 /* Expression: btype
                                        * Referenced by: '<S31>/r_dot_hat'
                                        */
  real_T b_x_hat_P1;                   /* Expression: width
                                        * Referenced by: '<S29>/b_x_hat'
                                        */
  real_T b_x_hat_P2;                   /* Expression: dtype
                                        * Referenced by: '<S29>/b_x_hat'
                                        */
  real_T b_x_hat_P3;                   /* Expression: portnum
                                        * Referenced by: '<S29>/b_x_hat'
                                        */
  real_T b_x_hat_P4;                   /* Expression: stime
                                        * Referenced by: '<S29>/b_x_hat'
                                        */
  real_T b_x_hat_P5;                   /* Expression: stype
                                        * Referenced by: '<S29>/b_x_hat'
                                        */
  real_T b_x_hat_P6;                   /* Expression: btype
                                        * Referenced by: '<S29>/b_x_hat'
                                        */
  real_T b_y_hat_P1;                   /* Expression: width
                                        * Referenced by: '<S29>/b_y_hat'
                                        */
  real_T b_y_hat_P2;                   /* Expression: dtype
                                        * Referenced by: '<S29>/b_y_hat'
                                        */
  real_T b_y_hat_P3;                   /* Expression: portnum
                                        * Referenced by: '<S29>/b_y_hat'
                                        */
  real_T b_y_hat_P4;                   /* Expression: stime
                                        * Referenced by: '<S29>/b_y_hat'
                                        */
  real_T b_y_hat_P5;                   /* Expression: stype
                                        * Referenced by: '<S29>/b_y_hat'
                                        */
  real_T b_y_hat_P6;                   /* Expression: btype
                                        * Referenced by: '<S29>/b_y_hat'
                                        */
  real_T b_psi_hat_P1;                 /* Expression: width
                                        * Referenced by: '<S29>/b_psi_hat'
                                        */
  real_T b_psi_hat_P2;                 /* Expression: dtype
                                        * Referenced by: '<S29>/b_psi_hat'
                                        */
  real_T b_psi_hat_P3;                 /* Expression: portnum
                                        * Referenced by: '<S29>/b_psi_hat'
                                        */
  real_T b_psi_hat_P4;                 /* Expression: stime
                                        * Referenced by: '<S29>/b_psi_hat'
                                        */
  real_T b_psi_hat_P5;                 /* Expression: stype
                                        * Referenced by: '<S29>/b_psi_hat'
                                        */
  real_T b_psi_hat_P6;                 /* Expression: btype
                                        * Referenced by: '<S29>/b_psi_hat'
                                        */
  real_T alpha1_P1;                    /* Expression: width
                                        * Referenced by: '<S15>/alpha1'
                                        */
  real_T alpha1_P2;                    /* Expression: dtype
                                        * Referenced by: '<S15>/alpha1'
                                        */
  real_T alpha1_P3;                    /* Expression: portnum
                                        * Referenced by: '<S15>/alpha1'
                                        */
  real_T alpha1_P4;                    /* Expression: stime
                                        * Referenced by: '<S15>/alpha1'
                                        */
  real_T alpha1_P5;                    /* Expression: stype
                                        * Referenced by: '<S15>/alpha1'
                                        */
  real_T alpha1_P6;                    /* Expression: btype
                                        * Referenced by: '<S15>/alpha1'
                                        */
  real_T alpha2_P1;                    /* Expression: width
                                        * Referenced by: '<S15>/alpha2'
                                        */
  real_T alpha2_P2;                    /* Expression: dtype
                                        * Referenced by: '<S15>/alpha2'
                                        */
  real_T alpha2_P3;                    /* Expression: portnum
                                        * Referenced by: '<S15>/alpha2'
                                        */
  real_T alpha2_P4;                    /* Expression: stime
                                        * Referenced by: '<S15>/alpha2'
                                        */
  real_T alpha2_P5;                    /* Expression: stype
                                        * Referenced by: '<S15>/alpha2'
                                        */
  real_T alpha2_P6;                    /* Expression: btype
                                        * Referenced by: '<S15>/alpha2'
                                        */
  real_T alpha3_P1;                    /* Expression: width
                                        * Referenced by: '<S15>/alpha3'
                                        */
  real_T alpha3_P2;                    /* Expression: dtype
                                        * Referenced by: '<S15>/alpha3'
                                        */
  real_T alpha3_P3;                    /* Expression: portnum
                                        * Referenced by: '<S15>/alpha3'
                                        */
  real_T alpha3_P4;                    /* Expression: stime
                                        * Referenced by: '<S15>/alpha3'
                                        */
  real_T alpha3_P5;                    /* Expression: stype
                                        * Referenced by: '<S15>/alpha3'
                                        */
  real_T alpha3_P6;                    /* Expression: btype
                                        * Referenced by: '<S15>/alpha3'
                                        */
  real_T alpha4_P1;                    /* Expression: width
                                        * Referenced by: '<S15>/alpha4'
                                        */
  real_T alpha4_P2;                    /* Expression: dtype
                                        * Referenced by: '<S15>/alpha4'
                                        */
  real_T alpha4_P3;                    /* Expression: portnum
                                        * Referenced by: '<S15>/alpha4'
                                        */
  real_T alpha4_P4;                    /* Expression: stime
                                        * Referenced by: '<S15>/alpha4'
                                        */
  real_T alpha4_P5;                    /* Expression: stype
                                        * Referenced by: '<S15>/alpha4'
                                        */
  real_T alpha4_P6;                    /* Expression: btype
                                        * Referenced by: '<S15>/alpha4'
                                        */
  real_T alpha5_P1;                    /* Expression: width
                                        * Referenced by: '<S15>/alpha5'
                                        */
  real_T alpha5_P2;                    /* Expression: dtype
                                        * Referenced by: '<S15>/alpha5'
                                        */
  real_T alpha5_P3;                    /* Expression: portnum
                                        * Referenced by: '<S15>/alpha5'
                                        */
  real_T alpha5_P4;                    /* Expression: stime
                                        * Referenced by: '<S15>/alpha5'
                                        */
  real_T alpha5_P5;                    /* Expression: stype
                                        * Referenced by: '<S15>/alpha5'
                                        */
  real_T alpha5_P6;                    /* Expression: btype
                                        * Referenced by: '<S15>/alpha5'
                                        */
  real_T alpha6_P1;                    /* Expression: width
                                        * Referenced by: '<S15>/alpha6'
                                        */
  real_T alpha6_P2;                    /* Expression: dtype
                                        * Referenced by: '<S15>/alpha6'
                                        */
  real_T alpha6_P3;                    /* Expression: portnum
                                        * Referenced by: '<S15>/alpha6'
                                        */
  real_T alpha6_P4;                    /* Expression: stime
                                        * Referenced by: '<S15>/alpha6'
                                        */
  real_T alpha6_P5;                    /* Expression: stype
                                        * Referenced by: '<S15>/alpha6'
                                        */
  real_T alpha6_P6;                    /* Expression: btype
                                        * Referenced by: '<S15>/alpha6'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 2'
                                        */
  real_T u1_P1;                        /* Expression: width
                                        * Referenced by: '<S15>/u1'
                                        */
  real_T u1_P2;                        /* Expression: dtype
                                        * Referenced by: '<S15>/u1'
                                        */
  real_T u1_P3;                        /* Expression: portnum
                                        * Referenced by: '<S15>/u1'
                                        */
  real_T u1_P4;                        /* Expression: stime
                                        * Referenced by: '<S15>/u1'
                                        */
  real_T u1_P5;                        /* Expression: stype
                                        * Referenced by: '<S15>/u1'
                                        */
  real_T u1_P6;                        /* Expression: btype
                                        * Referenced by: '<S15>/u1'
                                        */
  real_T Saturation8_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 8'
                                        */
  real_T Saturation9_UpperSat;         /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 9'
                                        */
  real_T u2_P1;                        /* Expression: width
                                        * Referenced by: '<S15>/u2'
                                        */
  real_T u2_P2;                        /* Expression: dtype
                                        * Referenced by: '<S15>/u2'
                                        */
  real_T u2_P3;                        /* Expression: portnum
                                        * Referenced by: '<S15>/u2'
                                        */
  real_T u2_P4;                        /* Expression: stime
                                        * Referenced by: '<S15>/u2'
                                        */
  real_T u2_P5;                        /* Expression: stype
                                        * Referenced by: '<S15>/u2'
                                        */
  real_T u2_P6;                        /* Expression: btype
                                        * Referenced by: '<S15>/u2'
                                        */
  real_T Saturation10_LowerSat;        /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 10'
                                        */
  real_T Saturation11_UpperSat;        /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 11'
                                        */
  real_T u3_P1;                        /* Expression: width
                                        * Referenced by: '<S15>/u3'
                                        */
  real_T u3_P2;                        /* Expression: dtype
                                        * Referenced by: '<S15>/u3'
                                        */
  real_T u3_P3;                        /* Expression: portnum
                                        * Referenced by: '<S15>/u3'
                                        */
  real_T u3_P4;                        /* Expression: stime
                                        * Referenced by: '<S15>/u3'
                                        */
  real_T u3_P5;                        /* Expression: stype
                                        * Referenced by: '<S15>/u3'
                                        */
  real_T u3_P6;                        /* Expression: btype
                                        * Referenced by: '<S15>/u3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 3'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 4'
                                        */
  real_T u4_P1;                        /* Expression: width
                                        * Referenced by: '<S15>/u4'
                                        */
  real_T u4_P2;                        /* Expression: dtype
                                        * Referenced by: '<S15>/u4'
                                        */
  real_T u4_P3;                        /* Expression: portnum
                                        * Referenced by: '<S15>/u4'
                                        */
  real_T u4_P4;                        /* Expression: stime
                                        * Referenced by: '<S15>/u4'
                                        */
  real_T u4_P5;                        /* Expression: stype
                                        * Referenced by: '<S15>/u4'
                                        */
  real_T u4_P6;                        /* Expression: btype
                                        * Referenced by: '<S15>/u4'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 5'
                                        */
  real_T Saturation6_UpperSat;         /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 6'
                                        */
  real_T u5_P1;                        /* Expression: width
                                        * Referenced by: '<S15>/u5'
                                        */
  real_T u5_P2;                        /* Expression: dtype
                                        * Referenced by: '<S15>/u5'
                                        */
  real_T u5_P3;                        /* Expression: portnum
                                        * Referenced by: '<S15>/u5'
                                        */
  real_T u5_P4;                        /* Expression: stime
                                        * Referenced by: '<S15>/u5'
                                        */
  real_T u5_P5;                        /* Expression: stype
                                        * Referenced by: '<S15>/u5'
                                        */
  real_T u5_P6;                        /* Expression: btype
                                        * Referenced by: '<S15>/u5'
                                        */
  real_T Saturation12_LowerSat;        /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 12'
                                        */
  real_T Saturation13_UpperSat;        /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 13'
                                        */
  real_T u6_P1;                        /* Expression: width
                                        * Referenced by: '<S15>/u6'
                                        */
  real_T u6_P2;                        /* Expression: dtype
                                        * Referenced by: '<S15>/u6'
                                        */
  real_T u6_P3;                        /* Expression: portnum
                                        * Referenced by: '<S15>/u6'
                                        */
  real_T u6_P4;                        /* Expression: stime
                                        * Referenced by: '<S15>/u6'
                                        */
  real_T u6_P5;                        /* Expression: stype
                                        * Referenced by: '<S15>/u6'
                                        */
  real_T u6_P6;                        /* Expression: btype
                                        * Referenced by: '<S15>/u6'
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
  real_T Constant_Value_g;             /* Expression: 50
                                        * Referenced by: '<S18>/Constant'
                                        */
  real_T Constant1_Value_o;            /* Expression: 50
                                        * Referenced by: '<S18>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 50
                                        * Referenced by: '<S18>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<S18>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 1
                                        * Referenced by: '<S18>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<S18>/Constant5'
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
                                        * Referenced by: '<S10>/x_ref'
                                        */
  real_T x_ref_P2;                     /* Expression: dtype
                                        * Referenced by: '<S10>/x_ref'
                                        */
  real_T x_ref_P3;                     /* Expression: portnum
                                        * Referenced by: '<S10>/x_ref'
                                        */
  real_T x_ref_P4;                     /* Expression: stime
                                        * Referenced by: '<S10>/x_ref'
                                        */
  real_T x_ref_P5;                     /* Expression: stype
                                        * Referenced by: '<S10>/x_ref'
                                        */
  real_T x_ref_P6;                     /* Expression: btype
                                        * Referenced by: '<S10>/x_ref'
                                        */
  real_T y_ref_P1;                     /* Expression: width
                                        * Referenced by: '<S10>/y_ref'
                                        */
  real_T y_ref_P2;                     /* Expression: dtype
                                        * Referenced by: '<S10>/y_ref'
                                        */
  real_T y_ref_P3;                     /* Expression: portnum
                                        * Referenced by: '<S10>/y_ref'
                                        */
  real_T y_ref_P4;                     /* Expression: stime
                                        * Referenced by: '<S10>/y_ref'
                                        */
  real_T y_ref_P5;                     /* Expression: stype
                                        * Referenced by: '<S10>/y_ref'
                                        */
  real_T y_ref_P6;                     /* Expression: btype
                                        * Referenced by: '<S10>/y_ref'
                                        */
  real_T psi_ref_P1;                   /* Expression: width
                                        * Referenced by: '<S10>/psi_ref'
                                        */
  real_T psi_ref_P2;                   /* Expression: dtype
                                        * Referenced by: '<S10>/psi_ref'
                                        */
  real_T psi_ref_P3;                   /* Expression: portnum
                                        * Referenced by: '<S10>/psi_ref'
                                        */
  real_T psi_ref_P4;                   /* Expression: stime
                                        * Referenced by: '<S10>/psi_ref'
                                        */
  real_T psi_ref_P5;                   /* Expression: stype
                                        * Referenced by: '<S10>/psi_ref'
                                        */
  real_T psi_ref_P6;                   /* Expression: btype
                                        * Referenced by: '<S10>/psi_ref'
                                        */
  real_T Gain5_Gain_n;                 /* Expression: pi/180
                                        * Referenced by: '<S10>/Gain5'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S10>/Integrator'
                                        */
  real_T w_x_P1;                       /* Expression: width
                                        * Referenced by: '<S17>/w_x'
                                        */
  real_T w_x_P2;                       /* Expression: dtype
                                        * Referenced by: '<S17>/w_x'
                                        */
  real_T w_x_P3;                       /* Expression: portnum
                                        * Referenced by: '<S17>/w_x'
                                        */
  real_T w_x_P4;                       /* Expression: stime
                                        * Referenced by: '<S17>/w_x'
                                        */
  real_T w_x_P5;                       /* Expression: stype
                                        * Referenced by: '<S17>/w_x'
                                        */
  real_T w_x_P6;                       /* Expression: btype
                                        * Referenced by: '<S17>/w_x'
                                        */
  real_T w_y_P1;                       /* Expression: width
                                        * Referenced by: '<S17>/w_y'
                                        */
  real_T w_y_P2;                       /* Expression: dtype
                                        * Referenced by: '<S17>/w_y'
                                        */
  real_T w_y_P3;                       /* Expression: portnum
                                        * Referenced by: '<S17>/w_y'
                                        */
  real_T w_y_P4;                       /* Expression: stime
                                        * Referenced by: '<S17>/w_y'
                                        */
  real_T w_y_P5;                       /* Expression: stype
                                        * Referenced by: '<S17>/w_y'
                                        */
  real_T w_y_P6;                       /* Expression: btype
                                        * Referenced by: '<S17>/w_y'
                                        */
  real_T w_psi_P1;                     /* Expression: width
                                        * Referenced by: '<S17>/w_psi'
                                        */
  real_T w_psi_P2;                     /* Expression: dtype
                                        * Referenced by: '<S17>/w_psi'
                                        */
  real_T w_psi_P3;                     /* Expression: portnum
                                        * Referenced by: '<S17>/w_psi'
                                        */
  real_T w_psi_P4;                     /* Expression: stime
                                        * Referenced by: '<S17>/w_psi'
                                        */
  real_T w_psi_P5;                     /* Expression: stype
                                        * Referenced by: '<S17>/w_psi'
                                        */
  real_T w_psi_P6;                     /* Expression: btype
                                        * Referenced by: '<S17>/w_psi'
                                        */
  real_T zeta_psi_P1;                  /* Expression: width
                                        * Referenced by: '<S17>/zeta_psi'
                                        */
  real_T zeta_psi_P2;                  /* Expression: dtype
                                        * Referenced by: '<S17>/zeta_psi'
                                        */
  real_T zeta_psi_P3;                  /* Expression: portnum
                                        * Referenced by: '<S17>/zeta_psi'
                                        */
  real_T zeta_psi_P4;                  /* Expression: stime
                                        * Referenced by: '<S17>/zeta_psi'
                                        */
  real_T zeta_psi_P5;                  /* Expression: stype
                                        * Referenced by: '<S17>/zeta_psi'
                                        */
  real_T zeta_psi_P6;                  /* Expression: btype
                                        * Referenced by: '<S17>/zeta_psi'
                                        */
  real_T zeta_x_P1;                    /* Expression: width
                                        * Referenced by: '<S17>/zeta_x'
                                        */
  real_T zeta_x_P2;                    /* Expression: dtype
                                        * Referenced by: '<S17>/zeta_x'
                                        */
  real_T zeta_x_P3;                    /* Expression: portnum
                                        * Referenced by: '<S17>/zeta_x'
                                        */
  real_T zeta_x_P4;                    /* Expression: stime
                                        * Referenced by: '<S17>/zeta_x'
                                        */
  real_T zeta_x_P5;                    /* Expression: stype
                                        * Referenced by: '<S17>/zeta_x'
                                        */
  real_T zeta_x_P6;                    /* Expression: btype
                                        * Referenced by: '<S17>/zeta_x'
                                        */
  real_T zeta_y_P1;                    /* Expression: width
                                        * Referenced by: '<S17>/zeta_y'
                                        */
  real_T zeta_y_P2;                    /* Expression: dtype
                                        * Referenced by: '<S17>/zeta_y'
                                        */
  real_T zeta_y_P3;                    /* Expression: portnum
                                        * Referenced by: '<S17>/zeta_y'
                                        */
  real_T zeta_y_P4;                    /* Expression: stime
                                        * Referenced by: '<S17>/zeta_y'
                                        */
  real_T zeta_y_P5;                    /* Expression: stype
                                        * Referenced by: '<S17>/zeta_y'
                                        */
  real_T zeta_y_P6;                    /* Expression: btype
                                        * Referenced by: '<S17>/zeta_y'
                                        */
  real_T T_psi_P1;                     /* Expression: width
                                        * Referenced by: '<S17>/T_psi'
                                        */
  real_T T_psi_P2;                     /* Expression: dtype
                                        * Referenced by: '<S17>/T_psi'
                                        */
  real_T T_psi_P3;                     /* Expression: portnum
                                        * Referenced by: '<S17>/T_psi'
                                        */
  real_T T_psi_P4;                     /* Expression: stime
                                        * Referenced by: '<S17>/T_psi'
                                        */
  real_T T_psi_P5;                     /* Expression: stype
                                        * Referenced by: '<S17>/T_psi'
                                        */
  real_T T_psi_P6;                     /* Expression: btype
                                        * Referenced by: '<S17>/T_psi'
                                        */
  real_T T_x_P1;                       /* Expression: width
                                        * Referenced by: '<S17>/T_x'
                                        */
  real_T T_x_P2;                       /* Expression: dtype
                                        * Referenced by: '<S17>/T_x'
                                        */
  real_T T_x_P3;                       /* Expression: portnum
                                        * Referenced by: '<S17>/T_x'
                                        */
  real_T T_x_P4;                       /* Expression: stime
                                        * Referenced by: '<S17>/T_x'
                                        */
  real_T T_x_P5;                       /* Expression: stype
                                        * Referenced by: '<S17>/T_x'
                                        */
  real_T T_x_P6;                       /* Expression: btype
                                        * Referenced by: '<S17>/T_x'
                                        */
  real_T T_y_P1;                       /* Expression: width
                                        * Referenced by: '<S17>/T_y'
                                        */
  real_T T_y_P2;                       /* Expression: dtype
                                        * Referenced by: '<S17>/T_y'
                                        */
  real_T T_y_P3;                       /* Expression: portnum
                                        * Referenced by: '<S17>/T_y'
                                        */
  real_T T_y_P4;                       /* Expression: stime
                                        * Referenced by: '<S17>/T_y'
                                        */
  real_T T_y_P5;                       /* Expression: stype
                                        * Referenced by: '<S17>/T_y'
                                        */
  real_T T_y_P6;                       /* Expression: btype
                                        * Referenced by: '<S17>/T_y'
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
  P_CoreSubsys_ctrl_custom_T CoreSubsys;/* '<S42>/CoreSubsys' */
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
  real_T odeY[27];
  real_T odeF[3][27];
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
 * '<S8>'   : 'ctrl_custom/Pose'
 * '<S9>'   : 'ctrl_custom/Radians to Degrees'
 * '<S10>'  : 'ctrl_custom/Referance'
 * '<S11>'  : 'ctrl_custom/Thrust allocation'
 * '<S12>'  : 'ctrl_custom/Thruster Parameters '
 * '<S13>'  : 'ctrl_custom/Thruster control '
 * '<S14>'  : 'ctrl_custom/Thruster measurment'
 * '<S15>'  : 'ctrl_custom/gain'
 * '<S16>'  : 'ctrl_custom/Initialization of parameters/Control Gains'
 * '<S17>'  : 'ctrl_custom/Initialization of parameters/Guidance Gains'
 * '<S18>'  : 'ctrl_custom/Initialization of parameters/Observer Gains'
 * '<S19>'  : 'ctrl_custom/Initialization of parameters/Guidance Gains/MATLAB Function'
 * '<S20>'  : 'ctrl_custom/Initialization of parameters/Guidance Gains/MATLAB Function1'
 * '<S21>'  : 'ctrl_custom/Initialization of parameters/Guidance Gains/MATLAB Function2'
 * '<S22>'  : 'ctrl_custom/Nonlinear Passisve Observer/C(nu)*nu'
 * '<S23>'  : 'ctrl_custom/Nonlinear Passisve Observer/D(nu)*nu'
 * '<S24>'  : 'ctrl_custom/Nonlinear Passisve Observer/Rotation matrix in yaw 1'
 * '<S25>'  : 'ctrl_custom/Nonlinear Passisve Observer/Transpose Rotation Matrix'
 * '<S26>'  : 'ctrl_custom/Nonlinear Passisve Observer/Transpose Rotation matrix'
 * '<S27>'  : 'ctrl_custom/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]'
 * '<S28>'  : 'ctrl_custom/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]1'
 * '<S29>'  : 'ctrl_custom/Observer output /b_hat output'
 * '<S30>'  : 'ctrl_custom/Observer output /eta_hat output'
 * '<S31>'  : 'ctrl_custom/Observer output /nu_dot_hat output'
 * '<S32>'  : 'ctrl_custom/Observer output /nu_hat output'
 * '<S33>'  : 'ctrl_custom/PID controller/Transposed rotation  matrix in yaw1'
 * '<S34>'  : 'ctrl_custom/PID controller/Transposed rotation  matrix in yaw2'
 * '<S35>'  : 'ctrl_custom/PID controller/[-inf inf] to [-pi pi]'
 * '<S36>'  : 'ctrl_custom/PID controller/[-inf inf] to [-pi pi]1'
 * '<S37>'  : 'ctrl_custom/Referance/MATLAB Function'
 * '<S38>'  : 'ctrl_custom/Referance/MATLAB Function1'
 * '<S39>'  : 'ctrl_custom/Referance/MATLAB Function2'
 * '<S40>'  : 'ctrl_custom/Referance/[-inf inf] to [-pi pi]'
 * '<S41>'  : 'ctrl_custom/Thrust allocation/MATLAB Function'
 * '<S42>'  : 'ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed'
 * '<S43>'  : 'ctrl_custom/Thrust allocation/Radians to Degrees'
 * '<S44>'  : 'ctrl_custom/Thrust allocation/angle between  [-180 180]'
 * '<S45>'  : 'ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/Degrees to Radians'
 * '<S46>'  : 'ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/Ensuring angle is  [-pi pi]'
 * '<S47>'  : 'ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/MATLAB Function1'
 * '<S48>'  : 'ctrl_custom/Thruster control /Thrust mapped to PWM'
 * '<S49>'  : 'ctrl_custom/Thruster control /Thrust mapped to PWM/MATLAB Function1'
 * '<S50>'  : 'ctrl_custom/Thruster control /Thrust mapped to PWM/MATLAB Function2'
 * '<S51>'  : 'ctrl_custom/Thruster control /Thrust mapped to PWM/MATLAB Function3'
 * '<S52>'  : 'ctrl_custom/Thruster control /Thrust mapped to PWM/MATLAB Function4'
 * '<S53>'  : 'ctrl_custom/Thruster control /Thrust mapped to PWM/MATLAB Function5'
 * '<S54>'  : 'ctrl_custom/Thruster control /Thrust mapped to PWM/MATLAB Function6'
 */
#endif                                 /* RTW_HEADER_ctrl_custom_h_ */

/*========================================================================*
 * NI VeriStand Model Framework code generation
 *
 * Model : ctrl_custom
 * Model version : 1.141
 * VeriStand Model Framework version : 2017.0.0.143 (2017)
 * Source generated on : Wed Jul 26 18:28:29 2017
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
