/*
 * ctrl_custom_turning_frame_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ctrl_custom_turning_frame".
 *
 * Model version              : 1.106
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Sun Jul 23 16:07:03 2017
 *
 * Target selection: NIVeriStand_VxWorks.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ctrl_custom_turning_frame_types_h_
#define RTW_HEADER_ctrl_custom_turning_frame_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_RTaiPxiKLcPdY6Jhd6V4aB_
#define DEFINED_TYPEDEF_FOR_struct_RTaiPxiKLcPdY6Jhd6V4aB_

typedef struct {
  real_T T1[4];
  real_T T2[4];
  real_T T3[4];
  real_T T4[4];
  real_T T5[4];
  real_T T6[4];
} struct_RTaiPxiKLcPdY6Jhd6V4aB;

#endif

/* Parameters for system: '<S45>/CoreSubsys' */
typedef struct P_CoreSubsys_ctrl_custom_turn_T_ P_CoreSubsys_ctrl_custom_turn_T;

/* Parameters (auto storage) */
typedef struct P_ctrl_custom_turning_frame_T_ P_ctrl_custom_turning_frame_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_ctrl_custom_turning_f_T RT_MODEL_ctrl_custom_turning__T;

#endif                                 /* RTW_HEADER_ctrl_custom_turning_frame_types_h_ */
