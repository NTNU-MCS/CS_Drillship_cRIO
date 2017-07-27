/*
 * ctrl_custom_private.h
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

#ifndef RTW_HEADER_ctrl_custom_private_h_
#define RTW_HEADER_ctrl_custom_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "ctrl_custom.h"

extern real_T rt_roundd_snf(real_T u);
extern real_T rt_remd_snf(real_T u0, real_T u1);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern void ctrl_custom_MATLABFunction(const real_T rtu_omega[9], const real_T
  rtu_zeta[9], B_MATLABFunction_ctrl_custom_T *localB);
extern void ctrl_custom_MATLABFunction2(real_T rtu_Tc_in1, real_T rtu_signal,
  real_T rtu_Tc_in2, B_MATLABFunction2_ctrl_custom_T *localB);

/* private model entry point functions */
extern void ctrl_custom_derivatives(void);

#endif                                 /* RTW_HEADER_ctrl_custom_private_h_ */
