/*
 * ctrl_sixaxis2thruster.c
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

#include "ctrl_sixaxis2thruster.h"
#include "ctrl_sixaxis2thruster_private.h"

/* Block signals (auto storage) */
B_ctrl_sixaxis2thruster_T ctrl_sixaxis2thruster_B;

/* Block states (auto storage) */
DW_ctrl_sixaxis2thruster_T ctrl_sixaxis2thruster_DW;

/* Real-time model */
RT_MODEL_ctrl_sixaxis2thruste_T ctrl_sixaxis2thruster_M_;
RT_MODEL_ctrl_sixaxis2thruste_T *const ctrl_sixaxis2thruster_M =
  &ctrl_sixaxis2thruster_M_;

/*
 * Output and update for atomic system:
 *    '<S1>/MATLAB Function10'
 *    '<S2>/MATLAB Function10'
 */
void ctrl_sixaxis2t_MATLABFunction10(real_T rtu_alpha_prev, real_T rtu_u, real_T
  rtu_alpha, real_T rtu_u_threshold, B_MATLABFunction10_ctrl_sixax_T *localB)
{
  /* MATLAB Function 'Back/MATLAB Function10': '<S6>:1' */
  if (rtu_u < rtu_u_threshold) {
    /* '<S6>:1:4' */
    /* '<S6>:1:5' */
    localB->alpha_out = rtu_alpha_prev;
  } else {
    /* '<S6>:1:7' */
    localB->alpha_out = rtu_alpha;
  }
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(u0_0, u1_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Model output function */
static void ctrl_sixaxis2thruster_output(void)
{
  int32_T i;
  real_T rtb_Sqrt;
  real_T rtb_Gain;
  real_T rtb_Saturation;
  real_T rtb_TmpSignalConversionAtSFunct[6];
  real_T rtb_TmpSignalConversionAtSFun_h[6];

  /* Gain: '<S2>/Gain' */
  rtb_Sqrt = ctrl_sixaxis2thruster_P.Gain_Gain *
    ctrl_sixaxis2thruster_B.PosYLeft;

  /* Sqrt: '<S2>/Sqrt' incorporates:
   *  Math: '<S2>/Math Function'
   *  Math: '<S2>/Math Function1'
   *  Sum: '<S2>/Sum'
   */
  rtb_Saturation = sqrt(ctrl_sixaxis2thruster_B.PosXLeft *
                        ctrl_sixaxis2thruster_B.PosXLeft + rtb_Sqrt * rtb_Sqrt);

  /* Saturate: '<S2>/Saturation' */
  if (rtb_Saturation > ctrl_sixaxis2thruster_P.Saturation_UpperSat) {
    rtb_Saturation = ctrl_sixaxis2thruster_P.Saturation_UpperSat;
  } else {
    if (rtb_Saturation < ctrl_sixaxis2thruster_P.Saturation_LowerSat) {
      rtb_Saturation = ctrl_sixaxis2thruster_P.Saturation_LowerSat;
    }
  }

  /* End of Saturate: '<S2>/Saturation' */

  /* MATLAB Function: '<S2>/MATLAB Function10' incorporates:
   *  Constant: '<S2>/Joystick angle threshold'
   *  Memory: '<S2>/Memory5'
   *  Trigonometry: '<S2>/Trigonometric Function1'
   */
  ctrl_sixaxis2t_MATLABFunction10(ctrl_sixaxis2thruster_DW.Memory5_PreviousInput,
    rtb_Saturation, rt_atan2d_snf(ctrl_sixaxis2thruster_B.PosXLeft, rtb_Sqrt),
    ctrl_sixaxis2thruster_P.u_threshold,
    &ctrl_sixaxis2thruster_B.sf_MATLABFunction10);

  /* Gain: '<S1>/Gain' */
  rtb_Gain = ctrl_sixaxis2thruster_P.Gain_Gain_k *
    ctrl_sixaxis2thruster_B.PosYRight;

  /* Sqrt: '<S1>/Sqrt' incorporates:
   *  Math: '<S1>/Math Function'
   *  Math: '<S1>/Math Function1'
   *  Sum: '<S1>/Sum'
   */
  rtb_Sqrt = sqrt(ctrl_sixaxis2thruster_B.PosXRight *
                  ctrl_sixaxis2thruster_B.PosXRight + rtb_Gain * rtb_Gain);

  /* Saturate: '<S1>/Saturation' */
  if (rtb_Sqrt > ctrl_sixaxis2thruster_P.Saturation_UpperSat_h) {
    rtb_Sqrt = ctrl_sixaxis2thruster_P.Saturation_UpperSat_h;
  } else {
    if (rtb_Sqrt < ctrl_sixaxis2thruster_P.Saturation_LowerSat_h) {
      rtb_Sqrt = ctrl_sixaxis2thruster_P.Saturation_LowerSat_h;
    }
  }

  /* End of Saturate: '<S1>/Saturation' */

  /* MATLAB Function: '<S1>/MATLAB Function10' incorporates:
   *  Constant: '<S1>/Joystick angle threshold'
   *  Memory: '<S1>/Memory5'
   *  Trigonometry: '<S1>/Trigonometric Function1'
   */
  ctrl_sixaxis2t_MATLABFunction10
    (ctrl_sixaxis2thruster_DW.Memory5_PreviousInput_a, rtb_Sqrt, rt_atan2d_snf
     (ctrl_sixaxis2thruster_B.PosXRight, rtb_Gain),
     ctrl_sixaxis2thruster_P.u_threshold,
     &ctrl_sixaxis2thruster_B.sf_MATLABFunction10_o);

  /* SignalConversion: '<S8>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  MATLAB Function: '<S3>/MATLAB Function11'
   */
  rtb_TmpSignalConversionAtSFunct[0] = ctrl_sixaxis2thruster_B.alpha1_rad;
  rtb_TmpSignalConversionAtSFunct[1] = ctrl_sixaxis2thruster_B.alpha2_rad;
  rtb_TmpSignalConversionAtSFunct[2] = ctrl_sixaxis2thruster_B.alpha3_rad;
  rtb_TmpSignalConversionAtSFunct[3] = ctrl_sixaxis2thruster_B.alpha4_rad;
  rtb_TmpSignalConversionAtSFunct[4] = ctrl_sixaxis2thruster_B.alpha5_rad;
  rtb_TmpSignalConversionAtSFunct[5] = ctrl_sixaxis2thruster_B.alpha6_rad;

  /* SignalConversion: '<S8>/TmpSignal ConversionAt SFunction Inport2' incorporates:
   *  MATLAB Function: '<S3>/MATLAB Function11'
   */
  rtb_TmpSignalConversionAtSFun_h[0] =
    ctrl_sixaxis2thruster_B.sf_MATLABFunction10.alpha_out;
  rtb_TmpSignalConversionAtSFun_h[1] =
    ctrl_sixaxis2thruster_B.sf_MATLABFunction10.alpha_out;
  rtb_TmpSignalConversionAtSFun_h[2] =
    ctrl_sixaxis2thruster_B.sf_MATLABFunction10.alpha_out;
  rtb_TmpSignalConversionAtSFun_h[3] =
    ctrl_sixaxis2thruster_B.sf_MATLABFunction10_o.alpha_out;
  rtb_TmpSignalConversionAtSFun_h[4] =
    ctrl_sixaxis2thruster_B.sf_MATLABFunction10_o.alpha_out;
  rtb_TmpSignalConversionAtSFun_h[5] =
    ctrl_sixaxis2thruster_B.sf_MATLABFunction10_o.alpha_out;

  /* MATLAB Function: '<S3>/MATLAB Function11' */
  /* MATLAB Function 'Projection [-pi,pi] to [-inf,inf] + shortest rotation1/MATLAB Function11': '<S8>:1' */
  /* '<S8>:1:1' */
  /* '<S8>:1:4' */
  for (i = 0; i < 6; i++) {
    /* '<S8>:1:4' */
    /*  current rotation */
    /* '<S8>:1:6' */
    /* '<S8>:1:8' */
    if (rtb_TmpSignalConversionAtSFunct[i] < 0.0) {
      rtb_Gain = -1.0;
    } else if (rtb_TmpSignalConversionAtSFunct[i] > 0.0) {
      rtb_Gain = 1.0;
    } else if (rtb_TmpSignalConversionAtSFunct[i] == 0.0) {
      rtb_Gain = 0.0;
    } else {
      rtb_Gain = rtb_TmpSignalConversionAtSFunct[i];
    }

    ctrl_sixaxis2thruster_B.alpha_infinf[i] = floor((fabs
      (rtb_TmpSignalConversionAtSFunct[i]) + 3.1415926535897931) /
      6.2831853071795862) * rtb_Gain * 6.2831853071795862 +
      rtb_TmpSignalConversionAtSFun_h[i];

    /* '<S8>:1:10' */
    rtb_Gain = ctrl_sixaxis2thruster_B.alpha_infinf[i] -
      rtb_TmpSignalConversionAtSFunct[i];

    /*  Shortest rotation */
    if (fabs(rtb_Gain) > 3.1415926535897931) {
      /* '<S8>:1:13' */
      /* '<S8>:1:14' */
      if (rtb_Gain < 0.0) {
        rtb_Gain = -1.0;
      } else if (rtb_Gain > 0.0) {
        rtb_Gain = 1.0;
      } else {
        if (rtb_Gain == 0.0) {
          rtb_Gain = 0.0;
        }
      }

      ctrl_sixaxis2thruster_B.alpha_infinf[i] -= rtb_Gain * 2.0 *
        3.1415926535897931;
    }
  }

  /* MATLAB Function: '<S5>/MATLAB Function' incorporates:
   *  Memory: '<S5>/Memory'
   *  RelationalOperator: '<S10>/FixPt Relational Operator'
   *  RelationalOperator: '<S11>/FixPt Relational Operator'
   *  RelationalOperator: '<S9>/FixPt Relational Operator'
   *  UnitDelay: '<S10>/Delay Input1'
   *  UnitDelay: '<S11>/Delay Input1'
   *  UnitDelay: '<S9>/Delay Input1'
   */
  /* MATLAB Function 'u_limit/MATLAB Function': '<S12>:1' */
  /* '<S12>:1:5' */
  rtb_Gain = ctrl_sixaxis2thruster_DW.Memory_PreviousInput;
  if (ctrl_sixaxis2thruster_B.ArrowUp >
      ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE) {
    /* '<S12>:1:7' */
    /* '<S12>:1:8' */
    rtb_Gain = ctrl_sixaxis2thruster_DW.Memory_PreviousInput + 0.05;
    if (ctrl_sixaxis2thruster_DW.Memory_PreviousInput + 0.05 > 1.0) {
      /* '<S12>:1:10' */
      /* '<S12>:1:11' */
      rtb_Gain = 1.0;
    }
  }

  if (ctrl_sixaxis2thruster_B.ArrowDown >
      ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE_i) {
    /* '<S12>:1:15' */
    /* '<S12>:1:16' */
    rtb_Gain -= 0.05;
    if (rtb_Gain < -1.0) {
      /* '<S12>:1:18' */
      /* '<S12>:1:19' */
      rtb_Gain = -1.0;
    }
  }

  if (ctrl_sixaxis2thruster_B.Start >
      ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE_j) {
    /* '<S12>:1:23' */
    /* '<S12>:1:24' */
    rtb_Gain = 0.0;
  }

  /* '<S12>:1:29' */
  ctrl_sixaxis2thruster_B.y = rtb_Gain;

  /* End of MATLAB Function: '<S5>/MATLAB Function' */

  /* Product: '<Root>/Product' */
  ctrl_sixaxis2thruster_B.Product = ctrl_sixaxis2thruster_B.y * rtb_Saturation;

  /* Product: '<Root>/Product1' */
  ctrl_sixaxis2thruster_B.Product1 = ctrl_sixaxis2thruster_B.y * rtb_Sqrt;
}

/* Model update function */
static void ctrl_sixaxis2thruster_update(void)
{
  /* Update for Memory: '<S2>/Memory5' */
  ctrl_sixaxis2thruster_DW.Memory5_PreviousInput =
    ctrl_sixaxis2thruster_B.sf_MATLABFunction10.alpha_out;

  /* Update for Memory: '<S1>/Memory5' */
  ctrl_sixaxis2thruster_DW.Memory5_PreviousInput_a =
    ctrl_sixaxis2thruster_B.sf_MATLABFunction10_o.alpha_out;

  /* Update for UnitDelay: '<S9>/Delay Input1' */
  ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE = ctrl_sixaxis2thruster_B.ArrowUp;

  /* Update for UnitDelay: '<S10>/Delay Input1' */
  ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE_i =
    ctrl_sixaxis2thruster_B.ArrowDown;

  /* Update for UnitDelay: '<S11>/Delay Input1' */
  ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE_j = ctrl_sixaxis2thruster_B.Start;

  /* Update for Memory: '<S5>/Memory' */
  ctrl_sixaxis2thruster_DW.Memory_PreviousInput = ctrl_sixaxis2thruster_B.y;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++ctrl_sixaxis2thruster_M->Timing.clockTick0)) {
    ++ctrl_sixaxis2thruster_M->Timing.clockTickH0;
  }

  ctrl_sixaxis2thruster_M->Timing.t[0] =
    ctrl_sixaxis2thruster_M->Timing.clockTick0 *
    ctrl_sixaxis2thruster_M->Timing.stepSize0 +
    ctrl_sixaxis2thruster_M->Timing.clockTickH0 *
    ctrl_sixaxis2thruster_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void ctrl_sixaxis2thruster_initialize(void)
{
  /* InitializeConditions for Memory: '<S2>/Memory5' */
  ctrl_sixaxis2thruster_DW.Memory5_PreviousInput =
    ctrl_sixaxis2thruster_P.Memory5_X0;

  /* InitializeConditions for Memory: '<S1>/Memory5' */
  ctrl_sixaxis2thruster_DW.Memory5_PreviousInput_a =
    ctrl_sixaxis2thruster_P.Memory5_X0_i;

  /* InitializeConditions for UnitDelay: '<S9>/Delay Input1' */
  ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE =
    ctrl_sixaxis2thruster_P.DetectIncrease_vinit;

  /* InitializeConditions for UnitDelay: '<S10>/Delay Input1' */
  ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE_i =
    ctrl_sixaxis2thruster_P.DetectIncrease1_vinit;

  /* InitializeConditions for UnitDelay: '<S11>/Delay Input1' */
  ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE_j =
    ctrl_sixaxis2thruster_P.DetectIncrease2_vinit;

  /* InitializeConditions for Memory: '<S5>/Memory' */
  ctrl_sixaxis2thruster_DW.Memory_PreviousInput =
    ctrl_sixaxis2thruster_P.Memory_X0;
}

/* Model terminate function */
static void ctrl_sixaxis2thruster_terminate(void)
{
  /* (no terminate code required) */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  ctrl_sixaxis2thruster_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  ctrl_sixaxis2thruster_update();
  UNUSED_PARAMETER(tid);
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
  ctrl_sixaxis2thruster_initialize();
}

void MdlTerminate(void)
{
  ctrl_sixaxis2thruster_terminate();
}

/* Registration function */
RT_MODEL_ctrl_sixaxis2thruste_T *ctrl_sixaxis2thruster(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)ctrl_sixaxis2thruster_M, 0,
                sizeof(RT_MODEL_ctrl_sixaxis2thruste_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = ctrl_sixaxis2thruster_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    ctrl_sixaxis2thruster_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    ctrl_sixaxis2thruster_M->Timing.sampleTimes =
      (&ctrl_sixaxis2thruster_M->Timing.sampleTimesArray[0]);
    ctrl_sixaxis2thruster_M->Timing.offsetTimes =
      (&ctrl_sixaxis2thruster_M->Timing.offsetTimesArray[0]);

    /* task periods */
    ctrl_sixaxis2thruster_M->Timing.sampleTimes[0] = (0.01);

    /* task offsets */
    ctrl_sixaxis2thruster_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(ctrl_sixaxis2thruster_M, &ctrl_sixaxis2thruster_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = ctrl_sixaxis2thruster_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    ctrl_sixaxis2thruster_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ctrl_sixaxis2thruster_M, -1);
  ctrl_sixaxis2thruster_M->Timing.stepSize0 = 0.01;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    ctrl_sixaxis2thruster_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(ctrl_sixaxis2thruster_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(ctrl_sixaxis2thruster_M->rtwLogInfo, (NULL));
    rtliSetLogT(ctrl_sixaxis2thruster_M->rtwLogInfo, "tout");
    rtliSetLogX(ctrl_sixaxis2thruster_M->rtwLogInfo, "");
    rtliSetLogXFinal(ctrl_sixaxis2thruster_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(ctrl_sixaxis2thruster_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(ctrl_sixaxis2thruster_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(ctrl_sixaxis2thruster_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(ctrl_sixaxis2thruster_M->rtwLogInfo, 1);
    rtliSetLogY(ctrl_sixaxis2thruster_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(ctrl_sixaxis2thruster_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(ctrl_sixaxis2thruster_M->rtwLogInfo, (NULL));
  }

  ctrl_sixaxis2thruster_M->solverInfoPtr = (&ctrl_sixaxis2thruster_M->solverInfo);
  ctrl_sixaxis2thruster_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&ctrl_sixaxis2thruster_M->solverInfo, 0.01);
  rtsiSetSolverMode(&ctrl_sixaxis2thruster_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  ctrl_sixaxis2thruster_M->blockIO = ((void *) &ctrl_sixaxis2thruster_B);
  (void) memset(((void *) &ctrl_sixaxis2thruster_B), 0,
                sizeof(B_ctrl_sixaxis2thruster_T));

  /* parameters */
  ctrl_sixaxis2thruster_M->defaultParam = ((real_T *)&ctrl_sixaxis2thruster_P);

  /* states (dwork) */
  ctrl_sixaxis2thruster_M->dwork = ((void *) &ctrl_sixaxis2thruster_DW);
  (void) memset((void *)&ctrl_sixaxis2thruster_DW, 0,
                sizeof(DW_ctrl_sixaxis2thruster_T));

  /* Initialize Sizes */
  ctrl_sixaxis2thruster_M->Sizes.numContStates = (0);/* Number of continuous states */
  ctrl_sixaxis2thruster_M->Sizes.numY = (0);/* Number of model outputs */
  ctrl_sixaxis2thruster_M->Sizes.numU = (0);/* Number of model inputs */
  ctrl_sixaxis2thruster_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  ctrl_sixaxis2thruster_M->Sizes.numSampTimes = (1);/* Number of sample times */
  ctrl_sixaxis2thruster_M->Sizes.numBlocks = (62);/* Number of blocks */
  ctrl_sixaxis2thruster_M->Sizes.numBlockIO = (19);/* Number of block outputs */
  ctrl_sixaxis2thruster_M->Sizes.numBlockPrms = (169);/* Sum of parameter "widths" */
  return ctrl_sixaxis2thruster_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/

/*========================================================================*
 * NI VeriStand Model Framework code generation
 *
 * Model : ctrl_sixaxis2thruster
 * Model version : 1.73
 * VeriStand Model Framework version : 2017.0.0.143 (2017)
 * Source generated on : Sun Nov 19 13:12:33 2017
 *========================================================================*/

/* This file contains automatically generated code for functions
 * to update the inports and outports of a Simulink/Realtime Workshop
 * model. Calls to these functions should be made before each step is taken
 * (inports, call SetExternalInputs) and after each step is taken
 * (outports, call SetExternalOutputs.)
 */
#ifdef NI_ROOTMODEL_ctrl_sixaxis2thruster
#include "ni_modelframework_ex.h"
#include <stddef.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>

unsigned char ReadSideDirtyFlag = 0, WriteSideDirtyFlag = 0;

/*========================================================================*
 * Function: NIRT_GetValueByDataType
 *
 * Abstract:
 *		Converting to and from double and datatypes used in the model
 *
 * Output Parameters
 *      ptr : address to the source
 *      subindex : index value if vector
 *      type   : the source's data type
 *      Complex : true if a complex data type
 *
 * Returns:
 *     Return value: 0 if no error
 *========================================================================*/
double NIRT_GetValueByDataType(void* ptr, int32_t subindex, int32_t type,
  int32_t Complex)
{
  switch (type)
  {
   case 0:
    return (double)(((real_T*)ptr)[subindex]);

   case 1:
    return (double)(((real32_T*)ptr)[subindex]);

   case 2:
    return (double)(((int8_T*)ptr)[subindex]);

   case 3:
    return (double)(((uint8_T*)ptr)[subindex]);

   case 4:
    return (double)(((int16_T*)ptr)[subindex]);

   case 5:
    return (double)(((uint16_T*)ptr)[subindex]);

   case 6:
    return (double)(((int32_T*)ptr)[subindex]);

   case 7:
    return (double)(((uint32_T*)ptr)[subindex]);

   case 8:
    return (double)(((boolean_T*)ptr)[subindex]);

   case 10:
    return NIRT_GetValueByDataType(ptr,subindex,6,Complex);

   case 13:
    return NIRT_GetValueByDataType(ptr,subindex,7,Complex);

   case 15:
    return NIRT_GetValueByDataType(ptr,subindex,6,Complex);

   case 16:
    return NIRT_GetValueByDataType(ptr,subindex,6,Complex);

   case 17:
    return NIRT_GetValueByDataType(ptr,subindex,3,Complex);

   case 18:
    return NIRT_GetValueByDataType(ptr,subindex,3,Complex);

   case 19:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 22:
    return (( double *)ptr)[subindex];

   case 23:
    return (( double *)ptr)[subindex];

   case 24:
    return (( double *)ptr)[subindex];

   case 25:
    return (( double *)ptr)[subindex];

   case 26:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 27:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);
  }

  // return ((double *)ptr)[subindex];
  return rtNaN;
}

/*========================================================================*
 * Function: NIRT_SetValueByDataType
 *
 * Abstract:
 *		Converting to and from double and datatypes used in the model
 *
 * Output Parameters
 *      ptr : address to the destination
 *      subindex : index value if vector
 *      value : value to set on the destination
 *      type   : the destination's data type
 *      Complex : true if a complex data type
 *
 * Returns:
 *     Return value: 0 if no error
 *========================================================================*/
int32_t NIRT_SetValueByDataType(void* ptr, int32_t subindex, double value,
  int32_t type, int32_t Complex)
{
  //Complex is only used for R14.3 and down
  switch (type)
  {
   case 0:
    ((real_T *)ptr)[subindex] = (real_T)value;
    return NI_OK;

   case 1:
    ((real32_T *)ptr)[subindex] = (real32_T)value;
    return NI_OK;

   case 2:
    ((int8_T *)ptr)[subindex] = (int8_T)value;
    return NI_OK;

   case 3:
    ((uint8_T *)ptr)[subindex] = (uint8_T)value;
    return NI_OK;

   case 4:
    ((int16_T *)ptr)[subindex] = (int16_T)value;
    return NI_OK;

   case 5:
    ((uint16_T *)ptr)[subindex] = (uint16_T)value;
    return NI_OK;

   case 6:
    ((int32_T *)ptr)[subindex] = (int32_T)value;
    return NI_OK;

   case 7:
    ((uint32_T *)ptr)[subindex] = (uint32_T)value;
    return NI_OK;

   case 8:
    ((boolean_T *)ptr)[subindex] = (boolean_T)value;
    return NI_OK;

   case 10:
    //Type is renamed. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 6, Complex);

   case 13:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 7, Complex);

   case 15:
    //Type is enum. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 6, Complex);

   case 16:
    //Type is enum. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 6, Complex);

   case 17:
    //Type is renamed. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 3, Complex);

   case 18:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 3, Complex);

   case 19:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 22:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 23:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 24:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 25:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 26:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 27:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);
  }

  //No matching datatype conversion
  return NI_ERROR;
}

extern ctrl_sixaxis2thruster_rtModel *S;
extern _SITexportglobals SITexportglobals;

/*========================================================================*
 * Function: SetExternalInputs
 *
 * Abstract:
 *		Set data to model ports on the specified task
 *
 * Input Parameters
 *      data : data to set
 *      TaskSampleHit : task id
 *
 * Returns:
 *     Return value: 0 if no error
 *========================================================================*/
void SetExternalInputs(double* data, int_T* TaskSampleHit)
{
  int index = 0, count = 0;

  // ctrl_sixaxis2thruster/alpha_m/alpha1_rad
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.alpha1_rad, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/alpha_m/alpha2_rad
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.alpha2_rad, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/alpha_m/alpha3_rad
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.alpha3_rad, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/alpha_m/alpha4_rad
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.alpha4_rad, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/alpha_m/alpha5_rad
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.alpha5_rad, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/alpha_m/alpha6_rad
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.alpha6_rad, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/PosXLeft
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.PosXLeft, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/PosYLeft
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.PosYLeft, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/PosXRight
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.PosXRight, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/PosYRight
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.PosYRight, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/ArrowDown
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.ArrowDown, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/ArrowUp
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.ArrowUp, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/Start
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_B.Start, 0, data[index++], 0,
      0);
  } else {
    index += 1;
  }

  UNUSED_PARAMETER(count);
}                                      /* of SetExternalInputs */

int32_t NumInputPorts(void)
{
  return 13;
}

int32_t NumOutputPorts(void)
{
  return 13;
}

double ni_extout[13];

/*========================================================================*
 * Function: SetExternalOutputs
 *
 * Abstract:
 *		Set data to model ports on the specified task
 *
 * Input Parameters
 *      data : data to set
 *      TaskSampleHit : task id
 *
 * Returns:
 *     Return value: 0 if no error
 *========================================================================*/
void SetExternalOutputs(double* data, int_T* TaskSampleHit)
{
  int index = 0, count = 0;

  // ctrl_sixaxis2thruster/alpha_1: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_B.alpha_infinf, 0, 19, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/alpha_2: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_B.alpha_infinf, 1, 19, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/alpha_3: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_B.alpha_infinf, 2, 19, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/alpha_5: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_B.alpha_infinf, 4, 19, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/alpha_4: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_B.alpha_infinf, 3, 19, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/alpha_6: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_B.alpha_infinf, 5, 19, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/u_limit_out: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_sixaxis2thruster_B.y, 0,
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/u_1: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_B.Product, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/u_2: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_B.Product, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/u_3: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_B.Product, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/u_4: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_B.Product1, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/u_5: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_B.Product1, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_sixaxis2thruster/u_6: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_B.Product1, 0, 0, 0);
  } else {
    index += 1;
  }

  if (data != NULL) {
    memcpy(&data[0], &ni_extout[0], sizeof(ni_extout));
  }

  UNUSED_PARAMETER(count);
}

/*========================================================================*
 * Function: NI_InitExternalOutputs
 *
 * Abstract:
 *		Initialize model ports
 *
 * Output Parameters
 *
 * Returns:
 *     Return value: 0 if no error
 *========================================================================*/
int32_t NI_InitExternalOutputs()
{
  int index = 0, count = 0;

  // ctrl_sixaxis2thruster/alpha_1: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_sixaxis2thruster_B.alpha_infinf, 0, 19, 0);

  // ctrl_sixaxis2thruster/alpha_2: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_sixaxis2thruster_B.alpha_infinf, 1, 19, 0);

  // ctrl_sixaxis2thruster/alpha_3: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_sixaxis2thruster_B.alpha_infinf, 2, 19, 0);

  // ctrl_sixaxis2thruster/alpha_5: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_sixaxis2thruster_B.alpha_infinf, 4, 19, 0);

  // ctrl_sixaxis2thruster/alpha_4: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_sixaxis2thruster_B.alpha_infinf, 3, 19, 0);

  // ctrl_sixaxis2thruster/alpha_6: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_sixaxis2thruster_B.alpha_infinf, 5, 19, 0);

  // ctrl_sixaxis2thruster/u_limit_out: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_sixaxis2thruster_B.y, 0, 0,
    0);

  // ctrl_sixaxis2thruster/u_1: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_sixaxis2thruster_B.Product,
    0, 0, 0);

  // ctrl_sixaxis2thruster/u_2: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_sixaxis2thruster_B.Product,
    0, 0, 0);

  // ctrl_sixaxis2thruster/u_3: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_sixaxis2thruster_B.Product,
    0, 0, 0);

  // ctrl_sixaxis2thruster/u_4: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_sixaxis2thruster_B.Product1,
    0, 0, 0);

  // ctrl_sixaxis2thruster/u_5: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_sixaxis2thruster_B.Product1,
    0, 0, 0);

  // ctrl_sixaxis2thruster/u_6: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_sixaxis2thruster_B.Product1,
    0, 0, 0);
  UNUSED_PARAMETER(count);
  return NI_OK;
}

/* Undefine parameter macros. The undef allows us to access the real declarations.
   In the Simulink(R) generated code, the parameters are redefined to be the read-side of rtParameter.*/
#define _NI_UNDEFINE_PARAMS_DBL_BUFFER_
#include "ni_pglobals.h"

/* All elements by default (including scalars) have 2 dimensions [1,1] */
static NI_Parameter NI_ParamList[] DataSection(".NIVS.paramlist") =
{
  { 0, "ctrl_sixaxis2thruster/Back/Joystick angle threshold/Value", offsetof
    (P_ctrl_sixaxis2thruster_T, u_threshold), 26, 1, 2, 0, 0 },

  { 1, "ctrl_sixaxis2thruster/Front/Joystick angle threshold/Value", offsetof
    (P_ctrl_sixaxis2thruster_T, u_threshold), 26, 1, 2, 2, 0 },

  { 2, "ctrl_sixaxis2thruster/Front/Memory5/X0", offsetof
    (P_ctrl_sixaxis2thruster_T, Memory5_X0), 26, 1, 2, 4, 0 },

  { 3, "ctrl_sixaxis2thruster/Front/Gain/Gain", offsetof
    (P_ctrl_sixaxis2thruster_T, Gain_Gain), 26, 1, 2, 6, 0 },

  { 4, "ctrl_sixaxis2thruster/Front/Saturation/UpperLimit", offsetof
    (P_ctrl_sixaxis2thruster_T, Saturation_UpperSat), 26, 1, 2, 8, 0 },

  { 5, "ctrl_sixaxis2thruster/Front/Saturation/LowerLimit", offsetof
    (P_ctrl_sixaxis2thruster_T, Saturation_LowerSat), 26, 1, 2, 10, 0 },

  { 6, "ctrl_sixaxis2thruster/Back/Memory5/X0", offsetof
    (P_ctrl_sixaxis2thruster_T, Memory5_X0_i), 26, 1, 2, 12, 0 },

  { 7, "ctrl_sixaxis2thruster/Back/Gain/Gain", offsetof
    (P_ctrl_sixaxis2thruster_T, Gain_Gain_k), 26, 1, 2, 14, 0 },

  { 8, "ctrl_sixaxis2thruster/Back/Saturation/UpperLimit", offsetof
    (P_ctrl_sixaxis2thruster_T, Saturation_UpperSat_h), 26, 1, 2, 16, 0 },

  { 9, "ctrl_sixaxis2thruster/Back/Saturation/LowerLimit", offsetof
    (P_ctrl_sixaxis2thruster_T, Saturation_LowerSat_h), 26, 1, 2, 18, 0 },

  { 10, "ctrl_sixaxis2thruster/u_limit/Memory/X0", offsetof
    (P_ctrl_sixaxis2thruster_T, Memory_X0), 26, 1, 2, 20, 0 },
};

static int32_t NI_ParamListSize DataSection(".NIVS.paramlistsize") = 11;
static int32_t NI_ParamDimList[] DataSection(".NIVS.paramdimlist") =
{
  1, 1,                                /* Parameter at index 0 */
  1, 1,                                /* Parameter at index 1 */
  1, 1,                                /* Parameter at index 2 */
  1, 1,                                /* Parameter at index 3 */
  1, 1,                                /* Parameter at index 4 */
  1, 1,                                /* Parameter at index 5 */
  1, 1,                                /* Parameter at index 6 */
  1, 1,                                /* Parameter at index 7 */
  1, 1,                                /* Parameter at index 8 */
  1, 1,                                /* Parameter at index 9 */
  1, 1,                                /* Parameter at index 10 */
};

static NI_Signal NI_SigList[] DataSection(".NIVS.siglist") =
{
  { 0, "ctrl_sixaxis2thruster/alpha_m/alpha1_rad", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, alpha1_rad) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 1, "ctrl_sixaxis2thruster/alpha_m/alpha2_rad", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, alpha2_rad) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 2, "ctrl_sixaxis2thruster/alpha_m/alpha3_rad", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, alpha3_rad) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 3, "ctrl_sixaxis2thruster/alpha_m/alpha4_rad", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, alpha4_rad) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 4, "ctrl_sixaxis2thruster/alpha_m/alpha5_rad", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, alpha5_rad) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 5, "ctrl_sixaxis2thruster/alpha_m/alpha6_rad", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, alpha6_rad) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 6, "ctrl_sixaxis2thruster/PosXLeft", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, PosXLeft) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 7, "ctrl_sixaxis2thruster/PosYLeft", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, PosYLeft) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 8, "ctrl_sixaxis2thruster/PosXRight", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, PosXRight) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 9, "ctrl_sixaxis2thruster/PosYRight", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, PosYRight) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 10, "ctrl_sixaxis2thruster/ArrowDown", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, ArrowDown) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 11, "ctrl_sixaxis2thruster/ArrowUp", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, ArrowUp) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1,
    2, 0, 0 },

  { 12, "ctrl_sixaxis2thruster/Start", 0, "", offsetof(B_ctrl_sixaxis2thruster_T,
    Start) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 13, "ctrl_sixaxis2thruster/Product", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, Product) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1,
    2, 0, 0 },

  { 14, "ctrl_sixaxis2thruster/Product1", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, Product1) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 15, "ctrl_sixaxis2thruster/u_limit/MATLAB Function", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, y) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0,
    0 },

  { 16,
    "ctrl_sixaxis2thruster/Projection [-pi,pi] to [-inf,inf] + shortest rotation1/MATLAB Function11",
    0, "(1, 1)", offsetof(B_ctrl_sixaxis2thruster_T, alpha_infinf) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 19, 1, 2, 0, 0 },

  { 17,
    "ctrl_sixaxis2thruster/Projection [-pi,pi] to [-inf,inf] + shortest rotation1/MATLAB Function11",
    0, "(1, 2)", offsetof(B_ctrl_sixaxis2thruster_T, alpha_infinf) + (1*sizeof
    (real_T)), BLOCKIO_SIG, 19, 1, 2, 0, 0 },

  { 18,
    "ctrl_sixaxis2thruster/Projection [-pi,pi] to [-inf,inf] + shortest rotation1/MATLAB Function11",
    0, "(1, 3)", offsetof(B_ctrl_sixaxis2thruster_T, alpha_infinf) + (2*sizeof
    (real_T)), BLOCKIO_SIG, 19, 1, 2, 0, 0 },

  { 19,
    "ctrl_sixaxis2thruster/Projection [-pi,pi] to [-inf,inf] + shortest rotation1/MATLAB Function11",
    0, "(1, 4)", offsetof(B_ctrl_sixaxis2thruster_T, alpha_infinf) + (3*sizeof
    (real_T)), BLOCKIO_SIG, 19, 1, 2, 0, 0 },

  { 20,
    "ctrl_sixaxis2thruster/Projection [-pi,pi] to [-inf,inf] + shortest rotation1/MATLAB Function11",
    0, "(1, 5)", offsetof(B_ctrl_sixaxis2thruster_T, alpha_infinf) + (4*sizeof
    (real_T)), BLOCKIO_SIG, 19, 1, 2, 0, 0 },

  { 21,
    "ctrl_sixaxis2thruster/Projection [-pi,pi] to [-inf,inf] + shortest rotation1/MATLAB Function11",
    0, "(1, 6)", offsetof(B_ctrl_sixaxis2thruster_T, alpha_infinf) + (5*sizeof
    (real_T)), BLOCKIO_SIG, 19, 1, 2, 0, 0 },

  { 22, "ctrl_sixaxis2thruster/Front/MATLAB Function10", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, sf_MATLABFunction10.alpha_out) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 23, "ctrl_sixaxis2thruster/Back/MATLAB Function10", 0, "", offsetof
    (B_ctrl_sixaxis2thruster_T, sf_MATLABFunction10_o.alpha_out) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { -1, "", -1, "", 0, 0, 0 }
};

static int32_t NI_SigListSize DataSection(".NIVS.siglistsize") = 24;
static int32_t NI_VirtualBlockSources[1];
static int32_t NI_SigDimList[] DataSection(".NIVS.sigdimlist") =
{ 1, 1
};

static int32_t NI_ExtListSize DataSection(".NIVS.extlistsize") = 26;
static NI_ExternalIO NI_ExtList[] DataSection(".NIVS.extlist") =
{
  { 1, "alpha_m/alpha1_rad", 0, EXT_IN, 1, 1, 1 },

  { 2, "alpha_m/alpha2_rad", 0, EXT_IN, 1, 1, 1 },

  { 3, "alpha_m/alpha3_rad", 0, EXT_IN, 1, 1, 1 },

  { 4, "alpha_m/alpha4_rad", 0, EXT_IN, 1, 1, 1 },

  { 5, "alpha_m/alpha5_rad", 0, EXT_IN, 1, 1, 1 },

  { 6, "alpha_m/alpha6_rad", 0, EXT_IN, 1, 1, 1 },

  { 7, "PosXLeft", 0, EXT_IN, 1, 1, 1 },

  { 8, "PosYLeft", 0, EXT_IN, 1, 1, 1 },

  { 9, "PosXRight", 0, EXT_IN, 1, 1, 1 },

  { 10, "PosYRight", 0, EXT_IN, 1, 1, 1 },

  { 11, "ArrowDown", 0, EXT_IN, 1, 1, 1 },

  { 12, "ArrowUp", 0, EXT_IN, 1, 1, 1 },

  { 13, "Start", 0, EXT_IN, 1, 1, 1 },

  { 1, "alpha_1", 0, EXT_OUT, 1, 1, 1 },

  { 2, "alpha_2", 0, EXT_OUT, 1, 1, 1 },

  { 3, "alpha_3", 0, EXT_OUT, 1, 1, 1 },

  { 4, "alpha_5", 0, EXT_OUT, 1, 1, 1 },

  { 5, "alpha_4", 0, EXT_OUT, 1, 1, 1 },

  { 6, "alpha_6", 0, EXT_OUT, 1, 1, 1 },

  { 7, "u_limit_out", 0, EXT_OUT, 1, 1, 1 },

  { 8, "u_1", 0, EXT_OUT, 1, 1, 1 },

  { 9, "u_2", 0, EXT_OUT, 1, 1, 1 },

  { 10, "u_3", 0, EXT_OUT, 1, 1, 1 },

  { 11, "u_4", 0, EXT_OUT, 1, 1, 1 },

  { 12, "u_5", 0, EXT_OUT, 1, 1, 1 },

  { 13, "u_6", 0, EXT_OUT, 1, 1, 1 },

  { -1, "", 0, 0, 0, 0, 0 }
};

/* This Task List is generated to allow access to the task specs without
 * initializing the model.
 * 0th entry is for scheduler (base rate)
 * rest for multirate model's tasks.
 */
NI_Task NI_TaskList[] DataSection(".NIVS.tasklist") =
{
  { 0, 0.01, 0 }
};

int32_t NI_NumTasks DataSection(".NIVS.numtasks") = 1;
static const char* NI_CompiledModelName DataSection(".NIVS.compiledmodelname") =
  "ctrl_sixaxis2thruster";
static const char* NI_CompiledModelVersion = "1.73";
static const char* NI_CompiledModelDateTime = "Sun Nov 19 13:12:33 2017";
static const char* NI_builder DataSection(".NIVS.builder") =
  "NI Model Framework 2017.0.0.143 (2017) for Simulink Coder 8.11 (R2016b)";
static const char* NI_BuilderVersion DataSection(".NIVS.builderversion") =
  "2017.0.0.143";

/*========================================================================*
 * Function: NIRT_GetBuildInfo
 *
 * Abstract:
 *	Get the DLL versioning etc information.
 *
 * Output Parameters:
 *	detail	: String containing model build information.
 *	len		: the build info string length. If a value of "-1" is specified, the minimum buffer size of "detail" is returned as its value.
 *
 * Returns:
 *	NI_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t NIRT_GetBuildInfo(char* detail, int32_t* len)
{
  int32_t msgLength = 0;
  char *msgBuffer = NULL;

  /* Message */
  const char msg[] =
    "%s\nModel Name: %s\nModel Version: %s\nVeriStand Model Framework Version: %s\nCompiled On: %s";

  /* There are no console properties to set for VxWorks, because the console is simply serial output data.
     Just do printf for VxWorks and ignore all console properties. */
#if ! defined (VXWORKS) && ! defined (kNIOSLinux)

  HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hStdout, FOREGROUND_INTENSITY | FOREGROUND_BLUE |
    FOREGROUND_GREEN | FOREGROUND_RED);

#endif

  /* Print to screen */
  printf("\n*******************************************************************************\n");
  msgLength = printf(msg, NI_builder, NI_CompiledModelName,
                     NI_CompiledModelVersion, NI_BuilderVersion,
                     NI_CompiledModelDateTime);
  printf("\n*******************************************************************************\n");

#if ! defined (VXWORKS) && ! defined (kNIOSLinux)

  SetConsoleTextAttribute(hStdout, FOREGROUND_BLUE | FOREGROUND_GREEN |
    FOREGROUND_RED);

#endif

  if (*len == -1) {
    /* Return the required minimum buffer size */
    *len = msgLength;
  } else {
    /* allocate the buffer */
    msgBuffer = (char*)calloc(msgLength + 1, sizeof(char));
    sprintf (msgBuffer, msg, NI_builder, NI_CompiledModelName,
             NI_CompiledModelVersion, NI_BuilderVersion,
             NI_CompiledModelDateTime);
    if (*len >= msgLength) {
      *len = msgLength + 1;
    }

    /* Copy into external buffer */
    strncpy(detail, msgBuffer, *len);

    /* Release memory */
    free(msgBuffer);
  }

  return NI_OK;
}

/*========================================================================*
 * Function: NIRT_GetSignalSpec
 *
 * Abstract:
 *	If index == -1, lookup parameter by the ID.
 *	If ID_len == 0 or if ID == null, return number of parameters in model.
 *	Otherwise, lookup parameter by index, and return the information.
 *
 * Input/Output Parameters:
 *	index		: index of the signal (in/out)
 *	ID			: ID of signal to be looked up (in), ID of signal at index (out)
 *	ID_len		: length of input ID(in), length of ID (out)
 *	bnlen		: length of buffer blkname (in), length of output blkname (out)
 *	snlen		: length of buffer signame (in), length of output signame (out)
 *
 * Output Parameters:
 *	blkname		: Name of the source block for the signal
 *	portnum		: port number of the block that is the source of the signal (0 indexed)
 *	signame		: Name of the signal
 *	datatype	: same as with parameters. Currently assuming all data to be double.
 *	dims		: The port's dimension of length 'numdims'.
 *	numdims		: the port's number of dimensions. If a value of "-1" is specified, the minimum buffer size of "dims" is returned as its value.
 *
 * Returns:
 *	NI_OK if no error(if sigidx == -1, number of signals)
 *========================================================================*/
DLL_EXPORT int32_t NIRT_GetSignalSpec(int32_t* sidx, char* ID, int32_t* ID_len,
  char* blkname, int32_t *bnlen,
  int32_t *portnum, char* signame, int32_t *snlen, int32_t *dattype, int32_t*
  dims, int32_t* numdim)
{
  int32_t sigidx = *sidx;
  int32_t i = 0;
  char *addr = NULL;
  char *IDblk = 0;
  int32_t IDport = 0;
  if (sigidx < 0) {
    /* check if ID has been specified. */
    if ((ID != NULL) && (ID_len != NULL) && (*ID_len > 0)) {
      /* parse ID into blkname and port */
      addr = strrchr(ID, ':');
      if (addr == NULL) {
        return NI_SigListSize;
      }

      /* Calculate the char offset into the string after the port */
      i = addr - ID;

      /* malformed ID */
      if (i<=0) {
        return NI_SigListSize;
      }

      IDblk = ID;
      IDport = atoi(ID+i+1);

      /* lookup the table for matching ID */
      for (i=0; i<NI_SigListSize; i++) {
        /* 11 to accomodate ':','/', port number and null character */
        char *tempID = (char *)calloc(strlen(NI_SigList[i].blockname)+strlen
          (NI_SigList[i].signalname) + 11, sizeof(char));
        if (strlen(NI_SigList[i].signalname)>0) {
          sprintf(tempID,"%s:%d%s%s",NI_SigList[i].blockname,NI_SigList[i].
                  portno+1,"/",NI_SigList[i].signalname);
        } else {
          sprintf(tempID,"%s:%d",NI_SigList[i].blockname,NI_SigList[i].portno+1);
        }

        if (!strcmp(IDblk,tempID) && IDport==(NI_SigList[i].portno+1)) {
          break;
        }

        free(tempID);
      }

      if (i < NI_SigListSize) {
        sigidx = *sidx = i;
      } else {
        return NI_SigListSize;
      }
    } else {
      // no index or ID specified.
      return NI_SigListSize;
    }
  }

  if (sigidx>=0 && sigidx<NI_SigListSize) {
    if (ID != NULL) {
      // no need for return string to be null terminated!
      /* 11 to accomodate ':','/', port number and null character */
      char *tempID = (char *)calloc(strlen(NI_SigList[sigidx].blockname)+strlen
        (NI_SigList[sigidx].signalname)+ 11, sizeof(char));
      if (strlen(NI_SigList[sigidx].signalname)>0) {
        sprintf(tempID,"%s:%d%s%s",NI_SigList[sigidx].blockname,
                NI_SigList[sigidx].portno+1,"/",NI_SigList[sigidx].signalname);
      } else {
        sprintf(tempID,"%s:%d",NI_SigList[sigidx].blockname,NI_SigList[sigidx].
                portno+1);
      }

      if ((int32_t)strlen(tempID)<*ID_len) {
        *ID_len = strlen(tempID);
      }

      strncpy(ID, tempID, *ID_len);
      free(tempID);
    }

    if (blkname != NULL) {
      // no need for return string to be null terminated!
      if ((int32_t)strlen(NI_SigList[sigidx].blockname)<*bnlen) {
        *bnlen = strlen(NI_SigList[sigidx].blockname);
      }

      strncpy(blkname, NI_SigList[sigidx].blockname, *bnlen);
    }

    if (signame != NULL) {
      // no need for return string to be null terminated!
      if ((int32_t)strlen(NI_SigList[sigidx].signalname)<*snlen) {
        *snlen = strlen(NI_SigList[sigidx].signalname);
      }

      strncpy(signame, NI_SigList[sigidx].signalname, *snlen);
    }

    if (portnum != NULL) {
      *portnum = NI_SigList[sigidx].portno;
    }

    if (dattype != NULL) {
      *dattype = NI_SigList[sigidx].datatype;
    }

    if (numdim != NULL) {
      if (*numdim == -1) {
        *numdim = NI_SigList[sigidx].numofdims;
      } else if (dims != NULL) {
        for (i=0;i < *numdim; i++) {
          dims[i] = NI_SigDimList[NI_SigList[sigidx].dimListOffset +i];
        }
      }
    }

    return NI_OK;
  }

  return NI_SigListSize;
}

/*========================================================================*
 * Function: NIRT_GetParameterIndices
 *
 * Abstract:
 *	Returns an array of indices to tunable parameters
 *
 * Output Parameters:
 *	indices	: buffer to store the parameter indices of length "len"
 *	len		: returns the number of indices. If a value of "-1" is specified, the minimum buffer size of "indices" is returned as its value.
 *
 * Returns:
 *	NI_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t NIRT_GetParameterIndices(int32_t* indices, int32_t* len)
{
  int32_t i;
  if ((len == NULL) || (indices == NULL)) {
    return NI_ERROR;
  }

  if (*len == -1) {
    *len = NI_ParamListSize;
  } else {
    for (i=0; (i < NI_ParamListSize) && (i < *len); i++) {
      indices[i] = NI_ParamList[i].idx;
    }

    *len = i;
  }

  return NI_OK;
}

/*========================================================================*
 * Function: NIRT_GetParameterSpec
 *
 * Abstract:
 *	If index == -1, lookup parameter by the ID.
 *	If ID_len == 0 or if ID == null, return number of parameters in model.
 *	Otherwise, lookup parameter by index, and return the information.
 *
 * Input/Output Parameters:
 *	paramidx	: index of the parameter(in/out). If a value of "-1" is specified, the parameter's ID is used instead
 *	ID			: ID of parameter to be looked up (in), ID of parameter at index (out)
 *	ID_len		: length of input ID (in), length of ID (out)
 *	pnlen		: length of buffer paramname(in), length of the returned paramname (out)
 *	numdim		: length of buffer dimension(in), length of output dimension (out). If a value of "-1" is specified, the minimum buffer size of "dims" is returned as its value
 *
 * Output Parameters:
 *	paramname	: Name of the parameter
 *	datatype	: datatype of the parameter (currently assuming 0: double, .. )
 *	dims		: array of dimensions with length 'numdim'
 *
 * Returns:
 *	NI_OK if no error (if paramidx == -1, number of tunable parameters)
 *========================================================================*/
DLL_EXPORT int32_t NIRT_GetParameterSpec(int32_t* pidx, char* ID, int32_t*
  ID_len, char* paramname, int32_t *pnlen,
  int32_t *dattype, int32_t* dims, int32_t* numdim)
{
  int32_t i = 0;
  int32_t paramidx = *pidx;
  if (paramidx < 0) {
    // check if ID has been specified.
    if ((ID != NULL) && (ID_len != NULL) && (*ID_len > 0) ) {
      // lookup the table for matching ID
      for (i=0; i < NI_ParamListSize; i++) {
        if (strcmp(ID,NI_ParamList[i].paramname) == 0) {
          /* found matching string */
          break;
        }
      }

      if (i < NI_ParamListSize) {
        /* note the index into the rtParamAttribs */
        paramidx = *pidx = i;
      } else {
        return NI_ParamListSize;
      }
    } else {
      // no index or ID specified.
      return NI_ParamListSize;
    }
  }

  if ((paramidx >= 0) && (paramidx<NI_ParamListSize)) {
    if (ID != NULL) {
      if ((int32_t)strlen(NI_ParamList[paramidx].paramname) < *ID_len) {
        *ID_len = strlen(NI_ParamList[paramidx].paramname);
      }

      strncpy(ID, NI_ParamList[paramidx].paramname, *ID_len);
    }

    if (paramname != NULL) {
      /* no need for return string to be null terminated! */
      if ((int32_t)strlen(NI_ParamList[paramidx].paramname) < *pnlen) {
        *pnlen = strlen(NI_ParamList[paramidx].paramname);
      }

      strncpy(paramname, NI_ParamList[paramidx].paramname, *pnlen);
    }

    if (dattype != NULL) {
      *dattype = NI_ParamList[paramidx].datatype;
    }

    if (numdim != NULL) {
      if (*numdim == -1) {
        *numdim = NI_ParamList[paramidx].numofdims;
      } else if (dims != NULL) {
        for (i = 0; i < *numdim; i++) {
          dims[i] = NI_ParamDimList[NI_ParamList[paramidx].dimListOffset + i];
        }
      }
    }

    return NI_OK;
  }

  return NI_ParamListSize;
}

/*========================================================================*
 * Function: NIRT_GetExtIOSpec
 *
 * Abstract:
 *	Returns the model's inport or outport specification
 *
 * Input Parameters:
 *	index	: index of the task
 *
 * Output Parameters:
 *	idx		: idx of the IO.
 *	name	: Name of the IO block
 *	tid		: task id
 *	type	: EXT_IN or EXT_OUT
 *	dims	: The port's dimension of length 'numdims'.
 *	numdims : the port's number of dimensions. If a value of "-1" is specified, the minimum buffer size of "dims" is returned as its value.
 *
 * Returns
 *	NI_OK if no error. (if index == -1, return number of tasks in the model)
 *========================================================================*/
DLL_EXPORT int32_t NIRT_GetExtIOSpec(int32_t index, int32_t *idx, char* name,
  int32_t* tid, int32_t *type, int32_t *dims, int32_t* numdims)
{
  if (index == -1) {
    return NI_ExtListSize;
  }

  if (idx != NULL) {
    *idx = NI_ExtList[index].idx;
  }

  if (name != NULL) {
    int32_t sz = strlen(name);
    strncpy(name, NI_ExtList[index].name, sz-1);
    name[sz-1]= 0;
  }

  if (tid != NULL) {
    *tid = NI_ExtList[index].TID;
  }

  if (type != NULL) {
    *type = NI_ExtList[index].type;
  }

  if (numdims != NULL) {
    if (*numdims == -1) {
      *numdims = 2;
    } else if (numdims != NULL) {
      /* Return port dimensions */
      dims[0] = NI_ExtList[index].dimX;
      dims[1] = NI_ExtList[index].dimY;
    }
  }

  return NI_OK;
}

/*========================================================================*
 * Function: NI_ProbeOneSignal
 *
 * Abstract:
 *		Helper function to probe one signal. baseaddr must NOT be VIRTUAL_SIG
 *
 * Output Parameters
 *
 * Returns:
 *     Return value: Returns the last index value probed in a vector signal
 *========================================================================*/
static int32_t NI_ProbeOneSignal(int32_t idx, double *value, int32_t len,
  int32_t *count, int32_t vOffset, int32_t vLength)
{
  if (NI_SigList[idx].baseaddr == VIRTUAL_SIG) {
    SetSITErrorMessage("NI_ProbeOneSignal: Received request to probe a virtual signal, but was expecting a ground source. Ignoring virtual signal probe. Report this behavior to National Instruments.",
                       0);
    return 0;
  } else {
    char *ptr = (char*)((NI_SigList[idx].baseaddr == BLOCKIO_SIG) ? S->blockIO :
                        S->inputs) + (uintptr_t)NI_SigList[idx].addr;
    int32_t subindex = (vLength == -1) ? 0 : vOffset;
    int32_t sublength = (vLength == -1) ? NI_SigList[idx].width : (vLength +
      vOffset);
    while ((subindex < sublength) && (*count < len))
      value[(*count)++] = NIRT_GetValueByDataType(ptr, subindex++,
        NI_SigList[idx].datatype, NI_SigList[idx].IsComplex);
    return *count;
  }
}

/*========================================================================*
 * Function: NIRT_ProbeSignals
 *
 * Abstract:
 *	returns the latest signal values.
 *
 * Input Parameters:
 *	sigindices	: list of signal indices to be probed.
 *	numsigs		: length of sigindices array.
 *
 *		NOTE: (Implementation detail) the sigindices array that is passed in is delimited by a value of -1.
 *		Thus the # of valid indices in the sigindices table is min(numsigs, index of value -1) - 1.
 *		Reason for subtracting 1, the first index in the array is used for bookkeeping and should be copied
 *		into the 0th index in the signal values buffer.
 *		Also, the 1st index in the signal values buffer should contain the current timestamp. Hence valid
 *		signal data should be filled in starting from index 2. Any non-scalar signals should be added to the
 *		buffer in row-order.
 *
 * Input/Output Parameters
 *	num			: (in) length of sigvalues buffer (out) number of values returned in the buffer
 *
 * Output Parameters:
 *	value		: array of signal values
 *
 * Returns:
 *	NI_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t NIRT_ProbeSignals(int32_t* sigindices, int32_t numsigs,
  double* value, int32_t* len)
{
  int32_t i = 0;
  int32_t idx = 0;
  int32_t count = 0;
  if (!SITexportglobals.inCriticalSection) {
    SetSITErrorMessage("SignalProbe should only be called between ScheduleTasks and PostOutputs",
                       1);
  }

  /* Get the index to the first signal */
  if ((*len > 1) && (numsigs > 0)) {
    value[count++] = sigindices[0];
    value[count++] = 0;
  }

  /* Get the second and other signals */
  for (i = 1; (i < numsigs) && (count < *len); i++) {
    idx = sigindices[i];
    if (idx < 0) {
      break;
    }

    if (idx < NI_SigListSize) {
      if (NI_SigList[idx].baseaddr == VIRTUAL_SIG) {
        int32_t vidx = NI_VirtualBlockSources[NI_SigList[idx].addr];
        NI_ProbeOneSignal(vidx, value, *len, &count, 0, -1);
      } else {
        NI_ProbeOneSignal(idx, value, *len, &count, 0, -1);
      }
    }
  }

  *len = count;
  return count;
}

int32_t NI_InitializeParamStruct()
{
  memcpy(&rtParameter[0], &ctrl_sixaxis2thruster_P, sizeof
         (P_ctrl_sixaxis2thruster_T));
  return NI_OK;
}

/*  After the model has initialized and updated the parameters in
   rtParameter[0] (aka ctrl_sixaxis2thruster_P) we make a copy to rtParameter[1] so
   that it is double buffered. We also do a memcpy to each task's copy.
 */
int32_t NI_InitParamDoubleBuf()
{
  int32_t idx = 1;

#ifdef MULTITASKING

  for (; idx <= NUMST - TID01EQ; idx++)
#endif

    memcpy(&rtParameter[idx], &rtParameter[0], sizeof(P_ctrl_sixaxis2thruster_T));
  return NI_OK;
}

static int32_t NI_SetParamTxStatus = NI_OK;

/*========================================================================*
 * Function: NIRT_SetParameter
 *
 * Abstract:
 *	Set parameter value. Called either in scheduler loop or a background loop.
 *
 * Input Parameters:
 *	index	: index of the parameter (as specified in Parameter Information)
 *	subindex: index in the flattened array, if parameter is n-D array
 *	val		: Value to set the parameter to
 *
 * Returns:
 *	NI_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t NIRT_SetParameter(int32_t index, int32_t subindex, double
  value)
{
  char* ptr = NULL;

  /* Check bounds */
  if (index >= NI_ParamListSize) {
    SetSITErrorMessage("Parameter index is out of bounds.", 1);
    return NI_SetParamTxStatus= NI_ERROR;
  }

  /* Commit parameter values */
  if (index < 0) {
    if (ReadSideDirtyFlag == 1) {
      memcpy(&rtParameter[1-READSIDE], &rtParameter[READSIDE], sizeof
             (P_ctrl_sixaxis2thruster_T));
      ReadSideDirtyFlag = 0;
      if (WriteSideDirtyFlag == 0) {
        /* No values to commit */
        return NI_OK;
      } else {
        SetSITErrorMessage("Parameters have been set inline and from the background loop at the same time. Parameters written from the background loop since the last commit have been lost.",
                           1);
        WriteSideDirtyFlag = 0;
        return NI_ERROR;
      }
    }

    /* If an error occurred and we have values to commit, then save to the write side and return error */
    if (NI_SetParamTxStatus == NI_ERROR) {
      // fail the transaction.
      // copy old list of parameters to the failed TX buffer
      if (WriteSideDirtyFlag == 1) {
        memcpy(&rtParameter[READSIDE], &rtParameter[1-READSIDE], sizeof
               (P_ctrl_sixaxis2thruster_T));
      }

      // reset the status.
      NI_SetParamTxStatus = NI_OK;
      WriteSideDirtyFlag = 0;
      return NI_ERROR;
    }

    /* If we have values to commit, then save to the write-side */
    if (WriteSideDirtyFlag == 1) {
      S->defaultParam = (double *)&rtParameter[1-READSIDE];
      WaitForSingleObject(SITexportglobals.flipCriticalSection, INFINITE);
      READSIDE = 1 - READSIDE;
      SITexportglobals.copyTaskBitfield = 0xFFFFFFFF;
      ReleaseSemaphore(SITexportglobals.flipCriticalSection, 1, NULL);

      // Copy back the newly set parameters to the writeside.
      memcpy(&rtParameter[1-READSIDE], &rtParameter[READSIDE], sizeof
             (P_ctrl_sixaxis2thruster_T));
      WriteSideDirtyFlag = 0;
    }

    return NI_OK;
  }

  // verify that subindex is within bounds.
  if (subindex >= NI_ParamList[index].width) {
    SetSITErrorMessage("Parameter subindex is out of bounds.",1);
    return NI_SetParamTxStatus = NI_ERROR;
  }

  if (ReadSideDirtyFlag == 1) {
    memcpy(&rtParameter[1-READSIDE], &rtParameter[READSIDE], sizeof
           (P_ctrl_sixaxis2thruster_T));
    ReadSideDirtyFlag = 0;
  }

  /* Get the parameter's address into the Parameter struct
     casting to char to perform pointer arithmetic using the byte offset */
  ptr = (char *)(&rtParameter[1-READSIDE]) + NI_ParamList[index].addr;
  WriteSideDirtyFlag = 1;

  /* Convert the incoming double datatype to the parameter's internal datatype and update value */
  return NIRT_SetValueByDataType(ptr, subindex, value, NI_ParamList[index].
    datatype, NI_ParamList[index].IsComplex);
}

/*========================================================================*
 * Function: NIRT_SetVectorParameter
 *
 * Abstract:
 *	Sets the value to a parameter array.
 *
 * Input Parameters:
 *	index		: index of the parameter as returned by NIRT_GetParameterSpec()
 *	paramvalues	: array of values to set
 *	paramlength	: Length of parameter values.
 *
 * Returns:
 *	NI_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t NIRT_SetVectorParameter( uint32_t index, const double
  * paramvalues, uint32_t paramlength)
{
  uint32_t i = 0;
  int32_t retval = NI_OK;
  char* ptr = NULL;

  /* verify that index is within bounds*/
  if (index >= (uint32_t)NI_ParamListSize) {
    SetSITErrorMessage("Parameter index is out of bounds.", 1);
    return NI_SetParamTxStatus = NI_ERROR;
  }

  // verify that subindex is within bounds.
  if (paramlength != (uint32_t)NI_ParamList[index].width) {
    SetSITErrorMessage("Parameter length is incorrect.", 1);
    return NI_SetParamTxStatus = NI_ERROR;
  }

  /* If we have pending modified parameters, then copy to write-side */
  if (ReadSideDirtyFlag == 1) {
    memcpy(&rtParameter[1-READSIDE], &rtParameter[READSIDE], sizeof
           (P_ctrl_sixaxis2thruster_T));
    ReadSideDirtyFlag = 0;
  }

  /* Get the parameter's address into the Parameter struct
     casting to char to perform pointer arithmetic using the byte offset */
  ptr = (char*)(&rtParameter[1-READSIDE]) + NI_ParamList[index].addr;
  while (i < paramlength) {
    /* Convert the incoming double datatype to the parameter's internal datatype and update value */
    retval = retval & NIRT_SetValueByDataType(ptr, i, paramvalues[i],
      NI_ParamList[index].datatype, NI_ParamList[index].IsComplex);
    i++;
  }

  WriteSideDirtyFlag = 1;
  return retval;
}

/*========================================================================*
 * Function: NIRT_SetScalarParameterInline
 *
 * Abstract:
 *	Sets the value to a parameter immediately without the need of a commit request.
 *
 * Input Parameters:
 *	index		: index of the parameter as returned by NIRT_GetParameterSpec()
 *	subindex	: offset of the element within the parameter
 *	paramvalue	: Value to set the parameter to
 *
 * Returns:
 *	NI_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t NIRT_SetScalarParameterInline( uint32_t index, uint32_t
  subindex, double paramvalue)
{
  char* ptr = NULL;
  if (index >= (uint32_t)NI_ParamListSize) {
    SetSITErrorMessage("Parameter index is out of bounds.", 1);
    return NI_SetParamTxStatus = NI_ERROR;
  }

  // verify that subindex is within bounds.
  if (subindex >= (uint32_t)NI_ParamList[index].width) {
    SetSITErrorMessage("Parameter subindex is out of bounds.", 1);
    return NI_SetParamTxStatus = NI_ERROR;
  }

  /* Get the parameter's address into the Parameter struct
     casting to char to perform pointer arithmetic using the byte offset */
  ptr = (char *)(&rtParameter[READSIDE]) + NI_ParamList[index].addr;
  ReadSideDirtyFlag = 1;

  /* Convert the incoming double datatype to the parameter's internal datatype and update value */
  return NIRT_SetValueByDataType(ptr, subindex, paramvalue, NI_ParamList[index].
    datatype, NI_ParamList[index].IsComplex);
}

/*========================================================================*
 * Function: NIRT_GetParameter
 *
 * Abstract:
 *	Get the current value of a parameter.
 *
 * Input Parameters:
 *	index	: index of the parameter
 *	subindex: element index into the flattened array if an array
 *
 * Output Parameters:
 *	val		: value of the parameter
 *
 * Returns:
 *	NI_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t NIRT_GetParameter(int32_t index, int32_t subindex, double
  *value)
{
  char* ptr = NULL;

  /* Check index boundaries */
  if (index >= NI_ParamListSize || index < 0 || (subindex>=NI_ParamList[index].
       width)) {
    return NI_ERROR;
  }

  /* Get the parameter's address into the Parameter struct
     casting to char to perform pointer arithmetic using the byte offset */
  ptr = (char *)(&rtParameter[READSIDE]) + NI_ParamList[index].addr;

  /* Convert the parameter's internal datatype to double and return its value */
  *value = NIRT_GetValueByDataType(ptr, subindex, NI_ParamList[index].datatype,
    NI_ParamList[index].IsComplex);
  return NI_OK;
}

/*========================================================================*
 * Function: NIRT_GetVectorParameter
 *
 * Abstract:
 *	Get the current value of a vector parameter.
 *
 * Input Parameters:
 *	index: index of the parameter
 *	paramLength: length of the parameter
 *
 * Output Parameters:
 *	paramValues: an array of the parameter's value
 *
 * Returns:
 *	NI_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t NIRT_GetVectorParameter(uint32_t index, double* paramvalues,
  uint32_t paramlength)
{
  char* ptr = NULL;
  uint32_t i = 0;
  if (index >= (uint32_t)NI_ParamListSize || index < 0 || (paramlength !=
       (uint32_t)NI_ParamList[index].width)) {
    return NI_ERROR;
  }

  /* Get the parameter's address into the Parameter struct
     casting to char to perform pointer arithmetic using the byte offset */
  ptr = (char *)(&rtParameter[READSIDE]) + NI_ParamList[index].addr;
  while (i<paramlength) {
    /* Convert the parameter's internal datatype to double and return its value */
    paramvalues[i] = NIRT_GetValueByDataType(ptr, i, NI_ParamList[index].
      datatype, NI_ParamList[index].IsComplex);
    i++;
  }

  return NI_OK;
}

/*========================================================================*
 * Function: NIRT_GetSimState
 *
 * Abstract:
 *
 * Returns:
 *	NI_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t NIRT_GetSimState(int32_t* numContStates, char
  * contStatesNames, double* contStates, int32_t* numDiscStates, char
  * discStatesNames, double* discStates, int32_t* numClockTicks, char
  * clockTicksNames, int32_t* clockTicks)
{
  int32_t count = 0;
  int32_t idx = 0;
  if ((numContStates != NULL) && (numDiscStates != NULL) && (numClockTicks !=
       NULL)) {
    if (*numContStates < 0 || *numDiscStates < 0 || *numClockTicks < 0) {
      *numContStates = 0;
      *numDiscStates = 604;
      *numClockTicks = NUMST - TID01EQ;
      return NI_OK;
    }
  }

  if ((discStates != NULL) && (discStatesNames != NULL)) {
    idx = 0;
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE_i, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE_i");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE_j, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE_j");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.alpha1_rad_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.alpha1_rad_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.alpha2_rad_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.alpha2_rad_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.alpha3_rad_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.alpha3_rad_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.alpha4_rad_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.alpha4_rad_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.alpha5_rad_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.alpha5_rad_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.alpha6_rad_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.alpha6_rad_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.Memory5_PreviousInput, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.Memory5_PreviousInput");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.PosXLeft_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.PosXLeft_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.PosYLeft_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.PosYLeft_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.Memory5_PreviousInput_a, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.Memory5_PreviousInput_a");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.PosXRight_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.PosXRight_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.PosYRight_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.PosYRight_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.alpha_1_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.alpha_1_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.alpha_2_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.alpha_2_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.alpha_3_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.alpha_3_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.ArrowDown_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.ArrowDown_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.alpha_5_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.alpha_5_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.ArrowUp_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.ArrowUp_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.alpha_4_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.alpha_4_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.alpha_6_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.alpha_6_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.Start_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.Start_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.Memory_PreviousInput, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.Memory_PreviousInput");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.u_limit_out_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.u_limit_out_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.u_1_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.u_1_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.u_2_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.u_2_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.u_3_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.u_3_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.u_4_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.u_4_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.u_5_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.u_5_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_sixaxis2thruster_DW.u_6_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_sixaxis2thruster_DW.u_6_DWORK1");
    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.alpha1_rad_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.alpha1_rad_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.alpha2_rad_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.alpha2_rad_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.alpha3_rad_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.alpha3_rad_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.alpha4_rad_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.alpha4_rad_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.alpha5_rad_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.alpha5_rad_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.alpha6_rad_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.alpha6_rad_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.PosXLeft_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.PosXLeft_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.PosYLeft_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.PosYLeft_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.PosXRight_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.PosXRight_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.PosYRight_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.PosYRight_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.alpha_1_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.alpha_1_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.alpha_2_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.alpha_2_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.alpha_3_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.alpha_3_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.ArrowDown_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.ArrowDown_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.alpha_5_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.alpha_5_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.ArrowUp_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.ArrowUp_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.alpha_4_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.alpha_4_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.alpha_6_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.alpha_6_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.Start_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.Start_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.u_limit_out_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.u_limit_out_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.u_1_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.u_1_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.u_2_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.u_2_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.u_3_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.u_3_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.u_4_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.u_4_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.u_5_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.u_5_DWORK2");
    }

    for (count = 0; count < 22; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_sixaxis2thruster_DW.u_6_DWORK2, count, 18, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_sixaxis2thruster_DW.u_6_DWORK2");
    }
  }

  if ((clockTicks != NULL) && (clockTicksNames != NULL)) {
    clockTicks[0] = S->Timing.clockTick0;
    strcpy(clockTicksNames, "clockTick0");
  }

  return NI_OK;
}

/*========================================================================*
 * Function: NIRT_SetSimState
 *
 * Abstract:
 *
 * Returns:
 *	NI_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t NIRT_SetSimState(double* contStates, double* discStates,
  int32_t* clockTicks)
{
  int32_t count = 0;
  int32_t idx = 0;
  if (discStates != NULL) {
    idx = 0;
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE_i, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.DelayInput1_DSTATE_j, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha1_rad_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha2_rad_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha3_rad_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha4_rad_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha5_rad_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha6_rad_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.Memory5_PreviousInput, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosXLeft_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosYLeft_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.Memory5_PreviousInput_a, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosXRight_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosYRight_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_1_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_2_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_3_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.ArrowDown_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_5_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.ArrowUp_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_4_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_6_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.Start_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.Memory_PreviousInput, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_limit_out_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_1_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_2_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_3_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_4_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_5_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_6_DWORK1, 0,
      discStates[idx++], 0, 0);
    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha1_rad_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha2_rad_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha3_rad_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha4_rad_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha5_rad_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha6_rad_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosXLeft_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosYLeft_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosXRight_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.PosYRight_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_1_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_2_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_3_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.ArrowDown_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_5_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.ArrowUp_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_4_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.alpha_6_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.Start_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_limit_out_DWORK2,
        count, discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_1_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_2_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_3_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_4_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_5_DWORK2, count,
        discStates[idx++], 18, 0);
    }

    for (count = 0; count < 22; count++) {
      NIRT_SetValueByDataType(&ctrl_sixaxis2thruster_DW.u_6_DWORK2, count,
        discStates[idx++], 18, 0);
    }
  }

  if (clockTicks != NULL) {
    S->Timing.clockTick0 = clockTicks[0];
  }

  return NI_OK;
}

#endif                                 // of NI_ROOTMODEL_ctrl_sixaxis2thruster
