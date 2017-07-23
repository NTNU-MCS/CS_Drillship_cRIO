/*
 * ctrl_custom_SP_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ctrl_custom_SP".
 *
 * Model version              : 1.112
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Sun Jul 23 16:47:28 2017
 *
 * Target selection: NIVeriStand_VxWorks.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ctrl_custom_SP_private_h_
#define RTW_HEADER_ctrl_custom_SP_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "ctrl_custom_SP.h"

extern real_T rt_powd_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern real_T rt_remd_snf(real_T u0, real_T u1);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern void ctrl_custom_SP_MATLABFunction(const real_T rtu_omega[9], const
  real_T rtu_zeta[9], B_MATLABFunction_ctrl_custom__T *localB);
extern void ctrl_custom_SP_MATLABFunction2(real_T rtu_Tc_in1, real_T rtu_signal,
  real_T rtu_Tc_in2, B_MATLABFunction2_ctrl_custom_T *localB);
extern void CorecontrollerTorquePowerandCom(real_T rtu_k_cc, real_T rtu_p_cc,
  real_T rtu_r_cc, real_T rtu_n, real_T rtu_K_t0, real_T rtu_K_q0, real_T rtu_D,
  real_T rtu_Tr, real_T rtu_rho, real_T rtu_eps_c, real_T rtu_K_t0r, real_T
  rtu_K_q0r, B_CorecontrollerTorquePoweran_T *localB);
extern void ctrl_custom_SP_Supervisor(real_T rtu_control, real_T rtu_input,
  real_T rtu_n, B_Supervisor_ctrl_custom_SP_T *localB);
extern void ctrl_custo_ActualForceandTorque(real_T rtu_n, real_T rtu_Kq, real_T
  rtu_Kt, real_T rtu_Ktr, real_T rtu_Kqr, real_T rtu_Rho, real_T rtu_D, real_T
  rtu_eps_c, real_T rtu_env, B_ActualForceandTorque_ctrl_c_T *localB);
extern void ctrl_custom_SP_MATLABFunction_a(real_T rtu_Td, real_T rtu_K_t0,
  real_T rtu_K_t0r, real_T rtu_rho, real_T rtu_D, real_T rtu_eps_c, real_T
  rtu_n_r, B_MATLABFunction_ctrl_custo_a_T *localB);

/* private model entry point functions */
extern void ctrl_custom_SP_derivatives(void);

#endif                                 /* RTW_HEADER_ctrl_custom_SP_private_h_ */
