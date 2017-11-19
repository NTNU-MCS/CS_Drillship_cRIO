/*
 * ctrl_sixaxis2thruster.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ctrl_sixaxis2thruster".
 *
 * Model version              : 1.73
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Sun Nov 19 13:12:34 2017
 *
 * Target selection: NIVeriStand_VxWorks.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ctrl_sixaxis2thruster_h_
#define RTW_HEADER_ctrl_sixaxis2thruster_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef ctrl_sixaxis2thruster_COMMON_INCLUDES_
# define ctrl_sixaxis2thruster_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#endif                                 /* ctrl_sixaxis2thruster_COMMON_INCLUDES_ */

#include "ctrl_sixaxis2thruster_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

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
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
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
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
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
# define rtmIsContinuousTask(rtm, tid) 0
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
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
#define ctrl_sixaxis2thruster_rtModel  RT_MODEL_ctrl_sixaxis2thruste_T

/* Block signals for system '<S1>/MATLAB Function10' */
typedef struct {
  real_T alpha_out;                    /* '<S1>/MATLAB Function10' */
} B_MATLABFunction10_ctrl_sixax_T;

/* Block signals (auto storage) */
typedef struct {
  real_T alpha1_rad;                   /* '<S4>/alpha1_rad' */
  real_T alpha2_rad;                   /* '<S4>/alpha2_rad' */
  real_T alpha3_rad;                   /* '<S4>/alpha3_rad' */
  real_T alpha4_rad;                   /* '<S4>/alpha4_rad' */
  real_T alpha5_rad;                   /* '<S4>/alpha5_rad' */
  real_T alpha6_rad;                   /* '<S4>/alpha6_rad' */
  real_T PosXLeft;                     /* '<Root>/PosXLeft' */
  real_T PosYLeft;                     /* '<Root>/PosYLeft' */
  real_T PosXRight;                    /* '<Root>/PosXRight' */
  real_T PosYRight;                    /* '<Root>/PosYRight' */
  real_T ArrowDown;                    /* '<Root>/ArrowDown' */
  real_T ArrowUp;                      /* '<Root>/ArrowUp' */
  real_T Start;                        /* '<Root>/Start' */
  real_T Product;                      /* '<Root>/Product' */
  real_T Product1;                     /* '<Root>/Product1' */
  real_T y;                            /* '<S5>/MATLAB Function' */
  real_T alpha_infinf[6];              /* '<S3>/MATLAB Function11' */
  B_MATLABFunction10_ctrl_sixax_T sf_MATLABFunction10;/* '<S2>/MATLAB Function10' */
  B_MATLABFunction10_ctrl_sixax_T sf_MATLABFunction10_o;/* '<S1>/MATLAB Function10' */
} B_ctrl_sixaxis2thruster_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T DelayInput1_DSTATE;           /* '<S9>/Delay Input1' */
  real_T DelayInput1_DSTATE_i;         /* '<S10>/Delay Input1' */
  real_T DelayInput1_DSTATE_j;         /* '<S11>/Delay Input1' */
  real_T alpha1_rad_DWORK1;            /* '<S4>/alpha1_rad' */
  real_T alpha2_rad_DWORK1;            /* '<S4>/alpha2_rad' */
  real_T alpha3_rad_DWORK1;            /* '<S4>/alpha3_rad' */
  real_T alpha4_rad_DWORK1;            /* '<S4>/alpha4_rad' */
  real_T alpha5_rad_DWORK1;            /* '<S4>/alpha5_rad' */
  real_T alpha6_rad_DWORK1;            /* '<S4>/alpha6_rad' */
  real_T Memory5_PreviousInput;        /* '<S2>/Memory5' */
  real_T PosXLeft_DWORK1;              /* '<Root>/PosXLeft' */
  real_T PosYLeft_DWORK1;              /* '<Root>/PosYLeft' */
  real_T Memory5_PreviousInput_a;      /* '<S1>/Memory5' */
  real_T PosXRight_DWORK1;             /* '<Root>/PosXRight' */
  real_T PosYRight_DWORK1;             /* '<Root>/PosYRight' */
  real_T alpha_1_DWORK1;               /* '<Root>/alpha_1' */
  real_T alpha_2_DWORK1;               /* '<Root>/alpha_2' */
  real_T alpha_3_DWORK1;               /* '<Root>/alpha_3' */
  real_T ArrowDown_DWORK1;             /* '<Root>/ArrowDown' */
  real_T alpha_5_DWORK1;               /* '<Root>/alpha_5' */
  real_T ArrowUp_DWORK1;               /* '<Root>/ArrowUp' */
  real_T alpha_4_DWORK1;               /* '<Root>/alpha_4' */
  real_T alpha_6_DWORK1;               /* '<Root>/alpha_6' */
  real_T Start_DWORK1;                 /* '<Root>/Start' */
  real_T Memory_PreviousInput;         /* '<S5>/Memory' */
  real_T u_limit_out_DWORK1;           /* '<Root>/u_limit_out' */
  real_T u_1_DWORK1;                   /* '<Root>/u_1' */
  real_T u_2_DWORK1;                   /* '<Root>/u_2' */
  real_T u_3_DWORK1;                   /* '<Root>/u_3' */
  real_T u_4_DWORK1;                   /* '<Root>/u_4' */
  real_T u_5_DWORK1;                   /* '<Root>/u_5' */
  real_T u_6_DWORK1;                   /* '<Root>/u_6' */
  uint8_T alpha1_rad_DWORK2[22];       /* '<S4>/alpha1_rad' */
  uint8_T alpha2_rad_DWORK2[22];       /* '<S4>/alpha2_rad' */
  uint8_T alpha3_rad_DWORK2[22];       /* '<S4>/alpha3_rad' */
  uint8_T alpha4_rad_DWORK2[22];       /* '<S4>/alpha4_rad' */
  uint8_T alpha5_rad_DWORK2[22];       /* '<S4>/alpha5_rad' */
  uint8_T alpha6_rad_DWORK2[22];       /* '<S4>/alpha6_rad' */
  uint8_T PosXLeft_DWORK2[22];         /* '<Root>/PosXLeft' */
  uint8_T PosYLeft_DWORK2[22];         /* '<Root>/PosYLeft' */
  uint8_T PosXRight_DWORK2[22];        /* '<Root>/PosXRight' */
  uint8_T PosYRight_DWORK2[22];        /* '<Root>/PosYRight' */
  uint8_T alpha_1_DWORK2[22];          /* '<Root>/alpha_1' */
  uint8_T alpha_2_DWORK2[22];          /* '<Root>/alpha_2' */
  uint8_T alpha_3_DWORK2[22];          /* '<Root>/alpha_3' */
  uint8_T ArrowDown_DWORK2[22];        /* '<Root>/ArrowDown' */
  uint8_T alpha_5_DWORK2[22];          /* '<Root>/alpha_5' */
  uint8_T ArrowUp_DWORK2[22];          /* '<Root>/ArrowUp' */
  uint8_T alpha_4_DWORK2[22];          /* '<Root>/alpha_4' */
  uint8_T alpha_6_DWORK2[22];          /* '<Root>/alpha_6' */
  uint8_T Start_DWORK2[22];            /* '<Root>/Start' */
  uint8_T u_limit_out_DWORK2[22];      /* '<Root>/u_limit_out' */
  uint8_T u_1_DWORK2[22];              /* '<Root>/u_1' */
  uint8_T u_2_DWORK2[22];              /* '<Root>/u_2' */
  uint8_T u_3_DWORK2[22];              /* '<Root>/u_3' */
  uint8_T u_4_DWORK2[22];              /* '<Root>/u_4' */
  uint8_T u_5_DWORK2[22];              /* '<Root>/u_5' */
  uint8_T u_6_DWORK2[22];              /* '<Root>/u_6' */
} DW_ctrl_sixaxis2thruster_T;

/* Backward compatible GRT Identifiers */
#define rtB                            ctrl_sixaxis2thruster_B
#define BlockIO                        B_ctrl_sixaxis2thruster_T
#define rtP                            ctrl_sixaxis2thruster_P
#define Parameters                     P_ctrl_sixaxis2thruster_T
#define rtDWork                        ctrl_sixaxis2thruster_DW
#define D_Work                         DW_ctrl_sixaxis2thruster_T

/* Parameters (auto storage) */
struct P_ctrl_sixaxis2thruster_T_ {
  real_T u_threshold;                  /* Variable: u_threshold
                                        * Referenced by:
                                        *   '<S1>/Joystick angle threshold'
                                        *   '<S2>/Joystick angle threshold'
                                        */
  real_T DetectIncrease_vinit;         /* Mask Parameter: DetectIncrease_vinit
                                        * Referenced by: '<S9>/Delay Input1'
                                        */
  real_T DetectIncrease1_vinit;        /* Mask Parameter: DetectIncrease1_vinit
                                        * Referenced by: '<S10>/Delay Input1'
                                        */
  real_T DetectIncrease2_vinit;        /* Mask Parameter: DetectIncrease2_vinit
                                        * Referenced by: '<S11>/Delay Input1'
                                        */
  real_T alpha1_rad_P1;                /* Expression: width
                                        * Referenced by: '<S4>/alpha1_rad'
                                        */
  real_T alpha1_rad_P2;                /* Expression: dtype
                                        * Referenced by: '<S4>/alpha1_rad'
                                        */
  real_T alpha1_rad_P3;                /* Expression: portnum
                                        * Referenced by: '<S4>/alpha1_rad'
                                        */
  real_T alpha1_rad_P4;                /* Expression: stime
                                        * Referenced by: '<S4>/alpha1_rad'
                                        */
  real_T alpha1_rad_P5;                /* Expression: stype
                                        * Referenced by: '<S4>/alpha1_rad'
                                        */
  real_T alpha1_rad_P6;                /* Expression: btype
                                        * Referenced by: '<S4>/alpha1_rad'
                                        */
  real_T alpha2_rad_P1;                /* Expression: width
                                        * Referenced by: '<S4>/alpha2_rad'
                                        */
  real_T alpha2_rad_P2;                /* Expression: dtype
                                        * Referenced by: '<S4>/alpha2_rad'
                                        */
  real_T alpha2_rad_P3;                /* Expression: portnum
                                        * Referenced by: '<S4>/alpha2_rad'
                                        */
  real_T alpha2_rad_P4;                /* Expression: stime
                                        * Referenced by: '<S4>/alpha2_rad'
                                        */
  real_T alpha2_rad_P5;                /* Expression: stype
                                        * Referenced by: '<S4>/alpha2_rad'
                                        */
  real_T alpha2_rad_P6;                /* Expression: btype
                                        * Referenced by: '<S4>/alpha2_rad'
                                        */
  real_T alpha3_rad_P1;                /* Expression: width
                                        * Referenced by: '<S4>/alpha3_rad'
                                        */
  real_T alpha3_rad_P2;                /* Expression: dtype
                                        * Referenced by: '<S4>/alpha3_rad'
                                        */
  real_T alpha3_rad_P3;                /* Expression: portnum
                                        * Referenced by: '<S4>/alpha3_rad'
                                        */
  real_T alpha3_rad_P4;                /* Expression: stime
                                        * Referenced by: '<S4>/alpha3_rad'
                                        */
  real_T alpha3_rad_P5;                /* Expression: stype
                                        * Referenced by: '<S4>/alpha3_rad'
                                        */
  real_T alpha3_rad_P6;                /* Expression: btype
                                        * Referenced by: '<S4>/alpha3_rad'
                                        */
  real_T alpha4_rad_P1;                /* Expression: width
                                        * Referenced by: '<S4>/alpha4_rad'
                                        */
  real_T alpha4_rad_P2;                /* Expression: dtype
                                        * Referenced by: '<S4>/alpha4_rad'
                                        */
  real_T alpha4_rad_P3;                /* Expression: portnum
                                        * Referenced by: '<S4>/alpha4_rad'
                                        */
  real_T alpha4_rad_P4;                /* Expression: stime
                                        * Referenced by: '<S4>/alpha4_rad'
                                        */
  real_T alpha4_rad_P5;                /* Expression: stype
                                        * Referenced by: '<S4>/alpha4_rad'
                                        */
  real_T alpha4_rad_P6;                /* Expression: btype
                                        * Referenced by: '<S4>/alpha4_rad'
                                        */
  real_T alpha5_rad_P1;                /* Expression: width
                                        * Referenced by: '<S4>/alpha5_rad'
                                        */
  real_T alpha5_rad_P2;                /* Expression: dtype
                                        * Referenced by: '<S4>/alpha5_rad'
                                        */
  real_T alpha5_rad_P3;                /* Expression: portnum
                                        * Referenced by: '<S4>/alpha5_rad'
                                        */
  real_T alpha5_rad_P4;                /* Expression: stime
                                        * Referenced by: '<S4>/alpha5_rad'
                                        */
  real_T alpha5_rad_P5;                /* Expression: stype
                                        * Referenced by: '<S4>/alpha5_rad'
                                        */
  real_T alpha5_rad_P6;                /* Expression: btype
                                        * Referenced by: '<S4>/alpha5_rad'
                                        */
  real_T alpha6_rad_P1;                /* Expression: width
                                        * Referenced by: '<S4>/alpha6_rad'
                                        */
  real_T alpha6_rad_P2;                /* Expression: dtype
                                        * Referenced by: '<S4>/alpha6_rad'
                                        */
  real_T alpha6_rad_P3;                /* Expression: portnum
                                        * Referenced by: '<S4>/alpha6_rad'
                                        */
  real_T alpha6_rad_P4;                /* Expression: stime
                                        * Referenced by: '<S4>/alpha6_rad'
                                        */
  real_T alpha6_rad_P5;                /* Expression: stype
                                        * Referenced by: '<S4>/alpha6_rad'
                                        */
  real_T alpha6_rad_P6;                /* Expression: btype
                                        * Referenced by: '<S4>/alpha6_rad'
                                        */
  real_T Memory5_X0;                   /* Expression: 0
                                        * Referenced by: '<S2>/Memory5'
                                        */
  real_T PosXLeft_P1;                  /* Expression: width
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  real_T PosXLeft_P2;                  /* Expression: dtype
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  real_T PosXLeft_P3;                  /* Expression: portnum
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  real_T PosXLeft_P4;                  /* Expression: stime
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  real_T PosXLeft_P5;                  /* Expression: stype
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  real_T PosXLeft_P6;                  /* Expression: btype
                                        * Referenced by: '<Root>/PosXLeft'
                                        */
  real_T PosYLeft_P1;                  /* Expression: width
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  real_T PosYLeft_P2;                  /* Expression: dtype
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  real_T PosYLeft_P3;                  /* Expression: portnum
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  real_T PosYLeft_P4;                  /* Expression: stime
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  real_T PosYLeft_P5;                  /* Expression: stype
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  real_T PosYLeft_P6;                  /* Expression: btype
                                        * Referenced by: '<Root>/PosYLeft'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S2>/Gain'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -1
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Memory5_X0_i;                 /* Expression: 0
                                        * Referenced by: '<S1>/Memory5'
                                        */
  real_T PosXRight_P1;                 /* Expression: width
                                        * Referenced by: '<Root>/PosXRight'
                                        */
  real_T PosXRight_P2;                 /* Expression: dtype
                                        * Referenced by: '<Root>/PosXRight'
                                        */
  real_T PosXRight_P3;                 /* Expression: portnum
                                        * Referenced by: '<Root>/PosXRight'
                                        */
  real_T PosXRight_P4;                 /* Expression: stime
                                        * Referenced by: '<Root>/PosXRight'
                                        */
  real_T PosXRight_P5;                 /* Expression: stype
                                        * Referenced by: '<Root>/PosXRight'
                                        */
  real_T PosXRight_P6;                 /* Expression: btype
                                        * Referenced by: '<Root>/PosXRight'
                                        */
  real_T PosYRight_P1;                 /* Expression: width
                                        * Referenced by: '<Root>/PosYRight'
                                        */
  real_T PosYRight_P2;                 /* Expression: dtype
                                        * Referenced by: '<Root>/PosYRight'
                                        */
  real_T PosYRight_P3;                 /* Expression: portnum
                                        * Referenced by: '<Root>/PosYRight'
                                        */
  real_T PosYRight_P4;                 /* Expression: stime
                                        * Referenced by: '<Root>/PosYRight'
                                        */
  real_T PosYRight_P5;                 /* Expression: stype
                                        * Referenced by: '<Root>/PosYRight'
                                        */
  real_T PosYRight_P6;                 /* Expression: btype
                                        * Referenced by: '<Root>/PosYRight'
                                        */
  real_T Gain_Gain_k;                  /* Expression: -1
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: 1
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T Saturation_LowerSat_h;        /* Expression: -1
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T alpha_1_P1;                   /* Expression: width
                                        * Referenced by: '<Root>/alpha_1'
                                        */
  real_T alpha_1_P2;                   /* Expression: dtype
                                        * Referenced by: '<Root>/alpha_1'
                                        */
  real_T alpha_1_P3;                   /* Expression: portnum
                                        * Referenced by: '<Root>/alpha_1'
                                        */
  real_T alpha_1_P4;                   /* Expression: stime
                                        * Referenced by: '<Root>/alpha_1'
                                        */
  real_T alpha_1_P5;                   /* Expression: stype
                                        * Referenced by: '<Root>/alpha_1'
                                        */
  real_T alpha_1_P6;                   /* Expression: btype
                                        * Referenced by: '<Root>/alpha_1'
                                        */
  real_T alpha_2_P1;                   /* Expression: width
                                        * Referenced by: '<Root>/alpha_2'
                                        */
  real_T alpha_2_P2;                   /* Expression: dtype
                                        * Referenced by: '<Root>/alpha_2'
                                        */
  real_T alpha_2_P3;                   /* Expression: portnum
                                        * Referenced by: '<Root>/alpha_2'
                                        */
  real_T alpha_2_P4;                   /* Expression: stime
                                        * Referenced by: '<Root>/alpha_2'
                                        */
  real_T alpha_2_P5;                   /* Expression: stype
                                        * Referenced by: '<Root>/alpha_2'
                                        */
  real_T alpha_2_P6;                   /* Expression: btype
                                        * Referenced by: '<Root>/alpha_2'
                                        */
  real_T alpha_3_P1;                   /* Expression: width
                                        * Referenced by: '<Root>/alpha_3'
                                        */
  real_T alpha_3_P2;                   /* Expression: dtype
                                        * Referenced by: '<Root>/alpha_3'
                                        */
  real_T alpha_3_P3;                   /* Expression: portnum
                                        * Referenced by: '<Root>/alpha_3'
                                        */
  real_T alpha_3_P4;                   /* Expression: stime
                                        * Referenced by: '<Root>/alpha_3'
                                        */
  real_T alpha_3_P5;                   /* Expression: stype
                                        * Referenced by: '<Root>/alpha_3'
                                        */
  real_T alpha_3_P6;                   /* Expression: btype
                                        * Referenced by: '<Root>/alpha_3'
                                        */
  real_T ArrowDown_P1;                 /* Expression: width
                                        * Referenced by: '<Root>/ArrowDown'
                                        */
  real_T ArrowDown_P2;                 /* Expression: dtype
                                        * Referenced by: '<Root>/ArrowDown'
                                        */
  real_T ArrowDown_P3;                 /* Expression: portnum
                                        * Referenced by: '<Root>/ArrowDown'
                                        */
  real_T ArrowDown_P4;                 /* Expression: stime
                                        * Referenced by: '<Root>/ArrowDown'
                                        */
  real_T ArrowDown_P5;                 /* Expression: stype
                                        * Referenced by: '<Root>/ArrowDown'
                                        */
  real_T ArrowDown_P6;                 /* Expression: btype
                                        * Referenced by: '<Root>/ArrowDown'
                                        */
  real_T alpha_5_P1;                   /* Expression: width
                                        * Referenced by: '<Root>/alpha_5'
                                        */
  real_T alpha_5_P2;                   /* Expression: dtype
                                        * Referenced by: '<Root>/alpha_5'
                                        */
  real_T alpha_5_P3;                   /* Expression: portnum
                                        * Referenced by: '<Root>/alpha_5'
                                        */
  real_T alpha_5_P4;                   /* Expression: stime
                                        * Referenced by: '<Root>/alpha_5'
                                        */
  real_T alpha_5_P5;                   /* Expression: stype
                                        * Referenced by: '<Root>/alpha_5'
                                        */
  real_T alpha_5_P6;                   /* Expression: btype
                                        * Referenced by: '<Root>/alpha_5'
                                        */
  real_T ArrowUp_P1;                   /* Expression: width
                                        * Referenced by: '<Root>/ArrowUp'
                                        */
  real_T ArrowUp_P2;                   /* Expression: dtype
                                        * Referenced by: '<Root>/ArrowUp'
                                        */
  real_T ArrowUp_P3;                   /* Expression: portnum
                                        * Referenced by: '<Root>/ArrowUp'
                                        */
  real_T ArrowUp_P4;                   /* Expression: stime
                                        * Referenced by: '<Root>/ArrowUp'
                                        */
  real_T ArrowUp_P5;                   /* Expression: stype
                                        * Referenced by: '<Root>/ArrowUp'
                                        */
  real_T ArrowUp_P6;                   /* Expression: btype
                                        * Referenced by: '<Root>/ArrowUp'
                                        */
  real_T alpha_4_P1;                   /* Expression: width
                                        * Referenced by: '<Root>/alpha_4'
                                        */
  real_T alpha_4_P2;                   /* Expression: dtype
                                        * Referenced by: '<Root>/alpha_4'
                                        */
  real_T alpha_4_P3;                   /* Expression: portnum
                                        * Referenced by: '<Root>/alpha_4'
                                        */
  real_T alpha_4_P4;                   /* Expression: stime
                                        * Referenced by: '<Root>/alpha_4'
                                        */
  real_T alpha_4_P5;                   /* Expression: stype
                                        * Referenced by: '<Root>/alpha_4'
                                        */
  real_T alpha_4_P6;                   /* Expression: btype
                                        * Referenced by: '<Root>/alpha_4'
                                        */
  real_T alpha_6_P1;                   /* Expression: width
                                        * Referenced by: '<Root>/alpha_6'
                                        */
  real_T alpha_6_P2;                   /* Expression: dtype
                                        * Referenced by: '<Root>/alpha_6'
                                        */
  real_T alpha_6_P3;                   /* Expression: portnum
                                        * Referenced by: '<Root>/alpha_6'
                                        */
  real_T alpha_6_P4;                   /* Expression: stime
                                        * Referenced by: '<Root>/alpha_6'
                                        */
  real_T alpha_6_P5;                   /* Expression: stype
                                        * Referenced by: '<Root>/alpha_6'
                                        */
  real_T alpha_6_P6;                   /* Expression: btype
                                        * Referenced by: '<Root>/alpha_6'
                                        */
  real_T Start_P1;                     /* Expression: width
                                        * Referenced by: '<Root>/Start'
                                        */
  real_T Start_P2;                     /* Expression: dtype
                                        * Referenced by: '<Root>/Start'
                                        */
  real_T Start_P3;                     /* Expression: portnum
                                        * Referenced by: '<Root>/Start'
                                        */
  real_T Start_P4;                     /* Expression: stime
                                        * Referenced by: '<Root>/Start'
                                        */
  real_T Start_P5;                     /* Expression: stype
                                        * Referenced by: '<Root>/Start'
                                        */
  real_T Start_P6;                     /* Expression: btype
                                        * Referenced by: '<Root>/Start'
                                        */
  real_T Memory_X0;                    /* Expression: 0
                                        * Referenced by: '<S5>/Memory'
                                        */
  real_T u_limit_out_P1;               /* Expression: width
                                        * Referenced by: '<Root>/u_limit_out'
                                        */
  real_T u_limit_out_P2;               /* Expression: dtype
                                        * Referenced by: '<Root>/u_limit_out'
                                        */
  real_T u_limit_out_P3;               /* Expression: portnum
                                        * Referenced by: '<Root>/u_limit_out'
                                        */
  real_T u_limit_out_P4;               /* Expression: stime
                                        * Referenced by: '<Root>/u_limit_out'
                                        */
  real_T u_limit_out_P5;               /* Expression: stype
                                        * Referenced by: '<Root>/u_limit_out'
                                        */
  real_T u_limit_out_P6;               /* Expression: btype
                                        * Referenced by: '<Root>/u_limit_out'
                                        */
  real_T u_1_P1;                       /* Expression: width
                                        * Referenced by: '<Root>/u_1'
                                        */
  real_T u_1_P2;                       /* Expression: dtype
                                        * Referenced by: '<Root>/u_1'
                                        */
  real_T u_1_P3;                       /* Expression: portnum
                                        * Referenced by: '<Root>/u_1'
                                        */
  real_T u_1_P4;                       /* Expression: stime
                                        * Referenced by: '<Root>/u_1'
                                        */
  real_T u_1_P5;                       /* Expression: stype
                                        * Referenced by: '<Root>/u_1'
                                        */
  real_T u_1_P6;                       /* Expression: btype
                                        * Referenced by: '<Root>/u_1'
                                        */
  real_T u_2_P1;                       /* Expression: width
                                        * Referenced by: '<Root>/u_2'
                                        */
  real_T u_2_P2;                       /* Expression: dtype
                                        * Referenced by: '<Root>/u_2'
                                        */
  real_T u_2_P3;                       /* Expression: portnum
                                        * Referenced by: '<Root>/u_2'
                                        */
  real_T u_2_P4;                       /* Expression: stime
                                        * Referenced by: '<Root>/u_2'
                                        */
  real_T u_2_P5;                       /* Expression: stype
                                        * Referenced by: '<Root>/u_2'
                                        */
  real_T u_2_P6;                       /* Expression: btype
                                        * Referenced by: '<Root>/u_2'
                                        */
  real_T u_3_P1;                       /* Expression: width
                                        * Referenced by: '<Root>/u_3'
                                        */
  real_T u_3_P2;                       /* Expression: dtype
                                        * Referenced by: '<Root>/u_3'
                                        */
  real_T u_3_P3;                       /* Expression: portnum
                                        * Referenced by: '<Root>/u_3'
                                        */
  real_T u_3_P4;                       /* Expression: stime
                                        * Referenced by: '<Root>/u_3'
                                        */
  real_T u_3_P5;                       /* Expression: stype
                                        * Referenced by: '<Root>/u_3'
                                        */
  real_T u_3_P6;                       /* Expression: btype
                                        * Referenced by: '<Root>/u_3'
                                        */
  real_T u_4_P1;                       /* Expression: width
                                        * Referenced by: '<Root>/u_4'
                                        */
  real_T u_4_P2;                       /* Expression: dtype
                                        * Referenced by: '<Root>/u_4'
                                        */
  real_T u_4_P3;                       /* Expression: portnum
                                        * Referenced by: '<Root>/u_4'
                                        */
  real_T u_4_P4;                       /* Expression: stime
                                        * Referenced by: '<Root>/u_4'
                                        */
  real_T u_4_P5;                       /* Expression: stype
                                        * Referenced by: '<Root>/u_4'
                                        */
  real_T u_4_P6;                       /* Expression: btype
                                        * Referenced by: '<Root>/u_4'
                                        */
  real_T u_5_P1;                       /* Expression: width
                                        * Referenced by: '<Root>/u_5'
                                        */
  real_T u_5_P2;                       /* Expression: dtype
                                        * Referenced by: '<Root>/u_5'
                                        */
  real_T u_5_P3;                       /* Expression: portnum
                                        * Referenced by: '<Root>/u_5'
                                        */
  real_T u_5_P4;                       /* Expression: stime
                                        * Referenced by: '<Root>/u_5'
                                        */
  real_T u_5_P5;                       /* Expression: stype
                                        * Referenced by: '<Root>/u_5'
                                        */
  real_T u_5_P6;                       /* Expression: btype
                                        * Referenced by: '<Root>/u_5'
                                        */
  real_T u_6_P1;                       /* Expression: width
                                        * Referenced by: '<Root>/u_6'
                                        */
  real_T u_6_P2;                       /* Expression: dtype
                                        * Referenced by: '<Root>/u_6'
                                        */
  real_T u_6_P3;                       /* Expression: portnum
                                        * Referenced by: '<Root>/u_6'
                                        */
  real_T u_6_P4;                       /* Expression: stime
                                        * Referenced by: '<Root>/u_6'
                                        */
  real_T u_6_P5;                       /* Expression: stype
                                        * Referenced by: '<Root>/u_6'
                                        */
  real_T u_6_P6;                       /* Expression: btype
                                        * Referenced by: '<Root>/u_6'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ctrl_sixaxis2thruster_T {
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
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_ctrl_sixaxis2thruster_T ctrl_sixaxis2thruster_P;

/* Block signals (auto storage) */
extern B_ctrl_sixaxis2thruster_T ctrl_sixaxis2thruster_B;

/* Block states (auto storage) */
extern DW_ctrl_sixaxis2thruster_T ctrl_sixaxis2thruster_DW;

/*====================*
 * External functions *
 *====================*/
extern ctrl_sixaxis2thruster_rtModel *ctrl_sixaxis2thruster(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_ctrl_sixaxis2thruste_T *const ctrl_sixaxis2thruster_M;

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
 * '<Root>' : 'ctrl_sixaxis2thruster'
 * '<S1>'   : 'ctrl_sixaxis2thruster/Back'
 * '<S2>'   : 'ctrl_sixaxis2thruster/Front'
 * '<S3>'   : 'ctrl_sixaxis2thruster/Projection [-pi,pi] to [-inf,inf] + shortest rotation1'
 * '<S4>'   : 'ctrl_sixaxis2thruster/alpha_m'
 * '<S5>'   : 'ctrl_sixaxis2thruster/u_limit'
 * '<S6>'   : 'ctrl_sixaxis2thruster/Back/MATLAB Function10'
 * '<S7>'   : 'ctrl_sixaxis2thruster/Front/MATLAB Function10'
 * '<S8>'   : 'ctrl_sixaxis2thruster/Projection [-pi,pi] to [-inf,inf] + shortest rotation1/MATLAB Function11'
 * '<S9>'   : 'ctrl_sixaxis2thruster/u_limit/Detect Increase'
 * '<S10>'  : 'ctrl_sixaxis2thruster/u_limit/Detect Increase1'
 * '<S11>'  : 'ctrl_sixaxis2thruster/u_limit/Detect Increase2'
 * '<S12>'  : 'ctrl_sixaxis2thruster/u_limit/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_ctrl_sixaxis2thruster_h_ */

/*========================================================================*
 * NI VeriStand Model Framework code generation
 *
 * Model : ctrl_sixaxis2thruster
 * Model version : 1.73
 * VeriStand Model Framework version : 2017.0.0.143 (2017)
 * Source generated on : Sun Nov 19 13:12:33 2017
 *========================================================================*/
#if !defined(NI_HEADER_ctrl_sixaxis2thruster_h_)
#define NI_HEADER_ctrl_sixaxis2thruster_h_
#ifdef NI_ROOTMODEL_ctrl_sixaxis2thruster

/* main model definitions enabled by makefile */
#include "ni_pglobals.h"
#ifndef NI_VERISTAND_MODELDATAFILE
#ifdef NI_VERISTAND_MAINMODELFILE

/* ctrl_sixaxis2thruster.c definitions */
int READSIDE = 0;
int tid = 0;

#ifdef MULTITASKING

/* multi-rate model */
P_ctrl_sixaxis2thruster_T rtParameter[NUMST+!TID01EQ];
P_ctrl_sixaxis2thruster_T *param_lookup[NUMST][2] = {
  { &rtParameter[0], &rtParameter[1] },
};

#else

/* single-rate model */
P_ctrl_sixaxis2thruster_T rtParameter[2];

#endif

#else

extern int READSIDE;

#ifdef MULTITASKING

/* multi-rate model */
extern int tid;
extern P_ctrl_sixaxis2thruster_T* param_lookup[NUMST][2];

#else

/* single-rate model */
extern P_ctrl_sixaxis2thruster_T rtParameter[];

#endif
#endif

/* Declare parameter macros */
#define _NI_DEFINE_PARAMS_DBL_BUFFER_
#include "ni_pglobals.h"
#endif
#endif
#endif                                 /* NI_HEADER_ctrl_sixaxis2thruster_h_ */
