/*
 * ctrl_custom_turning_frame.c
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

#include "ctrl_custom_turning_frame.h"
#include "ctrl_custom_turning_frame_private.h"

const real_T ctrl_custom_turning_frame_RGND = 0.0;/* real_T ground */

/* Block signals (auto storage) */
B_ctrl_custom_turning_frame_T ctrl_custom_turning_frame_B;

/* Continuous states */
X_ctrl_custom_turning_frame_T ctrl_custom_turning_frame_X;

/* Block states (auto storage) */
DW_ctrl_custom_turning_frame_T ctrl_custom_turning_frame_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_ctrl_custom_turning_f_T ctrl_custom_turning_fra_PrevZCX;

/* Real-time model */
RT_MODEL_ctrl_custom_turning__T ctrl_custom_turning_frame_M_;
RT_MODEL_ctrl_custom_turning__T *const ctrl_custom_turning_frame_M =
  &ctrl_custom_turning_frame_M_;

/* Forward declaration for local functions */
static void ctrl_custom_turning_frame_diag(const real_T v[6], real_T d[36]);
static real_T ctrl_custom_turning_frame_xnrm2(int32_T n, const real_T x[18],
  int32_T ix0);
static real_T ctrl_custom_turning_fra_xnrm2_k(int32_T n, const real_T x[6],
  int32_T ix0);
static void ctrl_custom_turning_fr_xaxpy_a2(int32_T n, real_T a, const real_T x
  [3], int32_T ix0, real_T y[18], int32_T iy0);
static void ctrl_custom_turning_fra_xaxpy_a(int32_T n, real_T a, const real_T x
  [18], int32_T ix0, real_T y[3], int32_T iy0);
static void ctrl_custom_turning_frame_xscal(real_T a, real_T x[9], int32_T ix0);
static void ctrl_custom_turning_fra_xscal_i(real_T a, real_T x[36], int32_T ix0);
static void ctrl_custom_turning_frame_xswap(real_T x[36], int32_T ix0, int32_T
  iy0);
static void ctrl_custom_turning_fra_xswap_c(real_T x[9], int32_T ix0, int32_T
  iy0);
static void ctrl_custom_turning_frame_xrotg(real_T *a, real_T *b, real_T *c,
  real_T *s);
static void ctrl_custom_turning_frame_xrot(real_T x[36], int32_T ix0, int32_T
  iy0, real_T c, real_T s);
static void ctrl_custom_turning_fram_xrot_n(real_T x[9], int32_T ix0, int32_T
  iy0, real_T c, real_T s);
static real_T ctrl_custom_turning_fr_xdotc_ls(int32_T n, const real_T x[36],
  int32_T ix0, const real_T y[36], int32_T iy0);
static void ctrl_custom_turning__xaxpy_a2fb(int32_T n, real_T a, int32_T ix0,
  real_T y[36], int32_T iy0);
static real_T ctrl_custom_turning_fra_xdotc_l(int32_T n, const real_T x[9],
  int32_T ix0, const real_T y[9], int32_T iy0);
static void ctrl_custom_turning_f_xaxpy_a2f(int32_T n, real_T a, int32_T ix0,
  real_T y[9], int32_T iy0);
static real_T ctrl_custom_turning_frame_xdotc(int32_T n, const real_T x[18],
  int32_T ix0, const real_T y[18], int32_T iy0);
static void ctrl_custom_turning_frame_xaxpy(int32_T n, real_T a, int32_T ix0,
  real_T y[18], int32_T iy0);
static void ctrl_custom_turning_frame_svd_h(const real_T A[18], real_T U[9],
  real_T S[9], real_T V[18]);
static void ctrl_custom_turning_frame_svd(const real_T A[18], real_T U[9],
  real_T S[9], real_T V[18]);
static void ctrl_custom_turning_fr_isfinite(const real_T x[9], boolean_T b[9]);
static real_T ctrl_custom_turning_fr_xnrm2_ky(int32_T n, const real_T x[36],
  int32_T ix0);
static real_T ctrl_custom_turning_f_xnrm2_kyb(int32_T n, const real_T x[12],
  int32_T ix0);
static void ctrl_custom_turni_xaxpy_a2fbjv1(int32_T n, real_T a, const real_T x
  [3], int32_T ix0, real_T y[36], int32_T iy0);
static void ctrl_custom_turnin_xaxpy_a2fbjv(int32_T n, real_T a, const real_T x
  [36], int32_T ix0, real_T y[3], int32_T iy0);
static void ctrl_custom_turning_fr_xscal_ie(real_T a, real_T x[144], int32_T ix0);
static void ctrl_custom_turning_fr_xswap_cs(real_T x[144], int32_T ix0, int32_T
  iy0);
static void ctrl_custom_turning_fra_xrot_nd(real_T x[144], int32_T ix0, int32_T
  iy0, real_T c, real_T s);
static real_T ctrl_custom_turning__xdotc_lsov(int32_T n, const real_T x[144],
  int32_T ix0, const real_T y[144], int32_T iy0);
static void ctrl_custom_turn_xaxpy_a2fbjv1g(int32_T n, real_T a, int32_T ix0,
  real_T y[144], int32_T iy0);
static real_T ctrl_custom_turning_f_xdotc_lso(int32_T n, const real_T x[36],
  int32_T ix0, const real_T y[36], int32_T iy0);
static void ctrl_custom_turning_xaxpy_a2fbj(int32_T n, real_T a, int32_T ix0,
  real_T y[36], int32_T iy0);
static void ctrl_custom_turning_fra_svd_hb2(const real_T A[36], real_T U[9],
  real_T S[9], real_T V[36]);
static void ctrl_custom_turning_fram_svd_hb(const real_T A[36], real_T U[9],
  real_T S[9], real_T V[36]);
static void ctrl_custom_turning_frame_abs(const real_T x[2], real_T y[2]);
static void ctrl_custom_turning_frame_cosd(real_T *x);
static void ctrl_custom_turning_frame_sind(real_T *x);
static void ctrl_custom_turning_fram_cosd_m(real_T *x);
static void ctrl_custom_turning_fram_sind_k(real_T *x);

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 35;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  ctrl_custom_turning_frame_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  ctrl_custom_turning_frame_output();
  ctrl_custom_turning_frame_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  ctrl_custom_turning_frame_output();
  ctrl_custom_turning_frame_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * Output and update for atomic system:
 *    '<S11>/MATLAB Function'
 *    '<S11>/MATLAB Function1'
 */
void ctrl_custom_turn_MATLABFunction(const real_T rtu_omega[9], const real_T
  rtu_zeta[9], B_MATLABFunction_ctrl_custom__T *localB)
{
  int32_T i;
  int32_T i_0;

  /* MATLAB Function 'Referance/MATLAB Function': '<S40>:1' */
  /* '<S40>:1:3' */
  for (i_0 = 0; i_0 < 3; i_0++) {
    for (i = 0; i < 3; i++) {
      localB->y[i + 3 * i_0] = 0.0;
      localB->y[i + 3 * i_0] += 2.0 * rtu_zeta[i] * rtu_omega[3 * i_0];
      localB->y[i + 3 * i_0] += rtu_zeta[i + 3] * 2.0 * rtu_omega[3 * i_0 + 1];
      localB->y[i + 3 * i_0] += rtu_zeta[i + 6] * 2.0 * rtu_omega[3 * i_0 + 2];
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S52>/MATLAB Function2'
 *    '<S52>/MATLAB Function3'
 *    '<S52>/MATLAB Function4'
 *    '<S52>/MATLAB Function5'
 *    '<S52>/MATLAB Function6'
 */
void ctrl_custom_tur_MATLABFunction2(real_T rtu_Tc_in1, real_T rtu_signal,
  real_T rtu_Tc_in2, B_MATLABFunction2_ctrl_custom_T *localB)
{
  /* MATLAB Function 'Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function2': '<S61>:1' */
  if (rtu_signal >= 0.0) {
    /* '<S61>:1:4' */
    /* '<S61>:1:5' */
    localB->Tc_out = rtu_Tc_in1;
  } else {
    /* signal < 0 */
    /* '<S61>:1:7' */
    localB->Tc_out = rtu_Tc_in2;
  }
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = (rtNaN);
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/*
 * Output and update for atomic system:
 *    '<S70>/Core controller: Torque,Power and Combined Torque//Power'
 *    '<S79>/Core controller: Torque,Power and Combined Torque//Power'
 *    '<S88>/Core controller: Torque,Power and Combined Torque//Power'
 *    '<S97>/Core controller: Torque,Power and Combined Torque//Power'
 *    '<S106>/Core controller: Torque,Power and Combined Torque//Power'
 *    '<S115>/Core controller: Torque,Power and Combined Torque//Power'
 */
void CorecontrollerTorquePowerandCom(real_T rtu_k_cc, real_T rtu_p_cc, real_T
  rtu_r_cc, real_T rtu_n, real_T rtu_K_t0, real_T rtu_K_q0, real_T rtu_D, real_T
  rtu_Tr, real_T rtu_rho, real_T rtu_eps_c, real_T rtu_K_t0r, real_T rtu_K_q0r,
  B_CorecontrollerTorquePoweran_T *localB)
{
  real_T lambda_c;
  real_T K_TC;
  real_T K_QC;
  real_T rtu_Tr_0;

  /* MATLAB Function 'Thruster control /Thruster 1/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power': '<S74>:1' */
  /* '<S74>:1:4' */
  lambda_c = tanh(rtu_eps_c * rtu_n / 5.0) * 0.5 + 0.5;

  /* '<S74>:1:5' */
  K_TC = (1.0 - lambda_c) * rtu_K_t0r + rtu_K_t0 * lambda_c;

  /* '<S74>:1:6' */
  K_QC = (1.0 - lambda_c) * rtu_K_q0r + rtu_K_q0 * lambda_c;

  /* '<S74>:1:7' */
  lambda_c = K_QC / K_TC * rtu_D * rtu_Tr;
  if (rtu_n == 0.0) {
    /* '<S74>:1:8' */
    /* '<S74>:1:9' */
    K_TC = 0.0;
  } else {
    /* '<S74>:1:11' */
    if (rtu_Tr < 0.0) {
      rtu_Tr_0 = -1.0;
    } else if (rtu_Tr > 0.0) {
      rtu_Tr_0 = 1.0;
    } else if (rtu_Tr == 0.0) {
      rtu_Tr_0 = 0.0;
    } else {
      rtu_Tr_0 = rtu_Tr;
    }

    K_TC = rtu_Tr_0 * K_QC * rt_powd_snf(fabs(rtu_Tr), 1.5) / (sqrt(rtu_rho) *
      rtu_D * rt_powd_snf(K_TC, 1.5) * fabs(rtu_n));
  }

  /* '<S74>:1:13' */
  K_QC = exp(rt_powd_snf(fabs(rtu_p_cc * rtu_n), rtu_r_cc) * -rtu_k_cc);

  /* '<S74>:1:15' */
  localB->Qcc = (1.0 - K_QC) * K_TC + K_QC * lambda_c;
  localB->Qcq = lambda_c;
  localB->Qcp = K_TC;
}

/*
 * Output and update for atomic system:
 *    '<S68>/Supervisor'
 *    '<S77>/Supervisor'
 *    '<S86>/Supervisor'
 *    '<S95>/Supervisor'
 *    '<S104>/Supervisor'
 *    '<S113>/Supervisor'
 */
void ctrl_custom_turning__Supervisor(real_T rtu_control, real_T rtu_input,
  real_T rtu_n, B_Supervisor_ctrl_custom_turn_T *localB)
{
  /* MATLAB Function 'Thruster control /Thruster 1/Thruster control/Supervisor': '<S73>:1' */
  /* '<S73>:1:2' */
  localB->u = 1.0;
  if (rtu_control == 1.0) {
    /* '<S73>:1:3' */
    if (rtu_input == 1.0) {
      /* '<S73>:1:4' */
      /* '<S73>:1:5' */
      localB->u = 1.0;
    } else if (rtu_input == 2.0) {
      /* '<S73>:1:6' */
      /* '<S73>:1:7' */
      localB->u = 2.0;
    } else if (((rtu_input == 3.0) && (rtu_n > 0.0)) || ((rtu_input == 3.0) &&
                (rtu_n < 0.0))) {
      /* '<S73>:1:8' */
      /* '<S73>:1:9' */
      localB->u = 3.0;
    } else if ((rtu_input == 4.0) || ((rtu_input == 3.0) && (rtu_n == 0.0))) {
      /* '<S73>:1:10' */
      /* '<S73>:1:11' */
      localB->u = 4.0;
    } else {
      /* '<S73>:1:13' */
      localB->u = 5.0;
    }
  }

  if (rtu_control == 2.0) {
    /* '<S73>:1:17' */
    if (rtu_input == 1.0) {
      /* '<S73>:1:18' */
      /* '<S73>:1:19' */
      localB->u = 1.0;
    } else if (rtu_input == 2.0) {
      /* '<S73>:1:20' */
      /* '<S73>:1:21' */
      localB->u = 2.0;
    } else if (((rtu_input == 3.0) && (rtu_n > 0.0)) || ((rtu_input == 3.0) &&
                (rtu_n < 0.0))) {
      /* '<S73>:1:22' */
      /* '<S73>:1:23' */
      localB->u = 3.0;
    } else if ((rtu_input == 4.0) || ((rtu_input == 3.0) && (rtu_n == 0.0))) {
      /* '<S73>:1:24' */
      /* '<S73>:1:25' */
      localB->u = 4.0;
    } else {
      /* '<S73>:1:27' */
      localB->u = 5.0;
    }
  }

  if (rtu_control == 3.0) {
    /* '<S73>:1:31' */
    if (rtu_input == 1.0) {
      /* '<S73>:1:32' */
      /* '<S73>:1:33' */
      localB->u = 1.0;
    } else if (rtu_input == 2.0) {
      /* '<S73>:1:34' */
      /* '<S73>:1:35' */
      localB->u = 2.0;
    } else if (((rtu_input == 3.0) && (rtu_n > 0.0)) || ((rtu_input == 3.0) &&
                (rtu_n < 0.0))) {
      /* '<S73>:1:36' */
      /* '<S73>:1:37' */
      localB->u = 3.0;
    } else if ((rtu_input == 4.0) || ((rtu_input == 3.0) && (rtu_n == 0.0))) {
      /* '<S73>:1:38' */
      /* '<S73>:1:39' */
      localB->u = 4.0;
    } else {
      /* '<S73>:1:41' */
      localB->u = 5.0;
    }
  }

  if (rtu_control == 4.0) {
    /* '<S73>:1:45' */
    if (rtu_input == 1.0) {
      /* '<S73>:1:46' */
      /* '<S73>:1:47' */
      localB->u = 1.0;
    } else if (rtu_input == 2.0) {
      /* '<S73>:1:48' */
      /* '<S73>:1:49' */
      localB->u = 2.0;
    } else if (((rtu_input == 3.0) && (rtu_n > 0.0)) || ((rtu_input == 3.0) &&
                (rtu_n < 0.0))) {
      /* '<S73>:1:50' */
      /* '<S73>:1:51' */
      localB->u = 3.0;
    } else if ((rtu_input == 4.0) || ((rtu_input == 3.0) && (rtu_n == 0.0))) {
      /* '<S73>:1:52' */
      /* '<S73>:1:53' */
      localB->u = 4.0;
    } else {
      /* '<S73>:1:55' */
      localB->u = 5.0;
    }
  }

  if (rtu_control == 5.0) {
    /* '<S73>:1:59' */
    if (rtu_input == 1.0) {
      /* '<S73>:1:60' */
      /* '<S73>:1:61' */
      localB->u = 1.0;
    } else if (rtu_input == 2.0) {
      /* '<S73>:1:62' */
      /* '<S73>:1:63' */
      localB->u = 2.0;
    } else if (((rtu_input == 3.0) && (rtu_n > 0.0)) || ((rtu_input == 3.0) &&
                (rtu_n < 0.0))) {
      /* '<S73>:1:64' */
      /* '<S73>:1:65' */
      localB->u = 3.0;
    } else if ((rtu_input == 4.0) || ((rtu_input == 3.0) && (rtu_n == 0.0))) {
      /* '<S73>:1:66' */
      /* '<S73>:1:67' */
      localB->u = 4.0;
    } else {
      /* '<S73>:1:69' */
      localB->u = 5.0;
    }
  }
}

/*
 * Output and update for atomic system:
 *    '<S75>/Actual Force and Torque'
 *    '<S84>/Actual Force and Torque'
 *    '<S93>/Actual Force and Torque'
 *    '<S102>/Actual Force and Torque'
 *    '<S111>/Actual Force and Torque'
 */
void ctrl_custo_ActualForceandTorque(real_T rtu_n, real_T rtu_Kq, real_T rtu_Kt,
  real_T rtu_Ktr, real_T rtu_Kqr, real_T rtu_Rho, real_T rtu_D, real_T rtu_eps_c,
  real_T rtu_env, B_ActualForceandTorque_ctrl_c_T *localB)
{
  real_T lambda_c;
  real_T rtu_n_0;

  /* MATLAB Function 'Thruster control /Thruster 2/Propeller Hydrodynamics/Actual Force and Torque': '<S78>:1' */
  /* '<S78>:1:3' */
  lambda_c = tanh(rtu_eps_c * rtu_n / 5.0) * 0.5 + 0.5;

  /*  Smooth switching between positive and negative thrust. 5 makes switch happen between -5 and 5 */
  /* '<S78>:1:4' */
  /* '<S78>:1:5' */
  /* '<S78>:1:7' */
  if (rtu_n < 0.0) {
    rtu_n_0 = -1.0;
  } else if (rtu_n > 0.0) {
    rtu_n_0 = 1.0;
  } else if (rtu_n == 0.0) {
    rtu_n_0 = 0.0;
  } else {
    rtu_n_0 = rtu_n;
  }

  localB->Ta = ((1.0 - lambda_c) * rtu_Ktr + rtu_Kt * lambda_c) * rtu_n_0 *
    rtu_Rho * rt_powd_snf(rtu_D, 4.0) * (rtu_n * rtu_n) - rtu_env;

  /* '<S78>:1:8' */
  if (rtu_n < 0.0) {
    rtu_n_0 = -1.0;
  } else if (rtu_n > 0.0) {
    rtu_n_0 = 1.0;
  } else if (rtu_n == 0.0) {
    rtu_n_0 = 0.0;
  } else {
    rtu_n_0 = rtu_n;
  }

  localB->Qa = ((1.0 - lambda_c) * rtu_Kqr + rtu_Kq * lambda_c) * rtu_n_0 *
    rtu_Rho * rt_powd_snf(rtu_D, 5.0) * (rtu_n * rtu_n) - rtu_env;
}

/*
 * Output and update for atomic system:
 *    '<S77>/MATLAB Function'
 *    '<S95>/MATLAB Function'
 *    '<S104>/MATLAB Function'
 */
void ctrl_custom_tu_MATLABFunction_a(real_T rtu_Td, real_T rtu_K_t0, real_T
  rtu_K_t0r, real_T rtu_rho, real_T rtu_D, real_T rtu_eps_c, real_T rtu_n_r,
  B_MATLABFunction_ctrl_custo_a_T *localB)
{
  real_T lambda_c;
  real_T rtu_Td_0;
  real_T rtu_n_r_0;

  /* MATLAB Function 'Thruster control /Thruster 2/Thruster control/MATLAB Function': '<S81>:1' */
  /* '<S81>:1:5' */
  if (rtu_Td < 0.0) {
    rtu_Td_0 = -1.0;
  } else if (rtu_Td > 0.0) {
    rtu_Td_0 = 1.0;
  } else if (rtu_Td == 0.0) {
    rtu_Td_0 = 0.0;
  } else {
    rtu_Td_0 = rtu_Td;
  }

  rtu_Td_0 *= sqrt(fabs(rtu_Td) / (rtu_rho * rt_powd_snf(rtu_D, 4.0) * rtu_K_t0));

  /* '<S81>:1:7' */
  lambda_c = tanh(rtu_eps_c * rtu_Td_0 / 5.0) * 0.5 + 0.5;

  /*  Smooth switching between positive and negative thrust */
  /* '<S81>:1:8' */
  /* '<S81>:1:10' */
  if (rtu_n_r < 0.0) {
    rtu_n_r_0 = -1.0;
  } else if (rtu_n_r > 0.0) {
    rtu_n_r_0 = 1.0;
  } else if (rtu_n_r == 0.0) {
    rtu_n_r_0 = 0.0;
  } else {
    rtu_n_r_0 = rtu_n_r;
  }

  localB->T_r = ((1.0 - lambda_c) * rtu_K_t0r + rtu_K_t0 * lambda_c) * rtu_n_r_0
    * rtu_rho * rt_powd_snf(rtu_D, 4.0) * (rtu_n_r * rtu_n_r);
  localB->n_d = rtu_Td_0;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T u1_0;
  if (!((!rtIsNaN(u0)) && (!rtIsInf(u0)) && ((!rtIsNaN(u1)) && (!rtIsInf(u1)))))
  {
    y = (rtNaN);
  } else {
    if (u1 < 0.0) {
      u1_0 = ceil(u1);
    } else {
      u1_0 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != u1_0)) {
      u1_0 = u0 / u1;
      if (fabs(u1_0 - rt_roundd_snf(u1_0)) <= DBL_EPSILON * fabs(u1_0)) {
        y = 0.0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_frame_diag(const real_T v[6], real_T d[36])
{
  int32_T j;
  memset(&d[0], 0, 36U * sizeof(real_T));
  for (j = 0; j < 6; j++) {
    d[j + 6 * j] = v[j];
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static real_T ctrl_custom_turning_frame_xnrm2(int32_T n, const real_T x[18],
  int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  if (n == 1) {
    y = fabs(x[ix0 - 1]);
  } else {
    scale = 2.2250738585072014E-308;
    kend = (ix0 + n) - 1;
    for (k = ix0; k <= kend; k++) {
      absxk = fabs(x[k - 1]);
      if (absxk > scale) {
        t = scale / absxk;
        y = y * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        y += t * t;
      }
    }

    y = scale * sqrt(y);
  }

  return y;
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static real_T ctrl_custom_turning_fra_xnrm2_k(int32_T n, const real_T x[6],
  int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  scale = 2.2250738585072014E-308;
  kend = (ix0 + n) - 1;
  for (k = ix0; k <= kend; k++) {
    absxk = fabs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * sqrt(y);
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_fr_xaxpy_a2(int32_T n, real_T a, const real_T x
  [3], int32_T ix0, real_T y[18], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!((n < 1) || (a == 0.0))) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_fra_xaxpy_a(int32_T n, real_T a, const real_T x
  [18], int32_T ix0, real_T y[3], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!((n < 1) || (a == 0.0))) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_frame_xscal(real_T a, real_T x[9], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 2; k++) {
    x[k - 1] *= a;
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_fra_xscal_i(real_T a, real_T x[36], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 5; k++) {
    x[k - 1] *= a;
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_frame_xswap(real_T x[36], int32_T ix0, int32_T
  iy0)
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 6; k++) {
    temp = x[ix];
    x[ix] = x[iy];
    x[iy] = temp;
    ix++;
    iy++;
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_fra_xswap_c(real_T x[9], int32_T ix0, int32_T
  iy0)
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  temp = x[ix];
  x[ix] = x[iy];
  x[iy] = temp;
  ix++;
  iy++;
  temp = x[ix];
  x[ix] = x[iy];
  x[iy] = temp;
  ix++;
  iy++;
  temp = x[ix];
  x[ix] = x[iy];
  x[iy] = temp;
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_frame_xrotg(real_T *a, real_T *b, real_T *c,
  real_T *s)
{
  real_T roe;
  real_T absa;
  real_T absb;
  real_T scale;
  real_T ads;
  real_T bds;
  roe = *b;
  absa = fabs(*a);
  absb = fabs(*b);
  if (absa > absb) {
    roe = *a;
  }

  scale = absa + absb;
  if (scale == 0.0) {
    *s = 0.0;
    *c = 1.0;
    scale = 0.0;
    absa = 0.0;
  } else {
    ads = absa / scale;
    bds = absb / scale;
    scale *= sqrt(ads * ads + bds * bds);
    if (roe < 0.0) {
      scale = -scale;
    }

    *c = *a / scale;
    *s = *b / scale;
    if (absa > absb) {
      absa = *s;
    } else if (*c != 0.0) {
      absa = 1.0 / *c;
    } else {
      absa = 1.0;
    }
  }

  *a = scale;
  *b = absa;
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_frame_xrot(real_T x[36], int32_T ix0, int32_T
  iy0, real_T c, real_T s)
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 6; k++) {
    temp = c * x[ix] + s * x[iy];
    x[iy] = c * x[iy] - s * x[ix];
    x[ix] = temp;
    iy++;
    ix++;
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_fram_xrot_n(real_T x[9], int32_T ix0, int32_T
  iy0, real_T c, real_T s)
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  temp = c * x[ix] + s * x[iy];
  x[iy] = c * x[iy] - s * x[ix];
  x[ix] = temp;
  iy++;
  ix++;
  temp = c * x[ix] + s * x[iy];
  x[iy] = c * x[iy] - s * x[ix];
  x[ix] = temp;
  iy++;
  ix++;
  temp = c * x[ix] + s * x[iy];
  x[iy] = c * x[iy] - s * x[ix];
  x[ix] = temp;
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static real_T ctrl_custom_turning_fr_xdotc_ls(int32_T n, const real_T x[36],
  int32_T ix0, const real_T y[36], int32_T iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  if (!(n < 1)) {
    ix = ix0;
    iy = iy0;
    for (k = 1; k <= n; k++) {
      d += x[ix - 1] * y[iy - 1];
      ix++;
      iy++;
    }
  }

  return d;
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning__xaxpy_a2fb(int32_T n, real_T a, int32_T ix0,
  real_T y[36], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!((n < 1) || (a == 0.0))) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix];
      ix++;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static real_T ctrl_custom_turning_fra_xdotc_l(int32_T n, const real_T x[9],
  int32_T ix0, const real_T y[9], int32_T iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  ix = ix0;
  iy = iy0;
  for (k = 1; k <= n; k++) {
    d += x[ix - 1] * y[iy - 1];
    ix++;
    iy++;
  }

  return d;
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_f_xaxpy_a2f(int32_T n, real_T a, int32_T ix0,
  real_T y[9], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix];
      ix++;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static real_T ctrl_custom_turning_frame_xdotc(int32_T n, const real_T x[18],
  int32_T ix0, const real_T y[18], int32_T iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  ix = ix0;
  iy = iy0;
  for (k = 1; k <= n; k++) {
    d += x[ix - 1] * y[iy - 1];
    ix++;
    iy++;
  }

  return d;
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_frame_xaxpy(int32_T n, real_T a, int32_T ix0,
  real_T y[18], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix];
      ix++;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_frame_svd_h(const real_T A[18], real_T U[9],
  real_T S[9], real_T V[18])
{
  real_T b_A[18];
  real_T s[4];
  real_T e[6];
  real_T work[3];
  real_T Vf[36];
  int32_T q;
  boolean_T apply_transform;
  int32_T m;
  real_T snorm;
  real_T ztest0;
  int32_T kase;
  int32_T qs;
  real_T ztest;
  real_T smm1;
  real_T emm1;
  real_T sqds;
  real_T shift;
  int32_T k_ii;
  real_T varargin_1[5];
  int32_T i;
  boolean_T exitg1;
  boolean_T exitg2;
  int32_T exitg3;
  memcpy(&b_A[0], &A[0], 18U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    e[i] = 0.0;
  }

  work[0] = 0.0;
  work[1] = 0.0;
  work[2] = 0.0;
  memset(&U[0], 0, 9U * sizeof(real_T));
  memset(&Vf[0], 0, 36U * sizeof(real_T));
  i = 0;
  apply_transform = false;
  snorm = ctrl_custom_turning_frame_xnrm2(3, b_A, 1);
  if (snorm > 0.0) {
    apply_transform = true;
    if (b_A[0] < 0.0) {
      s[0] = -snorm;
    } else {
      s[0] = snorm;
    }

    if (fabs(s[0]) >= 1.0020841800044864E-292) {
      snorm = 1.0 / s[0];
      for (qs = 0; qs + 1 < 4; qs++) {
        b_A[qs] *= snorm;
      }
    } else {
      for (qs = 0; qs + 1 < 4; qs++) {
        b_A[qs] /= s[0];
      }
    }

    b_A[0]++;
    s[0] = -s[0];
  } else {
    s[0] = 0.0;
  }

  for (q = 1; q + 1 < 7; q++) {
    qs = 3 * q;
    if (apply_transform) {
      ctrl_custom_turning_frame_xaxpy(3, -(ctrl_custom_turning_frame_xdotc(3,
        b_A, 1, b_A, qs + 1) / b_A[0]), 1, b_A, qs + 1);
    }

    e[q] = b_A[qs];
  }

  while (i + 1 < 4) {
    U[i] = b_A[i];
    i++;
  }

  snorm = ctrl_custom_turning_fra_xnrm2_k(5, e, 2);
  if (snorm == 0.0) {
    e[0] = 0.0;
  } else {
    if (e[1] < 0.0) {
      e[0] = -snorm;
    } else {
      e[0] = snorm;
    }

    snorm = e[0];
    if (fabs(e[0]) >= 1.0020841800044864E-292) {
      snorm = 1.0 / e[0];
      for (i = 1; i + 1 < 7; i++) {
        e[i] *= snorm;
      }
    } else {
      for (i = 1; i + 1 < 7; i++) {
        e[i] /= snorm;
      }
    }

    e[1]++;
    e[0] = -e[0];
    for (i = 1; i + 1 < 4; i++) {
      work[i] = 0.0;
    }

    for (i = 1; i + 1 < 7; i++) {
      ctrl_custom_turning_fra_xaxpy_a(2, e[i], b_A, 3 * i + 2, work, 2);
    }

    for (i = 1; i + 1 < 7; i++) {
      ctrl_custom_turning_fr_xaxpy_a2(2, -e[i] / e[1], work, 2, b_A, 3 * i + 2);
    }
  }

  for (i = 1; i + 1 < 7; i++) {
    Vf[i] = e[i];
  }

  apply_transform = false;
  snorm = ctrl_custom_turning_frame_xnrm2(2, b_A, 5);
  if (snorm > 0.0) {
    apply_transform = true;
    if (b_A[4] < 0.0) {
      s[1] = -snorm;
    } else {
      s[1] = snorm;
    }

    if (fabs(s[1]) >= 1.0020841800044864E-292) {
      snorm = 1.0 / s[1];
      for (qs = 4; qs + 1 < 7; qs++) {
        b_A[qs] *= snorm;
      }
    } else {
      for (qs = 4; qs + 1 < 7; qs++) {
        b_A[qs] /= s[1];
      }
    }

    b_A[4]++;
    s[1] = -s[1];
  } else {
    s[1] = 0.0;
  }

  for (q = 2; q + 1 < 7; q++) {
    qs = 3 * q + 1;
    if (apply_transform) {
      ctrl_custom_turning_frame_xaxpy(2, -(ctrl_custom_turning_frame_xdotc(2,
        b_A, 5, b_A, qs + 1) / b_A[4]), 5, b_A, qs + 1);
    }

    e[q] = b_A[qs];
  }

  for (i = 1; i + 1 < 4; i++) {
    U[i + 3] = b_A[i + 3];
  }

  snorm = ctrl_custom_turning_fra_xnrm2_k(4, e, 3);
  if (snorm == 0.0) {
    e[1] = 0.0;
  } else {
    if (e[2] < 0.0) {
      e[1] = -snorm;
    } else {
      e[1] = snorm;
    }

    snorm = e[1];
    if (fabs(e[1]) >= 1.0020841800044864E-292) {
      snorm = 1.0 / e[1];
      for (i = 2; i + 1 < 7; i++) {
        e[i] *= snorm;
      }
    } else {
      for (i = 2; i + 1 < 7; i++) {
        e[i] /= snorm;
      }
    }

    e[2]++;
    e[1] = -e[1];
    for (i = 2; i + 1 < 4; i++) {
      work[i] = 0.0;
    }

    for (i = 2; i + 1 < 7; i++) {
      ctrl_custom_turning_fra_xaxpy_a(1, e[i], b_A, 3 * i + 3, work, 3);
    }

    for (i = 2; i + 1 < 7; i++) {
      ctrl_custom_turning_fr_xaxpy_a2(1, -e[i] / e[2], work, 3, b_A, 3 * i + 3);
    }
  }

  for (i = 2; i + 1 < 7; i++) {
    Vf[i + 6] = e[i];
  }

  for (q = 3; q + 1 < 7; q++) {
    e[q] = b_A[3 * q + 2];
  }

  snorm = ctrl_custom_turning_fra_xnrm2_k(3, e, 4);
  if (snorm == 0.0) {
    e[2] = 0.0;
  } else {
    if (e[3] < 0.0) {
      e[2] = -snorm;
    } else {
      e[2] = snorm;
    }

    snorm = e[2];
    if (fabs(e[2]) >= 1.0020841800044864E-292) {
      snorm = 1.0 / e[2];
      for (i = 3; i + 1 < 7; i++) {
        e[i] *= snorm;
      }
    } else {
      for (i = 3; i + 1 < 7; i++) {
        e[i] /= snorm;
      }
    }

    e[3]++;
    e[2] = -e[2];
  }

  for (i = 3; i + 1 < 7; i++) {
    Vf[i + 12] = e[i];
  }

  m = 2;
  s[2] = b_A[8];
  s[3] = 0.0;
  e[3] = 0.0;
  U[6] = 0.0;
  U[7] = 0.0;
  U[8] = 1.0;
  for (q = 1; q >= 0; q += -1) {
    i = 3 * q + q;
    if (s[q] != 0.0) {
      for (kase = q + 1; kase + 1 < 4; kase++) {
        qs = (3 * kase + q) + 1;
        ctrl_custom_turning_f_xaxpy_a2f(3 - q, -(ctrl_custom_turning_fra_xdotc_l
          (3 - q, U, i + 1, U, qs) / U[i]), i + 1, U, qs);
      }

      for (qs = q; qs + 1 < 4; qs++) {
        U[qs + 3 * q] = -U[3 * q + qs];
      }

      U[i]++;
      i = 1;
      while (i <= q) {
        U[3] = 0.0;
        i = 2;
      }
    } else {
      U[3 * q] = 0.0;
      U[1 + 3 * q] = 0.0;
      U[2 + 3 * q] = 0.0;
      U[i] = 1.0;
    }
  }

  for (i = 5; i >= 0; i += -1) {
    if ((i + 1 <= 3) && (e[i] != 0.0)) {
      q = (6 * i + i) + 2;
      for (qs = i + 1; qs + 1 < 7; qs++) {
        kase = (6 * qs + i) + 2;
        ctrl_custom_turning__xaxpy_a2fb(5 - i, -(ctrl_custom_turning_fr_xdotc_ls
          (5 - i, Vf, q, Vf, kase) / Vf[q - 1]), q, Vf, kase);
      }
    }

    for (q = 0; q < 6; q++) {
      Vf[q + 6 * i] = 0.0;
    }

    Vf[i + 6 * i] = 1.0;
  }

  ztest = e[0];
  if (s[0] != 0.0) {
    ztest0 = fabs(s[0]);
    snorm = s[0] / ztest0;
    s[0] = ztest0;
    ztest = e[0] / snorm;
    ctrl_custom_turning_frame_xscal(snorm, U, 1);
  }

  if (ztest != 0.0) {
    ztest0 = fabs(ztest);
    snorm = ztest0 / ztest;
    ztest = ztest0;
    s[1] *= snorm;
    ctrl_custom_turning_fra_xscal_i(snorm, Vf, 7);
  }

  e[0] = ztest;
  ztest = e[1];
  if (s[1] != 0.0) {
    ztest0 = fabs(s[1]);
    snorm = s[1] / ztest0;
    s[1] = ztest0;
    ztest = e[1] / snorm;
    ctrl_custom_turning_frame_xscal(snorm, U, 4);
  }

  if (ztest != 0.0) {
    ztest0 = fabs(ztest);
    snorm = ztest0 / ztest;
    ztest = ztest0;
    s[2] = b_A[8] * snorm;
    ctrl_custom_turning_fra_xscal_i(snorm, Vf, 13);
  }

  e[1] = ztest;
  ztest = e[2];
  if (s[2] != 0.0) {
    ztest0 = fabs(s[2]);
    snorm = s[2] / ztest0;
    s[2] = ztest0;
    ztest = e[2] / snorm;
    ctrl_custom_turning_frame_xscal(snorm, U, 7);
  }

  if (ztest != 0.0) {
    ztest0 = fabs(ztest);
    snorm = ztest0 / ztest;
    ztest = ztest0;
    s[3] = 0.0 * snorm;
    ctrl_custom_turning_fra_xscal_i(snorm, Vf, 19);
  }

  e[2] = ztest;
  e[3] = 0.0;
  i = 0;
  snorm = 0.0;
  if ((s[0] >= e[0]) || rtIsNaN(e[0])) {
    ztest0 = s[0];
  } else {
    ztest0 = e[0];
  }

  if (!((0.0 >= ztest0) || rtIsNaN(ztest0))) {
    snorm = ztest0;
  }

  if ((s[1] >= e[1]) || rtIsNaN(e[1])) {
    ztest0 = s[1];
  } else {
    ztest0 = e[1];
  }

  if (!((snorm >= ztest0) || rtIsNaN(ztest0))) {
    snorm = ztest0;
  }

  if ((s[2] >= ztest) || rtIsNaN(ztest)) {
    ztest = s[2];
  }

  if (!((snorm >= ztest) || rtIsNaN(ztest))) {
    snorm = ztest;
  }

  if (s[3] >= 0.0) {
    ztest0 = s[3];
  } else {
    ztest0 = 0.0;
  }

  if (!((snorm >= ztest0) || rtIsNaN(ztest0))) {
    snorm = ztest0;
  }

  while ((m + 2 > 0) && (!(i >= 75))) {
    kase = m + 1;
    do {
      exitg3 = 0;
      q = kase;
      if (kase == 0) {
        exitg3 = 1;
      } else {
        ztest0 = fabs(e[kase - 1]);
        if ((ztest0 <= (fabs(s[kase - 1]) + fabs(s[kase])) *
             2.2204460492503131E-16) || ((ztest0 <= 1.0020841800044864E-292) ||
             ((i > 20) && (ztest0 <= 2.2204460492503131E-16 * snorm)))) {
          e[kase - 1] = 0.0;
          exitg3 = 1;
        } else {
          kase--;
        }
      }
    } while (exitg3 == 0);

    if (m + 1 == kase) {
      kase = 4;
    } else {
      qs = m + 2;
      k_ii = m + 2;
      exitg2 = false;
      while ((!exitg2) && (k_ii >= kase)) {
        qs = k_ii;
        if (k_ii == kase) {
          exitg2 = true;
        } else {
          ztest0 = 0.0;
          if (k_ii < m + 2) {
            ztest0 = fabs(e[k_ii - 1]);
          }

          if (k_ii > kase + 1) {
            ztest0 += fabs(e[k_ii - 2]);
          }

          ztest = fabs(s[k_ii - 1]);
          if ((ztest <= 2.2204460492503131E-16 * ztest0) || (ztest <=
               1.0020841800044864E-292)) {
            s[k_ii - 1] = 0.0;
            exitg2 = true;
          } else {
            k_ii--;
          }
        }
      }

      if (qs == kase) {
        kase = 3;
      } else if (m + 2 == qs) {
        kase = 1;
      } else {
        kase = 2;
        q = qs;
      }
    }

    switch (kase) {
     case 1:
      ztest0 = e[m];
      e[m] = 0.0;
      for (qs = m; qs + 1 >= q + 1; qs--) {
        ztest = s[qs];
        ctrl_custom_turning_frame_xrotg(&ztest, &ztest0, &sqds, &smm1);
        s[qs] = ztest;
        if (qs + 1 > q + 1) {
          ztest0 = e[qs - 1] * -smm1;
          e[qs - 1] *= sqds;
        }

        ctrl_custom_turning_frame_xrot(Vf, 1 + 6 * qs, 1 + 6 * (m + 1), sqds,
          smm1);
      }
      break;

     case 2:
      ztest0 = e[q - 1];
      e[q - 1] = 0.0;
      for (qs = q; qs + 1 <= m + 2; qs++) {
        ztest = s[qs];
        ctrl_custom_turning_frame_xrotg(&ztest, &ztest0, &sqds, &smm1);
        s[qs] = ztest;
        ztest0 = -smm1 * e[qs];
        e[qs] *= sqds;
        ctrl_custom_turning_fram_xrot_n(U, 1 + 3 * qs, 1 + 3 * (q - 1), sqds,
          smm1);
      }
      break;

     case 3:
      varargin_1[0] = fabs(s[m + 1]);
      varargin_1[1] = fabs(s[m]);
      varargin_1[2] = fabs(e[m]);
      varargin_1[3] = fabs(s[q]);
      varargin_1[4] = fabs(e[q]);
      qs = 1;
      ztest = varargin_1[0];
      if (rtIsNaN(varargin_1[0])) {
        kase = 2;
        exitg1 = false;
        while ((!exitg1) && (kase < 6)) {
          qs = kase;
          if (!rtIsNaN(varargin_1[kase - 1])) {
            ztest = varargin_1[kase - 1];
            exitg1 = true;
          } else {
            kase++;
          }
        }
      }

      if (qs < 5) {
        while (qs + 1 < 6) {
          if (varargin_1[qs] > ztest) {
            ztest = varargin_1[qs];
          }

          qs++;
        }
      }

      ztest0 = s[m + 1] / ztest;
      smm1 = s[m] / ztest;
      emm1 = e[m] / ztest;
      sqds = s[q] / ztest;
      smm1 = ((smm1 + ztest0) * (smm1 - ztest0) + emm1 * emm1) / 2.0;
      emm1 *= ztest0;
      emm1 *= emm1;
      if ((smm1 != 0.0) || (emm1 != 0.0)) {
        shift = sqrt(smm1 * smm1 + emm1);
        if (smm1 < 0.0) {
          shift = -shift;
        }

        shift = emm1 / (smm1 + shift);
      } else {
        shift = 0.0;
      }

      ztest0 = (sqds + ztest0) * (sqds - ztest0) + shift;
      ztest = e[q] / ztest * sqds;
      for (qs = q + 1; qs <= m + 1; qs++) {
        ctrl_custom_turning_frame_xrotg(&ztest0, &ztest, &sqds, &smm1);
        if (qs > q + 1) {
          e[qs - 2] = ztest0;
        }

        ztest0 = s[qs - 1] * sqds + e[qs - 1] * smm1;
        e[qs - 1] = e[qs - 1] * sqds - s[qs - 1] * smm1;
        ztest = smm1 * s[qs];
        s[qs] *= sqds;
        ctrl_custom_turning_frame_xrot(Vf, 1 + 6 * (qs - 1), 1 + 6 * qs, sqds,
          smm1);
        ctrl_custom_turning_frame_xrotg(&ztest0, &ztest, &sqds, &smm1);
        s[qs - 1] = ztest0;
        ztest0 = e[qs - 1] * sqds + smm1 * s[qs];
        s[qs] = e[qs - 1] * -smm1 + sqds * s[qs];
        ztest = smm1 * e[qs];
        e[qs] *= sqds;
        if (qs < 3) {
          ctrl_custom_turning_fram_xrot_n(U, 1 + 3 * (qs - 1), 1 + 3 * qs, sqds,
            smm1);
        }
      }

      e[m] = ztest0;
      i++;
      break;

     default:
      if (s[q] < 0.0) {
        s[q] = -s[q];
        ctrl_custom_turning_fra_xscal_i(-1.0, Vf, 1 + 6 * q);
      }

      i = q + 1;
      while ((q + 1 < 4) && (s[q] < s[i])) {
        ztest0 = s[q];
        s[q] = s[i];
        s[i] = ztest0;
        ctrl_custom_turning_frame_xswap(Vf, 1 + 6 * q, 1 + 6 * (q + 1));
        if (q + 1 < 3) {
          ctrl_custom_turning_fra_xswap_c(U, 1 + 3 * q, 1 + 3 * (q + 1));
        }

        q = i;
        i++;
      }

      i = 0;
      m--;
      break;
    }
  }

  for (m = 0; m < 3; m++) {
    work[m] = s[m];
    for (i = 0; i < 6; i++) {
      V[i + 6 * m] = Vf[6 * m + i];
    }
  }

  memset(&S[0], 0, 9U * sizeof(real_T));
  S[0] = work[0];
  S[4] = work[1];
  S[8] = work[2];
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_frame_svd(const real_T A[18], real_T U[9],
  real_T S[9], real_T V[18])
{
  boolean_T b_p;
  int32_T k;
  b_p = true;
  for (k = 0; k < 18; k++) {
    if (b_p && ((!rtIsInf(A[k])) && (!rtIsNaN(A[k])))) {
    } else {
      b_p = false;
    }
  }

  if (b_p) {
    ctrl_custom_turning_frame_svd_h(A, U, S, V);
  } else {
    for (k = 0; k < 9; k++) {
      U[k] = (rtNaN);
      S[k] = 0.0;
    }

    S[0] = (rtNaN);
    S[4] = (rtNaN);
    S[8] = (rtNaN);
    for (k = 0; k < 18; k++) {
      V[k] = (rtNaN);
    }
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_fr_isfinite(const real_T x[9], boolean_T b[9])
{
  int32_T i;
  for (i = 0; i < 9; i++) {
    b[i] = ((!rtIsInf(x[i])) && (!rtIsNaN(x[i])));
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static real_T ctrl_custom_turning_fr_xnrm2_ky(int32_T n, const real_T x[36],
  int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  if (n == 1) {
    y = fabs(x[ix0 - 1]);
  } else {
    scale = 2.2250738585072014E-308;
    kend = (ix0 + n) - 1;
    for (k = ix0; k <= kend; k++) {
      absxk = fabs(x[k - 1]);
      if (absxk > scale) {
        t = scale / absxk;
        y = y * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        y += t * t;
      }
    }

    y = scale * sqrt(y);
  }

  return y;
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static real_T ctrl_custom_turning_f_xnrm2_kyb(int32_T n, const real_T x[12],
  int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  scale = 2.2250738585072014E-308;
  kend = (ix0 + n) - 1;
  for (k = ix0; k <= kend; k++) {
    absxk = fabs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * sqrt(y);
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turni_xaxpy_a2fbjv1(int32_T n, real_T a, const real_T x
  [3], int32_T ix0, real_T y[36], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!((n < 1) || (a == 0.0))) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turnin_xaxpy_a2fbjv(int32_T n, real_T a, const real_T x
  [36], int32_T ix0, real_T y[3], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!((n < 1) || (a == 0.0))) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_fr_xscal_ie(real_T a, real_T x[144], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 11; k++) {
    x[k - 1] *= a;
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_fr_xswap_cs(real_T x[144], int32_T ix0, int32_T
  iy0)
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 12; k++) {
    temp = x[ix];
    x[ix] = x[iy];
    x[iy] = temp;
    ix++;
    iy++;
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_fra_xrot_nd(real_T x[144], int32_T ix0, int32_T
  iy0, real_T c, real_T s)
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 12; k++) {
    temp = c * x[ix] + s * x[iy];
    x[iy] = c * x[iy] - s * x[ix];
    x[ix] = temp;
    iy++;
    ix++;
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static real_T ctrl_custom_turning__xdotc_lsov(int32_T n, const real_T x[144],
  int32_T ix0, const real_T y[144], int32_T iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  if (!(n < 1)) {
    ix = ix0;
    iy = iy0;
    for (k = 1; k <= n; k++) {
      d += x[ix - 1] * y[iy - 1];
      ix++;
      iy++;
    }
  }

  return d;
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turn_xaxpy_a2fbjv1g(int32_T n, real_T a, int32_T ix0,
  real_T y[144], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!((n < 1) || (a == 0.0))) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix];
      ix++;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static real_T ctrl_custom_turning_f_xdotc_lso(int32_T n, const real_T x[36],
  int32_T ix0, const real_T y[36], int32_T iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  ix = ix0;
  iy = iy0;
  for (k = 1; k <= n; k++) {
    d += x[ix - 1] * y[iy - 1];
    ix++;
    iy++;
  }

  return d;
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_xaxpy_a2fbj(int32_T n, real_T a, int32_T ix0,
  real_T y[36], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix];
      ix++;
      iy++;
    }
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_fra_svd_hb2(const real_T A[36], real_T U[9],
  real_T S[9], real_T V[36])
{
  real_T b_A[36];
  real_T s[4];
  real_T e[12];
  real_T work[3];
  real_T Vf[144];
  int32_T q;
  boolean_T apply_transform;
  int32_T m;
  int32_T iter;
  real_T snorm;
  real_T ztest0;
  int32_T kase;
  int32_T qs;
  real_T ztest;
  real_T smm1;
  real_T emm1;
  real_T sqds;
  real_T shift;
  int32_T k_ii;
  real_T varargin_1[5];
  boolean_T exitg1;
  boolean_T exitg2;
  int32_T exitg3;
  memcpy(&b_A[0], &A[0], 36U * sizeof(real_T));
  memset(&e[0], 0, 12U * sizeof(real_T));
  work[0] = 0.0;
  work[1] = 0.0;
  work[2] = 0.0;
  memset(&U[0], 0, 9U * sizeof(real_T));
  memset(&Vf[0], 0, 144U * sizeof(real_T));
  iter = 0;
  apply_transform = false;
  snorm = ctrl_custom_turning_fr_xnrm2_ky(3, b_A, 1);
  if (snorm > 0.0) {
    apply_transform = true;
    if (b_A[0] < 0.0) {
      s[0] = -snorm;
    } else {
      s[0] = snorm;
    }

    if (fabs(s[0]) >= 1.0020841800044864E-292) {
      snorm = 1.0 / s[0];
      for (qs = 0; qs + 1 < 4; qs++) {
        b_A[qs] *= snorm;
      }
    } else {
      for (qs = 0; qs + 1 < 4; qs++) {
        b_A[qs] /= s[0];
      }
    }

    b_A[0]++;
    s[0] = -s[0];
  } else {
    s[0] = 0.0;
  }

  for (q = 1; q + 1 < 13; q++) {
    qs = 3 * q;
    if (apply_transform) {
      ctrl_custom_turning_xaxpy_a2fbj(3, -(ctrl_custom_turning_f_xdotc_lso(3,
        b_A, 1, b_A, qs + 1) / b_A[0]), 1, b_A, qs + 1);
    }

    e[q] = b_A[qs];
  }

  while (iter + 1 < 4) {
    U[iter] = b_A[iter];
    iter++;
  }

  snorm = ctrl_custom_turning_f_xnrm2_kyb(11, e, 2);
  if (snorm == 0.0) {
    e[0] = 0.0;
  } else {
    if (e[1] < 0.0) {
      e[0] = -snorm;
    } else {
      e[0] = snorm;
    }

    snorm = e[0];
    if (fabs(e[0]) >= 1.0020841800044864E-292) {
      snorm = 1.0 / e[0];
      for (iter = 1; iter + 1 < 13; iter++) {
        e[iter] *= snorm;
      }
    } else {
      for (iter = 1; iter + 1 < 13; iter++) {
        e[iter] /= snorm;
      }
    }

    e[1]++;
    e[0] = -e[0];
    for (iter = 1; iter + 1 < 4; iter++) {
      work[iter] = 0.0;
    }

    for (iter = 1; iter + 1 < 13; iter++) {
      ctrl_custom_turnin_xaxpy_a2fbjv(2, e[iter], b_A, 3 * iter + 2, work, 2);
    }

    for (iter = 1; iter + 1 < 13; iter++) {
      ctrl_custom_turni_xaxpy_a2fbjv1(2, -e[iter] / e[1], work, 2, b_A, 3 * iter
        + 2);
    }
  }

  for (iter = 1; iter + 1 < 13; iter++) {
    Vf[iter] = e[iter];
  }

  apply_transform = false;
  snorm = ctrl_custom_turning_fr_xnrm2_ky(2, b_A, 5);
  if (snorm > 0.0) {
    apply_transform = true;
    if (b_A[4] < 0.0) {
      s[1] = -snorm;
    } else {
      s[1] = snorm;
    }

    if (fabs(s[1]) >= 1.0020841800044864E-292) {
      snorm = 1.0 / s[1];
      for (qs = 4; qs + 1 < 7; qs++) {
        b_A[qs] *= snorm;
      }
    } else {
      for (qs = 4; qs + 1 < 7; qs++) {
        b_A[qs] /= s[1];
      }
    }

    b_A[4]++;
    s[1] = -s[1];
  } else {
    s[1] = 0.0;
  }

  for (q = 2; q + 1 < 13; q++) {
    qs = 3 * q + 1;
    if (apply_transform) {
      ctrl_custom_turning_xaxpy_a2fbj(2, -(ctrl_custom_turning_f_xdotc_lso(2,
        b_A, 5, b_A, qs + 1) / b_A[4]), 5, b_A, qs + 1);
    }

    e[q] = b_A[qs];
  }

  for (iter = 1; iter + 1 < 4; iter++) {
    U[iter + 3] = b_A[iter + 3];
  }

  snorm = ctrl_custom_turning_f_xnrm2_kyb(10, e, 3);
  if (snorm == 0.0) {
    e[1] = 0.0;
  } else {
    if (e[2] < 0.0) {
      e[1] = -snorm;
    } else {
      e[1] = snorm;
    }

    snorm = e[1];
    if (fabs(e[1]) >= 1.0020841800044864E-292) {
      snorm = 1.0 / e[1];
      for (iter = 2; iter + 1 < 13; iter++) {
        e[iter] *= snorm;
      }
    } else {
      for (iter = 2; iter + 1 < 13; iter++) {
        e[iter] /= snorm;
      }
    }

    e[2]++;
    e[1] = -e[1];
    for (iter = 2; iter + 1 < 4; iter++) {
      work[iter] = 0.0;
    }

    for (iter = 2; iter + 1 < 13; iter++) {
      ctrl_custom_turnin_xaxpy_a2fbjv(1, e[iter], b_A, 3 * iter + 3, work, 3);
    }

    for (iter = 2; iter + 1 < 13; iter++) {
      ctrl_custom_turni_xaxpy_a2fbjv1(1, -e[iter] / e[2], work, 3, b_A, 3 * iter
        + 3);
    }
  }

  for (iter = 2; iter + 1 < 13; iter++) {
    Vf[iter + 12] = e[iter];
  }

  for (q = 3; q + 1 < 13; q++) {
    e[q] = b_A[3 * q + 2];
  }

  snorm = ctrl_custom_turning_f_xnrm2_kyb(9, e, 4);
  if (snorm == 0.0) {
    e[2] = 0.0;
  } else {
    if (e[3] < 0.0) {
      e[2] = -snorm;
    } else {
      e[2] = snorm;
    }

    snorm = e[2];
    if (fabs(e[2]) >= 1.0020841800044864E-292) {
      snorm = 1.0 / e[2];
      for (iter = 3; iter + 1 < 13; iter++) {
        e[iter] *= snorm;
      }
    } else {
      for (iter = 3; iter + 1 < 13; iter++) {
        e[iter] /= snorm;
      }
    }

    e[3]++;
    e[2] = -e[2];
  }

  for (iter = 3; iter + 1 < 13; iter++) {
    Vf[iter + 24] = e[iter];
  }

  m = 2;
  s[2] = b_A[8];
  s[3] = 0.0;
  e[3] = 0.0;
  U[6] = 0.0;
  U[7] = 0.0;
  U[8] = 1.0;
  for (q = 1; q >= 0; q += -1) {
    iter = 3 * q + q;
    if (s[q] != 0.0) {
      for (kase = q + 1; kase + 1 < 4; kase++) {
        qs = (3 * kase + q) + 1;
        ctrl_custom_turning_f_xaxpy_a2f(3 - q, -(ctrl_custom_turning_fra_xdotc_l
          (3 - q, U, iter + 1, U, qs) / U[iter]), iter + 1, U, qs);
      }

      for (qs = q; qs + 1 < 4; qs++) {
        U[qs + 3 * q] = -U[3 * q + qs];
      }

      U[iter]++;
      iter = 1;
      while (iter <= q) {
        U[3] = 0.0;
        iter = 2;
      }
    } else {
      U[3 * q] = 0.0;
      U[1 + 3 * q] = 0.0;
      U[2 + 3 * q] = 0.0;
      U[iter] = 1.0;
    }
  }

  for (iter = 11; iter >= 0; iter += -1) {
    if ((iter + 1 <= 3) && (e[iter] != 0.0)) {
      q = (12 * iter + iter) + 2;
      for (qs = iter + 1; qs + 1 < 13; qs++) {
        kase = (12 * qs + iter) + 2;
        ctrl_custom_turn_xaxpy_a2fbjv1g(11 - iter,
          -(ctrl_custom_turning__xdotc_lsov(11 - iter, Vf, q, Vf, kase) / Vf[q -
            1]), q, Vf, kase);
      }
    }

    memset(&Vf[iter * 12], 0, 12U * sizeof(real_T));
    Vf[iter + 12 * iter] = 1.0;
  }

  ztest = e[0];
  if (s[0] != 0.0) {
    ztest0 = fabs(s[0]);
    snorm = s[0] / ztest0;
    s[0] = ztest0;
    ztest = e[0] / snorm;
    ctrl_custom_turning_frame_xscal(snorm, U, 1);
  }

  if (ztest != 0.0) {
    ztest0 = fabs(ztest);
    snorm = ztest0 / ztest;
    ztest = ztest0;
    s[1] *= snorm;
    ctrl_custom_turning_fr_xscal_ie(snorm, Vf, 13);
  }

  e[0] = ztest;
  ztest = e[1];
  if (s[1] != 0.0) {
    ztest0 = fabs(s[1]);
    snorm = s[1] / ztest0;
    s[1] = ztest0;
    ztest = e[1] / snorm;
    ctrl_custom_turning_frame_xscal(snorm, U, 4);
  }

  if (ztest != 0.0) {
    ztest0 = fabs(ztest);
    snorm = ztest0 / ztest;
    ztest = ztest0;
    s[2] = b_A[8] * snorm;
    ctrl_custom_turning_fr_xscal_ie(snorm, Vf, 25);
  }

  e[1] = ztest;
  ztest = e[2];
  if (s[2] != 0.0) {
    ztest0 = fabs(s[2]);
    snorm = s[2] / ztest0;
    s[2] = ztest0;
    ztest = e[2] / snorm;
    ctrl_custom_turning_frame_xscal(snorm, U, 7);
  }

  if (ztest != 0.0) {
    ztest0 = fabs(ztest);
    snorm = ztest0 / ztest;
    ztest = ztest0;
    s[3] = 0.0 * snorm;
    ctrl_custom_turning_fr_xscal_ie(snorm, Vf, 37);
  }

  e[2] = ztest;
  e[3] = 0.0;
  iter = 0;
  snorm = 0.0;
  ztest0 = fabs(e[0]);
  if ((s[0] >= ztest0) || rtIsNaN(ztest0)) {
    ztest0 = s[0];
  }

  if (!((0.0 >= ztest0) || rtIsNaN(ztest0))) {
    snorm = ztest0;
  }

  ztest0 = fabs(e[1]);
  if ((s[1] >= ztest0) || rtIsNaN(ztest0)) {
    ztest0 = s[1];
  }

  if (!((snorm >= ztest0) || rtIsNaN(ztest0))) {
    snorm = ztest0;
  }

  ztest0 = fabs(ztest);
  if ((s[2] >= ztest0) || rtIsNaN(ztest0)) {
    ztest0 = s[2];
  }

  if (!((snorm >= ztest0) || rtIsNaN(ztest0))) {
    snorm = ztest0;
  }

  if (s[3] >= 0.0) {
    ztest0 = s[3];
  } else {
    ztest0 = 0.0;
  }

  if (!((snorm >= ztest0) || rtIsNaN(ztest0))) {
    snorm = ztest0;
  }

  while ((m + 2 > 0) && (!(iter >= 75))) {
    kase = m + 1;
    do {
      exitg3 = 0;
      q = kase;
      if (kase == 0) {
        exitg3 = 1;
      } else {
        ztest0 = fabs(e[kase - 1]);
        if ((ztest0 <= (fabs(s[kase - 1]) + fabs(s[kase])) *
             2.2204460492503131E-16) || ((ztest0 <= 1.0020841800044864E-292) ||
             ((iter > 20) && (ztest0 <= 2.2204460492503131E-16 * snorm)))) {
          e[kase - 1] = 0.0;
          exitg3 = 1;
        } else {
          kase--;
        }
      }
    } while (exitg3 == 0);

    if (m + 1 == kase) {
      kase = 4;
    } else {
      qs = m + 2;
      k_ii = m + 2;
      exitg2 = false;
      while ((!exitg2) && (k_ii >= kase)) {
        qs = k_ii;
        if (k_ii == kase) {
          exitg2 = true;
        } else {
          ztest0 = 0.0;
          if (k_ii < m + 2) {
            ztest0 = fabs(e[k_ii - 1]);
          }

          if (k_ii > kase + 1) {
            ztest0 += fabs(e[k_ii - 2]);
          }

          ztest = fabs(s[k_ii - 1]);
          if ((ztest <= 2.2204460492503131E-16 * ztest0) || (ztest <=
               1.0020841800044864E-292)) {
            s[k_ii - 1] = 0.0;
            exitg2 = true;
          } else {
            k_ii--;
          }
        }
      }

      if (qs == kase) {
        kase = 3;
      } else if (m + 2 == qs) {
        kase = 1;
      } else {
        kase = 2;
        q = qs;
      }
    }

    switch (kase) {
     case 1:
      ztest0 = e[m];
      e[m] = 0.0;
      for (qs = m; qs + 1 >= q + 1; qs--) {
        ztest = s[qs];
        ctrl_custom_turning_frame_xrotg(&ztest, &ztest0, &sqds, &smm1);
        s[qs] = ztest;
        if (qs + 1 > q + 1) {
          ztest0 = e[qs - 1] * -smm1;
          e[qs - 1] *= sqds;
        }

        ctrl_custom_turning_fra_xrot_nd(Vf, 1 + 12 * qs, 1 + 12 * (m + 1), sqds,
          smm1);
      }
      break;

     case 2:
      ztest0 = e[q - 1];
      e[q - 1] = 0.0;
      for (qs = q; qs + 1 <= m + 2; qs++) {
        ztest = s[qs];
        ctrl_custom_turning_frame_xrotg(&ztest, &ztest0, &sqds, &smm1);
        s[qs] = ztest;
        ztest0 = -smm1 * e[qs];
        e[qs] *= sqds;
        ctrl_custom_turning_fram_xrot_n(U, 1 + 3 * qs, 1 + 3 * (q - 1), sqds,
          smm1);
      }
      break;

     case 3:
      varargin_1[0] = fabs(s[m + 1]);
      varargin_1[1] = fabs(s[m]);
      varargin_1[2] = fabs(e[m]);
      varargin_1[3] = fabs(s[q]);
      varargin_1[4] = fabs(e[q]);
      qs = 1;
      ztest = varargin_1[0];
      if (rtIsNaN(varargin_1[0])) {
        kase = 2;
        exitg1 = false;
        while ((!exitg1) && (kase < 6)) {
          qs = kase;
          if (!rtIsNaN(varargin_1[kase - 1])) {
            ztest = varargin_1[kase - 1];
            exitg1 = true;
          } else {
            kase++;
          }
        }
      }

      if (qs < 5) {
        while (qs + 1 < 6) {
          if (varargin_1[qs] > ztest) {
            ztest = varargin_1[qs];
          }

          qs++;
        }
      }

      ztest0 = s[m + 1] / ztest;
      smm1 = s[m] / ztest;
      emm1 = e[m] / ztest;
      sqds = s[q] / ztest;
      smm1 = ((smm1 + ztest0) * (smm1 - ztest0) + emm1 * emm1) / 2.0;
      emm1 *= ztest0;
      emm1 *= emm1;
      if ((smm1 != 0.0) || (emm1 != 0.0)) {
        shift = sqrt(smm1 * smm1 + emm1);
        if (smm1 < 0.0) {
          shift = -shift;
        }

        shift = emm1 / (smm1 + shift);
      } else {
        shift = 0.0;
      }

      ztest0 = (sqds + ztest0) * (sqds - ztest0) + shift;
      ztest = e[q] / ztest * sqds;
      for (qs = q + 1; qs <= m + 1; qs++) {
        ctrl_custom_turning_frame_xrotg(&ztest0, &ztest, &sqds, &smm1);
        if (qs > q + 1) {
          e[qs - 2] = ztest0;
        }

        ztest0 = s[qs - 1] * sqds + e[qs - 1] * smm1;
        e[qs - 1] = e[qs - 1] * sqds - s[qs - 1] * smm1;
        ztest = smm1 * s[qs];
        s[qs] *= sqds;
        ctrl_custom_turning_fra_xrot_nd(Vf, 1 + 12 * (qs - 1), 1 + 12 * qs, sqds,
          smm1);
        ctrl_custom_turning_frame_xrotg(&ztest0, &ztest, &sqds, &smm1);
        s[qs - 1] = ztest0;
        ztest0 = e[qs - 1] * sqds + smm1 * s[qs];
        s[qs] = e[qs - 1] * -smm1 + sqds * s[qs];
        ztest = smm1 * e[qs];
        e[qs] *= sqds;
        if (qs < 3) {
          ctrl_custom_turning_fram_xrot_n(U, 1 + 3 * (qs - 1), 1 + 3 * qs, sqds,
            smm1);
        }
      }

      e[m] = ztest0;
      iter++;
      break;

     default:
      if (s[q] < 0.0) {
        s[q] = -s[q];
        ctrl_custom_turning_fr_xscal_ie(-1.0, Vf, 1 + 12 * q);
      }

      iter = q + 1;
      while ((q + 1 < 4) && (s[q] < s[iter])) {
        ztest0 = s[q];
        s[q] = s[iter];
        s[iter] = ztest0;
        ctrl_custom_turning_fr_xswap_cs(Vf, 1 + 12 * q, 1 + 12 * (q + 1));
        if (q + 1 < 3) {
          ctrl_custom_turning_fra_xswap_c(U, 1 + 3 * q, 1 + 3 * (q + 1));
        }

        q = iter;
        iter++;
      }

      iter = 0;
      m--;
      break;
    }
  }

  for (m = 0; m < 3; m++) {
    work[m] = s[m];
    memcpy(&V[m * 12], &Vf[m * 12], 12U * sizeof(real_T));
  }

  memset(&S[0], 0, 9U * sizeof(real_T));
  S[0] = work[0];
  S[4] = work[1];
  S[8] = work[2];
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_fram_svd_hb(const real_T A[36], real_T U[9],
  real_T S[9], real_T V[36])
{
  boolean_T b_p;
  int32_T k;
  b_p = true;
  for (k = 0; k < 36; k++) {
    if (b_p && ((!rtIsInf(A[k])) && (!rtIsNaN(A[k])))) {
    } else {
      b_p = false;
    }
  }

  if (b_p) {
    ctrl_custom_turning_fra_svd_hb2(A, U, S, V);
  } else {
    for (k = 0; k < 9; k++) {
      U[k] = (rtNaN);
      S[k] = 0.0;
    }

    S[0] = (rtNaN);
    S[4] = (rtNaN);
    S[8] = (rtNaN);
    for (k = 0; k < 36; k++) {
      V[k] = (rtNaN);
    }
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

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_frame_abs(const real_T x[2], real_T y[2])
{
  y[0] = fabs(x[0]);
  y[1] = fabs(x[1]);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void ctrl_custom_turning_frame_cosd(real_T *x)
{
  int8_T n;
  real_T b_x;
  real_T absx;
  if (!((!rtIsInf(*x)) && (!rtIsNaN(*x)))) {
    *x = (rtNaN);
  } else {
    b_x = rt_remd_snf(*x, 360.0);
    absx = fabs(b_x);
    if (absx > 180.0) {
      if (b_x > 0.0) {
        b_x -= 360.0;
      } else {
        b_x += 360.0;
      }

      absx = fabs(b_x);
    }

    if (absx <= 45.0) {
      b_x *= 0.017453292519943295;
      n = 0;
    } else if (absx <= 135.0) {
      if (b_x > 0.0) {
        b_x = (b_x - 90.0) * 0.017453292519943295;
        n = 1;
      } else {
        b_x = (b_x + 90.0) * 0.017453292519943295;
        n = -1;
      }
    } else if (b_x > 0.0) {
      b_x = (b_x - 180.0) * 0.017453292519943295;
      n = 2;
    } else {
      b_x = (b_x + 180.0) * 0.017453292519943295;
      n = -2;
    }

    if (n == 0) {
      *x = cos(b_x);
    } else if (n == 1) {
      *x = -sin(b_x);
    } else if (n == -1) {
      *x = sin(b_x);
    } else {
      *x = -cos(b_x);
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void ctrl_custom_turning_frame_sind(real_T *x)
{
  int8_T n;
  real_T c_x;
  real_T absx;
  if (!((!rtIsInf(*x)) && (!rtIsNaN(*x)))) {
    c_x = (rtNaN);
  } else {
    c_x = rt_remd_snf(*x, 360.0);
    absx = fabs(c_x);
    if (absx > 180.0) {
      if (c_x > 0.0) {
        c_x -= 360.0;
      } else {
        c_x += 360.0;
      }

      absx = fabs(c_x);
    }

    if (absx <= 45.0) {
      c_x *= 0.017453292519943295;
      n = 0;
    } else if (absx <= 135.0) {
      if (c_x > 0.0) {
        c_x = (c_x - 90.0) * 0.017453292519943295;
        n = 1;
      } else {
        c_x = (c_x + 90.0) * 0.017453292519943295;
        n = -1;
      }
    } else if (c_x > 0.0) {
      c_x = (c_x - 180.0) * 0.017453292519943295;
      n = 2;
    } else {
      c_x = (c_x + 180.0) * 0.017453292519943295;
      n = -2;
    }

    if (n == 0) {
      c_x = sin(c_x);
    } else if (n == 1) {
      c_x = cos(c_x);
    } else if (n == -1) {
      c_x = -cos(c_x);
    } else {
      c_x = -sin(c_x);
    }
  }

  *x = c_x;
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_fram_cosd_m(real_T *x)
{
  int8_T n;
  real_T b_x;
  real_T absx;
  if (!((!rtIsInf(*x)) && (!rtIsNaN(*x)))) {
    *x = (rtNaN);
  } else {
    b_x = rt_remd_snf(*x, 360.0);
    absx = fabs(b_x);
    if (absx > 180.0) {
      if (b_x > 0.0) {
        b_x -= 360.0;
      } else {
        b_x += 360.0;
      }

      absx = fabs(b_x);
    }

    if (absx <= 45.0) {
      b_x *= 0.017453292519943295;
      n = 0;
    } else if (absx <= 135.0) {
      if (b_x > 0.0) {
        b_x = (b_x - 90.0) * 0.017453292519943295;
        n = 1;
      } else {
        b_x = (b_x + 90.0) * 0.017453292519943295;
        n = -1;
      }
    } else if (b_x > 0.0) {
      b_x = (b_x - 180.0) * 0.017453292519943295;
      n = 2;
    } else {
      b_x = (b_x + 180.0) * 0.017453292519943295;
      n = -2;
    }

    if (n == 0) {
      *x = cos(b_x);
    } else if (n == 1) {
      *x = -sin(b_x);
    } else if (n == -1) {
      *x = sin(b_x);
    } else {
      *x = -cos(b_x);
    }
  }
}

/* Function for MATLAB Function: '<S13>/MATLAB Function' */
static void ctrl_custom_turning_fram_sind_k(real_T *x)
{
  int8_T n;
  real_T c_x;
  real_T absx;
  if (!((!rtIsInf(*x)) && (!rtIsNaN(*x)))) {
    c_x = (rtNaN);
  } else {
    c_x = rt_remd_snf(*x, 360.0);
    absx = fabs(c_x);
    if (absx > 180.0) {
      if (c_x > 0.0) {
        c_x -= 360.0;
      } else {
        c_x += 360.0;
      }

      absx = fabs(c_x);
    }

    if (absx <= 45.0) {
      c_x *= 0.017453292519943295;
      n = 0;
    } else if (absx <= 135.0) {
      if (c_x > 0.0) {
        c_x = (c_x - 90.0) * 0.017453292519943295;
        n = 1;
      } else {
        c_x = (c_x + 90.0) * 0.017453292519943295;
        n = -1;
      }
    } else if (c_x > 0.0) {
      c_x = (c_x - 180.0) * 0.017453292519943295;
      n = 2;
    } else {
      c_x = (c_x + 180.0) * 0.017453292519943295;
      n = -2;
    }

    if (n == 0) {
      c_x = sin(c_x);
    } else if (n == 1) {
      c_x = cos(c_x);
    } else if (n == -1) {
      c_x = -cos(c_x);
    } else {
      c_x = -sin(c_x);
    }
  }

  *x = c_x;
}

/* Model output function */
void ctrl_custom_turning_frame_output(void)
{
  /* local block i/o variables */
  real_T rtb_Integrator_n;
  real_T rtb_Integrator_g;
  real_T rtb_Integrator_l;
  real_T rtb_Integrator_k;
  real_T rtb_Integrator_c;
  real_T rtb_positivethrust2;
  real_T rtb_negativethrust2;
  real_T rtb_positivethrust3;
  real_T rtb_negativethrust3;
  real_T rtb_positivethrust4;
  real_T rtb_negativethrust4;
  real_T rtb_positivethrust5;
  real_T rtb_negativethrust5;
  real_T rtb_positivethrust6;
  real_T rtb_negativethrust6;
  real_T rtb_CreateDiagonalMatrix3[9];
  real_T rtb_CreateDiagonalMatrix4[9];
  real_T rtb_T_r;
  real_T rtb_T_r_e;
  real_T rtb_T_r_p;
  real_T rtb_sys[12];
  real_T rtb_ImpSel_InsertedFor_reset_at;

  /* local scratch DWork variables */
  int32_T ForEach_itr;
  ZCEventType zcEvent;
  real_T s[6];
  real_T K[6];
  real_T S_singular_cross[9];
  real_T c1[2];
  real_T b_V_singular[36];
  real_T varargin_1[2];
  static const int8_T d[12] = { 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0 };

  static const int8_T e[12] = { 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 };

  boolean_T f[9];
  real_T f_0;
  real_T i;
  real_T j;
  real_T k;
  real_T l;
  real_T m;
  real_T n;
  real_T o;
  real_T p;
  real_T q;
  real_T r;
  real_T s_0;
  real_T t;
  real_T v;
  real_T w;
  real_T x;
  real_T y;
  real_T c_23;
  real_T rtb_Row2_f;
  real_T rtb_Row1_d;
  real_T rtb_psi_dot;
  real_T rtb_Row1_m;
  real_T rtb_TmpSignalConversionAtMatrix[3];
  real_T rtb_y[6];
  real_T rtb_ImpAsg_InsertedFor_commande[6];
  real_T rtb_Sum_m;
  real_T rtb_TmpSignalConversionAtSFunct[12];
  real_T rtb_TmpSignalConversionAtSFu_fw[6];
  real_T rtb_TmpSignalConversionAtSFun_d[6];
  real_T rtb_TmpSignalConversionAtSFun_o[10];
  real_T rtb_MatrixMultiply2_j[3];
  real_T rtb_MatrixMultiply1[3];
  real_T rtb_CreateDiagonalMatrix5[9];
  real_T rtb_CreateDiagonalMatrix[9];
  int32_T i_0;
  real_T c1_0[2];
  real_T c1_1[2];
  real_T c1_2[2];
  real_T c1_3[2];
  real_T c1_4[2];
  real_T c1_5[2];
  real_T d_0[36];
  boolean_T tmp[9];
  real_T rtb_y_0[18];
  real_T rtb_y_1[18];
  int32_T b_i;
  real_T V_singular[18];
  real_T b_V_singular_0[36];
  real_T tmp_0[6];
  real_T c_23_0[18];
  real_T rtb_psi_dot_0[4];
  real_T rtb_psi_dot_1[4];
  real_T rtb_psi_dot_2[4];
  real_T rtb_psi_dot_3[4];
  real_T rtb_psi_dot_4[4];
  real_T rtb_psi_dot_5[4];
  real_T rtb_psi_dot_6[4];
  real_T rtb_psi_dot_7[4];
  real_T rtb_psi_dot_8[4];
  real_T rtb_psi_dot_9[4];
  real_T rtb_psi_dot_a[4];
  real_T rtb_psi_dot_b[4];
  real_T rtb_psi_dot_c[4];
  real_T rtb_psi_dot_d[4];
  real_T rtb_psi_dot_e[4];
  real_T rtb_psi_dot_f[4];
  real_T rtb_psi_dot_g[4];
  real_T rtb_psi_dot_h[4];
  real_T tmp_1[3];
  real_T tmp_2[3];
  real_T tmp_3[9];
  real_T rtb_Row2_o[3];
  int32_T b_data[9];
  int32_T b_sizes;
  int32_T c_data[9];
  boolean_T f_1;
  real_T Alpha1_idx_3;
  real_T Alpha1_idx_4;
  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T exitg3;
  boolean_T exitg4;
  boolean_T exitg5;
  boolean_T exitg6;
  boolean_T exitg7;
  boolean_T exitg8;
  boolean_T exitg9;
  boolean_T exitg10;
  boolean_T exitg11;
  boolean_T exitg12;
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* set solver stop time */
    if (!(ctrl_custom_turning_frame_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&ctrl_custom_turning_frame_M->solverInfo,
                            ((ctrl_custom_turning_frame_M->Timing.clockTickH0 +
        1) * ctrl_custom_turning_frame_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&ctrl_custom_turning_frame_M->solverInfo,
                            ((ctrl_custom_turning_frame_M->Timing.clockTick0 + 1)
        * ctrl_custom_turning_frame_M->Timing.stepSize0 +
        ctrl_custom_turning_frame_M->Timing.clockTickH0 *
        ctrl_custom_turning_frame_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(ctrl_custom_turning_frame_M)) {
    ctrl_custom_turning_frame_M->Timing.t[0] = rtsiGetT
      (&ctrl_custom_turning_frame_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
  }

  /* Gain: '<S9>/Gain' */
  rtb_Row2_f = ctrl_custom_turning_frame_P.Gain_Gain *
    ctrl_custom_turning_frame_B.x_m;

  /* Gain: '<S9>/Gain1' */
  rtb_Row1_d = ctrl_custom_turning_frame_P.Gain1_Gain *
    ctrl_custom_turning_frame_B.y_m;

  /* Gain: '<S9>/Gain5' */
  rtb_psi_dot = ctrl_custom_turning_frame_P.Gain5_Gain *
    ctrl_custom_turning_frame_B.psi_m;

  /* Saturate: '<S9>/Saturation' */
  if (rtb_psi_dot > ctrl_custom_turning_frame_P.Saturation_UpperSat) {
    rtb_psi_dot = ctrl_custom_turning_frame_P.Saturation_UpperSat;
  } else {
    if (rtb_psi_dot < ctrl_custom_turning_frame_P.Saturation_LowerSat) {
      rtb_psi_dot = ctrl_custom_turning_frame_P.Saturation_LowerSat;
    }
  }

  /* End of Saturate: '<S9>/Saturation' */

  /* Signum: '<S9>/Sign' */
  if (rtb_psi_dot < 0.0) {
    Alpha1_idx_4 = -1.0;
  } else if (rtb_psi_dot > 0.0) {
    Alpha1_idx_4 = 1.0;
  } else if (rtb_psi_dot == 0.0) {
    Alpha1_idx_4 = 0.0;
  } else {
    Alpha1_idx_4 = rtb_psi_dot;
  }

  /* End of Signum: '<S9>/Sign' */

  /* Gain: '<S9>/Gain6' */
  rtb_Row1_m = ctrl_custom_turning_frame_P.Gain6_Gain * Alpha1_idx_4;

  /* Sum: '<S9>/Sum1' */
  rtb_psi_dot += rtb_Row1_m;

  /* Math: '<S9>/Math Function' incorporates:
   *  Constant: '<S9>/Constant1'
   */
  rtb_psi_dot = rt_remd_snf(rtb_psi_dot,
    ctrl_custom_turning_frame_P.Constant1_Value);

  /* Sum: '<S9>/Sum' */
  rtb_psi_dot -= rtb_Row1_m;

  /* Gain: '<S12>/Gain5' */
  ctrl_custom_turning_frame_B.Gain5 = ctrl_custom_turning_frame_P.Gain5_Gain_g *
    ctrl_custom_turning_frame_B.Inputtomodel_m;

  /* Switch: '<Root>/Switch1' incorporates:
   *  Sum: '<Root>/Sum'
   */
  if (ctrl_custom_turning_frame_B.Controllswitch >=
      ctrl_custom_turning_frame_P.Switch1_Threshold) {
    ctrl_custom_turning_frame_B.Switch1[0] = rtb_Row2_f;
    ctrl_custom_turning_frame_B.Switch1[1] = rtb_Row1_d;
    ctrl_custom_turning_frame_B.Switch1[2] = rtb_psi_dot;
  } else {
    ctrl_custom_turning_frame_B.Switch1[0] = rtb_Row2_f;
    ctrl_custom_turning_frame_B.Switch1[1] = rtb_Row1_d;
    ctrl_custom_turning_frame_B.Switch1[2] = rtb_psi_dot -
      ctrl_custom_turning_frame_B.Gain5;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* Integrator: '<S5>/Integrator' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE,
                       (ctrl_custom_turning_frame_B.start));

    /* evaluate zero-crossings */
    if ((zcEvent != NO_ZCEVENT) ||
        (ctrl_custom_turning_frame_DW.Integrator_IWORK != 0)) {
      ctrl_custom_turning_frame_X.Integrator_CSTATE[0] =
        ctrl_custom_turning_frame_B.Switch1[0];
      ctrl_custom_turning_frame_X.Integrator_CSTATE[1] =
        ctrl_custom_turning_frame_B.Switch1[1];
      ctrl_custom_turning_frame_X.Integrator_CSTATE[2] =
        ctrl_custom_turning_frame_B.Switch1[2];
    }
  }

  ctrl_custom_turning_frame_B.Integrator[0] =
    ctrl_custom_turning_frame_X.Integrator_CSTATE[0];
  ctrl_custom_turning_frame_B.Integrator[1] =
    ctrl_custom_turning_frame_X.Integrator_CSTATE[1];
  ctrl_custom_turning_frame_B.Integrator[2] =
    ctrl_custom_turning_frame_X.Integrator_CSTATE[2];

  /* End of Integrator: '<S5>/Integrator' */

  /* Saturate: '<S29>/Saturation' */
  if (ctrl_custom_turning_frame_B.Integrator[2] >
      ctrl_custom_turning_frame_P.Saturation_UpperSat_p) {
    rtb_Row1_m = ctrl_custom_turning_frame_P.Saturation_UpperSat_p;
  } else if (ctrl_custom_turning_frame_B.Integrator[2] <
             ctrl_custom_turning_frame_P.Saturation_LowerSat_k) {
    rtb_Row1_m = ctrl_custom_turning_frame_P.Saturation_LowerSat_k;
  } else {
    rtb_Row1_m = ctrl_custom_turning_frame_B.Integrator[2];
  }

  /* End of Saturate: '<S29>/Saturation' */

  /* Signum: '<S29>/Sign' */
  if (rtb_Row1_m < 0.0) {
    rtb_psi_dot = -1.0;
  } else if (rtb_Row1_m > 0.0) {
    rtb_psi_dot = 1.0;
  } else if (rtb_Row1_m == 0.0) {
    rtb_psi_dot = 0.0;
  } else {
    rtb_psi_dot = rtb_Row1_m;
  }

  /* End of Signum: '<S29>/Sign' */

  /* Gain: '<S29>/Gain' */
  rtb_psi_dot *= ctrl_custom_turning_frame_P.Gain_Gain_p;

  /* Sum: '<S29>/Sum1' */
  rtb_Row1_m += rtb_psi_dot;

  /* Math: '<S29>/Math Function' incorporates:
   *  Constant: '<S29>/Constant'
   */
  rtb_Row1_m = rt_remd_snf(rtb_Row1_m,
    ctrl_custom_turning_frame_P.Constant_Value);

  /* Sum: '<S29>/Sum' */
  ctrl_custom_turning_frame_B.Sum = rtb_Row1_m - rtb_psi_dot;

  /* Sum: '<S8>/Sum4' incorporates:
   *  TransferFcn: '<S12>/Transfer Fcn2'
   */
  rtb_Row1_m = ctrl_custom_turning_frame_B.Sum -
    ctrl_custom_turning_frame_P.TransferFcn2_C *
    ctrl_custom_turning_frame_X.TransferFcn2_CSTATE;

  /* Saturate: '<S39>/Saturation' */
  if (rtb_Row1_m > ctrl_custom_turning_frame_P.Saturation_UpperSat_a) {
    rtb_Row1_m = ctrl_custom_turning_frame_P.Saturation_UpperSat_a;
  } else {
    if (rtb_Row1_m < ctrl_custom_turning_frame_P.Saturation_LowerSat_b) {
      rtb_Row1_m = ctrl_custom_turning_frame_P.Saturation_LowerSat_b;
    }
  }

  /* End of Saturate: '<S39>/Saturation' */

  /* Signum: '<S39>/Sign' */
  if (rtb_Row1_m < 0.0) {
    rtb_psi_dot = -1.0;
  } else if (rtb_Row1_m > 0.0) {
    rtb_psi_dot = 1.0;
  } else if (rtb_Row1_m == 0.0) {
    rtb_psi_dot = 0.0;
  } else {
    rtb_psi_dot = rtb_Row1_m;
  }

  /* End of Signum: '<S39>/Sign' */

  /* Gain: '<S39>/Gain' */
  rtb_psi_dot *= ctrl_custom_turning_frame_P.Gain_Gain_e;

  /* Sum: '<S39>/Sum1' */
  rtb_Row1_m += rtb_psi_dot;

  /* Math: '<S39>/Math Function' incorporates:
   *  Constant: '<S39>/Constant'
   */
  rtb_Row1_m = rt_remd_snf(rtb_Row1_m,
    ctrl_custom_turning_frame_P.Constant_Value_d);

  /* Sum: '<S39>/Sum' */
  ctrl_custom_turning_frame_B.Sum_c = rtb_Row1_m - rtb_psi_dot;

  /* Integrator: '<S8>/Integrator1' incorporates:
   *  Integrator: '<S5>/Integrator1'
   */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator1_Reset_ZCE,
                       (ctrl_custom_turning_frame_B.start));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator1_CSTATE =
        ctrl_custom_turning_frame_P.Integrator1_IC;
    }

    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator1_Reset_ZCE_o,
                       (ctrl_custom_turning_frame_B.start));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator1_CSTATE_n[0] =
        ctrl_custom_turning_frame_P.Integrator1_IC_g[0];
      ctrl_custom_turning_frame_X.Integrator1_CSTATE_n[1] =
        ctrl_custom_turning_frame_P.Integrator1_IC_g[1];
      ctrl_custom_turning_frame_X.Integrator1_CSTATE_n[2] =
        ctrl_custom_turning_frame_P.Integrator1_IC_g[2];
    }
  }

  /* Integrator: '<S5>/Integrator1' */
  ctrl_custom_turning_frame_B.Integrator1[0] =
    ctrl_custom_turning_frame_X.Integrator1_CSTATE_n[0];
  ctrl_custom_turning_frame_B.Integrator1[1] =
    ctrl_custom_turning_frame_X.Integrator1_CSTATE_n[1];
  ctrl_custom_turning_frame_B.Integrator1[2] =
    ctrl_custom_turning_frame_X.Integrator1_CSTATE_n[2];

  /* Saturate: '<S38>/Saturation' */
  if (ctrl_custom_turning_frame_B.Sum >
      ctrl_custom_turning_frame_P.Saturation_UpperSat_i) {
    rtb_Row1_m = ctrl_custom_turning_frame_P.Saturation_UpperSat_i;
  } else if (ctrl_custom_turning_frame_B.Sum <
             ctrl_custom_turning_frame_P.Saturation_LowerSat_p) {
    rtb_Row1_m = ctrl_custom_turning_frame_P.Saturation_LowerSat_p;
  } else {
    rtb_Row1_m = ctrl_custom_turning_frame_B.Sum;
  }

  /* End of Saturate: '<S38>/Saturation' */

  /* Signum: '<S38>/Sign' */
  if (rtb_Row1_m < 0.0) {
    rtb_psi_dot = -1.0;
  } else if (rtb_Row1_m > 0.0) {
    rtb_psi_dot = 1.0;
  } else if (rtb_Row1_m == 0.0) {
    rtb_psi_dot = 0.0;
  } else {
    rtb_psi_dot = rtb_Row1_m;
  }

  /* End of Signum: '<S38>/Sign' */

  /* Gain: '<S38>/Gain' */
  rtb_psi_dot *= ctrl_custom_turning_frame_P.Gain_Gain_o;

  /* Sum: '<S38>/Sum1' */
  rtb_Row1_m += rtb_psi_dot;

  /* Math: '<S38>/Math Function' incorporates:
   *  Constant: '<S38>/Constant'
   */
  rtb_Row1_m = rt_remd_snf(rtb_Row1_m,
    ctrl_custom_turning_frame_P.Constant_Value_p);

  /* Sum: '<S38>/Sum' */
  rtb_Row1_m -= rtb_psi_dot;

  /* Saturate: '<S43>/Saturation' incorporates:
   *  Integrator: '<S11>/Integrator2'
   */
  if (ctrl_custom_turning_frame_X.Integrator2_CSTATE[2] >
      ctrl_custom_turning_frame_P.Saturation_UpperSat_p4) {
    rtb_psi_dot = ctrl_custom_turning_frame_P.Saturation_UpperSat_p4;
  } else if (ctrl_custom_turning_frame_X.Integrator2_CSTATE[2] <
             ctrl_custom_turning_frame_P.Saturation_LowerSat_c) {
    rtb_psi_dot = ctrl_custom_turning_frame_P.Saturation_LowerSat_c;
  } else {
    rtb_psi_dot = ctrl_custom_turning_frame_X.Integrator2_CSTATE[2];
  }

  /* End of Saturate: '<S43>/Saturation' */

  /* Signum: '<S43>/Sign' */
  if (rtb_psi_dot < 0.0) {
    Alpha1_idx_4 = -1.0;
  } else if (rtb_psi_dot > 0.0) {
    Alpha1_idx_4 = 1.0;
  } else if (rtb_psi_dot == 0.0) {
    Alpha1_idx_4 = 0.0;
  } else {
    Alpha1_idx_4 = rtb_psi_dot;
  }

  /* End of Signum: '<S43>/Sign' */

  /* Gain: '<S43>/Gain' */
  rtb_Row1_d = ctrl_custom_turning_frame_P.Gain_Gain_e2 * Alpha1_idx_4;

  /* Sum: '<S43>/Sum1' */
  rtb_psi_dot += rtb_Row1_d;

  /* Math: '<S43>/Math Function' incorporates:
   *  Constant: '<S43>/Constant'
   */
  rtb_psi_dot = rt_remd_snf(rtb_psi_dot,
    ctrl_custom_turning_frame_P.Constant_Value_e);

  /* Sum: '<S43>/Sum' */
  rtb_psi_dot -= rtb_Row1_d;

  /* SignalConversion: '<S11>/TmpSignal ConversionAtMatrix Multiply3Inport2' */
  rtb_TmpSignalConversionAtMatrix[2] = rtb_psi_dot;

  /* Sum: '<S7>/Sum4' incorporates:
   *  Integrator: '<S11>/Integrator2'
   */
  ctrl_custom_turning_frame_B.regulationerror[0] =
    ctrl_custom_turning_frame_B.Integrator[0] -
    ctrl_custom_turning_frame_X.Integrator2_CSTATE[0];

  /* SignalConversion: '<S11>/TmpSignal ConversionAtMatrix Multiply3Inport2' incorporates:
   *  Integrator: '<S11>/Integrator2'
   */
  rtb_TmpSignalConversionAtMatrix[0] =
    ctrl_custom_turning_frame_X.Integrator2_CSTATE[0];

  /* Sum: '<S7>/Sum4' incorporates:
   *  Integrator: '<S11>/Integrator2'
   */
  ctrl_custom_turning_frame_B.regulationerror[1] =
    ctrl_custom_turning_frame_B.Integrator[1] -
    ctrl_custom_turning_frame_X.Integrator2_CSTATE[1];

  /* SignalConversion: '<S11>/TmpSignal ConversionAtMatrix Multiply3Inport2' incorporates:
   *  Integrator: '<S11>/Integrator2'
   */
  rtb_TmpSignalConversionAtMatrix[1] =
    ctrl_custom_turning_frame_X.Integrator2_CSTATE[1];

  /* Sum: '<S7>/Sum4' incorporates:
   *  SignalConversion: '<S11>/TmpSignal ConversionAtMatrix Multiply3Inport2'
   */
  ctrl_custom_turning_frame_B.regulationerror[2] =
    ctrl_custom_turning_frame_B.Sum - rtb_psi_dot;

  /* Saturate: '<S37>/Saturation' */
  if (ctrl_custom_turning_frame_B.regulationerror[2] >
      ctrl_custom_turning_frame_P.Saturation_UpperSat_ir) {
    rtb_psi_dot = ctrl_custom_turning_frame_P.Saturation_UpperSat_ir;
  } else if (ctrl_custom_turning_frame_B.regulationerror[2] <
             ctrl_custom_turning_frame_P.Saturation_LowerSat_l) {
    rtb_psi_dot = ctrl_custom_turning_frame_P.Saturation_LowerSat_l;
  } else {
    rtb_psi_dot = ctrl_custom_turning_frame_B.regulationerror[2];
  }

  /* End of Saturate: '<S37>/Saturation' */

  /* Signum: '<S37>/Sign' */
  if (rtb_psi_dot < 0.0) {
    Alpha1_idx_4 = -1.0;
  } else if (rtb_psi_dot > 0.0) {
    Alpha1_idx_4 = 1.0;
  } else if (rtb_psi_dot == 0.0) {
    Alpha1_idx_4 = 0.0;
  } else {
    Alpha1_idx_4 = rtb_psi_dot;
  }

  /* End of Signum: '<S37>/Sign' */

  /* Gain: '<S37>/Gain' */
  rtb_Row1_d = ctrl_custom_turning_frame_P.Gain_Gain_d * Alpha1_idx_4;

  /* Sum: '<S37>/Sum1' */
  rtb_psi_dot += rtb_Row1_d;

  /* Math: '<S37>/Math Function' incorporates:
   *  Constant: '<S37>/Constant'
   */
  rtb_psi_dot = rt_remd_snf(rtb_psi_dot,
    ctrl_custom_turning_frame_P.Constant_Value_a);

  /* Sum: '<S37>/Sum' */
  rtb_psi_dot -= rtb_Row1_d;

  /* SignalConversion: '<S7>/TmpSignal ConversionAtMatrix MultiplyInport2' incorporates:
   *  Fcn: '<S35>/Row1'
   *  Fcn: '<S35>/Row2'
   *  Fcn: '<S35>/Row3'
   */
  ctrl_custom_turning_frame_B.TmpSignalConversionAtMatrixMult[0] = cos
    (rtb_Row1_m) * ctrl_custom_turning_frame_B.regulationerror[0] + sin
    (rtb_Row1_m) * ctrl_custom_turning_frame_B.regulationerror[1];
  ctrl_custom_turning_frame_B.TmpSignalConversionAtMatrixMult[1] = -sin
    (rtb_Row1_m) * ctrl_custom_turning_frame_B.regulationerror[0] + cos
    (rtb_Row1_m) * ctrl_custom_turning_frame_B.regulationerror[1];
  ctrl_custom_turning_frame_B.TmpSignalConversionAtMatrixMult[2] = rtb_psi_dot;

  /* Integrator: '<S7>/Integrator1' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator1_Reset_ZCE_g,
                       (ctrl_custom_turning_frame_B.start));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator1_CSTATE_m[0] =
        ctrl_custom_turning_frame_P.Integrator1_IC_e;
      ctrl_custom_turning_frame_X.Integrator1_CSTATE_m[1] =
        ctrl_custom_turning_frame_P.Integrator1_IC_e;
      ctrl_custom_turning_frame_X.Integrator1_CSTATE_m[2] =
        ctrl_custom_turning_frame_P.Integrator1_IC_e;
    }
  }

  /* Integrator: '<S11>/Integrator1' */
  ctrl_custom_turning_frame_B.Integrator1_i[0] =
    ctrl_custom_turning_frame_X.Integrator1_CSTATE_d[0];
  ctrl_custom_turning_frame_B.Integrator1_i[1] =
    ctrl_custom_turning_frame_X.Integrator1_CSTATE_d[1];
  ctrl_custom_turning_frame_B.Integrator1_i[2] =
    ctrl_custom_turning_frame_X.Integrator1_CSTATE_d[2];

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Integrator: '<S8>/Integrator1'
   *  Product: '<S7>/Matrix Multiply'
   *  Product: '<S8>/Product'
   *  Product: '<S8>/Product1'
   *  Product: '<S8>/Product2'
   *  Sum: '<S7>/Sum1'
   *  Sum: '<S8>/Sum1'
   */
  if (ctrl_custom_turning_frame_B.Controllswitch >=
      ctrl_custom_turning_frame_P.Switch_Threshold) {
    ctrl_custom_turning_frame_B.Switch[0] =
      ctrl_custom_turning_frame_P.Constant_Value_i;
    ctrl_custom_turning_frame_B.Switch[1] =
      ctrl_custom_turning_frame_P.Constant1_Value_k;
    ctrl_custom_turning_frame_B.Switch[2] = ((0.0 -
      ctrl_custom_turning_frame_B.K_p_psi * ctrl_custom_turning_frame_B.Sum_c) -
      ctrl_custom_turning_frame_B.K_i_psi *
      ctrl_custom_turning_frame_X.Integrator1_CSTATE) -
      ctrl_custom_turning_frame_B.K_d_psi *
      ctrl_custom_turning_frame_B.Integrator1[2];
  } else {
    /* S-Function (sdspdiag2): '<S18>/Create Diagonal Matrix2' incorporates:
     *  SignalConversion: '<S18>/TmpSignal ConversionAtCreate Diagonal Matrix2Inport1'
     */
    memset(&rtb_CreateDiagonalMatrix[0], 0, 9U * sizeof(real_T));
    rtb_CreateDiagonalMatrix[0] = ctrl_custom_turning_frame_B.K_d_x;
    rtb_CreateDiagonalMatrix[4] = ctrl_custom_turning_frame_B.K_d_y;
    rtb_CreateDiagonalMatrix[8] = ctrl_custom_turning_frame_B.K_d_psi;

    /* Sum: '<S7>/Sum' incorporates:
     *  Fcn: '<S36>/Row1'
     *  Fcn: '<S36>/Row2'
     *  Fcn: '<S36>/Row3'
     *  Fcn: '<S7>/yaw angle1'
     *  Product: '<S7>/Matrix Multiply2'
     */
    rtb_psi_dot = ctrl_custom_turning_frame_B.Integrator1[0] - (cos
      (rtb_TmpSignalConversionAtMatrix[2]) *
      ctrl_custom_turning_frame_B.Integrator1_i[0] + sin
      (rtb_TmpSignalConversionAtMatrix[2]) *
      ctrl_custom_turning_frame_B.Integrator1_i[1]);
    rtb_Row2_f = ctrl_custom_turning_frame_B.Integrator1[1] - (-sin
      (rtb_TmpSignalConversionAtMatrix[2]) *
      ctrl_custom_turning_frame_B.Integrator1_i[0] + cos
      (rtb_TmpSignalConversionAtMatrix[2]) *
      ctrl_custom_turning_frame_B.Integrator1_i[1]);
    rtb_Row1_m = ctrl_custom_turning_frame_B.Integrator1[2] -
      ctrl_custom_turning_frame_B.Integrator1_i[2];

    /* Product: '<S7>/Matrix Multiply2' */
    for (i_0 = 0; i_0 < 3; i_0++) {
      rtb_MatrixMultiply2_j[i_0] = rtb_CreateDiagonalMatrix[i_0 + 6] *
        rtb_Row1_m + (rtb_CreateDiagonalMatrix[i_0 + 3] * rtb_Row2_f +
                      rtb_CreateDiagonalMatrix[i_0] * rtb_psi_dot);
    }

    /* S-Function (sdspdiag2): '<S18>/Create Diagonal Matrix1' incorporates:
     *  SignalConversion: '<S18>/TmpSignal ConversionAtCreate Diagonal Matrix1Inport1'
     */
    memset(&rtb_CreateDiagonalMatrix[0], 0, 9U * sizeof(real_T));
    rtb_CreateDiagonalMatrix[0] = ctrl_custom_turning_frame_B.K_i_x;
    rtb_CreateDiagonalMatrix[4] = ctrl_custom_turning_frame_B.K_i_y;
    rtb_CreateDiagonalMatrix[8] = ctrl_custom_turning_frame_B.K_i_psi;

    /* Product: '<S7>/Matrix Multiply1' incorporates:
     *  Integrator: '<S7>/Integrator1'
     */
    for (i_0 = 0; i_0 < 3; i_0++) {
      rtb_MatrixMultiply1[i_0] = rtb_CreateDiagonalMatrix[i_0 + 6] *
        ctrl_custom_turning_frame_X.Integrator1_CSTATE_m[2] +
        (rtb_CreateDiagonalMatrix[i_0 + 3] *
         ctrl_custom_turning_frame_X.Integrator1_CSTATE_m[1] +
         rtb_CreateDiagonalMatrix[i_0] *
         ctrl_custom_turning_frame_X.Integrator1_CSTATE_m[0]);
    }

    /* End of Product: '<S7>/Matrix Multiply1' */

    /* S-Function (sdspdiag2): '<S18>/Create Diagonal Matrix' incorporates:
     *  SignalConversion: '<S18>/TmpSignal ConversionAtCreate Diagonal MatrixInport1'
     */
    memset(&rtb_CreateDiagonalMatrix[0], 0, 9U * sizeof(real_T));
    rtb_CreateDiagonalMatrix[0] = ctrl_custom_turning_frame_B.K_p_x;
    rtb_CreateDiagonalMatrix[4] = ctrl_custom_turning_frame_B.K_p_y;
    rtb_CreateDiagonalMatrix[8] = ctrl_custom_turning_frame_B.K_p_psi;
    for (i_0 = 0; i_0 < 3; i_0++) {
      ctrl_custom_turning_frame_B.Switch[i_0] = ((0.0 -
        ((rtb_CreateDiagonalMatrix[i_0 + 3] *
          ctrl_custom_turning_frame_B.TmpSignalConversionAtMatrixMult[1] +
          rtb_CreateDiagonalMatrix[i_0] *
          ctrl_custom_turning_frame_B.TmpSignalConversionAtMatrixMult[0]) +
         rtb_CreateDiagonalMatrix[i_0 + 6] *
         ctrl_custom_turning_frame_B.TmpSignalConversionAtMatrixMult[2])) -
        rtb_MatrixMultiply1[i_0]) - rtb_MatrixMultiply2_j[i_0];
    }
  }

  /* End of Switch: '<Root>/Switch' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
  }

  /* Gain: '<Root>/Gain5' */
  ctrl_custom_turning_frame_B.Gain5_n = ctrl_custom_turning_frame_P.Gain5_Gain_e
    * ctrl_custom_turning_frame_B.Sum;

  /* Gain: '<Root>/Gain' */
  ctrl_custom_turning_frame_B.Gain = ctrl_custom_turning_frame_P.Gain_Gain_g *
    ctrl_custom_turning_frame_B.Integrator[0];

  /* Gain: '<Root>/Gain1' */
  ctrl_custom_turning_frame_B.Gain1 = ctrl_custom_turning_frame_P.Gain1_Gain_l *
    ctrl_custom_turning_frame_B.Integrator[1];

  /* Integrator: '<S67>/Integrator' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_g,
                       (ctrl_custom_turning_frame_B.start));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator_CSTATE_a =
        ctrl_custom_turning_frame_P.Integrator_IC;
    }
  }

  /* MATLAB Function: '<S66>/Actual Force and Torque' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Qr1'
   *  Constant: '<S14>/K_Qr7'
   *  Constant: '<S14>/Rho'
   *  Constant: '<S53>/Losses (placeholder)'
   *  Integrator: '<S67>/Integrator'
   */
  /* MATLAB Function 'Thruster control /Thruster 1/Propeller Hydrodynamics/Actual Force and Torque': '<S69>:1' */
  /* '<S69>:1:3' */
  rtb_psi_dot = tanh(ctrl_custom_turning_frame_P.eps_c *
                     ctrl_custom_turning_frame_X.Integrator_CSTATE_a / 5.0) *
    0.5 + 0.5;

  /*  Smooth switching between positive and negative thrust. 5 makes switch happen between -5 and 5 */
  /* '<S69>:1:4' */
  /* '<S69>:1:5' */
  /* '<S69>:1:7' */
  /* '<S69>:1:8' */
  if (ctrl_custom_turning_frame_X.Integrator_CSTATE_a < 0.0) {
    rtb_Row1_m = -1.0;
  } else if (ctrl_custom_turning_frame_X.Integrator_CSTATE_a > 0.0) {
    rtb_Row1_m = 1.0;
  } else if (ctrl_custom_turning_frame_X.Integrator_CSTATE_a == 0.0) {
    rtb_Row1_m = 0.0;
  } else {
    rtb_Row1_m = ctrl_custom_turning_frame_X.Integrator_CSTATE_a;
  }

  rtb_Row2_f = ((1.0 - rtb_psi_dot) * ctrl_custom_turning_frame_P.K_q1r +
                ctrl_custom_turning_frame_P.K_q1f * rtb_psi_dot) * rtb_Row1_m *
    ctrl_custom_turning_frame_P.Rho * rt_powd_snf(ctrl_custom_turning_frame_P.D,
    5.0) * (ctrl_custom_turning_frame_X.Integrator_CSTATE_a *
            ctrl_custom_turning_frame_X.Integrator_CSTATE_a) -
    ctrl_custom_turning_frame_P.Lossesplaceholder_Value;

  /* '<S69>:1:9' */
  ctrl_custom_turning_frame_B.Pa = 6.2831853071795862 *
    ctrl_custom_turning_frame_X.Integrator_CSTATE_a * rtb_Row2_f;
  ctrl_custom_turning_frame_B.Qa = rtb_Row2_f;

  /* Integrator: '<S76>/Integrator' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_n,
                       (ctrl_custom_turning_frame_B.start));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator_CSTATE_f =
        ctrl_custom_turning_frame_P.Integrator_IC_h;
    }
  }

  rtb_Integrator_n = ctrl_custom_turning_frame_X.Integrator_CSTATE_f;

  /* End of Integrator: '<S76>/Integrator' */

  /* MATLAB Function: '<S75>/Actual Force and Torque' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Qr2'
   *  Constant: '<S14>/K_Qr8'
   *  Constant: '<S14>/K_Tf2'
   *  Constant: '<S14>/K_Tr2'
   *  Constant: '<S14>/Rho'
   *  Constant: '<S54>/Losses (placeholder)'
   */
  ctrl_custo_ActualForceandTorque(rtb_Integrator_n,
    ctrl_custom_turning_frame_P.K_q2f, ctrl_custom_turning_frame_P.K_T2f,
    ctrl_custom_turning_frame_P.K_T2r, ctrl_custom_turning_frame_P.K_q2r,
    ctrl_custom_turning_frame_P.Rho, ctrl_custom_turning_frame_P.D,
    ctrl_custom_turning_frame_P.eps_c,
    ctrl_custom_turning_frame_P.Lossesplaceholder_Value_e,
    &ctrl_custom_turning_frame_B.sf_ActualForceandTorque_m);

  /* Integrator: '<S85>/Integrator' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_e,
                       (ctrl_custom_turning_frame_B.start));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator_CSTATE_ao =
        ctrl_custom_turning_frame_P.Integrator_IC_o;
    }
  }

  rtb_Integrator_g = ctrl_custom_turning_frame_X.Integrator_CSTATE_ao;

  /* End of Integrator: '<S85>/Integrator' */

  /* MATLAB Function: '<S84>/Actual Force and Torque' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Qr3'
   *  Constant: '<S14>/K_Qr9'
   *  Constant: '<S14>/K_Tf3'
   *  Constant: '<S14>/K_Tr3'
   *  Constant: '<S14>/Rho'
   *  Constant: '<S55>/Losses (placeholder)'
   */
  ctrl_custo_ActualForceandTorque(rtb_Integrator_g,
    ctrl_custom_turning_frame_P.K_q3f, ctrl_custom_turning_frame_P.K_T3f,
    ctrl_custom_turning_frame_P.K_T3r, ctrl_custom_turning_frame_P.K_q3r,
    ctrl_custom_turning_frame_P.Rho, ctrl_custom_turning_frame_P.D,
    ctrl_custom_turning_frame_P.eps_c,
    ctrl_custom_turning_frame_P.Lossesplaceholder_Value_d,
    &ctrl_custom_turning_frame_B.sf_ActualForceandTorque_f);

  /* Integrator: '<S94>/Integrator' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_l,
                       (ctrl_custom_turning_frame_B.start));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator_CSTATE_k =
        ctrl_custom_turning_frame_P.Integrator_IC_hz;
    }
  }

  rtb_Integrator_l = ctrl_custom_turning_frame_X.Integrator_CSTATE_k;

  /* End of Integrator: '<S94>/Integrator' */

  /* MATLAB Function: '<S93>/Actual Force and Torque' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Qr10'
   *  Constant: '<S14>/K_Qr4'
   *  Constant: '<S14>/K_Tf4'
   *  Constant: '<S14>/K_Tr4'
   *  Constant: '<S14>/Rho'
   *  Constant: '<S56>/Losses (placeholder)'
   */
  ctrl_custo_ActualForceandTorque(rtb_Integrator_l,
    ctrl_custom_turning_frame_P.K_q4f, ctrl_custom_turning_frame_P.K_T4f,
    ctrl_custom_turning_frame_P.K_T4r, ctrl_custom_turning_frame_P.K_q4r,
    ctrl_custom_turning_frame_P.Rho, ctrl_custom_turning_frame_P.D,
    ctrl_custom_turning_frame_P.eps_c,
    ctrl_custom_turning_frame_P.Lossesplaceholder_Value_n,
    &ctrl_custom_turning_frame_B.sf_ActualForceandTorque_a);

  /* Integrator: '<S103>/Integrator' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_j,
                       (ctrl_custom_turning_frame_B.start));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator_CSTATE_k2 =
        ctrl_custom_turning_frame_P.Integrator_IC_d;
    }
  }

  rtb_Integrator_k = ctrl_custom_turning_frame_X.Integrator_CSTATE_k2;

  /* End of Integrator: '<S103>/Integrator' */

  /* MATLAB Function: '<S102>/Actual Force and Torque' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Qr11'
   *  Constant: '<S14>/K_Qr5'
   *  Constant: '<S14>/K_Tf5'
   *  Constant: '<S14>/K_Tr5'
   *  Constant: '<S14>/Rho'
   *  Constant: '<S57>/Losses (placeholder)'
   */
  ctrl_custo_ActualForceandTorque(rtb_Integrator_k,
    ctrl_custom_turning_frame_P.K_q5f, ctrl_custom_turning_frame_P.K_T5f,
    ctrl_custom_turning_frame_P.K_T5r, ctrl_custom_turning_frame_P.K_q5r,
    ctrl_custom_turning_frame_P.Rho, ctrl_custom_turning_frame_P.D,
    ctrl_custom_turning_frame_P.eps_c,
    ctrl_custom_turning_frame_P.Lossesplaceholder_Value_k,
    &ctrl_custom_turning_frame_B.sf_ActualForceandTorque_k);

  /* Integrator: '<S112>/Integrator' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_m,
                       (ctrl_custom_turning_frame_B.start));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator_CSTATE_i =
        ctrl_custom_turning_frame_P.Integrator_IC_b;
    }
  }

  rtb_Integrator_c = ctrl_custom_turning_frame_X.Integrator_CSTATE_i;

  /* End of Integrator: '<S112>/Integrator' */

  /* MATLAB Function: '<S111>/Actual Force and Torque' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Qr12'
   *  Constant: '<S14>/K_Qr6'
   *  Constant: '<S14>/K_Tf6'
   *  Constant: '<S14>/K_Tr6'
   *  Constant: '<S14>/Rho'
   *  Constant: '<S58>/Losses (placeholder)'
   */
  ctrl_custo_ActualForceandTorque(rtb_Integrator_c,
    ctrl_custom_turning_frame_P.K_q6f, ctrl_custom_turning_frame_P.K_T6f,
    ctrl_custom_turning_frame_P.K_T6r, ctrl_custom_turning_frame_P.K_q6r,
    ctrl_custom_turning_frame_P.Rho, ctrl_custom_turning_frame_P.D,
    ctrl_custom_turning_frame_P.eps_c,
    ctrl_custom_turning_frame_P.Lossesplaceholder_Value_nh,
    &ctrl_custom_turning_frame_B.sf_ActualForceandTorque_c);

  /* MATLAB Function: '<S66>/Actual Force and Torque' incorporates:
   *  Integrator: '<S67>/Integrator'
   */
  if (ctrl_custom_turning_frame_X.Integrator_CSTATE_a < 0.0) {
    rtb_Row1_m = -1.0;
  } else if (ctrl_custom_turning_frame_X.Integrator_CSTATE_a > 0.0) {
    rtb_Row1_m = 1.0;
  } else if (ctrl_custom_turning_frame_X.Integrator_CSTATE_a == 0.0) {
    rtb_Row1_m = 0.0;
  } else {
    rtb_Row1_m = ctrl_custom_turning_frame_X.Integrator_CSTATE_a;
  }

  /* SignalConversion: '<S59>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Tf1'
   *  Constant: '<S14>/K_Tr1'
   *  Constant: '<S14>/Rho'
   *  Constant: '<S53>/Losses (placeholder)'
   *  Integrator: '<S67>/Integrator'
   *  MATLAB Function: '<S52>/MATLAB Function'
   *  MATLAB Function: '<S66>/Actual Force and Torque'
   */
  rtb_TmpSignalConversionAtSFunct[0] = ((1.0 - rtb_psi_dot) *
    ctrl_custom_turning_frame_P.K_T1r + ctrl_custom_turning_frame_P.K_T1f *
    rtb_psi_dot) * rtb_Row1_m * ctrl_custom_turning_frame_P.Rho * rt_powd_snf
    (ctrl_custom_turning_frame_P.D, 4.0) *
    (ctrl_custom_turning_frame_X.Integrator_CSTATE_a *
     ctrl_custom_turning_frame_X.Integrator_CSTATE_a) -
    ctrl_custom_turning_frame_P.Lossesplaceholder_Value;
  rtb_TmpSignalConversionAtSFunct[1] =
    ctrl_custom_turning_frame_X.Integrator_CSTATE_a;
  rtb_TmpSignalConversionAtSFunct[2] =
    ctrl_custom_turning_frame_B.sf_ActualForceandTorque_m.Ta;
  rtb_TmpSignalConversionAtSFunct[3] = rtb_Integrator_n;
  rtb_TmpSignalConversionAtSFunct[4] =
    ctrl_custom_turning_frame_B.sf_ActualForceandTorque_f.Ta;
  rtb_TmpSignalConversionAtSFunct[5] = rtb_Integrator_g;
  rtb_TmpSignalConversionAtSFunct[6] =
    ctrl_custom_turning_frame_B.sf_ActualForceandTorque_a.Ta;
  rtb_TmpSignalConversionAtSFunct[7] = rtb_Integrator_l;
  rtb_TmpSignalConversionAtSFunct[8] =
    ctrl_custom_turning_frame_B.sf_ActualForceandTorque_k.Ta;
  rtb_TmpSignalConversionAtSFunct[9] = rtb_Integrator_k;
  rtb_TmpSignalConversionAtSFunct[10] =
    ctrl_custom_turning_frame_B.sf_ActualForceandTorque_c.Ta;
  rtb_TmpSignalConversionAtSFunct[11] = rtb_Integrator_c;

  /* MATLAB Function: '<S52>/MATLAB Function' incorporates:
   *  Constant: '<S14>/controller'
   *  Gain: '<S52>/Gain'
   *  Gain: '<S52>/Gain1'
   *  Gain: '<S52>/Gain2'
   *  Gain: '<S52>/Gain3'
   *  Gain: '<S52>/Gain4'
   *  Gain: '<S52>/Gain5'
   *  Integrator: '<S67>/Integrator'
   *  SignalConversion: '<S59>/TmpSignal ConversionAt SFunction Inport1'
   */
  /* MATLAB Function 'Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function': '<S59>:1' */
  if (ctrl_custom_turning_frame_P.controller_Value == 1.0) {
    /* '<S59>:1:3' */
    /* '<S59>:1:4' */
    ctrl_custom_turning_frame_B.output[0] = rtb_TmpSignalConversionAtSFunct[0];
    ctrl_custom_turning_frame_B.output[1] =
      ctrl_custom_turning_frame_P.Gain_Gain_a * ctrl_custom_turning_frame_B.rpm1;
    ctrl_custom_turning_frame_B.output[2] =
      ctrl_custom_turning_frame_B.sf_ActualForceandTorque_m.Ta;
    ctrl_custom_turning_frame_B.output[3] =
      ctrl_custom_turning_frame_P.Gain1_Gain_i *
      ctrl_custom_turning_frame_B.rpm2;
    ctrl_custom_turning_frame_B.output[4] =
      ctrl_custom_turning_frame_B.sf_ActualForceandTorque_f.Ta;
    ctrl_custom_turning_frame_B.output[5] =
      ctrl_custom_turning_frame_P.Gain2_Gain * ctrl_custom_turning_frame_B.rpm3;
    ctrl_custom_turning_frame_B.output[6] =
      ctrl_custom_turning_frame_B.sf_ActualForceandTorque_a.Ta;
    ctrl_custom_turning_frame_B.output[7] =
      ctrl_custom_turning_frame_P.Gain3_Gain * ctrl_custom_turning_frame_B.rpm4;
    ctrl_custom_turning_frame_B.output[8] =
      ctrl_custom_turning_frame_B.sf_ActualForceandTorque_k.Ta;
    ctrl_custom_turning_frame_B.output[9] =
      ctrl_custom_turning_frame_P.Gain4_Gain * ctrl_custom_turning_frame_B.rpm5;
    ctrl_custom_turning_frame_B.output[10] =
      ctrl_custom_turning_frame_B.sf_ActualForceandTorque_c.Ta;
    ctrl_custom_turning_frame_B.output[11] =
      ctrl_custom_turning_frame_P.Gain5_Gain_f *
      ctrl_custom_turning_frame_B.rpm6;

    /*      output = [input(1) input(2) input(3) input(4) input(5) input(6) input(7) input(8) input(9) input(10) input(11) input(12)]'; */
  } else {
    /* '<S59>:1:8' */
    ctrl_custom_turning_frame_B.output[0] = rtb_TmpSignalConversionAtSFunct[0];
    ctrl_custom_turning_frame_B.output[1] =
      ctrl_custom_turning_frame_X.Integrator_CSTATE_a;
    ctrl_custom_turning_frame_B.output[2] =
      ctrl_custom_turning_frame_B.sf_ActualForceandTorque_m.Ta;
    ctrl_custom_turning_frame_B.output[3] = rtb_Integrator_n;
    ctrl_custom_turning_frame_B.output[4] =
      ctrl_custom_turning_frame_B.sf_ActualForceandTorque_f.Ta;
    ctrl_custom_turning_frame_B.output[5] = rtb_Integrator_g;
    ctrl_custom_turning_frame_B.output[6] =
      ctrl_custom_turning_frame_B.sf_ActualForceandTorque_a.Ta;
    ctrl_custom_turning_frame_B.output[7] = rtb_Integrator_l;
    ctrl_custom_turning_frame_B.output[8] =
      ctrl_custom_turning_frame_B.sf_ActualForceandTorque_k.Ta;
    ctrl_custom_turning_frame_B.output[9] = rtb_Integrator_k;
    ctrl_custom_turning_frame_B.output[10] =
      ctrl_custom_turning_frame_B.sf_ActualForceandTorque_c.Ta;
    ctrl_custom_turning_frame_B.output[11] = rtb_Integrator_c;
  }

  /* SignalConversion: '<S47>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  MATLAB Function: '<S13>/angle between  [-180 180]'
   */
  rtb_TmpSignalConversionAtSFun_d[0] = ctrl_custom_turning_frame_B.thr_angle_1;
  rtb_TmpSignalConversionAtSFun_d[1] = ctrl_custom_turning_frame_B.thr_angle_2;
  rtb_TmpSignalConversionAtSFun_d[2] = ctrl_custom_turning_frame_B.thr_angle_3;
  rtb_TmpSignalConversionAtSFun_d[3] = ctrl_custom_turning_frame_B.thr_angle_4;
  rtb_TmpSignalConversionAtSFun_d[4] = ctrl_custom_turning_frame_B.thr_angle_5;
  rtb_TmpSignalConversionAtSFun_d[5] = ctrl_custom_turning_frame_B.thr_angle_6;

  /* MATLAB Function: '<S13>/angle between  [-180 180]' */
  /* MATLAB Function 'Thrust allocation/angle between  [-180 180]': '<S47>:1' */
  /*  RAD2PIPI Converts an angle in rad to the interval (-pi pi] */
  /*           Should be applied to all heading errors in a feedback control system */
  /*           in order to avoid discontinuities. */
  /*  */
  /*  Author:     Roger Skjetne */
  /*  Date:       2003-09-05 */
  /*  Revisions:  2004-09-02 Thor I. Fossen - replaced input argument x with angle */
  /*              2005-01-05 Thor I. Fossen - ouput argument is set to y and not angle */
  /*              2005-04-13 Roger Skjetne  - changed the function s in order */
  /*                                          to account for correct mapping to */
  /*                                          (-pi pi]. */
  /*  */
  /*  ________________________________________________________________ */
  /*  */
  /*  MSS GNC is a Matlab toolbox for guidance, navigation and control. */
  /*  The toolbox is part of the Marine Systems Simulator (MSS). */
  /*  */
  /*  Copyright (C) 2008 Thor I. Fossen and Tristan Perez */
  /*   */
  /*  This program is free software: you can redistribute it and/or modify */
  /*  it under the terms of the GNU General Public License as published by */
  /*  the Free Software Foundation, either version 3 of the License, or */
  /*  (at your option) any later version. */
  /*   */
  /*  This program is distributed in the hope that it will be useful, but */
  /*  WITHOUT ANY WARRANTY; without even the implied warranty of */
  /*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the  */
  /*  GNU General Public License for more details. */
  /*   */
  /*  You should have received a copy of the GNU General Public License */
  /*  along with this program.  If not, see <http://www.gnu.org/licenses/>. */
  /*   */
  /*  E-mail: contact@marinecontrol.org */
  /*  URL:    <http://www.marinecontrol.org> */
  /*  convert angle in rad to the interval <-pi pi>  */
  /* '<S47>:1:39' */
  /* '<S47>:1:40' */
  for (i_0 = 0; i_0 < 6; i_0++) {
    if (rtb_TmpSignalConversionAtSFun_d[i_0] < 0.0) {
      rtb_psi_dot = -1.0;
    } else if (rtb_TmpSignalConversionAtSFun_d[i_0] > 0.0) {
      rtb_psi_dot = 1.0;
    } else if (rtb_TmpSignalConversionAtSFun_d[i_0] == 0.0) {
      rtb_psi_dot = 0.0;
    } else {
      rtb_psi_dot = rtb_TmpSignalConversionAtSFun_d[i_0];
    }

    rtb_y[i_0] = rt_remd_snf(rtb_psi_dot * 3.1415926535897931 +
      rtb_TmpSignalConversionAtSFun_d[i_0], 6.2831853071795862);
    rtb_TmpSignalConversionAtSFu_fw[i_0] = rtb_TmpSignalConversionAtSFun_d[i_0]
      + 3.1415926535897931;
    if (rtb_TmpSignalConversionAtSFun_d[i_0] < 0.0) {
      s[i_0] = -1.0;
    } else if (rtb_TmpSignalConversionAtSFun_d[i_0] > 0.0) {
      s[i_0] = 1.0;
    } else if (rtb_TmpSignalConversionAtSFun_d[i_0] == 0.0) {
      s[i_0] = 0.0;
    } else {
      s[i_0] = rtb_TmpSignalConversionAtSFun_d[i_0];
    }
  }

  /* SignalConversion: '<S44>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  MATLAB Function: '<S13>/MATLAB Function'
   */
  /*  s = sign(angle); */
  /* '<S47>:1:43' */
  rtb_TmpSignalConversionAtSFun_o[0] = ctrl_custom_turning_frame_B.Switch[0];
  rtb_TmpSignalConversionAtSFun_o[1] = ctrl_custom_turning_frame_B.Switch[1];
  rtb_TmpSignalConversionAtSFun_o[2] = ctrl_custom_turning_frame_B.Switch[2];
  for (i_0 = 0; i_0 < 6; i_0++) {
    /* MATLAB Function: '<S13>/angle between  [-180 180]' */
    rtb_psi_dot = fabs(rt_remd_snf(rtb_TmpSignalConversionAtSFu_fw[i_0],
      6.2831853071795862) / 6.2831853071795862);
    if (rtb_psi_dot > 0.0) {
      rtb_psi_dot = 1.0;
    } else {
      if (rtb_psi_dot == 0.0) {
        rtb_psi_dot = 0.0;
      }
    }

    s_0 = (rtb_psi_dot - 1.0) * 2.0 + s[i_0];
    if (s_0 < 0.0) {
      s_0 = -1.0;
    } else if (s_0 > 0.0) {
      s_0 = 1.0;
    } else {
      if (s_0 == 0.0) {
        s_0 = 0.0;
      }
    }

    /* SignalConversion: '<S44>/TmpSignal ConversionAt SFunction Inport1' incorporates:
     *  Gain: '<S46>/Gain'
     *  MATLAB Function: '<S13>/MATLAB Function'
     *  MATLAB Function: '<S13>/angle between  [-180 180]'
     */
    rtb_TmpSignalConversionAtSFun_o[i_0 + 3] =
      ctrl_custom_turning_frame_P.Gain_Gain_i * (rtb_y[i_0] - s_0 *
      3.1415926535897931);
  }

  /* MATLAB Function: '<S13>/MATLAB Function' incorporates:
   *  Constant: '<S13>/C'
   *  Constant: '<S13>/X-position Thruster'
   *  Constant: '<S13>/Y-position Thruster'
   */
  /* MATLAB Function 'Thrust allocation/MATLAB Function': '<S44>:1' */
  /* '<S44>:1:87' */
  /* '<S44>:1:86' */
  /*  Complete system goes here! */
  /*  Allocating dimensions for faster computing */
  /*  Parameters thrusters */
  /* '<S44>:1:5' */
  rtb_MatrixMultiply2_j[0] = rtb_TmpSignalConversionAtSFun_o[0];
  rtb_MatrixMultiply2_j[1] = rtb_TmpSignalConversionAtSFun_o[1];
  rtb_MatrixMultiply2_j[2] = rtb_TmpSignalConversionAtSFun_o[2];

  /* '<S44>:1:6' */
  rtb_TmpSignalConversionAtSFu_fw[0] = rtb_TmpSignalConversionAtSFun_o[3];
  rtb_TmpSignalConversionAtSFu_fw[1] = rtb_TmpSignalConversionAtSFun_o[4];
  rtb_TmpSignalConversionAtSFu_fw[2] = rtb_TmpSignalConversionAtSFun_o[5];
  rtb_TmpSignalConversionAtSFu_fw[3] = rtb_TmpSignalConversionAtSFun_o[6];
  rtb_TmpSignalConversionAtSFu_fw[4] = rtb_TmpSignalConversionAtSFun_o[7];
  rtb_TmpSignalConversionAtSFu_fw[5] = rtb_TmpSignalConversionAtSFun_o[8];

  /*  Constraints for Thruster-Thruster interaction. Can be seen in "Initfile" */
  /*  how they are found */
  /* '<S44>:1:10' */
  /* '<S44>:1:11' */
  /* '<S44>:1:12' */
  /* '<S44>:1:13' */
  /* '<S44>:1:14' */
  /* '<S44>:1:15' */
  if (((rtb_TmpSignalConversionAtSFun_o[3] < ctrl_custom_turning_frame_P.C[0] -
        0.1) && (rtb_TmpSignalConversionAtSFun_o[3] >
                 ctrl_custom_turning_frame_P.C[6] + 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_o[3] > ctrl_custom_turning_frame_P.C[12] +
        0.1) && (rtb_TmpSignalConversionAtSFun_o[3] <
                 ctrl_custom_turning_frame_P.C[18] - 0.1))) {
    /* '<S44>:1:21' */
    /* '<S44>:1:22' */
    K[0] = 0.0;
  } else {
    /* '<S44>:1:24' */
    K[0] = 1.0;
  }

  if (((rtb_TmpSignalConversionAtSFun_o[4] > ctrl_custom_turning_frame_P.C[1] -
        0.1) && (rtb_TmpSignalConversionAtSFun_o[4] <
                 ctrl_custom_turning_frame_P.C[7] + 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_o[4] > ctrl_custom_turning_frame_P.C[13] -
        0.1) && (rtb_TmpSignalConversionAtSFun_o[4] <
                 ctrl_custom_turning_frame_P.C[19] + 0.1))) {
    /* '<S44>:1:27' */
    /* '<S44>:1:28' */
    K[1] = 0.0;
  } else {
    /* '<S44>:1:30' */
    K[1] = 1.0;
  }

  if (((rtb_TmpSignalConversionAtSFun_o[5] < ctrl_custom_turning_frame_P.C[2] +
        0.1) && (rtb_TmpSignalConversionAtSFun_o[5] >
                 ctrl_custom_turning_frame_P.C[8] - 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_o[5] < ctrl_custom_turning_frame_P.C[14] +
        0.1) && (rtb_TmpSignalConversionAtSFun_o[5] >
                 ctrl_custom_turning_frame_P.C[20] - 0.1))) {
    /* '<S44>:1:33' */
    /* '<S44>:1:34' */
    K[2] = 0.0;
  } else {
    /* '<S44>:1:36' */
    K[2] = 1.0;
  }

  if (((rtb_TmpSignalConversionAtSFun_o[6] > ctrl_custom_turning_frame_P.C[3] +
        0.1) && (rtb_TmpSignalConversionAtSFun_o[6] <
                 ctrl_custom_turning_frame_P.C[9] - 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_o[6] < ctrl_custom_turning_frame_P.C[15] -
        0.1) && (rtb_TmpSignalConversionAtSFun_o[6] >
                 ctrl_custom_turning_frame_P.C[21] + 0.1))) {
    /* '<S44>:1:39' */
    /* '<S44>:1:40' */
    K[3] = 0.0;
  } else {
    /* '<S44>:1:42' */
    K[3] = 1.0;
  }

  if (((rtb_TmpSignalConversionAtSFun_o[7] < ctrl_custom_turning_frame_P.C[4] -
        0.1) && (rtb_TmpSignalConversionAtSFun_o[7] >
                 ctrl_custom_turning_frame_P.C[10] + 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_o[7] < ctrl_custom_turning_frame_P.C[16] -
        0.1) && (rtb_TmpSignalConversionAtSFun_o[7] >
                 ctrl_custom_turning_frame_P.C[22] + 0.1))) {
    /* '<S44>:1:45' */
    /* '<S44>:1:46' */
    K[4] = 0.0;
  } else {
    /* '<S44>:1:48' */
    K[4] = 1.0;
  }

  if (((rtb_TmpSignalConversionAtSFun_o[8] > ctrl_custom_turning_frame_P.C[5] +
        0.1) && (rtb_TmpSignalConversionAtSFun_o[8] <
                 ctrl_custom_turning_frame_P.C[11] - 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_o[8] > ctrl_custom_turning_frame_P.C[17] +
        0.1) && (rtb_TmpSignalConversionAtSFun_o[8] <
                 ctrl_custom_turning_frame_P.C[23] - 0.1))) {
    /* '<S44>:1:51' */
    /* '<S44>:1:52' */
    K[5] = 0.0;
  } else {
    /* '<S44>:1:54' */
    K[5] = 1.0;
  }

  /*  number of thrusters */
  /*  Shells for faster computing */
  /* '<S44>:1:60' */
  /* '<S44>:1:61' */
  /* '<S44>:1:62' */
  /* '<S44>:1:64' */
  for (i_0 = 0; i_0 < 6; i_0++) {
    /* '<S44>:1:64' */
    /* '<S44>:1:65' */
    rtb_y[i_0] = rtb_TmpSignalConversionAtSFu_fw[i_0];
    ctrl_custom_turning_fram_cosd_m(&rtb_y[i_0]);

    /* Thrust in x-direction for cartesian */
    /* '<S44>:1:66' */
    s[i_0] = rtb_TmpSignalConversionAtSFu_fw[i_0];
    ctrl_custom_turning_fram_sind_k(&s[i_0]);

    /* Thrust in y-direction for cartesian */
    /* '<S44>:1:67' */
    rtb_psi_dot = rtb_TmpSignalConversionAtSFu_fw[i_0];
    ctrl_custom_turning_fram_sind_k(&rtb_psi_dot);
    rtb_Row2_f = rtb_TmpSignalConversionAtSFu_fw[i_0];
    ctrl_custom_turning_fram_cosd_m(&rtb_Row2_f);
    rtb_TmpSignalConversionAtSFun_d[i_0] = rtb_psi_dot *
      ctrl_custom_turning_frame_P.XpositionThruster_Value[i_0] - rtb_Row2_f *
      ctrl_custom_turning_frame_P.YpositionThruster_Value[i_0];
  }

  /* '<S44>:1:71' */
  /* '<S44>:1:72' */
  /* '<S44>:1:73' */
  ctrl_custom_turning_frame_diag(K, b_V_singular);
  for (i_0 = 0; i_0 < 6; i_0++) {
    rtb_y_1[3 * i_0] = rtb_y[i_0];
    rtb_y_1[1 + 3 * i_0] = s[i_0];
    rtb_y_1[2 + 3 * i_0] = rtb_TmpSignalConversionAtSFun_d[i_0];
  }

  for (i_0 = 0; i_0 < 6; i_0++) {
    for (b_i = 0; b_i < 3; b_i++) {
      rtb_y_0[b_i + 3 * i_0] = 0.0;
      for (b_sizes = 0; b_sizes < 6; b_sizes++) {
        rtb_y_0[b_i + 3 * i_0] += rtb_y_1[3 * b_sizes + b_i] * b_V_singular[6 *
          i_0 + b_sizes];
      }
    }
  }

  ctrl_custom_turning_frame_svd(rtb_y_0, rtb_CreateDiagonalMatrix,
    S_singular_cross, rtb_y_1);

  /* '<S44>:1:74' */
  for (i_0 = 0; i_0 < 9; i_0++) {
    S_singular_cross[i_0] = 1.0 / S_singular_cross[i_0];
  }

  /* '<S44>:1:75' */
  ctrl_custom_turning_fr_isfinite(S_singular_cross, tmp);
  i_0 = 0;
  for (b_i = 0; b_i < 9; b_i++) {
    f_1 = !tmp[b_i];
    if (f_1) {
      i_0++;
    }

    f[b_i] = f_1;
  }

  b_sizes = i_0;
  i_0 = 0;
  for (b_i = 0; b_i < 9; b_i++) {
    if (f[b_i]) {
      b_data[i_0] = b_i + 1;
      i_0++;
    }
  }

  /* '<S44>:1:75' */
  for (i_0 = 0; i_0 < b_sizes; i_0++) {
    S_singular_cross[b_data[i_0] - 1] = 0.0;
  }

  if (S_singular_cross[8] > 10.0 * S_singular_cross[4]) {
    /* '<S44>:1:76' */
    /* '<S44>:1:77' */
    S_singular_cross[8] = 0.0;
  }

  /* '<S44>:1:80' */
  /* '<S44>:1:82' */
  for (i_0 = 0; i_0 < 6; i_0++) {
    for (b_i = 0; b_i < 3; b_i++) {
      rtb_y_0[i_0 + 6 * b_i] = 0.0;
      rtb_y_0[i_0 + 6 * b_i] += S_singular_cross[3 * b_i] * rtb_y_1[i_0];
      rtb_y_0[i_0 + 6 * b_i] += S_singular_cross[3 * b_i + 1] * rtb_y_1[i_0 + 6];
      rtb_y_0[i_0 + 6 * b_i] += S_singular_cross[3 * b_i + 2] * rtb_y_1[i_0 + 12];
    }

    rtb_y[i_0] = 0.0;
    for (b_i = 0; b_i < 3; b_i++) {
      V_singular[i_0 + 6 * b_i] = 0.0;
      V_singular[i_0 + 6 * b_i] += rtb_y_0[i_0] * rtb_CreateDiagonalMatrix[b_i];
      V_singular[i_0 + 6 * b_i] += rtb_y_0[i_0 + 6] *
        rtb_CreateDiagonalMatrix[b_i + 3];
      V_singular[i_0 + 6 * b_i] += rtb_y_0[i_0 + 12] *
        rtb_CreateDiagonalMatrix[b_i + 6];
      rtb_y[i_0] += V_singular[6 * b_i + i_0] * rtb_MatrixMultiply2_j[b_i];
    }
  }

  /*  Optimized Thrust */
  /* '<S44>:1:86' */
  /* '<S44>:1:91' */
  for (i_0 = 0; i_0 < 12; i_0++) {
    d_0[3 * i_0] = d[i_0];
    d_0[1 + 3 * i_0] = e[i_0];
  }

  d_0[2] = ctrl_custom_turning_frame_P.YpositionThruster_Value[0];
  d_0[5] = ctrl_custom_turning_frame_P.XpositionThruster_Value[0];
  d_0[8] = ctrl_custom_turning_frame_P.YpositionThruster_Value[1];
  d_0[11] = ctrl_custom_turning_frame_P.XpositionThruster_Value[1];
  d_0[14] = ctrl_custom_turning_frame_P.YpositionThruster_Value[2];
  d_0[17] = ctrl_custom_turning_frame_P.XpositionThruster_Value[2];
  d_0[20] = ctrl_custom_turning_frame_P.YpositionThruster_Value[3];
  d_0[23] = ctrl_custom_turning_frame_P.XpositionThruster_Value[3];
  d_0[26] = ctrl_custom_turning_frame_P.YpositionThruster_Value[4];
  d_0[29] = ctrl_custom_turning_frame_P.XpositionThruster_Value[4];
  d_0[32] = ctrl_custom_turning_frame_P.YpositionThruster_Value[5];
  d_0[35] = ctrl_custom_turning_frame_P.XpositionThruster_Value[5];
  ctrl_custom_turning_fram_svd_hb(d_0, rtb_CreateDiagonalMatrix,
    S_singular_cross, b_V_singular);

  /* '<S44>:1:92' */
  for (i_0 = 0; i_0 < 9; i_0++) {
    S_singular_cross[i_0] = 1.0 / S_singular_cross[i_0];
  }

  /* '<S44>:1:93' */
  ctrl_custom_turning_fr_isfinite(S_singular_cross, tmp);
  i_0 = 0;
  for (b_i = 0; b_i < 9; b_i++) {
    f_1 = !tmp[b_i];
    if (f_1) {
      i_0++;
    }

    f[b_i] = f_1;
  }

  b_sizes = i_0;
  i_0 = 0;
  for (b_i = 0; b_i < 9; b_i++) {
    if (f[b_i]) {
      c_data[i_0] = b_i + 1;
      i_0++;
    }
  }

  /* '<S44>:1:93' */
  for (i_0 = 0; i_0 < b_sizes; i_0++) {
    S_singular_cross[c_data[i_0] - 1] = 0.0;
  }

  if (S_singular_cross[8] > 2.0 * S_singular_cross[4]) {
    /* '<S44>:1:94' */
    /* '<S44>:1:95' */
    S_singular_cross[8] = 0.0;
  }

  /* '<S44>:1:97' */
  for (i_0 = 0; i_0 < 12; i_0++) {
    for (b_i = 0; b_i < 3; b_i++) {
      d_0[i_0 + 12 * b_i] = 0.0;
      d_0[i_0 + 12 * b_i] += S_singular_cross[3 * b_i] * b_V_singular[i_0];
      d_0[i_0 + 12 * b_i] += S_singular_cross[3 * b_i + 1] * b_V_singular[i_0 +
        12];
      d_0[i_0 + 12 * b_i] += S_singular_cross[3 * b_i + 2] * b_V_singular[i_0 +
        24];
    }

    rtb_TmpSignalConversionAtSFunct[i_0] = 0.0;
    for (b_i = 0; b_i < 3; b_i++) {
      b_V_singular_0[i_0 + 12 * b_i] = 0.0;
      b_V_singular_0[i_0 + 12 * b_i] += d_0[i_0] * rtb_CreateDiagonalMatrix[b_i];
      b_V_singular_0[i_0 + 12 * b_i] += d_0[i_0 + 12] *
        rtb_CreateDiagonalMatrix[b_i + 3];
      b_V_singular_0[i_0 + 12 * b_i] += d_0[i_0 + 24] *
        rtb_CreateDiagonalMatrix[b_i + 6];
      rtb_TmpSignalConversionAtSFunct[i_0] += b_V_singular_0[12 * b_i + i_0] *
        rtb_MatrixMultiply2_j[b_i];
    }
  }

  /* '<S44>:1:99' */
  K[0] = 57.295779513082323 * rt_atan2d_snf(rtb_TmpSignalConversionAtSFunct[1],
    rtb_TmpSignalConversionAtSFunct[0]);
  K[1] = 57.295779513082323 * rt_atan2d_snf(rtb_TmpSignalConversionAtSFunct[3],
    rtb_TmpSignalConversionAtSFunct[2]);
  K[2] = 57.295779513082323 * rt_atan2d_snf(rtb_TmpSignalConversionAtSFunct[5],
    rtb_TmpSignalConversionAtSFunct[4]);
  K[3] = 57.295779513082323 * rt_atan2d_snf(rtb_TmpSignalConversionAtSFunct[7],
    rtb_TmpSignalConversionAtSFunct[6]);
  K[4] = 57.295779513082323 * rt_atan2d_snf(rtb_TmpSignalConversionAtSFunct[9],
    rtb_TmpSignalConversionAtSFunct[8]);
  K[5] = 57.295779513082323 * rt_atan2d_snf(rtb_TmpSignalConversionAtSFunct[11],
    rtb_TmpSignalConversionAtSFunct[10]);

  /*  Constraints */
  /*  Thruster 1 OK */
  /* C1 = [151 130 -151 -130 ]; */
  if (((K[0] < ctrl_custom_turning_frame_P.C[0]) && (K[0] >
        ctrl_custom_turning_frame_P.C[6]) && (rtb_y[0] > 0.0)) || ((K[0] <
        ctrl_custom_turning_frame_P.C[0]) && (K[0] >
        ctrl_custom_turning_frame_P.C[6]) && (rtb_y[0] < 0.0))) {
    /* '<S44>:1:105' */
    /* '<S44>:1:106' */
    c1[0] = ctrl_custom_turning_frame_P.C[0];
    c1[1] = ctrl_custom_turning_frame_P.C[6];

    /* '<S44>:1:107' */
    c1_5[0] = ctrl_custom_turning_frame_P.C[0] - K[0];
    c1_5[1] = ctrl_custom_turning_frame_P.C[6] - K[0];
    ctrl_custom_turning_frame_abs(c1_5, varargin_1);
    i_0 = 1;
    rtb_psi_dot = varargin_1[0];
    b_i = 0;
    if (rtIsNaN(varargin_1[0])) {
      b_sizes = 2;
      exitg12 = false;
      while ((!exitg12) && (b_sizes < 3)) {
        i_0 = 2;
        if (!rtIsNaN(varargin_1[1])) {
          rtb_psi_dot = varargin_1[1];
          b_i = 1;
          exitg12 = true;
        } else {
          b_sizes = 3;
        }
      }
    }

    if ((i_0 < 2) && (varargin_1[1] < rtb_psi_dot)) {
      b_i = 1;
    }

    /* '<S44>:1:108' */
    rtb_Row2_f = c1[b_i];
  } else if (((K[0] > ctrl_custom_turning_frame_P.C[12]) && (K[0] <
               ctrl_custom_turning_frame_P.C[18]) && (rtb_y[0] > 0.0)) || ((K[0]
    > ctrl_custom_turning_frame_P.C[12]) && (K[0] <
               ctrl_custom_turning_frame_P.C[18]) && (rtb_y[0] < 0.0))) {
    /* '<S44>:1:109' */
    /* '<S44>:1:110' */
    c1[0] = ctrl_custom_turning_frame_P.C[12];
    c1[1] = ctrl_custom_turning_frame_P.C[18];

    /* '<S44>:1:111' */
    c1_5[0] = ctrl_custom_turning_frame_P.C[12] - K[0];
    c1_5[1] = ctrl_custom_turning_frame_P.C[18] - K[0];
    ctrl_custom_turning_frame_abs(c1_5, varargin_1);
    i_0 = 1;
    rtb_psi_dot = varargin_1[0];
    b_i = 0;
    if (rtIsNaN(varargin_1[0])) {
      b_sizes = 2;
      exitg11 = false;
      while ((!exitg11) && (b_sizes < 3)) {
        i_0 = 2;
        if (!rtIsNaN(varargin_1[1])) {
          rtb_psi_dot = varargin_1[1];
          b_i = 1;
          exitg11 = true;
        } else {
          b_sizes = 3;
        }
      }
    }

    if ((i_0 < 2) && (varargin_1[1] < rtb_psi_dot)) {
      b_i = 1;
    }

    /* '<S44>:1:112' */
    rtb_Row2_f = c1[b_i];
  } else {
    /* '<S44>:1:114' */
    rtb_Row2_f = K[0];
  }

  if (((rtb_TmpSignalConversionAtSFun_o[3] < ctrl_custom_turning_frame_P.C[0] -
        0.1) && (rtb_TmpSignalConversionAtSFun_o[3] >
                 ctrl_custom_turning_frame_P.C[6] + 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_o[3] > ctrl_custom_turning_frame_P.C[12] +
        0.1) && (rtb_TmpSignalConversionAtSFun_o[3] <
                 ctrl_custom_turning_frame_P.C[18] - 0.1))) {
    /* '<S44>:1:116' */
    /* '<S44>:1:117' */
    rtb_y[0] = 0.0;
  } else {
    /* '<S44>:1:119' */
  }

  /*  Thruster 2  */
  /* C2 = [-99.85 -80.15 -50 -29]; */
  if (((K[1] < ctrl_custom_turning_frame_P.C[1]) && (K[1] >
        ctrl_custom_turning_frame_P.C[7]) && (rtb_y[1] > 0.0)) || ((K[1] <
        ctrl_custom_turning_frame_P.C[1]) && (K[1] >
        ctrl_custom_turning_frame_P.C[7]) && (rtb_y[1] < 0.0))) {
    /* '<S44>:1:124' */
    /* '<S44>:1:125' */
    c1[0] = ctrl_custom_turning_frame_P.C[1];
    c1[1] = ctrl_custom_turning_frame_P.C[7];

    /* '<S44>:1:126' */
    c1_4[0] = ctrl_custom_turning_frame_P.C[1] - K[1];
    c1_4[1] = ctrl_custom_turning_frame_P.C[7] - K[1];
    ctrl_custom_turning_frame_abs(c1_4, varargin_1);
    i_0 = 1;
    rtb_psi_dot = varargin_1[0];
    b_i = 0;
    if (rtIsNaN(varargin_1[0])) {
      b_sizes = 2;
      exitg10 = false;
      while ((!exitg10) && (b_sizes < 3)) {
        i_0 = 2;
        if (!rtIsNaN(varargin_1[1])) {
          rtb_psi_dot = varargin_1[1];
          b_i = 1;
          exitg10 = true;
        } else {
          b_sizes = 3;
        }
      }
    }

    if ((i_0 < 2) && (varargin_1[1] < rtb_psi_dot)) {
      b_i = 1;
    }

    /* '<S44>:1:127' */
    rtb_Row1_m = c1[b_i];
  } else if (((K[1] < ctrl_custom_turning_frame_P.C[13]) && (K[1] >
               ctrl_custom_turning_frame_P.C[19]) && (rtb_y[1] > 0.0)) || ((K[1]
    < ctrl_custom_turning_frame_P.C[13]) && (K[1] >
               ctrl_custom_turning_frame_P.C[19]) && (rtb_y[1] < 0.0))) {
    /* '<S44>:1:128' */
    /* '<S44>:1:129' */
    c1[0] = ctrl_custom_turning_frame_P.C[13];
    c1[1] = ctrl_custom_turning_frame_P.C[19];

    /* '<S44>:1:130' */
    c1_4[0] = ctrl_custom_turning_frame_P.C[13] - K[1];
    c1_4[1] = ctrl_custom_turning_frame_P.C[19] - K[1];
    ctrl_custom_turning_frame_abs(c1_4, varargin_1);
    i_0 = 1;
    rtb_psi_dot = varargin_1[0];
    b_i = 0;
    if (rtIsNaN(varargin_1[0])) {
      b_sizes = 2;
      exitg9 = false;
      while ((!exitg9) && (b_sizes < 3)) {
        i_0 = 2;
        if (!rtIsNaN(varargin_1[1])) {
          rtb_psi_dot = varargin_1[1];
          b_i = 1;
          exitg9 = true;
        } else {
          b_sizes = 3;
        }
      }
    }

    if ((i_0 < 2) && (varargin_1[1] < rtb_psi_dot)) {
      b_i = 1;
    }

    /* '<S44>:1:131' */
    rtb_Row1_m = c1[b_i];
  } else {
    /* '<S44>:1:133' */
    rtb_Row1_m = K[1];
  }

  if (((rtb_TmpSignalConversionAtSFun_o[4] < ctrl_custom_turning_frame_P.C[1] -
        0.1) && (rtb_TmpSignalConversionAtSFun_o[4] >
                 ctrl_custom_turning_frame_P.C[7] + 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_o[4] < ctrl_custom_turning_frame_P.C[13] -
        0.1) && (rtb_TmpSignalConversionAtSFun_o[4] >
                 ctrl_custom_turning_frame_P.C[19] + 0.1))) {
    /* '<S44>:1:135' */
    /* '<S44>:1:136' */
    rtb_y[1] = 0.0;
  } else {
    /* '<S44>:1:138' */
  }

  /*  Thruster 3  */
  /*  C3 = [99.85 80.15 50 29];  */
  if (((K[2] > ctrl_custom_turning_frame_P.C[2]) && (K[2] <
        ctrl_custom_turning_frame_P.C[8]) && (rtb_y[2] > 0.0)) || ((K[2] >
        ctrl_custom_turning_frame_P.C[2]) && (K[2] <
        ctrl_custom_turning_frame_P.C[8]) && (rtb_y[2] < 0.0))) {
    /* '<S44>:1:144' */
    /* '<S44>:1:145' */
    c1[0] = ctrl_custom_turning_frame_P.C[2];
    c1[1] = ctrl_custom_turning_frame_P.C[8];

    /* '<S44>:1:146' */
    c1_3[0] = ctrl_custom_turning_frame_P.C[2] - K[2];
    c1_3[1] = ctrl_custom_turning_frame_P.C[8] - K[2];
    ctrl_custom_turning_frame_abs(c1_3, varargin_1);
    i_0 = 1;
    rtb_psi_dot = varargin_1[0];
    b_i = 0;
    if (rtIsNaN(varargin_1[0])) {
      b_sizes = 2;
      exitg8 = false;
      while ((!exitg8) && (b_sizes < 3)) {
        i_0 = 2;
        if (!rtIsNaN(varargin_1[1])) {
          rtb_psi_dot = varargin_1[1];
          b_i = 1;
          exitg8 = true;
        } else {
          b_sizes = 3;
        }
      }
    }

    if ((i_0 < 2) && (varargin_1[1] < rtb_psi_dot)) {
      b_i = 1;
    }

    /* '<S44>:1:147' */
    rtb_Row1_d = c1[b_i];
  } else if (((K[2] > ctrl_custom_turning_frame_P.C[14]) && (K[2] <
               ctrl_custom_turning_frame_P.C[20]) && (rtb_y[2] > 0.0)) || ((K[2]
    > ctrl_custom_turning_frame_P.C[14]) && (K[2] <
               ctrl_custom_turning_frame_P.C[20]) && (rtb_y[2] < 0.0))) {
    /* '<S44>:1:148' */
    /* '<S44>:1:149' */
    c1[0] = ctrl_custom_turning_frame_P.C[14];
    c1[1] = ctrl_custom_turning_frame_P.C[20];

    /* '<S44>:1:150' */
    c1_3[0] = ctrl_custom_turning_frame_P.C[14] - K[2];
    c1_3[1] = ctrl_custom_turning_frame_P.C[20] - K[2];
    ctrl_custom_turning_frame_abs(c1_3, varargin_1);
    i_0 = 1;
    rtb_psi_dot = varargin_1[0];
    b_i = 0;
    if (rtIsNaN(varargin_1[0])) {
      b_sizes = 2;
      exitg7 = false;
      while ((!exitg7) && (b_sizes < 3)) {
        i_0 = 2;
        if (!rtIsNaN(varargin_1[1])) {
          rtb_psi_dot = varargin_1[1];
          b_i = 1;
          exitg7 = true;
        } else {
          b_sizes = 3;
        }
      }
    }

    if ((i_0 < 2) && (varargin_1[1] < rtb_psi_dot)) {
      b_i = 1;
    }

    /* '<S44>:1:151' */
    rtb_Row1_d = c1[b_i];
  } else {
    /* '<S44>:1:153' */
    rtb_Row1_d = K[2];
  }

  if (((rtb_TmpSignalConversionAtSFun_o[5] > ctrl_custom_turning_frame_P.C[2] +
        0.1) && (rtb_TmpSignalConversionAtSFun_o[5] <
                 ctrl_custom_turning_frame_P.C[8] - 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_o[5] > ctrl_custom_turning_frame_P.C[14] +
        0.1) && (rtb_TmpSignalConversionAtSFun_o[5] <
                 ctrl_custom_turning_frame_P.C[20] - 0.1))) {
    /* '<S44>:1:155' */
    /* '<S44>:1:156' */
    rtb_y[2] = 0.0;
  } else {
    /* '<S44>:1:158' */
  }

  /*  Thruster 4 OK */
  /* C4 = [-52.8 -34.2 52.8 34.2];  */
  if (((K[3] > ctrl_custom_turning_frame_P.C[3]) && (K[3] <
        ctrl_custom_turning_frame_P.C[9]) && (rtb_y[3] > 0.0)) || ((K[3] >
        ctrl_custom_turning_frame_P.C[3]) && (K[3] <
        ctrl_custom_turning_frame_P.C[9]) && (rtb_y[3] < 0.0))) {
    /* '<S44>:1:163' */
    /* '<S44>:1:164' */
    c1[0] = ctrl_custom_turning_frame_P.C[3];
    c1[1] = ctrl_custom_turning_frame_P.C[9];

    /* '<S44>:1:165' */
    c1_2[0] = ctrl_custom_turning_frame_P.C[3] - K[3];
    c1_2[1] = ctrl_custom_turning_frame_P.C[9] - K[3];
    ctrl_custom_turning_frame_abs(c1_2, varargin_1);
    i_0 = 1;
    rtb_psi_dot = varargin_1[0];
    b_i = 0;
    if (rtIsNaN(varargin_1[0])) {
      b_sizes = 2;
      exitg6 = false;
      while ((!exitg6) && (b_sizes < 3)) {
        i_0 = 2;
        if (!rtIsNaN(varargin_1[1])) {
          rtb_psi_dot = varargin_1[1];
          b_i = 1;
          exitg6 = true;
        } else {
          b_sizes = 3;
        }
      }
    }

    if ((i_0 < 2) && (varargin_1[1] < rtb_psi_dot)) {
      b_i = 1;
    }

    /* '<S44>:1:166' */
    Alpha1_idx_3 = c1[b_i];
  } else if (((K[3] < ctrl_custom_turning_frame_P.C[15]) && (K[3] >
               ctrl_custom_turning_frame_P.C[21]) && (rtb_y[3] > 0.0)) || ((K[3]
    < ctrl_custom_turning_frame_P.C[15]) && (K[3] >
               ctrl_custom_turning_frame_P.C[21]) && (rtb_y[3] < 0.0))) {
    /* '<S44>:1:167' */
    /* '<S44>:1:168' */
    c1[0] = ctrl_custom_turning_frame_P.C[15];
    c1[1] = ctrl_custom_turning_frame_P.C[21];

    /* '<S44>:1:169' */
    c1_2[0] = ctrl_custom_turning_frame_P.C[15] - K[3];
    c1_2[1] = ctrl_custom_turning_frame_P.C[21] - K[3];
    ctrl_custom_turning_frame_abs(c1_2, varargin_1);
    i_0 = 1;
    rtb_psi_dot = varargin_1[0];
    b_i = 0;
    if (rtIsNaN(varargin_1[0])) {
      b_sizes = 2;
      exitg5 = false;
      while ((!exitg5) && (b_sizes < 3)) {
        i_0 = 2;
        if (!rtIsNaN(varargin_1[1])) {
          rtb_psi_dot = varargin_1[1];
          b_i = 1;
          exitg5 = true;
        } else {
          b_sizes = 3;
        }
      }
    }

    if ((i_0 < 2) && (varargin_1[1] < rtb_psi_dot)) {
      b_i = 1;
    }

    /* '<S44>:1:170' */
    Alpha1_idx_3 = c1[b_i];
  } else {
    /* '<S44>:1:172' */
    Alpha1_idx_3 = K[3];
  }

  if (((rtb_TmpSignalConversionAtSFun_o[6] > ctrl_custom_turning_frame_P.C[3] +
        0.1) && (rtb_TmpSignalConversionAtSFun_o[6] <
                 ctrl_custom_turning_frame_P.C[9] - 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_o[6] < ctrl_custom_turning_frame_P.C[15] -
        0.1) && (rtb_TmpSignalConversionAtSFun_o[6] >
                 ctrl_custom_turning_frame_P.C[21] + 0.1))) {
    /* '<S44>:1:174' */
    /* '<S44>:1:175' */
    rtb_y[3] = 0.0;
  } else {
    /* '<S44>:1:177' */
  }

  /*  Thruster 5 */
  /* C5 = [-98.25 -81.75 -145.8 -127.2]; */
  if (((K[4] < ctrl_custom_turning_frame_P.C[4]) && (K[4] >
        ctrl_custom_turning_frame_P.C[10]) && (rtb_y[4] > 0.0)) || ((K[4] <
        ctrl_custom_turning_frame_P.C[4]) && (K[4] >
        ctrl_custom_turning_frame_P.C[10]) && (rtb_y[4] < 0.0))) {
    /* '<S44>:1:182' */
    /* '<S44>:1:183' */
    c1[0] = ctrl_custom_turning_frame_P.C[4];
    c1[1] = ctrl_custom_turning_frame_P.C[10];

    /* '<S44>:1:184' */
    c1_1[0] = ctrl_custom_turning_frame_P.C[4] - K[4];
    c1_1[1] = ctrl_custom_turning_frame_P.C[10] - K[4];
    ctrl_custom_turning_frame_abs(c1_1, varargin_1);
    i_0 = 1;
    rtb_psi_dot = varargin_1[0];
    b_i = 0;
    if (rtIsNaN(varargin_1[0])) {
      b_sizes = 2;
      exitg4 = false;
      while ((!exitg4) && (b_sizes < 3)) {
        i_0 = 2;
        if (!rtIsNaN(varargin_1[1])) {
          rtb_psi_dot = varargin_1[1];
          b_i = 1;
          exitg4 = true;
        } else {
          b_sizes = 3;
        }
      }
    }

    if ((i_0 < 2) && (varargin_1[1] < rtb_psi_dot)) {
      b_i = 1;
    }

    /* '<S44>:1:185' */
    Alpha1_idx_4 = c1[b_i];
  } else if (((K[4] < ctrl_custom_turning_frame_P.C[16]) && (K[4] >
               ctrl_custom_turning_frame_P.C[22]) && (rtb_y[4] > 0.0)) || ((K[4]
    < ctrl_custom_turning_frame_P.C[16]) && (K[4] >
               ctrl_custom_turning_frame_P.C[22]) && (rtb_y[4] < 0.0))) {
    /* '<S44>:1:186' */
    /* '<S44>:1:187' */
    c1[0] = ctrl_custom_turning_frame_P.C[16];
    c1[1] = ctrl_custom_turning_frame_P.C[22];

    /* '<S44>:1:188' */
    c1_1[0] = ctrl_custom_turning_frame_P.C[16] - K[4];
    c1_1[1] = ctrl_custom_turning_frame_P.C[22] - K[4];
    ctrl_custom_turning_frame_abs(c1_1, varargin_1);
    i_0 = 1;
    rtb_psi_dot = varargin_1[0];
    b_i = 0;
    if (rtIsNaN(varargin_1[0])) {
      b_sizes = 2;
      exitg3 = false;
      while ((!exitg3) && (b_sizes < 3)) {
        i_0 = 2;
        if (!rtIsNaN(varargin_1[1])) {
          rtb_psi_dot = varargin_1[1];
          b_i = 1;
          exitg3 = true;
        } else {
          b_sizes = 3;
        }
      }
    }

    if ((i_0 < 2) && (varargin_1[1] < rtb_psi_dot)) {
      b_i = 1;
    }

    /* '<S44>:1:189' */
    Alpha1_idx_4 = c1[b_i];
  } else {
    /* '<S44>:1:191' */
    Alpha1_idx_4 = K[4];
  }

  if (((rtb_TmpSignalConversionAtSFun_o[7] < ctrl_custom_turning_frame_P.C[4] -
        0.1) && (rtb_TmpSignalConversionAtSFun_o[7] >
                 ctrl_custom_turning_frame_P.C[10] + 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_o[7] < ctrl_custom_turning_frame_P.C[16] -
        0.1) && (rtb_TmpSignalConversionAtSFun_o[7] >
                 ctrl_custom_turning_frame_P.C[22] + 0.1))) {
    /* '<S44>:1:193' */
    /* '<S44>:1:194' */
    rtb_y[4] = 0.0;
  } else {
    /* '<S44>:1:196' */
  }

  /*  Thruster 6 */
  /* C6 = [98.75 81.75 145.8 127.2]; */
  if (((K[5] > ctrl_custom_turning_frame_P.C[5]) && (K[5] <
        ctrl_custom_turning_frame_P.C[11]) && (rtb_y[5] > 0.0)) || ((K[5] >
        ctrl_custom_turning_frame_P.C[5]) && (K[5] <
        ctrl_custom_turning_frame_P.C[11]) && (rtb_y[5] < 0.0))) {
    /* '<S44>:1:201' */
    /* '<S44>:1:202' */
    c1[0] = ctrl_custom_turning_frame_P.C[5];
    c1[1] = ctrl_custom_turning_frame_P.C[11];

    /* '<S44>:1:203' */
    c1_0[0] = ctrl_custom_turning_frame_P.C[5] - K[5];
    c1_0[1] = ctrl_custom_turning_frame_P.C[11] - K[5];
    ctrl_custom_turning_frame_abs(c1_0, varargin_1);
    i_0 = 1;
    rtb_psi_dot = varargin_1[0];
    b_i = 0;
    if (rtIsNaN(varargin_1[0])) {
      b_sizes = 2;
      exitg2 = false;
      while ((!exitg2) && (b_sizes < 3)) {
        i_0 = 2;
        if (!rtIsNaN(varargin_1[1])) {
          rtb_psi_dot = varargin_1[1];
          b_i = 1;
          exitg2 = true;
        } else {
          b_sizes = 3;
        }
      }
    }

    if ((i_0 < 2) && (varargin_1[1] < rtb_psi_dot)) {
      b_i = 1;
    }

    /* '<S44>:1:204' */
    rtb_psi_dot = c1[b_i];
  } else if (((K[5] > ctrl_custom_turning_frame_P.C[17]) && (K[5] <
               ctrl_custom_turning_frame_P.C[23]) && (rtb_y[5] > 0.0)) || ((K[5]
    > ctrl_custom_turning_frame_P.C[17]) && (K[5] <
               ctrl_custom_turning_frame_P.C[23]) && (rtb_y[5] < 0.0))) {
    /* '<S44>:1:205' */
    /* '<S44>:1:206' */
    c1[0] = ctrl_custom_turning_frame_P.C[17];
    c1[1] = ctrl_custom_turning_frame_P.C[23];

    /* '<S44>:1:207' */
    c1_0[0] = ctrl_custom_turning_frame_P.C[17] - K[5];
    c1_0[1] = ctrl_custom_turning_frame_P.C[23] - K[5];
    ctrl_custom_turning_frame_abs(c1_0, varargin_1);
    i_0 = 1;
    rtb_psi_dot = varargin_1[0];
    b_i = 0;
    if (rtIsNaN(varargin_1[0])) {
      b_sizes = 2;
      exitg1 = false;
      while ((!exitg1) && (b_sizes < 3)) {
        i_0 = 2;
        if (!rtIsNaN(varargin_1[1])) {
          rtb_psi_dot = varargin_1[1];
          b_i = 1;
          exitg1 = true;
        } else {
          b_sizes = 3;
        }
      }
    }

    if ((i_0 < 2) && (varargin_1[1] < rtb_psi_dot)) {
      b_i = 1;
    }

    /* '<S44>:1:208' */
    rtb_psi_dot = c1[b_i];
  } else {
    /* '<S44>:1:210' */
    rtb_psi_dot = K[5];
  }

  if (((rtb_TmpSignalConversionAtSFun_o[8] > ctrl_custom_turning_frame_P.C[5] +
        0.1) && (rtb_TmpSignalConversionAtSFun_o[8] <
                 ctrl_custom_turning_frame_P.C[11] - 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_o[8] > ctrl_custom_turning_frame_P.C[17] +
        0.1) && (rtb_TmpSignalConversionAtSFun_o[8] <
                 ctrl_custom_turning_frame_P.C[23] - 0.1))) {
    /* '<S44>:1:212' */
    /* '<S44>:1:213' */
    rtb_y[5] = 0.0;
  } else {
    /* '<S44>:1:215' */
  }

  /*  Thruster 2&3  */
  if (rtb_Row1_m == ctrl_custom_turning_frame_P.C[7]) {
    /* '<S44>:1:219' */
    /* '<S44>:1:220' */
    rtb_Row1_d = K[1] - (ctrl_custom_turning_frame_P.C[7] - K[1]);
  } else if (rtb_Row1_m == ctrl_custom_turning_frame_P.C[1]) {
    /* '<S44>:1:221' */
    /* '<S44>:1:222' */
    rtb_Row1_d = K[1] - (ctrl_custom_turning_frame_P.C[1] - K[1]);
  } else if (rtb_Row1_m == ctrl_custom_turning_frame_P.C[13]) {
    /* '<S44>:1:223' */
    /* '<S44>:1:224' */
    rtb_Row1_d = K[1] - (ctrl_custom_turning_frame_P.C[13] - K[1]);
  } else if (rtb_Row1_m == ctrl_custom_turning_frame_P.C[19]) {
    /* '<S44>:1:225' */
    /* '<S44>:1:226' */
    rtb_Row1_d = K[1] - (ctrl_custom_turning_frame_P.C[19] - K[1]);
  } else if (rtb_Row1_d == ctrl_custom_turning_frame_P.C[8]) {
    /* '<S44>:1:228' */
    /* '<S44>:1:229' */
    rtb_Row1_m = K[2] - (ctrl_custom_turning_frame_P.C[8] - K[2]);
  } else if (rtb_Row1_d == ctrl_custom_turning_frame_P.C[2]) {
    /* '<S44>:1:230' */
    /* '<S44>:1:231' */
    rtb_Row1_m = K[2] - (ctrl_custom_turning_frame_P.C[2] - K[2]);
  } else if (rtb_Row1_d == ctrl_custom_turning_frame_P.C[14]) {
    /* '<S44>:1:232' */
    /* '<S44>:1:233' */
    rtb_Row1_m = K[2] - (ctrl_custom_turning_frame_P.C[14] - K[2]);
  } else {
    if (rtb_Row1_d == ctrl_custom_turning_frame_P.C[20]) {
      /* '<S44>:1:234' */
      /* '<S44>:1:235' */
      rtb_Row1_m = K[2] - (ctrl_custom_turning_frame_P.C[20] - K[2]);
    }
  }

  /*  Thruster 5&6 */
  if (Alpha1_idx_4 == ctrl_custom_turning_frame_P.C[10]) {
    /* '<S44>:1:239' */
    /* '<S44>:1:240' */
    rtb_psi_dot = K[4] - (ctrl_custom_turning_frame_P.C[10] - K[4]);
  } else if (Alpha1_idx_4 == ctrl_custom_turning_frame_P.C[4]) {
    /* '<S44>:1:241' */
    /* '<S44>:1:242' */
    rtb_psi_dot = K[4] - (ctrl_custom_turning_frame_P.C[4] - K[4]);
  } else if (Alpha1_idx_4 == ctrl_custom_turning_frame_P.C[16]) {
    /* '<S44>:1:243' */
    /* '<S44>:1:244' */
    rtb_psi_dot = K[4] - (ctrl_custom_turning_frame_P.C[16] - K[4]);
  } else if (Alpha1_idx_4 == ctrl_custom_turning_frame_P.C[22]) {
    /* '<S44>:1:245' */
    /* '<S44>:1:246' */
    rtb_psi_dot = K[4] - (ctrl_custom_turning_frame_P.C[22] - K[4]);
  } else if (rtb_psi_dot == ctrl_custom_turning_frame_P.C[11]) {
    /* '<S44>:1:248' */
    /* '<S44>:1:249' */
    Alpha1_idx_4 = K[5] - (ctrl_custom_turning_frame_P.C[11] - K[5]);
  } else if (rtb_psi_dot == ctrl_custom_turning_frame_P.C[5]) {
    /* '<S44>:1:250' */
    /* '<S44>:1:251' */
    Alpha1_idx_4 = K[5] - (ctrl_custom_turning_frame_P.C[5] - K[5]);
  } else if (rtb_psi_dot == ctrl_custom_turning_frame_P.C[17]) {
    /* '<S44>:1:252' */
    /* '<S44>:1:253' */
    Alpha1_idx_4 = K[5] - (ctrl_custom_turning_frame_P.C[17] - K[5]);
  } else {
    if (rtb_psi_dot == ctrl_custom_turning_frame_P.C[23]) {
      /* '<S44>:1:254' */
      /* '<S44>:1:255' */
      Alpha1_idx_4 = K[5] - (ctrl_custom_turning_frame_P.C[23] - K[5]);
    }
  }

  /*  Thruster 4 & 1 */
  if (Alpha1_idx_3 == ctrl_custom_turning_frame_P.C[9]) {
    /* '<S44>:1:258' */
    /* '<S44>:1:259' */
    rtb_Row2_f = K[3] - (ctrl_custom_turning_frame_P.C[9] - K[3]);
  } else if (Alpha1_idx_3 == ctrl_custom_turning_frame_P.C[3]) {
    /* '<S44>:1:260' */
    /* '<S44>:1:261' */
    rtb_Row2_f = K[3] - (ctrl_custom_turning_frame_P.C[3] - K[3]);
  } else if (Alpha1_idx_3 == ctrl_custom_turning_frame_P.C[15]) {
    /* '<S44>:1:262' */
    /* '<S44>:1:263' */
    rtb_Row2_f = K[3] - (ctrl_custom_turning_frame_P.C[15] - K[3]);
  } else {
    if (Alpha1_idx_3 == ctrl_custom_turning_frame_P.C[21]) {
      /* '<S44>:1:264' */
      /* '<S44>:1:265' */
      rtb_Row2_f = K[3] - (ctrl_custom_turning_frame_P.C[21] - K[3]);
    }
  }

  if (rtb_Row2_f == ctrl_custom_turning_frame_P.C[6]) {
    /* '<S44>:1:268' */
    /* '<S44>:1:269' */
    Alpha1_idx_3 = K[0] - (ctrl_custom_turning_frame_P.C[6] - K[0]);
  } else if (rtb_Row2_f == ctrl_custom_turning_frame_P.C[0]) {
    /* '<S44>:1:270' */
    /* '<S44>:1:271' */
    Alpha1_idx_3 = K[0] - (ctrl_custom_turning_frame_P.C[0] - K[0]);
  } else if (rtb_Row2_f == ctrl_custom_turning_frame_P.C[12]) {
    /* '<S44>:1:272' */
    /* '<S44>:1:273' */
    Alpha1_idx_3 = K[0] - (ctrl_custom_turning_frame_P.C[12] - K[0]);
  } else {
    if (rtb_Row2_f == ctrl_custom_turning_frame_P.C[18]) {
      /* '<S44>:1:274' */
      /* '<S44>:1:275' */
      Alpha1_idx_3 = K[0] - (ctrl_custom_turning_frame_P.C[18] - K[0]);
    }
  }

  /* '<S44>:1:278' */
  /*  u_d = -Desired_thrust; */
  /*  Update outputs */
  /* '<S44>:1:285' */
  rtb_sys[0] = rtb_Row2_f;
  rtb_sys[1] = rtb_Row1_m;
  rtb_sys[2] = rtb_Row1_d;
  rtb_sys[3] = Alpha1_idx_3;
  rtb_sys[4] = Alpha1_idx_4;
  rtb_sys[5] = rtb_psi_dot;
  for (i_0 = 0; i_0 < 6; i_0++) {
    rtb_sys[i_0 + 6] = rtb_y[i_0];
  }

  /* Switch: '<S13>/Choosing Fixed // Azimuth angle' incorporates:
   *  Constant: '<S13>/constant angle'
   */
  for (i_0 = 0; i_0 < 6; i_0++) {
    if (ctrl_custom_turning_frame_B.Angle_controller >=
        ctrl_custom_turning_frame_P.ChoosingFixedAzimuthangle_Thres) {
      ctrl_custom_turning_frame_B.ChoosingFixedAzimuthangle[i_0] = rtb_sys[i_0];
    } else {
      ctrl_custom_turning_frame_B.ChoosingFixedAzimuthangle[i_0] =
        ctrl_custom_turning_frame_P.constantangle_Value[i_0];
    }
  }

  /* End of Switch: '<S13>/Choosing Fixed // Azimuth angle' */

  /* Outputs for Iterator SubSystem: '<S13>/Optimal angle path and  constraints on rotation speed' incorporates:
   *  ForEach: '<S45>/For Each'
   */
  for (ForEach_itr = 0; ForEach_itr < 6; ForEach_itr++) {
    /* ForEachSliceSelector: '<S45>/ImpSel_InsertedFor_reset_at_outport_0' */
    rtb_ImpSel_InsertedFor_reset_at =
      ctrl_custom_turning_frame_B.start2[ForEach_itr];
    if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
      /* DiscreteIntegrator: '<S45>/Discrete-Time Integrator' incorporates:
       *  Constant: '<S13>/constant angle'
       *  ForEachSliceSelector: '<S45>/ImpSel_InsertedFor_initial angle _at_outport_0'
       */
      if (ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].
          DiscreteTimeIntegrator_IC_LOADI != 0) {
        ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].
          DiscreteTimeIntegrator_DSTATE =
          ctrl_custom_turning_frame_P.constantangle_Value[ForEach_itr];
      }

      if (((rtb_ImpSel_InsertedFor_reset_at > 0.0) &&
           (ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].
            DiscreteTimeIntegrator_PrevRese <= 0)) ||
          ((rtb_ImpSel_InsertedFor_reset_at <= 0.0) &&
           (ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].
            DiscreteTimeIntegrator_PrevRese == 1))) {
        ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].
          DiscreteTimeIntegrator_DSTATE =
          ctrl_custom_turning_frame_P.constantangle_Value[ForEach_itr];
      }

      ctrl_custom_turning_frame_B.CoreSubsys[ForEach_itr].angle =
        ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].
        DiscreteTimeIntegrator_DSTATE;

      /* End of DiscreteIntegrator: '<S45>/Discrete-Time Integrator' */

      /* Gain: '<S48>/Gain1' */
      rtb_psi_dot = ctrl_custom_turning_frame_P.CoreSubsys.Gain1_Gain *
        ctrl_custom_turning_frame_B.CoreSubsys[ForEach_itr].angle;

      /* Delay: '<S45>/Delay' */
      ctrl_custom_turning_frame_B.CoreSubsys[ForEach_itr].Delay =
        ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].Delay_DSTATE;

      /* MATLAB Function: '<S45>/Ensuring angle is  [-pi pi]' */
      /* MATLAB Function 'Thrust allocation/Optimal angle path and  constraints on rotation speed/Ensuring angle is  [-pi pi]': '<S49>:1' */
      /*  RAD2PIPI Converts an angle in rad to the interval (-pi pi] */
      /*           Should be applied to all heading errors in a feedback control system */
      /*           in order to avoid discontinuities. */
      /*  */
      /*  Author:     Roger Skjetne */
      /*  Date:       2003-09-05 */
      /*  Revisions:  2004-09-02 Thor I. Fossen - replaced input argument x with angle */
      /*              2005-01-05 Thor I. Fossen - ouput argument is set to y and not angle */
      /*              2005-04-13 Roger Skjetne  - changed the function s in order */
      /*                                          to account for correct mapping to */
      /*                                          (-pi pi]. */
      /*  */
      /*  ________________________________________________________________ */
      /*  */
      /*  MSS GNC is a Matlab toolbox for guidance, navigation and control. */
      /*  The toolbox is part of the Marine Systems Simulator (MSS). */
      /*  */
      /*  Copyright (C) 2008 Thor I. Fossen and Tristan Perez */
      /*   */
      /*  This program is free software: you can redistribute it and/or modify */
      /*  it under the terms of the GNU General Public License as published by */
      /*  the Free Software Foundation, either version 3 of the License, or */
      /*  (at your option) any later version. */
      /*   */
      /*  This program is distributed in the hope that it will be useful, but */
      /*  WITHOUT ANY WARRANTY; without even the implied warranty of */
      /*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the  */
      /*  GNU General Public License for more details. */
      /*   */
      /*  You should have received a copy of the GNU General Public License */
      /*  along with this program.  If not, see <http://www.gnu.org/licenses/>. */
      /*   */
      /*  E-mail: contact@marinecontrol.org */
      /*  URL:    <http://www.marinecontrol.org> */
      /*  convert angle in rad to the interval <-pi pi>  */
      /* '<S49>:1:39' */
      /* '<S49>:1:40' */
      /*  s = sign(angle); */
      /* '<S49>:1:43' */
      Alpha1_idx_3 = fabs(rt_remd_snf(rtb_psi_dot + 3.1415926535897931,
        6.2831853071795862) / 6.2831853071795862);
      if (rtb_psi_dot < 0.0) {
        Alpha1_idx_4 = -1.0;
      } else if (rtb_psi_dot > 0.0) {
        Alpha1_idx_4 = 1.0;
      } else if (rtb_psi_dot == 0.0) {
        Alpha1_idx_4 = 0.0;
      } else {
        Alpha1_idx_4 = rtb_psi_dot;
      }

      if (Alpha1_idx_3 > 0.0) {
        Alpha1_idx_3 = 1.0;
      } else {
        if (Alpha1_idx_3 == 0.0) {
          Alpha1_idx_3 = 0.0;
        }
      }

      Alpha1_idx_3 = (Alpha1_idx_3 - 1.0) * 2.0 + Alpha1_idx_4;
      if (rtb_psi_dot < 0.0) {
        Alpha1_idx_4 = -1.0;
      } else if (rtb_psi_dot > 0.0) {
        Alpha1_idx_4 = 1.0;
      } else if (rtb_psi_dot == 0.0) {
        Alpha1_idx_4 = 0.0;
      } else {
        Alpha1_idx_4 = rtb_psi_dot;
      }

      if (Alpha1_idx_3 < 0.0) {
        Alpha1_idx_3 = -1.0;
      } else if (Alpha1_idx_3 > 0.0) {
        Alpha1_idx_3 = 1.0;
      } else {
        if (Alpha1_idx_3 == 0.0) {
          Alpha1_idx_3 = 0.0;
        }
      }

      c_23 = rt_remd_snf(Alpha1_idx_4 * 3.1415926535897931 + rtb_psi_dot,
                         6.2831853071795862) - Alpha1_idx_3 * 3.1415926535897931;

      /* End of MATLAB Function: '<S45>/Ensuring angle is  [-pi pi]' */
    }

    /* MATLAB Function: '<S45>/MATLAB Function1' incorporates:
     *  ForEachSliceSelector: '<S45>/ImpSel_InsertedFor_Desired Angle_at_outport_0'
     */
    /* MATLAB Function 'Thrust allocation/Optimal angle path and  constraints on rotation speed/MATLAB Function1': '<S50>:1' */
    /* '<S50>:1:3' */
    rtb_psi_dot =
      ctrl_custom_turning_frame_B.ChoosingFixedAzimuthangle[ForEach_itr] -
      ctrl_custom_turning_frame_B.CoreSubsys[ForEach_itr].Delay;
    if (fabs(rtb_psi_dot) >= 360.0) {
      /* '<S50>:1:4' */
      /* '<S50>:1:5' */
      rtb_psi_dot = rt_remd_snf(rtb_psi_dot, 360.0);
    }

    if (fabs(rtb_psi_dot) >= 180.0) {
      /* '<S50>:1:8' */
      /* '<S50>:1:9' */
      if (rtb_psi_dot < 0.0) {
        Alpha1_idx_4 = -1.0;
      } else if (rtb_psi_dot > 0.0) {
        Alpha1_idx_4 = 1.0;
      } else if (rtb_psi_dot == 0.0) {
        Alpha1_idx_4 = 0.0;
      } else {
        Alpha1_idx_4 = rtb_psi_dot;
      }

      rtb_psi_dot -= Alpha1_idx_4 * 360.0;
    }

    /* End of MATLAB Function: '<S45>/MATLAB Function1' */

    /* Saturate: '<S45>/Max Rotation Rate' */
    /*  if desired < 0 %&& abs(desired+actual) > 180 */
    /*      y = actual+360; */
    /*  else */
    /*      y = abs(actual); */
    /*  end */
    /* if desired-actual > 180 */
    /*     u = desired - 360; */
    /* elseif desired-actual <= -180 */
    /*     u=actual + 360 ; */
    /* else */
    /*     u=desired;         */
    /* end */
    /* rotation = change-actual;% - actual; % If positive with clock, Negative against clock */
    /* if rotation >= 180 || rotation <= -180 */
    /*  u = desired; */
    /* else  */
    /*      u = actual; */
    /* end */
    /* change = abs(actual); */
    /*  if actual-desired > 180 && desired > 0 && rotation > 0 */
    /*      u = -180; */
    /*  elseif  actual-desired > 180 && desired > 0 && rotation < 0 */
    /*      u = 180; */
    /*  else  */
    /*      u = actual; */
    /*  end */
    /*  if change > abs(desired-actual) */
    /*      u = -actual; */
    /*  else */
    /*      u = actual; */
    /*  end */
    /*  if desired >= 0.98*actual || desired <= -0.98*actual  */
    /*      u = desired; */
    /*  else  */
    /*      u = actual;  */
    /*  end */
    /*  paths = [abs(actual-desired),abs(-1*actual-desired)]; */
    /*  fastest = min(paths); */
    /*  if paths(1) > paths(2) */
    /*      fastest = paths(2); */
    /*  elseif paths(1) < paths(2) */
    /*      fastest = paths(1); */
    /*  end */
    /*  % if desired > 0 && actual < 0 || desired < 0 && actual < 0 */
    /*  % u = fastest; */
    /*  % elseif desired > 0 && actual > 0 || desired < 0 && actual < 0 */
    /*  %     u = fastest; */
    /*  if desired-actual > 180 || desired-actual < -180 */
    /*      u = -actual; */
    /*  else  */
    /*      u = actual; */
    /*  end */
    if (rtb_psi_dot > ctrl_custom_turning_frame_P.Max_rotation) {
      ctrl_custom_turning_frame_B.CoreSubsys[ForEach_itr].MaxRotationRate =
        ctrl_custom_turning_frame_P.Max_rotation;
    } else if (rtb_psi_dot < -ctrl_custom_turning_frame_P.Max_rotation) {
      ctrl_custom_turning_frame_B.CoreSubsys[ForEach_itr].MaxRotationRate =
        -ctrl_custom_turning_frame_P.Max_rotation;
    } else {
      ctrl_custom_turning_frame_B.CoreSubsys[ForEach_itr].MaxRotationRate =
        rtb_psi_dot;
    }

    /* End of Saturate: '<S45>/Max Rotation Rate' */
    if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
      /* ForEachSliceAssignment: '<S45>/ImpAsg_InsertedFor_commanded Angle_at_inport_0' */
      rtb_ImpAsg_InsertedFor_commande[ForEach_itr] = c_23;
    }
  }

  /* End of Outputs for SubSystem: '<S13>/Optimal angle path and  constraints on rotation speed' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* Saturate: '<S51>/Saturation 1' */
    if (rtb_ImpAsg_InsertedFor_commande[0] >
        ctrl_custom_turning_frame_P.Saturation1_UpperSat) {
      ctrl_custom_turning_frame_B.Saturation1 =
        ctrl_custom_turning_frame_P.Saturation1_UpperSat;
    } else if (rtb_ImpAsg_InsertedFor_commande[0] <
               ctrl_custom_turning_frame_P.Saturation1_LowerSat) {
      ctrl_custom_turning_frame_B.Saturation1 =
        ctrl_custom_turning_frame_P.Saturation1_LowerSat;
    } else {
      ctrl_custom_turning_frame_B.Saturation1 = rtb_ImpAsg_InsertedFor_commande
        [0];
    }

    /* End of Saturate: '<S51>/Saturation 1' */

    /* Saturate: '<S51>/Saturation 2' */
    if (rtb_ImpAsg_InsertedFor_commande[1] >
        ctrl_custom_turning_frame_P.Saturation2_UpperSat) {
      ctrl_custom_turning_frame_B.Saturation2 =
        ctrl_custom_turning_frame_P.Saturation2_UpperSat;
    } else if (rtb_ImpAsg_InsertedFor_commande[1] <
               ctrl_custom_turning_frame_P.Saturation2_LowerSat) {
      ctrl_custom_turning_frame_B.Saturation2 =
        ctrl_custom_turning_frame_P.Saturation2_LowerSat;
    } else {
      ctrl_custom_turning_frame_B.Saturation2 = rtb_ImpAsg_InsertedFor_commande
        [1];
    }

    /* End of Saturate: '<S51>/Saturation 2' */

    /* Saturate: '<S51>/Saturation 3' */
    if (rtb_ImpAsg_InsertedFor_commande[2] >
        ctrl_custom_turning_frame_P.Saturation3_UpperSat) {
      ctrl_custom_turning_frame_B.Saturation3 =
        ctrl_custom_turning_frame_P.Saturation3_UpperSat;
    } else if (rtb_ImpAsg_InsertedFor_commande[2] <
               ctrl_custom_turning_frame_P.Saturation3_LowerSat) {
      ctrl_custom_turning_frame_B.Saturation3 =
        ctrl_custom_turning_frame_P.Saturation3_LowerSat;
    } else {
      ctrl_custom_turning_frame_B.Saturation3 = rtb_ImpAsg_InsertedFor_commande
        [2];
    }

    /* End of Saturate: '<S51>/Saturation 3' */

    /* Saturate: '<S51>/Saturation 4' */
    if (rtb_ImpAsg_InsertedFor_commande[3] >
        ctrl_custom_turning_frame_P.Saturation4_UpperSat) {
      ctrl_custom_turning_frame_B.Saturation4 =
        ctrl_custom_turning_frame_P.Saturation4_UpperSat;
    } else if (rtb_ImpAsg_InsertedFor_commande[3] <
               ctrl_custom_turning_frame_P.Saturation4_LowerSat) {
      ctrl_custom_turning_frame_B.Saturation4 =
        ctrl_custom_turning_frame_P.Saturation4_LowerSat;
    } else {
      ctrl_custom_turning_frame_B.Saturation4 = rtb_ImpAsg_InsertedFor_commande
        [3];
    }

    /* End of Saturate: '<S51>/Saturation 4' */

    /* Saturate: '<S51>/Saturation 5' */
    if (rtb_ImpAsg_InsertedFor_commande[4] >
        ctrl_custom_turning_frame_P.Saturation5_UpperSat) {
      ctrl_custom_turning_frame_B.Saturation5 =
        ctrl_custom_turning_frame_P.Saturation5_UpperSat;
    } else if (rtb_ImpAsg_InsertedFor_commande[4] <
               ctrl_custom_turning_frame_P.Saturation5_LowerSat) {
      ctrl_custom_turning_frame_B.Saturation5 =
        ctrl_custom_turning_frame_P.Saturation5_LowerSat;
    } else {
      ctrl_custom_turning_frame_B.Saturation5 = rtb_ImpAsg_InsertedFor_commande
        [4];
    }

    /* End of Saturate: '<S51>/Saturation 5' */

    /* Saturate: '<S51>/Saturation 6' */
    if (rtb_ImpAsg_InsertedFor_commande[5] >
        ctrl_custom_turning_frame_P.Saturation6_UpperSat) {
      ctrl_custom_turning_frame_B.Saturation6 =
        ctrl_custom_turning_frame_P.Saturation6_UpperSat;
    } else if (rtb_ImpAsg_InsertedFor_commande[5] <
               ctrl_custom_turning_frame_P.Saturation6_LowerSat) {
      ctrl_custom_turning_frame_B.Saturation6 =
        ctrl_custom_turning_frame_P.Saturation6_LowerSat;
    } else {
      ctrl_custom_turning_frame_B.Saturation6 = rtb_ImpAsg_InsertedFor_commande
        [5];
    }

    /* End of Saturate: '<S51>/Saturation 6' */

    /* Gain: '<S10>/Gain' */
    ctrl_custom_turning_frame_B.Gain_h[0] =
      ctrl_custom_turning_frame_P.Gain_Gain_oe *
      ctrl_custom_turning_frame_B.Saturation1;
    ctrl_custom_turning_frame_B.Gain_h[1] =
      ctrl_custom_turning_frame_P.Gain_Gain_oe *
      ctrl_custom_turning_frame_B.Saturation2;
    ctrl_custom_turning_frame_B.Gain_h[2] =
      ctrl_custom_turning_frame_P.Gain_Gain_oe *
      ctrl_custom_turning_frame_B.Saturation3;
    ctrl_custom_turning_frame_B.Gain_h[3] =
      ctrl_custom_turning_frame_P.Gain_Gain_oe *
      ctrl_custom_turning_frame_B.Saturation4;
    ctrl_custom_turning_frame_B.Gain_h[4] =
      ctrl_custom_turning_frame_P.Gain_Gain_oe *
      ctrl_custom_turning_frame_B.Saturation5;
    ctrl_custom_turning_frame_B.Gain_h[5] =
      ctrl_custom_turning_frame_P.Gain_Gain_oe *
      ctrl_custom_turning_frame_B.Saturation6;
  }

  /* MATLAB Function: '<Root>/MATLAB Function' */
  /* MATLAB Function 'MATLAB Function': '<S3>:1' */
  /* '<S3>:1:4' */
  /* '<S3>:1:5' */
  /* '<S3>:1:6' */
  /* '<S3>:1:10' */
  c_23 = ctrl_custom_turning_frame_B.Gain_h[0];
  ctrl_custom_turning_frame_cosd(&c_23);
  rtb_Row1_d = ctrl_custom_turning_frame_B.Gain_h[1];
  ctrl_custom_turning_frame_cosd(&rtb_Row1_d);
  rtb_Row1_m = ctrl_custom_turning_frame_B.Gain_h[2];
  ctrl_custom_turning_frame_cosd(&rtb_Row1_m);
  Alpha1_idx_4 = ctrl_custom_turning_frame_B.Gain_h[3];
  ctrl_custom_turning_frame_cosd(&Alpha1_idx_4);
  f_0 = ctrl_custom_turning_frame_B.Gain_h[4];
  ctrl_custom_turning_frame_cosd(&f_0);
  rtb_psi_dot = ctrl_custom_turning_frame_B.Gain_h[5];
  ctrl_custom_turning_frame_cosd(&rtb_psi_dot);
  rtb_Row2_f = ctrl_custom_turning_frame_B.Gain_h[0];
  ctrl_custom_turning_frame_sind(&rtb_Row2_f);
  i = ctrl_custom_turning_frame_B.Gain_h[1];
  ctrl_custom_turning_frame_sind(&i);
  j = ctrl_custom_turning_frame_B.Gain_h[2];
  ctrl_custom_turning_frame_sind(&j);
  k = ctrl_custom_turning_frame_B.Gain_h[3];
  ctrl_custom_turning_frame_sind(&k);
  l = ctrl_custom_turning_frame_B.Gain_h[4];
  ctrl_custom_turning_frame_sind(&l);
  m = ctrl_custom_turning_frame_B.Gain_h[5];
  ctrl_custom_turning_frame_sind(&m);
  n = ctrl_custom_turning_frame_B.Gain_h[0];
  ctrl_custom_turning_frame_sind(&n);
  o = ctrl_custom_turning_frame_B.Gain_h[0];
  ctrl_custom_turning_frame_cosd(&o);
  p = ctrl_custom_turning_frame_B.Gain_h[1];
  ctrl_custom_turning_frame_sind(&p);
  q = ctrl_custom_turning_frame_B.Gain_h[1];
  ctrl_custom_turning_frame_cosd(&q);
  r = ctrl_custom_turning_frame_B.Gain_h[2];
  ctrl_custom_turning_frame_sind(&r);
  s_0 = ctrl_custom_turning_frame_B.Gain_h[2];
  ctrl_custom_turning_frame_cosd(&s_0);
  t = ctrl_custom_turning_frame_B.Gain_h[3];
  ctrl_custom_turning_frame_sind(&t);
  Alpha1_idx_3 = ctrl_custom_turning_frame_B.Gain_h[3];
  ctrl_custom_turning_frame_cosd(&Alpha1_idx_3);
  v = ctrl_custom_turning_frame_B.Gain_h[4];
  ctrl_custom_turning_frame_sind(&v);
  w = ctrl_custom_turning_frame_B.Gain_h[4];
  ctrl_custom_turning_frame_cosd(&w);
  x = ctrl_custom_turning_frame_B.Gain_h[5];
  ctrl_custom_turning_frame_sind(&x);
  y = ctrl_custom_turning_frame_B.Gain_h[5];
  ctrl_custom_turning_frame_cosd(&y);

  /* Saturate: '<S52>/Saturation 7' */
  tmp_0[0] = ctrl_custom_turning_frame_B.output[0];
  tmp_0[1] = ctrl_custom_turning_frame_B.output[2];
  tmp_0[2] = ctrl_custom_turning_frame_B.output[4];
  tmp_0[3] = ctrl_custom_turning_frame_B.output[6];
  tmp_0[4] = ctrl_custom_turning_frame_B.output[8];
  tmp_0[5] = ctrl_custom_turning_frame_B.output[10];

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Constant: '<Root>/X-position Thruster'
   *  Constant: '<Root>/Y-position Thruster'
   */
  c_23_0[0] = c_23;
  c_23_0[3] = rtb_Row1_d;
  c_23_0[6] = rtb_Row1_m;
  c_23_0[9] = Alpha1_idx_4;
  c_23_0[12] = f_0;
  c_23_0[15] = rtb_psi_dot;
  c_23_0[1] = rtb_Row2_f;
  c_23_0[4] = i;
  c_23_0[7] = j;
  c_23_0[10] = k;
  c_23_0[13] = l;
  c_23_0[16] = m;
  c_23_0[2] = n * ctrl_custom_turning_frame_P.XpositionThruster_Value_k[0] - o *
    ctrl_custom_turning_frame_P.YpositionThruster_Value_l[0];
  c_23_0[5] = p * ctrl_custom_turning_frame_P.XpositionThruster_Value_k[1] - q *
    ctrl_custom_turning_frame_P.YpositionThruster_Value_l[1];
  c_23_0[8] = r * ctrl_custom_turning_frame_P.XpositionThruster_Value_k[2] - s_0
    * ctrl_custom_turning_frame_P.YpositionThruster_Value_l[2];
  c_23_0[11] = t * ctrl_custom_turning_frame_P.XpositionThruster_Value_k[3] -
    Alpha1_idx_3 * ctrl_custom_turning_frame_P.YpositionThruster_Value_l[3];
  c_23_0[14] = v * ctrl_custom_turning_frame_P.XpositionThruster_Value_k[4] - w *
    ctrl_custom_turning_frame_P.YpositionThruster_Value_l[4];
  c_23_0[17] = x * ctrl_custom_turning_frame_P.XpositionThruster_Value_k[5] - y *
    ctrl_custom_turning_frame_P.YpositionThruster_Value_l[5];

  /* Saturate: '<S52>/Saturation 7' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  for (i_0 = 0; i_0 < 6; i_0++) {
    if (tmp_0[i_0] > ctrl_custom_turning_frame_P.Max_thrust) {
      rtb_TmpSignalConversionAtSFun_d[i_0] =
        ctrl_custom_turning_frame_P.Max_thrust;
    } else if (tmp_0[i_0] < -ctrl_custom_turning_frame_P.Max_thrust) {
      rtb_TmpSignalConversionAtSFun_d[i_0] =
        -ctrl_custom_turning_frame_P.Max_thrust;
    } else {
      rtb_TmpSignalConversionAtSFun_d[i_0] = tmp_0[i_0];
    }
  }

  /* MATLAB Function: '<Root>/MATLAB Function' */
  for (i_0 = 0; i_0 < 3; i_0++) {
    ctrl_custom_turning_frame_B.commanded_tau[i_0] = 0.0;
    for (b_i = 0; b_i < 6; b_i++) {
      ctrl_custom_turning_frame_B.commanded_tau[i_0] += c_23_0[3 * b_i + i_0] *
        rtb_TmpSignalConversionAtSFun_d[b_i];
    }
  }

  /* Saturate: '<S30>/Saturation' */
  if (ctrl_custom_turning_frame_B.Switch1[2] >
      ctrl_custom_turning_frame_P.Saturation_UpperSat_j) {
    rtb_Row1_m = ctrl_custom_turning_frame_P.Saturation_UpperSat_j;
  } else if (ctrl_custom_turning_frame_B.Switch1[2] <
             ctrl_custom_turning_frame_P.Saturation_LowerSat_f) {
    rtb_Row1_m = ctrl_custom_turning_frame_P.Saturation_LowerSat_f;
  } else {
    rtb_Row1_m = ctrl_custom_turning_frame_B.Switch1[2];
  }

  /* End of Saturate: '<S30>/Saturation' */

  /* Signum: '<S30>/Sign' */
  if (rtb_Row1_m < 0.0) {
    rtb_psi_dot = -1.0;
  } else if (rtb_Row1_m > 0.0) {
    rtb_psi_dot = 1.0;
  } else if (rtb_Row1_m == 0.0) {
    rtb_psi_dot = 0.0;
  } else {
    rtb_psi_dot = rtb_Row1_m;
  }

  /* End of Signum: '<S30>/Sign' */

  /* Gain: '<S30>/Gain' */
  rtb_psi_dot *= ctrl_custom_turning_frame_P.Gain_Gain_gg;

  /* Sum: '<S30>/Sum1' */
  rtb_Row1_m += rtb_psi_dot;

  /* Math: '<S30>/Math Function' incorporates:
   *  Constant: '<S30>/Constant'
   */
  rtb_Row1_m = rt_remd_snf(rtb_Row1_m,
    ctrl_custom_turning_frame_P.Constant_Value_iq);

  /* Sum: '<S30>/Sum' */
  rtb_Row1_m -= rtb_psi_dot;

  /* Integrator: '<S5>/Integrator2' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator2_Reset_ZCE,
                       (ctrl_custom_turning_frame_B.start));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator2_CSTATE_j[0] =
        ctrl_custom_turning_frame_P.Integrator2_IC_i[0];
      ctrl_custom_turning_frame_X.Integrator2_CSTATE_j[1] =
        ctrl_custom_turning_frame_P.Integrator2_IC_i[1];
      ctrl_custom_turning_frame_X.Integrator2_CSTATE_j[2] =
        ctrl_custom_turning_frame_P.Integrator2_IC_i[2];
    }
  }

  ctrl_custom_turning_frame_B.Integrator2[0] =
    ctrl_custom_turning_frame_X.Integrator2_CSTATE_j[0];
  ctrl_custom_turning_frame_B.Integrator2[1] =
    ctrl_custom_turning_frame_X.Integrator2_CSTATE_j[1];
  ctrl_custom_turning_frame_B.Integrator2[2] =
    ctrl_custom_turning_frame_X.Integrator2_CSTATE_j[2];

  /* End of Integrator: '<S5>/Integrator2' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* S-Function (sdspdiag2): '<S20>/Create Diagonal Matrix2' incorporates:
     *  Constant: '<S20>/Constant6'
     *  Constant: '<S20>/Constant7'
     *  Constant: '<S20>/Constant8'
     */
    memset(&ctrl_custom_turning_frame_B.CreateDiagonalMatrix2[0], 0, 9U * sizeof
           (real_T));
    ctrl_custom_turning_frame_B.CreateDiagonalMatrix2[0] =
      ctrl_custom_turning_frame_P.Constant6_Value;
    ctrl_custom_turning_frame_B.CreateDiagonalMatrix2[4] =
      ctrl_custom_turning_frame_P.Constant7_Value;
    ctrl_custom_turning_frame_B.CreateDiagonalMatrix2[8] =
      ctrl_custom_turning_frame_P.Constant8_Value;
  }

  /* Sum: '<S5>/Sum' */
  rtb_MatrixMultiply2_j[0] = ctrl_custom_turning_frame_B.Switch1[0] -
    ctrl_custom_turning_frame_B.Integrator[0];
  rtb_MatrixMultiply2_j[1] = ctrl_custom_turning_frame_B.Switch1[1] -
    ctrl_custom_turning_frame_B.Integrator[1];
  rtb_MatrixMultiply2_j[2] = rtb_Row1_m - ctrl_custom_turning_frame_B.Sum;

  /* MATLAB Function: '<S5>/C(nu)*nu' */
  /* MATLAB Function 'Nonlinear Passisve Observer/D(nu)*nu': '<S25>:1' */
  /* '<S25>:1:3' */
  /* '<S25>:1:4' */
  /* '<S25>:1:5' */
  /*  DAMPING  */
  /*  Surge: */
  /*  Based on fitting of towing data from -0.8 < u < 0.8 m/s */
  /* '<S25>:1:11' */
  /* '<S25>:1:12' */
  /* '<S25>:1:13' */
  /*  Sway: */
  /*  Based on fitting of towing data from -0.45 < u < 0.45 m/s */
  /* '<S25>:1:17' */
  /* '<S25>:1:18' */
  /* '<S25>:1:19' */
  /*  Yaw: */
  /*  Based on fitting of towing data from -8 < u < 8 deg/s */
  /*  The fitting range is limited. Towing should be performed for higher */
  /*  velocities. */
  /* '<S25>:1:25' */
  /* '<S25>:1:26' */
  /* '<S25>:1:27' */
  /*  Y_vvv og N_rrr er fra curvefitting uten minus, men ser ut til å fungere */
  /*  med minus.  */
  /*  Assembly of the damping matrix */
  /* '<S25>:1:40' */
  /* '<S25>:1:41' */
  /* '<S25>:1:42' */
  /*  Y_r + Y_rr*abs(r) + Y_rrr*r^2 + Y_vr*abs(v); Not verified, temporarily disabled */
  /*  N_v + N_vv*abs(v) + N_vvv*v^2 + N_rv*abs(r); Not verified, temporarily disabled */
  /* '<S25>:1:47' */
  /* '<S25>:1:54' */
  /* MATLAB Function 'Nonlinear Passisve Observer/C(nu)*nu': '<S24>:1' */
  /* '<S24>:1:3' */
  /* '<S24>:1:4' */
  /* '<S24>:1:5' */
  /*  MATRICES */
  /* '<S24>:1:8' */
  /* 0.0432; */
  /*  Added mass */
  /* '<S24>:1:11' */
  /*  Correolis matrix */
  /* '<S24>:1:14' */
  rtb_Row2_f = -99.03 * ctrl_custom_turning_frame_B.Integrator1[1] - -0.525 *
    ctrl_custom_turning_frame_B.Integrator1[2];

  /* '<S24>:1:15' */
  c_23 = 124.658 * ctrl_custom_turning_frame_B.Integrator1[0];

  /* Fcn: '<S28>/Row1' incorporates:
   *  Fcn: '<S5>/Fcn'
   */
  /* '<S24>:1:17' */
  /* '<S24>:1:24' */
  rtb_psi_dot_0[0] = rtb_Row1_m;
  rtb_psi_dot_2[0] = rtb_Row1_m;

  /* Fcn: '<S28>/Row2' incorporates:
   *  Fcn: '<S5>/Fcn'
   */
  rtb_psi_dot_4[0] = rtb_Row1_m;
  rtb_psi_dot_6[0] = rtb_Row1_m;

  /* Fcn: '<S27>/Row1' incorporates:
   *  Fcn: '<S5>/Fcn'
   */
  rtb_psi_dot_9[0] = rtb_Row1_m;
  rtb_psi_dot_b[0] = rtb_Row1_m;

  /* Fcn: '<S27>/Row2' incorporates:
   *  Fcn: '<S5>/Fcn'
   */
  rtb_psi_dot_d[0] = rtb_Row1_m;
  rtb_psi_dot_f[0] = rtb_Row1_m;
  for (i_0 = 0; i_0 < 3; i_0++) {
    /* Product: '<S5>/Matrix Multiply2' */
    rtb_psi_dot = ctrl_custom_turning_frame_B.CreateDiagonalMatrix2[i_0 + 6] *
      rtb_MatrixMultiply2_j[2] +
      (ctrl_custom_turning_frame_B.CreateDiagonalMatrix2[i_0 + 3] *
       rtb_MatrixMultiply2_j[1] +
       ctrl_custom_turning_frame_B.CreateDiagonalMatrix2[i_0] *
       rtb_MatrixMultiply2_j[0]);

    /* Fcn: '<S28>/Row1' */
    rtb_psi_dot_0[i_0 + 1] = ctrl_custom_turning_frame_B.Integrator2[i_0];
    rtb_psi_dot_1[i_0 + 1] = ctrl_custom_turning_frame_B.Integrator2[i_0];
    rtb_psi_dot_2[i_0 + 1] = ctrl_custom_turning_frame_B.Integrator2[i_0];
    rtb_psi_dot_3[i_0 + 1] = ctrl_custom_turning_frame_B.Integrator2[i_0];

    /* Fcn: '<S28>/Row2' */
    rtb_psi_dot_4[i_0 + 1] = ctrl_custom_turning_frame_B.Integrator2[i_0];
    rtb_psi_dot_5[i_0 + 1] = ctrl_custom_turning_frame_B.Integrator2[i_0];
    rtb_psi_dot_6[i_0 + 1] = ctrl_custom_turning_frame_B.Integrator2[i_0];
    rtb_psi_dot_7[i_0 + 1] = ctrl_custom_turning_frame_B.Integrator2[i_0];

    /* Fcn: '<S28>/Row3' */
    rtb_psi_dot_8[i_0 + 1] = ctrl_custom_turning_frame_B.Integrator2[i_0];

    /* Fcn: '<S27>/Row1' */
    rtb_psi_dot_9[i_0 + 1] = rtb_psi_dot;
    rtb_psi_dot_a[i_0 + 1] = rtb_psi_dot;
    rtb_psi_dot_b[i_0 + 1] = rtb_psi_dot;
    rtb_psi_dot_c[i_0 + 1] = rtb_psi_dot;

    /* Fcn: '<S27>/Row2' */
    rtb_psi_dot_d[i_0 + 1] = rtb_psi_dot;
    rtb_psi_dot_e[i_0 + 1] = rtb_psi_dot;
    rtb_psi_dot_f[i_0 + 1] = rtb_psi_dot;
    rtb_psi_dot_g[i_0 + 1] = rtb_psi_dot;

    /* Fcn: '<S27>/Row3' */
    rtb_psi_dot_h[i_0 + 1] = rtb_psi_dot;
  }

  /* Sum: '<S5>/Sum2' incorporates:
   *  Fcn: '<S27>/Row1'
   *  Fcn: '<S27>/Row2'
   *  Fcn: '<S27>/Row3'
   */
  tmp_1[0] = cos(rtb_psi_dot_9[0]) * rtb_psi_dot_a[1] + sin(rtb_psi_dot_b[0]) *
    rtb_psi_dot_c[2];
  tmp_1[1] = -sin(rtb_psi_dot_d[0]) * rtb_psi_dot_e[1] + cos(rtb_psi_dot_f[0]) *
    rtb_psi_dot_g[2];
  tmp_1[2] = rtb_psi_dot_h[3];

  /* Sum: '<S5>/Sum3' incorporates:
   *  Fcn: '<S28>/Row1'
   *  Fcn: '<S28>/Row2'
   *  Fcn: '<S28>/Row3'
   */
  tmp_2[0] = cos(rtb_psi_dot_0[0]) * rtb_psi_dot_1[1] + sin(rtb_psi_dot_2[0]) *
    rtb_psi_dot_3[2];
  tmp_2[1] = -sin(rtb_psi_dot_4[0]) * rtb_psi_dot_5[1] + cos(rtb_psi_dot_6[0]) *
    rtb_psi_dot_7[2];
  tmp_2[2] = rtb_psi_dot_8[3];

  /* MATLAB Function: '<S5>/D(nu)*nu' */
  tmp_3[0] = (0.0 * fabs(ctrl_custom_turning_frame_B.Integrator1[0]) + -2.332) +
    ctrl_custom_turning_frame_B.Integrator1[0] *
    ctrl_custom_turning_frame_B.Integrator1[0] * -8.557;
  tmp_3[3] = 0.0;
  tmp_3[6] = 0.0;
  tmp_3[1] = 0.0;
  tmp_3[4] = (0.3976 * fabs(ctrl_custom_turning_frame_B.Integrator1[1]) + -4.673)
    + ctrl_custom_turning_frame_B.Integrator1[1] *
    ctrl_custom_turning_frame_B.Integrator1[1] * -313.3;
  tmp_3[7] = 0.0;
  tmp_3[2] = 0.0;
  tmp_3[5] = 0.0;
  tmp_3[8] = (-0.01148 * fabs(ctrl_custom_turning_frame_B.Integrator1[2]) +
              -0.01675) + ctrl_custom_turning_frame_B.Integrator1[2] *
    ctrl_custom_turning_frame_B.Integrator1[2] * -0.0003578;
  for (i_0 = 0; i_0 < 3; i_0++) {
    rtb_CreateDiagonalMatrix[3 * i_0] = -tmp_3[3 * i_0];
    rtb_CreateDiagonalMatrix[1 + 3 * i_0] = -tmp_3[3 * i_0 + 1];
    rtb_CreateDiagonalMatrix[2 + 3 * i_0] = -tmp_3[3 * i_0 + 2];
  }

  /* MATLAB Function: '<S5>/C(nu)*nu' */
  rtb_CreateDiagonalMatrix5[0] = 0.0;
  rtb_CreateDiagonalMatrix5[3] = 0.0;
  rtb_CreateDiagonalMatrix5[6] = rtb_Row2_f;
  rtb_CreateDiagonalMatrix5[1] = 0.0;
  rtb_CreateDiagonalMatrix5[4] = 0.0;
  rtb_CreateDiagonalMatrix5[7] = c_23;
  rtb_CreateDiagonalMatrix5[2] = -rtb_Row2_f;
  rtb_CreateDiagonalMatrix5[5] = -c_23;
  rtb_CreateDiagonalMatrix5[8] = 0.0;
  for (i_0 = 0; i_0 < 3; i_0++) {
    /* Sum: '<S5>/Sum3' incorporates:
     *  Gain: '<S5>/M^-1'
     *  MATLAB Function: '<S5>/C(nu)*nu'
     *  MATLAB Function: '<S5>/D(nu)*nu'
     *  Sum: '<S5>/Sum2'
     */
    rtb_MatrixMultiply1[i_0] = (((tmp_1[i_0] +
      ctrl_custom_turning_frame_B.Switch[i_0]) + tmp_2[i_0]) -
      ((rtb_CreateDiagonalMatrix[i_0 + 3] *
        ctrl_custom_turning_frame_B.Integrator1[1] +
        rtb_CreateDiagonalMatrix[i_0] * ctrl_custom_turning_frame_B.Integrator1
        [0]) + rtb_CreateDiagonalMatrix[i_0 + 6] *
       ctrl_custom_turning_frame_B.Integrator1[2])) -
      (rtb_CreateDiagonalMatrix5[i_0 + 6] *
       ctrl_custom_turning_frame_B.Integrator1[2] +
       (rtb_CreateDiagonalMatrix5[i_0 + 3] *
        ctrl_custom_turning_frame_B.Integrator1[1] +
        rtb_CreateDiagonalMatrix5[i_0] *
        ctrl_custom_turning_frame_B.Integrator1[0]));
  }

  /* Gain: '<S5>/M^-1' */
  for (i_0 = 0; i_0 < 3; i_0++) {
    ctrl_custom_turning_frame_B.M1[i_0] = 0.0;
    ctrl_custom_turning_frame_B.M1[i_0] +=
      ctrl_custom_turning_frame_P.M1_Gain[i_0] * rtb_MatrixMultiply1[0];
    ctrl_custom_turning_frame_B.M1[i_0] +=
      ctrl_custom_turning_frame_P.M1_Gain[i_0 + 3] * rtb_MatrixMultiply1[1];
    ctrl_custom_turning_frame_B.M1[i_0] +=
      ctrl_custom_turning_frame_P.M1_Gain[i_0 + 6] * rtb_MatrixMultiply1[2];
  }

  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
  }

  /* Saturate: '<S52>/Saturation 1' */
  if (ctrl_custom_turning_frame_B.output[0] >
      ctrl_custom_turning_frame_P.Max_thrust) {
    c_23 = ctrl_custom_turning_frame_P.Max_thrust;
  } else if (ctrl_custom_turning_frame_B.output[0] <
             ctrl_custom_turning_frame_P.Saturation1_LowerSat_p) {
    c_23 = ctrl_custom_turning_frame_P.Saturation1_LowerSat_p;
  } else {
    c_23 = ctrl_custom_turning_frame_B.output[0];
  }

  /* End of Saturate: '<S52>/Saturation 1' */

  /* Polyval: '<S52>/positive thrust 1' */
  rtb_Row2_f = ctrl_custom_turning_frame_P.pwm_thr1_forward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_Row2_f = rtb_Row2_f * c_23 +
      ctrl_custom_turning_frame_P.pwm_thr1_forward[i_0 + 1];
  }

  /* End of Polyval: '<S52>/positive thrust 1' */

  /* Saturate: '<S52>/Saturation 2' */
  if (ctrl_custom_turning_frame_B.output[0] >
      ctrl_custom_turning_frame_P.Saturation2_UpperSat_j) {
    c_23 = ctrl_custom_turning_frame_P.Saturation2_UpperSat_j;
  } else if (ctrl_custom_turning_frame_B.output[0] <
             ctrl_custom_turning_frame_P.Min_thrust) {
    c_23 = ctrl_custom_turning_frame_P.Min_thrust;
  } else {
    c_23 = ctrl_custom_turning_frame_B.output[0];
  }

  /* End of Saturate: '<S52>/Saturation 2' */

  /* Polyval: '<S52>/negative thrust 1' */
  rtb_Row1_d = ctrl_custom_turning_frame_P.pwm_thr1_backward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_Row1_d = rtb_Row1_d * c_23 +
      ctrl_custom_turning_frame_P.pwm_thr1_backward[i_0 + 1];
  }

  /* End of Polyval: '<S52>/negative thrust 1' */

  /* MATLAB Function: '<S52>/MATLAB Function1' */
  /* MATLAB Function 'Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function1': '<S60>:1' */
  if (ctrl_custom_turning_frame_B.output[0] >= 0.0) {
    /* '<S60>:1:4' */
    /* '<S60>:1:5' */
    ctrl_custom_turning_frame_B.Tc_out = rtb_Row2_f;
  } else {
    /* signal < 0 */
    /* '<S60>:1:7' */
    ctrl_custom_turning_frame_B.Tc_out = rtb_Row1_d;
  }

  /* End of MATLAB Function: '<S52>/MATLAB Function1' */

  /* Saturate: '<S52>/Saturation 8' */
  if (ctrl_custom_turning_frame_B.output[2] >
      ctrl_custom_turning_frame_P.Max_thrust) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Max_thrust;
  } else if (ctrl_custom_turning_frame_B.output[2] <
             ctrl_custom_turning_frame_P.Saturation8_LowerSat) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Saturation8_LowerSat;
  } else {
    rtb_Row2_f = ctrl_custom_turning_frame_B.output[2];
  }

  /* End of Saturate: '<S52>/Saturation 8' */

  /* Polyval: '<S52>/positive thrust 2' */
  rtb_positivethrust2 = ctrl_custom_turning_frame_P.pwm_thr2_forward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_positivethrust2 = rtb_positivethrust2 * rtb_Row2_f +
      ctrl_custom_turning_frame_P.pwm_thr2_forward[i_0 + 1];
  }

  /* End of Polyval: '<S52>/positive thrust 2' */

  /* Saturate: '<S52>/Saturation 9' */
  if (ctrl_custom_turning_frame_B.output[2] >
      ctrl_custom_turning_frame_P.Saturation9_UpperSat) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Saturation9_UpperSat;
  } else if (ctrl_custom_turning_frame_B.output[2] <
             ctrl_custom_turning_frame_P.Min_thrust) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Min_thrust;
  } else {
    rtb_Row2_f = ctrl_custom_turning_frame_B.output[2];
  }

  /* End of Saturate: '<S52>/Saturation 9' */

  /* Polyval: '<S52>/negative thrust 2' */
  rtb_negativethrust2 = ctrl_custom_turning_frame_P.pwm_thr2_backward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_negativethrust2 = rtb_negativethrust2 * rtb_Row2_f +
      ctrl_custom_turning_frame_P.pwm_thr2_backward[i_0 + 1];
  }

  /* End of Polyval: '<S52>/negative thrust 2' */

  /* MATLAB Function: '<S52>/MATLAB Function2' */
  ctrl_custom_tur_MATLABFunction2(rtb_positivethrust2,
    ctrl_custom_turning_frame_B.output[2], rtb_negativethrust2,
    &ctrl_custom_turning_frame_B.sf_MATLABFunction2);

  /* Saturate: '<S52>/Saturation 10' */
  if (ctrl_custom_turning_frame_B.output[4] >
      ctrl_custom_turning_frame_P.Max_thrust) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Max_thrust;
  } else if (ctrl_custom_turning_frame_B.output[4] <
             ctrl_custom_turning_frame_P.Saturation10_LowerSat) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Saturation10_LowerSat;
  } else {
    rtb_Row2_f = ctrl_custom_turning_frame_B.output[4];
  }

  /* End of Saturate: '<S52>/Saturation 10' */

  /* Polyval: '<S52>/positive thrust 3' */
  rtb_positivethrust3 = ctrl_custom_turning_frame_P.pwm_thr3_forward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_positivethrust3 = rtb_positivethrust3 * rtb_Row2_f +
      ctrl_custom_turning_frame_P.pwm_thr3_forward[i_0 + 1];
  }

  /* End of Polyval: '<S52>/positive thrust 3' */

  /* Saturate: '<S52>/Saturation 11' */
  if (ctrl_custom_turning_frame_B.output[4] >
      ctrl_custom_turning_frame_P.Saturation11_UpperSat) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Saturation11_UpperSat;
  } else if (ctrl_custom_turning_frame_B.output[4] <
             ctrl_custom_turning_frame_P.Min_thrust) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Min_thrust;
  } else {
    rtb_Row2_f = ctrl_custom_turning_frame_B.output[4];
  }

  /* End of Saturate: '<S52>/Saturation 11' */

  /* Polyval: '<S52>/negative thrust 3' */
  rtb_negativethrust3 = ctrl_custom_turning_frame_P.pwm_thr3_backward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_negativethrust3 = rtb_negativethrust3 * rtb_Row2_f +
      ctrl_custom_turning_frame_P.pwm_thr3_backward[i_0 + 1];
  }

  /* End of Polyval: '<S52>/negative thrust 3' */

  /* MATLAB Function: '<S52>/MATLAB Function3' */
  ctrl_custom_tur_MATLABFunction2(rtb_positivethrust3,
    ctrl_custom_turning_frame_B.output[4], rtb_negativethrust3,
    &ctrl_custom_turning_frame_B.sf_MATLABFunction3);

  /* Saturate: '<S52>/Saturation 3' */
  if (ctrl_custom_turning_frame_B.output[6] >
      ctrl_custom_turning_frame_P.Max_thrust) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Max_thrust;
  } else if (ctrl_custom_turning_frame_B.output[6] <
             ctrl_custom_turning_frame_P.Saturation3_LowerSat_m) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Saturation3_LowerSat_m;
  } else {
    rtb_Row2_f = ctrl_custom_turning_frame_B.output[6];
  }

  /* End of Saturate: '<S52>/Saturation 3' */

  /* Polyval: '<S52>/positive thrust 4' */
  rtb_positivethrust4 = ctrl_custom_turning_frame_P.pwm_thr4_forward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_positivethrust4 = rtb_positivethrust4 * rtb_Row2_f +
      ctrl_custom_turning_frame_P.pwm_thr4_forward[i_0 + 1];
  }

  /* End of Polyval: '<S52>/positive thrust 4' */

  /* Saturate: '<S52>/Saturation 4' */
  if (ctrl_custom_turning_frame_B.output[6] >
      ctrl_custom_turning_frame_P.Saturation4_UpperSat_l) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Saturation4_UpperSat_l;
  } else if (ctrl_custom_turning_frame_B.output[6] <
             ctrl_custom_turning_frame_P.Min_thrust) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Min_thrust;
  } else {
    rtb_Row2_f = ctrl_custom_turning_frame_B.output[6];
  }

  /* End of Saturate: '<S52>/Saturation 4' */

  /* Polyval: '<S52>/negative thrust 4' */
  rtb_negativethrust4 = ctrl_custom_turning_frame_P.pwm_thr4_backward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_negativethrust4 = rtb_negativethrust4 * rtb_Row2_f +
      ctrl_custom_turning_frame_P.pwm_thr4_backward[i_0 + 1];
  }

  /* End of Polyval: '<S52>/negative thrust 4' */

  /* MATLAB Function: '<S52>/MATLAB Function4' */
  ctrl_custom_tur_MATLABFunction2(rtb_positivethrust4,
    ctrl_custom_turning_frame_B.output[6], rtb_negativethrust4,
    &ctrl_custom_turning_frame_B.sf_MATLABFunction4);

  /* Saturate: '<S52>/Saturation 5' */
  if (ctrl_custom_turning_frame_B.output[8] >
      ctrl_custom_turning_frame_P.Max_thrust) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Max_thrust;
  } else if (ctrl_custom_turning_frame_B.output[8] <
             ctrl_custom_turning_frame_P.Saturation5_LowerSat_j) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Saturation5_LowerSat_j;
  } else {
    rtb_Row2_f = ctrl_custom_turning_frame_B.output[8];
  }

  /* End of Saturate: '<S52>/Saturation 5' */

  /* Polyval: '<S52>/positive thrust 5' */
  rtb_positivethrust5 = ctrl_custom_turning_frame_P.pwm_thr5_forward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_positivethrust5 = rtb_positivethrust5 * rtb_Row2_f +
      ctrl_custom_turning_frame_P.pwm_thr5_forward[i_0 + 1];
  }

  /* End of Polyval: '<S52>/positive thrust 5' */

  /* Saturate: '<S52>/Saturation 6' */
  if (ctrl_custom_turning_frame_B.output[8] >
      ctrl_custom_turning_frame_P.Saturation6_UpperSat_c) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Saturation6_UpperSat_c;
  } else if (ctrl_custom_turning_frame_B.output[8] <
             ctrl_custom_turning_frame_P.Min_thrust) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Min_thrust;
  } else {
    rtb_Row2_f = ctrl_custom_turning_frame_B.output[8];
  }

  /* End of Saturate: '<S52>/Saturation 6' */

  /* Polyval: '<S52>/negative thrust 5' */
  rtb_negativethrust5 = ctrl_custom_turning_frame_P.pwm_thr5_backward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_negativethrust5 = rtb_negativethrust5 * rtb_Row2_f +
      ctrl_custom_turning_frame_P.pwm_thr5_backward[i_0 + 1];
  }

  /* End of Polyval: '<S52>/negative thrust 5' */

  /* MATLAB Function: '<S52>/MATLAB Function5' */
  ctrl_custom_tur_MATLABFunction2(rtb_positivethrust5,
    ctrl_custom_turning_frame_B.output[8], rtb_negativethrust5,
    &ctrl_custom_turning_frame_B.sf_MATLABFunction5);

  /* Saturate: '<S52>/Saturation 12' */
  if (ctrl_custom_turning_frame_B.output[10] >
      ctrl_custom_turning_frame_P.Max_thrust) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Max_thrust;
  } else if (ctrl_custom_turning_frame_B.output[10] <
             ctrl_custom_turning_frame_P.Saturation12_LowerSat) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Saturation12_LowerSat;
  } else {
    rtb_Row2_f = ctrl_custom_turning_frame_B.output[10];
  }

  /* End of Saturate: '<S52>/Saturation 12' */

  /* Polyval: '<S52>/positive thrust 6' */
  rtb_positivethrust6 = ctrl_custom_turning_frame_P.pwm_thr6_forward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_positivethrust6 = rtb_positivethrust6 * rtb_Row2_f +
      ctrl_custom_turning_frame_P.pwm_thr6_forward[i_0 + 1];
  }

  /* End of Polyval: '<S52>/positive thrust 6' */

  /* Saturate: '<S52>/Saturation 13' */
  if (ctrl_custom_turning_frame_B.output[10] >
      ctrl_custom_turning_frame_P.Saturation13_UpperSat) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Saturation13_UpperSat;
  } else if (ctrl_custom_turning_frame_B.output[10] <
             ctrl_custom_turning_frame_P.Min_thrust) {
    rtb_Row2_f = ctrl_custom_turning_frame_P.Min_thrust;
  } else {
    rtb_Row2_f = ctrl_custom_turning_frame_B.output[10];
  }

  /* End of Saturate: '<S52>/Saturation 13' */

  /* Polyval: '<S52>/negative thrust 6' */
  rtb_negativethrust6 = ctrl_custom_turning_frame_P.pwm_thr6_backward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_negativethrust6 = rtb_negativethrust6 * rtb_Row2_f +
      ctrl_custom_turning_frame_P.pwm_thr6_backward[i_0 + 1];
  }

  /* End of Polyval: '<S52>/negative thrust 6' */

  /* MATLAB Function: '<S52>/MATLAB Function6' */
  ctrl_custom_tur_MATLABFunction2(rtb_positivethrust6,
    ctrl_custom_turning_frame_B.output[10], rtb_negativethrust6,
    &ctrl_custom_turning_frame_B.sf_MATLABFunction6);
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* S-Function (sdspdiag2): '<S20>/Create Diagonal Matrix' */
    memset(&ctrl_custom_turning_frame_B.CreateDiagonalMatrix[0], 0, 9U * sizeof
           (real_T));

    /* S-Function (sdspdiag2): '<S20>/Create Diagonal Matrix1' */
    memset(&ctrl_custom_turning_frame_B.CreateDiagonalMatrix1[0], 0, 9U * sizeof
           (real_T));

    /* S-Function (sdspdiag2): '<S20>/Create Diagonal Matrix' incorporates:
     *  Constant: '<S20>/Constant'
     *  Constant: '<S20>/Constant1'
     *  Constant: '<S20>/Constant2'
     */
    ctrl_custom_turning_frame_B.CreateDiagonalMatrix[0] =
      ctrl_custom_turning_frame_P.Constant_Value_g;
    ctrl_custom_turning_frame_B.CreateDiagonalMatrix[4] =
      ctrl_custom_turning_frame_P.Constant1_Value_o;
    ctrl_custom_turning_frame_B.CreateDiagonalMatrix[8] =
      ctrl_custom_turning_frame_P.Constant2_Value;

    /* S-Function (sdspdiag2): '<S20>/Create Diagonal Matrix1' incorporates:
     *  Constant: '<S20>/Constant3'
     *  Constant: '<S20>/Constant4'
     *  Constant: '<S20>/Constant5'
     */
    ctrl_custom_turning_frame_B.CreateDiagonalMatrix1[0] =
      ctrl_custom_turning_frame_P.Constant3_Value;
    ctrl_custom_turning_frame_B.CreateDiagonalMatrix1[4] =
      ctrl_custom_turning_frame_P.Constant4_Value;
    ctrl_custom_turning_frame_B.CreateDiagonalMatrix1[8] =
      ctrl_custom_turning_frame_P.Constant5_Value;
  }

  /* Sum: '<S5>/Sum1' incorporates:
   *  Fcn: '<S26>/Fcn'
   *  Fcn: '<S26>/Fcn1'
   *  Fcn: '<S26>/Fcn2'
   *  Fcn: '<S5>/Fcn'
   */
  rtb_Row2_o[0] = cos(rtb_Row1_m) * ctrl_custom_turning_frame_B.Integrator1[0] -
    sin(rtb_Row1_m) * ctrl_custom_turning_frame_B.Integrator1[1];
  rtb_Row2_o[1] = sin(rtb_Row1_m) * ctrl_custom_turning_frame_B.Integrator1[0] +
    cos(rtb_Row1_m) * ctrl_custom_turning_frame_B.Integrator1[1];
  rtb_Row2_o[2] = ctrl_custom_turning_frame_B.Integrator1[2];
  for (i_0 = 0; i_0 < 3; i_0++) {
    /* Product: '<S5>/Matrix Multiply1' */
    ctrl_custom_turning_frame_B.MatrixMultiply1[i_0] = 0.0;
    ctrl_custom_turning_frame_B.MatrixMultiply1[i_0] +=
      ctrl_custom_turning_frame_B.CreateDiagonalMatrix1[i_0] *
      rtb_MatrixMultiply2_j[0];
    ctrl_custom_turning_frame_B.MatrixMultiply1[i_0] +=
      ctrl_custom_turning_frame_B.CreateDiagonalMatrix1[i_0 + 3] *
      rtb_MatrixMultiply2_j[1];
    ctrl_custom_turning_frame_B.MatrixMultiply1[i_0] +=
      ctrl_custom_turning_frame_B.CreateDiagonalMatrix1[i_0 + 6] *
      rtb_MatrixMultiply2_j[2];

    /* Sum: '<S5>/Sum1' incorporates:
     *  Product: '<S5>/Matrix Multiply'
     */
    ctrl_custom_turning_frame_B.Sum1[i_0] =
      (ctrl_custom_turning_frame_B.CreateDiagonalMatrix[i_0 + 6] *
       rtb_MatrixMultiply2_j[2] +
       (ctrl_custom_turning_frame_B.CreateDiagonalMatrix[i_0 + 3] *
        rtb_MatrixMultiply2_j[1] +
        ctrl_custom_turning_frame_B.CreateDiagonalMatrix[i_0] *
        rtb_MatrixMultiply2_j[0])) + rtb_Row2_o[i_0];
  }

  /* Gain: '<S7>/Gain5' */
  ctrl_custom_turning_frame_B.Gain5_a = ctrl_custom_turning_frame_P.Gain5_Gain_a
    * ctrl_custom_turning_frame_B.regulationerror[2];

  /* S-Function (sdspdiag2): '<S19>/Create Diagonal Matrix3' */
  memset(&rtb_CreateDiagonalMatrix3[0], 0, 9U * sizeof(real_T));

  /* S-Function (sdspdiag2): '<S19>/Create Diagonal Matrix4' */
  memset(&rtb_CreateDiagonalMatrix4[0], 0, 9U * sizeof(real_T));

  /* S-Function (sdspdiag2): '<S19>/Create Diagonal Matrix3' incorporates:
   *  SignalConversion: '<S19>/TmpSignal ConversionAtCreate Diagonal Matrix3Inport1'
   */
  rtb_CreateDiagonalMatrix3[0] = ctrl_custom_turning_frame_B.w_x;
  rtb_CreateDiagonalMatrix3[4] = ctrl_custom_turning_frame_B.w_y;
  rtb_CreateDiagonalMatrix3[8] = ctrl_custom_turning_frame_B.w_psi;

  /* S-Function (sdspdiag2): '<S19>/Create Diagonal Matrix4' incorporates:
   *  SignalConversion: '<S19>/TmpSignal ConversionAtCreate Diagonal Matrix4Inport1'
   */
  rtb_CreateDiagonalMatrix4[0] = ctrl_custom_turning_frame_B.zeta_x;
  rtb_CreateDiagonalMatrix4[4] = ctrl_custom_turning_frame_B.zeta_y;
  rtb_CreateDiagonalMatrix4[8] = ctrl_custom_turning_frame_B.zeta_psi;

  /* MATLAB Function: '<S11>/MATLAB Function' */
  ctrl_custom_turn_MATLABFunction(rtb_CreateDiagonalMatrix3,
    rtb_CreateDiagonalMatrix4, &ctrl_custom_turning_frame_B.sf_MATLABFunction_b);

  /* MATLAB Function: '<S11>/MATLAB Function1' */
  ctrl_custom_turn_MATLABFunction(rtb_CreateDiagonalMatrix3,
    rtb_CreateDiagonalMatrix4, &ctrl_custom_turning_frame_B.sf_MATLABFunction1_k);

  /* S-Function (sdspdiag2): '<S19>/Create Diagonal Matrix5' incorporates:
   *  MATLAB Function: '<S19>/MATLAB Function'
   *  MATLAB Function: '<S19>/MATLAB Function1'
   *  MATLAB Function: '<S19>/MATLAB Function2'
   */
  /* MATLAB Function 'Referance/MATLAB Function2': '<S42>:1' */
  /* '<S42>:1:3' */
  /* MATLAB Function 'Initialization of parameters/Guidance Gains/MATLAB Function': '<S21>:1' */
  /* '<S21>:1:3' */
  /* MATLAB Function 'Initialization of parameters/Guidance Gains/MATLAB Function1': '<S22>:1' */
  /* '<S22>:1:3' */
  /* MATLAB Function 'Initialization of parameters/Guidance Gains/MATLAB Function2': '<S23>:1' */
  /* '<S23>:1:3' */
  memset(&rtb_CreateDiagonalMatrix5[0], 0, 9U * sizeof(real_T));
  rtb_CreateDiagonalMatrix5[0] = 1.0 / ctrl_custom_turning_frame_B.T_x;
  rtb_CreateDiagonalMatrix5[4] = 1.0 / ctrl_custom_turning_frame_B.T_y;
  rtb_CreateDiagonalMatrix5[8] = 1.0 / ctrl_custom_turning_frame_B.T_psi;
  for (i_0 = 0; i_0 < 3; i_0++) {
    /* Sum: '<S11>/Sum' incorporates:
     *  Integrator: '<S11>/Integrator'
     *  Product: '<S11>/Matrix Multiply'
     *  Product: '<S11>/Matrix Multiply1'
     *  SignalConversion: '<S11>/TmpSignal ConversionAtMatrix MultiplyInport2'
     */
    ctrl_custom_turning_frame_B.Sum_m[i_0] = (rtb_CreateDiagonalMatrix5[i_0 + 6]
      * ctrl_custom_turning_frame_B.psi_ref + (rtb_CreateDiagonalMatrix5[i_0 + 3]
      * ctrl_custom_turning_frame_B.y_ref + rtb_CreateDiagonalMatrix5[i_0] *
      ctrl_custom_turning_frame_B.x_ref)) - (rtb_CreateDiagonalMatrix5[i_0 + 6] *
      ctrl_custom_turning_frame_X.Integrator_CSTATE_f5[2] +
      (rtb_CreateDiagonalMatrix5[i_0 + 3] *
       ctrl_custom_turning_frame_X.Integrator_CSTATE_f5[1] +
       rtb_CreateDiagonalMatrix5[i_0] *
       ctrl_custom_turning_frame_X.Integrator_CSTATE_f5[0]));

    /* Product: '<S11>/Matrix Multiply2' incorporates:
     *  Sum: '<S11>/Sum1'
     */
    tmp_1[i_0] = 0.0;

    /* Product: '<S11>/Matrix Multiply3' incorporates:
     *  Sum: '<S11>/Sum1'
     */
    tmp_2[i_0] = 0.0;

    /* Sum: '<S11>/Sum2' */
    rtb_Row1_m = 0.0;
    for (b_i = 0; b_i < 3; b_i++) {
      /* MATLAB Function: '<S11>/MATLAB Function2' incorporates:
       *  Product: '<S11>/Matrix Multiply4'
       */
      tmp_3[i_0 + 3 * b_i] = 0.0;
      tmp_3[i_0 + 3 * b_i] += rtb_CreateDiagonalMatrix3[3 * b_i] *
        rtb_CreateDiagonalMatrix3[i_0];
      tmp_3[i_0 + 3 * b_i] += rtb_CreateDiagonalMatrix3[3 * b_i + 1] *
        rtb_CreateDiagonalMatrix3[i_0 + 3];
      tmp_3[i_0 + 3 * b_i] += rtb_CreateDiagonalMatrix3[3 * b_i + 2] *
        rtb_CreateDiagonalMatrix3[i_0 + 6];

      /* Sum: '<S11>/Sum2' incorporates:
       *  Product: '<S11>/Matrix Multiply4'
       */
      rtb_Row1_m += tmp_3[3 * b_i + i_0] *
        ctrl_custom_turning_frame_B.Integrator1_i[b_i];

      /* Product: '<S11>/Matrix Multiply2' incorporates:
       *  Integrator: '<S11>/Integrator'
       *  Sum: '<S11>/Sum1'
       */
      tmp_1[i_0] += ctrl_custom_turning_frame_B.sf_MATLABFunction_b.y[3 * b_i +
        i_0] * ctrl_custom_turning_frame_X.Integrator_CSTATE_f5[b_i];

      /* Product: '<S11>/Matrix Multiply3' incorporates:
       *  Sum: '<S11>/Sum1'
       */
      tmp_2[i_0] += ctrl_custom_turning_frame_B.sf_MATLABFunction1_k.y[3 * b_i +
        i_0] * rtb_TmpSignalConversionAtMatrix[b_i];
    }

    /* Sum: '<S11>/Sum2' incorporates:
     *  Product: '<S11>/Matrix Multiply4'
     *  Sum: '<S11>/Sum1'
     */
    ctrl_custom_turning_frame_B.Sum2[i_0] = (tmp_1[i_0] - tmp_2[i_0]) -
      rtb_Row1_m;
  }

  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* Delay: '<S15>/Delay' */
    for (i_0 = 0; i_0 < 6; i_0++) {
      ctrl_custom_turning_frame_B.Delay[i_0] =
        ctrl_custom_turning_frame_DW.Delay_DSTATE[i_0];
    }

    /* End of Delay: '<S15>/Delay' */

    /* Delay: '<S53>/Delay' */
    ctrl_custom_turning_frame_B.Delay_d =
      ctrl_custom_turning_frame_DW.Delay_DSTATE_f;

    /* Delay: '<S68>/Delay' */
    ctrl_custom_turning_frame_B.Delay_j =
      ctrl_custom_turning_frame_DW.Delay_DSTATE_k;
  }

  /* MATLAB Function 'Thruster control /Thruster 1/Thruster control/MATLAB Function': '<S72>:1' */
  /* '<S72>:1:5' */
  if (rtb_sys[6] < 0.0) {
    rtb_Row1_m = -1.0;
  } else if (rtb_sys[6] > 0.0) {
    rtb_Row1_m = 1.0;
  } else if (rtb_sys[6] == 0.0) {
    rtb_Row1_m = 0.0;
  } else {
    rtb_Row1_m = rtb_sys[6];
  }

  rtb_Row2_f = sqrt(fabs(rtb_sys[6]) / (ctrl_custom_turning_frame_P.Rho *
    rt_powd_snf(ctrl_custom_turning_frame_P.D, 4.0) *
    ctrl_custom_turning_frame_P.K_T1f)) * rtb_Row1_m;

  /* '<S72>:1:7' */
  rtb_psi_dot = tanh(ctrl_custom_turning_frame_P.eps_c * rtb_Row2_f / 5.0) * 0.5
    + 0.5;

  /*  Smooth switching between positive and negative thrust. 5 makes switch happen between -5 and 5 */
  /* '<S72>:1:8' */
  /* '<S72>:1:10' */
  if (ctrl_custom_turning_frame_B.Delay_j < 0.0) {
    rtb_Row1_m = -1.0;
  } else if (ctrl_custom_turning_frame_B.Delay_j > 0.0) {
    rtb_Row1_m = 1.0;
  } else if (ctrl_custom_turning_frame_B.Delay_j == 0.0) {
    rtb_Row1_m = 0.0;
  } else {
    rtb_Row1_m = ctrl_custom_turning_frame_B.Delay_j;
  }

  rtb_T_r_p = ((1.0 - rtb_psi_dot) * ctrl_custom_turning_frame_P.K_T1r +
               ctrl_custom_turning_frame_P.K_T1f * rtb_psi_dot) * rtb_Row1_m *
    ctrl_custom_turning_frame_P.Rho * rt_powd_snf(ctrl_custom_turning_frame_P.D,
    4.0) * (ctrl_custom_turning_frame_B.Delay_j *
            ctrl_custom_turning_frame_B.Delay_j);
  ctrl_custom_turning_frame_B.n_d_k = rtb_Row2_f;
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* DiscreteTransferFcn: '<S68>/Discrete Transfer Fcn' incorporates:
     *  Constant: '<S68>/Constant1'
     *  Constant: '<S68>/Constant2'
     */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp =
      (ctrl_custom_turning_frame_B.n_d_k -
       ctrl_custom_turning_frame_P.Constant2_Value_b[1] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states[0]) -
      ctrl_custom_turning_frame_P.Constant2_Value_b[2] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states[1];
    ctrl_custom_turning_frame_B.DiscreteTransferFcn =
      (ctrl_custom_turning_frame_P.Constant1_Value_p[0] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp +
       ctrl_custom_turning_frame_P.Constant1_Value_p[1] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states[0]) +
      ctrl_custom_turning_frame_P.Constant1_Value_p[2] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states[1];

    /* SampleTimeMath: '<S71>/TSamp'
     *
     * About '<S71>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    ctrl_custom_turning_frame_B.TSamp =
      ctrl_custom_turning_frame_B.DiscreteTransferFcn *
      ctrl_custom_turning_frame_P.TSamp_WtEt;

    /* Sum: '<S71>/Diff' incorporates:
     *  UnitDelay: '<S71>/UD'
     */
    rtb_Sum_m = ctrl_custom_turning_frame_B.TSamp -
      ctrl_custom_turning_frame_DW.UD_DSTATE;

    /* RateLimiter: '<S68>/Acceleration Limit' */
    rtb_psi_dot = rtb_Sum_m - ctrl_custom_turning_frame_DW.PrevY;
    if (rtb_psi_dot > ctrl_custom_turning_frame_P.AccelerationLimit_RisingLim) {
      rtb_Sum_m = ctrl_custom_turning_frame_DW.PrevY +
        ctrl_custom_turning_frame_P.AccelerationLimit_RisingLim;
    } else {
      if (rtb_psi_dot < ctrl_custom_turning_frame_P.AccelerationLimit_FallingLim)
      {
        rtb_Sum_m = ctrl_custom_turning_frame_DW.PrevY +
          ctrl_custom_turning_frame_P.AccelerationLimit_FallingLim;
      }
    }

    ctrl_custom_turning_frame_DW.PrevY = rtb_Sum_m;

    /* End of RateLimiter: '<S68>/Acceleration Limit' */

    /* Gain: '<S68>/Inertia compensation' */
    ctrl_custom_turning_frame_B.Inertiacompensation =
      ctrl_custom_turning_frame_P.I_s * 2.0 * 3.1415926535897931 * rtb_Sum_m;

    /* Sum: '<S68>/Sum1' incorporates:
     *  Gain: '<S68>/Qf_0'
     *  Gain: '<S68>/Qff_0(nr)'
     *  Gain: '<S68>/Qff_1(nr)'
     *  Trigonometry: '<S68>/Trigonometric Function'
     */
    ctrl_custom_turning_frame_B.Sum1_b = tanh
      (ctrl_custom_turning_frame_P.epsilon / ctrl_custom_turning_frame_P.n_max *
       ctrl_custom_turning_frame_B.DiscreteTransferFcn) *
      ctrl_custom_turning_frame_P.Q_f0 + ctrl_custom_turning_frame_P.K_omega *
      2.0 * 3.1415926535897931 * ctrl_custom_turning_frame_B.DiscreteTransferFcn;

    /* Memory: '<S68>/Memory' */
    ctrl_custom_turning_frame_B.Memory =
      ctrl_custom_turning_frame_DW.Memory_PreviousInput;

    /* Sum: '<S70>/Sum' */
    rtb_Sum_m = ctrl_custom_turning_frame_B.DiscreteTransferFcn -
      ctrl_custom_turning_frame_B.Delay[0];

    /* Gain: '<S70>/Kp' */
    ctrl_custom_turning_frame_B.Kp = ctrl_custom_turning_frame_P.Kp * rtb_Sum_m;
  }

  /* Integrator: '<S70>/Integrator' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_lk,
                       (ctrl_custom_turning_frame_B.reset));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator_CSTATE_m =
        ctrl_custom_turning_frame_P.Integrator_IC_j;
    }
  }

  /* MATLAB Function: '<S70>/Core controller: Torque,Power and Combined Torque//Power' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S14>/Constant2'
   *  Constant: '<S14>/Constant3'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Qr1'
   *  Constant: '<S14>/K_Qr7'
   *  Constant: '<S14>/K_Tf1'
   *  Constant: '<S14>/K_Tr1'
   *  Constant: '<S14>/Rho'
   */
  CorecontrollerTorquePowerandCom(ctrl_custom_turning_frame_P.k_cc,
    ctrl_custom_turning_frame_P.p_cc, ctrl_custom_turning_frame_P.r_cc,
    ctrl_custom_turning_frame_B.Delay[0], ctrl_custom_turning_frame_P.K_T1f,
    ctrl_custom_turning_frame_P.K_q1f, ctrl_custom_turning_frame_P.D, rtb_T_r_p,
    ctrl_custom_turning_frame_P.Rho, ctrl_custom_turning_frame_P.eps_c,
    ctrl_custom_turning_frame_P.K_T1r, ctrl_custom_turning_frame_P.K_q1r,
    &ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowerand);

  /* MultiPortSwitch: '<S68>/Controller chosen' incorporates:
   *  Constant: '<S68>/NaN'
   *  Integrator: '<S70>/Integrator'
   *  Sum: '<S70>/Sum1'
   */
  switch ((int32_T)ctrl_custom_turning_frame_B.Memory) {
   case 1:
    rtb_Row2_f = ctrl_custom_turning_frame_B.Kp +
      ctrl_custom_turning_frame_X.Integrator_CSTATE_m;
    break;

   case 2:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowerand.Qcq;
    break;

   case 3:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowerand.Qcp;
    break;

   case 4:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowerand.Qcc;
    break;

   default:
    rtb_Row2_f = ctrl_custom_turning_frame_P.NaN_Value;
    break;
  }

  /* End of MultiPortSwitch: '<S68>/Controller chosen' */

  /* Sum: '<S68>/Sum' */
  ctrl_custom_turning_frame_B.Sum_h =
    (ctrl_custom_turning_frame_B.Inertiacompensation +
     ctrl_custom_turning_frame_B.Sum1_b) + rtb_Row2_f;
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* DiscreteTransferFcn: '<S53>/Discrete Transfer Fcn' incorporates:
     *  Constant: '<S53>/Constant'
     *  Constant: '<S53>/Constant1'
     */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_n =
      ctrl_custom_turning_frame_B.Sum_h -
      ctrl_custom_turning_frame_P.Constant_Value_j[1] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k;
    ctrl_custom_turning_frame_B.DiscreteTransferFcn_b =
      ctrl_custom_turning_frame_P.Constant1_Value_i[0] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_n +
      ctrl_custom_turning_frame_P.Constant1_Value_i[1] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k;
  }

  /* Gain: '<S67>/Finding rotation speed' incorporates:
   *  Gain: '<S67>/K_omega'
   *  Integrator: '<S67>/Integrator'
   *  Sum: '<S67>/Sum'
   */
  ctrl_custom_turning_frame_B.Findingrotationspeed =
    ((ctrl_custom_turning_frame_B.DiscreteTransferFcn_b -
      ctrl_custom_turning_frame_B.Delay_d) - ctrl_custom_turning_frame_P.K_omega
     * 2.0 * 3.1415926535897931 *
     ctrl_custom_turning_frame_X.Integrator_CSTATE_a) * (1.0 /
    (6.2831853071795862 * ctrl_custom_turning_frame_P.I_s));
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* Gain: '<S70>/Ki' */
    ctrl_custom_turning_frame_B.Ki = ctrl_custom_turning_frame_P.Kp / 0.05 *
      rtb_Sum_m;

    /* MATLAB Function: '<S68>/Supervisor' incorporates:
     *  Constant: '<S14>/controller'
     */
    ctrl_custom_turning__Supervisor(ctrl_custom_turning_frame_B.Memory,
      ctrl_custom_turning_frame_P.controller_Value,
      ctrl_custom_turning_frame_B.Delay[0],
      &ctrl_custom_turning_frame_B.sf_Supervisor);

    /* Delay: '<S54>/Delay' */
    ctrl_custom_turning_frame_B.Delay_c =
      ctrl_custom_turning_frame_DW.Delay_DSTATE_c;

    /* Delay: '<S77>/Delay' */
    ctrl_custom_turning_frame_B.Delay_b =
      ctrl_custom_turning_frame_DW.Delay_DSTATE_j;
  }

  /* MATLAB Function: '<S77>/MATLAB Function' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Tf2'
   *  Constant: '<S14>/K_Tr2'
   *  Constant: '<S14>/Rho'
   */
  ctrl_custom_tu_MATLABFunction_a(rtb_sys[7], ctrl_custom_turning_frame_P.K_T2f,
    ctrl_custom_turning_frame_P.K_T2r, ctrl_custom_turning_frame_P.Rho,
    ctrl_custom_turning_frame_P.D, ctrl_custom_turning_frame_P.eps_c,
    ctrl_custom_turning_frame_B.Delay_b,
    &ctrl_custom_turning_frame_B.sf_MATLABFunction_a);
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* DiscreteTransferFcn: '<S77>/Discrete Transfer Fcn' incorporates:
     *  Constant: '<S77>/Constant1'
     *  Constant: '<S77>/Constant2'
     */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_f =
      (ctrl_custom_turning_frame_B.sf_MATLABFunction_a.n_d -
       ctrl_custom_turning_frame_P.Constant2_Value_k[1] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j[0]) -
      ctrl_custom_turning_frame_P.Constant2_Value_k[2] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j[1];
    ctrl_custom_turning_frame_B.DiscreteTransferFcn_l =
      (ctrl_custom_turning_frame_P.Constant1_Value_m[0] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_f +
       ctrl_custom_turning_frame_P.Constant1_Value_m[1] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j[0]) +
      ctrl_custom_turning_frame_P.Constant1_Value_m[2] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j[1];

    /* SampleTimeMath: '<S80>/TSamp'
     *
     * About '<S80>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    ctrl_custom_turning_frame_B.TSamp_m =
      ctrl_custom_turning_frame_B.DiscreteTransferFcn_l *
      ctrl_custom_turning_frame_P.TSamp_WtEt_g;

    /* Sum: '<S80>/Diff' incorporates:
     *  UnitDelay: '<S80>/UD'
     */
    rtb_Sum_m = ctrl_custom_turning_frame_B.TSamp_m -
      ctrl_custom_turning_frame_DW.UD_DSTATE_f;

    /* RateLimiter: '<S77>/Acceleration Limit' */
    rtb_psi_dot = rtb_Sum_m - ctrl_custom_turning_frame_DW.PrevY_p;
    if (rtb_psi_dot > ctrl_custom_turning_frame_P.AccelerationLimit_RisingLim_p)
    {
      rtb_Sum_m = ctrl_custom_turning_frame_DW.PrevY_p +
        ctrl_custom_turning_frame_P.AccelerationLimit_RisingLim_p;
    } else {
      if (rtb_psi_dot <
          ctrl_custom_turning_frame_P.AccelerationLimit_FallingLim_n) {
        rtb_Sum_m = ctrl_custom_turning_frame_DW.PrevY_p +
          ctrl_custom_turning_frame_P.AccelerationLimit_FallingLim_n;
      }
    }

    ctrl_custom_turning_frame_DW.PrevY_p = rtb_Sum_m;

    /* End of RateLimiter: '<S77>/Acceleration Limit' */

    /* Gain: '<S77>/Inertia compensation' */
    ctrl_custom_turning_frame_B.Inertiacompensation_b =
      ctrl_custom_turning_frame_P.I_s * 2.0 * 3.1415926535897931 * rtb_Sum_m;

    /* Sum: '<S77>/Sum1' incorporates:
     *  Gain: '<S77>/Qf_0'
     *  Gain: '<S77>/Qff_0(nr)'
     *  Gain: '<S77>/Qff_1(nr)'
     *  Trigonometry: '<S77>/Trigonometric Function'
     */
    ctrl_custom_turning_frame_B.Sum1_l = tanh
      (ctrl_custom_turning_frame_P.epsilon / ctrl_custom_turning_frame_P.n_max *
       ctrl_custom_turning_frame_B.DiscreteTransferFcn_l) *
      ctrl_custom_turning_frame_P.Q_f0 + ctrl_custom_turning_frame_P.K_omega *
      2.0 * 3.1415926535897931 *
      ctrl_custom_turning_frame_B.DiscreteTransferFcn_l;

    /* Memory: '<S77>/Memory' */
    ctrl_custom_turning_frame_B.Memory_l =
      ctrl_custom_turning_frame_DW.Memory_PreviousInput_g;

    /* Sum: '<S79>/Sum' */
    rtb_Sum_m = ctrl_custom_turning_frame_B.DiscreteTransferFcn_l -
      ctrl_custom_turning_frame_B.Delay[1];

    /* Gain: '<S79>/Kp' */
    ctrl_custom_turning_frame_B.Kp_c = ctrl_custom_turning_frame_P.Kp *
      rtb_Sum_m;
  }

  /* Integrator: '<S79>/Integrator' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_p,
                       (ctrl_custom_turning_frame_B.reset_l));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator_CSTATE_ko =
        ctrl_custom_turning_frame_P.Integrator_IC_p;
    }
  }

  /* MATLAB Function: '<S79>/Core controller: Torque,Power and Combined Torque//Power' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S14>/Constant2'
   *  Constant: '<S14>/Constant3'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Qr2'
   *  Constant: '<S14>/K_Qr8'
   *  Constant: '<S14>/K_Tf2'
   *  Constant: '<S14>/K_Tr2'
   *  Constant: '<S14>/Rho'
   */
  CorecontrollerTorquePowerandCom(ctrl_custom_turning_frame_P.k_cc,
    ctrl_custom_turning_frame_P.p_cc, ctrl_custom_turning_frame_P.r_cc,
    ctrl_custom_turning_frame_B.Delay[1], ctrl_custom_turning_frame_P.K_T2f,
    ctrl_custom_turning_frame_P.K_q2f, ctrl_custom_turning_frame_P.D,
    ctrl_custom_turning_frame_B.sf_MATLABFunction_a.T_r,
    ctrl_custom_turning_frame_P.Rho, ctrl_custom_turning_frame_P.eps_c,
    ctrl_custom_turning_frame_P.K_T2r, ctrl_custom_turning_frame_P.K_q2r,
    &ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_a);

  /* MultiPortSwitch: '<S77>/Controller chosen' incorporates:
   *  Constant: '<S77>/NaN'
   *  Integrator: '<S79>/Integrator'
   *  Sum: '<S79>/Sum1'
   */
  switch ((int32_T)ctrl_custom_turning_frame_B.Memory_l) {
   case 1:
    rtb_Row2_f = ctrl_custom_turning_frame_B.Kp_c +
      ctrl_custom_turning_frame_X.Integrator_CSTATE_ko;
    break;

   case 2:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_a.Qcq;
    break;

   case 3:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_a.Qcp;
    break;

   case 4:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_a.Qcc;
    break;

   default:
    rtb_Row2_f = ctrl_custom_turning_frame_P.NaN_Value_n;
    break;
  }

  /* End of MultiPortSwitch: '<S77>/Controller chosen' */

  /* Sum: '<S77>/Sum' */
  ctrl_custom_turning_frame_B.Sum_d =
    (ctrl_custom_turning_frame_B.Inertiacompensation_b +
     ctrl_custom_turning_frame_B.Sum1_l) + rtb_Row2_f;
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* DiscreteTransferFcn: '<S54>/Discrete Transfer Fcn' incorporates:
     *  Constant: '<S54>/Constant'
     *  Constant: '<S54>/Constant1'
     */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_fg =
      ctrl_custom_turning_frame_B.Sum_d -
      ctrl_custom_turning_frame_P.Constant_Value_dp[1] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j0;
    ctrl_custom_turning_frame_B.DiscreteTransferFcn_c =
      ctrl_custom_turning_frame_P.Constant1_Value_b[0] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_fg +
      ctrl_custom_turning_frame_P.Constant1_Value_b[1] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j0;
  }

  /* Gain: '<S76>/Finding rotation speed' incorporates:
   *  Gain: '<S76>/K_omega'
   *  Sum: '<S76>/Sum'
   */
  ctrl_custom_turning_frame_B.Findingrotationspeed_h =
    ((ctrl_custom_turning_frame_B.DiscreteTransferFcn_c -
      ctrl_custom_turning_frame_B.Delay_c) - ctrl_custom_turning_frame_P.K_omega
     * 2.0 * 3.1415926535897931 * rtb_Integrator_n) * (1.0 / (6.2831853071795862
    * ctrl_custom_turning_frame_P.I_s));
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* Gain: '<S79>/Ki' */
    ctrl_custom_turning_frame_B.Ki_c = ctrl_custom_turning_frame_P.Kp / 0.05 *
      rtb_Sum_m;

    /* MATLAB Function: '<S77>/Supervisor' incorporates:
     *  Constant: '<S14>/controller'
     */
    ctrl_custom_turning__Supervisor(ctrl_custom_turning_frame_B.Memory_l,
      ctrl_custom_turning_frame_P.controller_Value,
      ctrl_custom_turning_frame_B.Delay[1],
      &ctrl_custom_turning_frame_B.sf_Supervisor_c);

    /* Delay: '<S55>/Delay' */
    ctrl_custom_turning_frame_B.Delay_h =
      ctrl_custom_turning_frame_DW.Delay_DSTATE_m;

    /* Delay: '<S86>/Delay' */
    ctrl_custom_turning_frame_B.Delay_i =
      ctrl_custom_turning_frame_DW.Delay_DSTATE_e;
  }

  /* MATLAB Function: '<S86>/MATLAB Function' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Tf3'
   *  Constant: '<S14>/Rho'
   */
  /* MATLAB Function 'Thruster control /Thruster 3/Thruster control/MATLAB Function': '<S90>:1' */
  /* '<S90>:1:5' */
  if (rtb_sys[8] < 0.0) {
    rtb_Row1_m = -1.0;
  } else if (rtb_sys[8] > 0.0) {
    rtb_Row1_m = 1.0;
  } else if (rtb_sys[8] == 0.0) {
    rtb_Row1_m = 0.0;
  } else {
    rtb_Row1_m = rtb_sys[8];
  }

  rtb_Row2_f = sqrt(fabs(rtb_sys[8]) / (ctrl_custom_turning_frame_P.Rho *
    rt_powd_snf(ctrl_custom_turning_frame_P.D, 4.0) *
    ctrl_custom_turning_frame_P.K_T3f)) * rtb_Row1_m;

  /* '<S90>:1:7' */
  rtb_psi_dot = tanh(ctrl_custom_turning_frame_P.eps_c * rtb_Row2_f / 5.0) * 0.5
    + 0.5;

  /*  Smooth switching between positive and negative thrust */
  /* '<S90>:1:8' */
  /* '<S90>:1:10' */
  if (ctrl_custom_turning_frame_B.Delay_i < 0.0) {
    rtb_Row1_m = -1.0;
  } else if (ctrl_custom_turning_frame_B.Delay_i > 0.0) {
    rtb_Row1_m = 1.0;
  } else if (ctrl_custom_turning_frame_B.Delay_i == 0.0) {
    rtb_Row1_m = 0.0;
  } else {
    rtb_Row1_m = ctrl_custom_turning_frame_B.Delay_i;
  }

  rtb_T_r_e = ((1.0 - rtb_psi_dot) * ctrl_custom_turning_frame_P.K_T3f +
               ctrl_custom_turning_frame_P.K_T3f * rtb_psi_dot) * rtb_Row1_m *
    ctrl_custom_turning_frame_P.Rho * rt_powd_snf(ctrl_custom_turning_frame_P.D,
    4.0) * (ctrl_custom_turning_frame_B.Delay_i *
            ctrl_custom_turning_frame_B.Delay_i);
  ctrl_custom_turning_frame_B.n_d_m = rtb_Row2_f;

  /* End of MATLAB Function: '<S86>/MATLAB Function' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* DiscreteTransferFcn: '<S86>/Discrete Transfer Fcn' incorporates:
     *  Constant: '<S86>/Constant1'
     *  Constant: '<S86>/Constant2'
     */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_k =
      (ctrl_custom_turning_frame_B.n_d_m -
       ctrl_custom_turning_frame_P.Constant2_Value_k5[1] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_f[0]) -
      ctrl_custom_turning_frame_P.Constant2_Value_k5[2] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_f[1];
    ctrl_custom_turning_frame_B.DiscreteTransferFcn_d =
      (ctrl_custom_turning_frame_P.Constant1_Value_c[0] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_k +
       ctrl_custom_turning_frame_P.Constant1_Value_c[1] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_f[0]) +
      ctrl_custom_turning_frame_P.Constant1_Value_c[2] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_f[1];

    /* SampleTimeMath: '<S89>/TSamp'
     *
     * About '<S89>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    ctrl_custom_turning_frame_B.TSamp_k =
      ctrl_custom_turning_frame_B.DiscreteTransferFcn_d *
      ctrl_custom_turning_frame_P.TSamp_WtEt_i;

    /* Sum: '<S89>/Diff' incorporates:
     *  UnitDelay: '<S89>/UD'
     */
    rtb_Sum_m = ctrl_custom_turning_frame_B.TSamp_k -
      ctrl_custom_turning_frame_DW.UD_DSTATE_p;

    /* RateLimiter: '<S86>/Acceleration limiter' */
    rtb_psi_dot = rtb_Sum_m - ctrl_custom_turning_frame_DW.PrevY_k;
    if (rtb_psi_dot > ctrl_custom_turning_frame_P.Accelerationlimiter_RisingLim)
    {
      rtb_Sum_m = ctrl_custom_turning_frame_DW.PrevY_k +
        ctrl_custom_turning_frame_P.Accelerationlimiter_RisingLim;
    } else {
      if (rtb_psi_dot <
          ctrl_custom_turning_frame_P.Accelerationlimiter_FallingLim) {
        rtb_Sum_m = ctrl_custom_turning_frame_DW.PrevY_k +
          ctrl_custom_turning_frame_P.Accelerationlimiter_FallingLim;
      }
    }

    ctrl_custom_turning_frame_DW.PrevY_k = rtb_Sum_m;

    /* End of RateLimiter: '<S86>/Acceleration limiter' */

    /* Gain: '<S86>/Inertia compensation' */
    ctrl_custom_turning_frame_B.Inertiacompensation_m =
      ctrl_custom_turning_frame_P.I_s * 2.0 * 3.1415926535897931 * rtb_Sum_m;

    /* Sum: '<S86>/Sum1' incorporates:
     *  Gain: '<S86>/Qf_0'
     *  Gain: '<S86>/Qff_0(nr)'
     *  Gain: '<S86>/Qff_1(nr)'
     *  Trigonometry: '<S86>/Trigonometric Function'
     */
    ctrl_custom_turning_frame_B.Sum1_c = tanh
      (ctrl_custom_turning_frame_P.epsilon / ctrl_custom_turning_frame_P.n_max *
       ctrl_custom_turning_frame_B.DiscreteTransferFcn_d) *
      ctrl_custom_turning_frame_P.Q_f0 + ctrl_custom_turning_frame_P.K_omega *
      2.0 * 3.1415926535897931 *
      ctrl_custom_turning_frame_B.DiscreteTransferFcn_d;

    /* Memory: '<S86>/Memory' */
    ctrl_custom_turning_frame_B.Memory_ln =
      ctrl_custom_turning_frame_DW.Memory_PreviousInput_f;

    /* Sum: '<S88>/Sum' */
    rtb_Sum_m = ctrl_custom_turning_frame_B.DiscreteTransferFcn_d -
      ctrl_custom_turning_frame_B.Delay[2];

    /* Gain: '<S88>/Kp' */
    ctrl_custom_turning_frame_B.Kp_i = ctrl_custom_turning_frame_P.Kp *
      rtb_Sum_m;
  }

  /* Integrator: '<S88>/Integrator' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_gm,
                       (ctrl_custom_turning_frame_B.reset_i));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator_CSTATE_c =
        ctrl_custom_turning_frame_P.Integrator_IC_k;
    }
  }

  /* MATLAB Function: '<S88>/Core controller: Torque,Power and Combined Torque//Power' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S14>/Constant2'
   *  Constant: '<S14>/Constant3'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Qr3'
   *  Constant: '<S14>/K_Qr9'
   *  Constant: '<S14>/K_Tf3'
   *  Constant: '<S14>/K_Tr3'
   *  Constant: '<S14>/Rho'
   */
  CorecontrollerTorquePowerandCom(ctrl_custom_turning_frame_P.k_cc,
    ctrl_custom_turning_frame_P.p_cc, ctrl_custom_turning_frame_P.r_cc,
    ctrl_custom_turning_frame_B.Delay[2], ctrl_custom_turning_frame_P.K_T3f,
    ctrl_custom_turning_frame_P.K_q3f, ctrl_custom_turning_frame_P.D, rtb_T_r_e,
    ctrl_custom_turning_frame_P.Rho, ctrl_custom_turning_frame_P.eps_c,
    ctrl_custom_turning_frame_P.K_T3r, ctrl_custom_turning_frame_P.K_q3r,
    &ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePower_ao);

  /* MultiPortSwitch: '<S86>/Controller chosen' incorporates:
   *  Constant: '<S86>/NaN'
   *  Integrator: '<S88>/Integrator'
   *  Sum: '<S88>/Sum1'
   */
  switch ((int32_T)ctrl_custom_turning_frame_B.Memory_ln) {
   case 1:
    rtb_Row2_f = ctrl_custom_turning_frame_B.Kp_i +
      ctrl_custom_turning_frame_X.Integrator_CSTATE_c;
    break;

   case 2:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePower_ao.Qcq;
    break;

   case 3:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePower_ao.Qcp;
    break;

   case 4:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePower_ao.Qcc;
    break;

   default:
    rtb_Row2_f = ctrl_custom_turning_frame_P.NaN_Value_k;
    break;
  }

  /* End of MultiPortSwitch: '<S86>/Controller chosen' */

  /* Sum: '<S86>/Sum' */
  ctrl_custom_turning_frame_B.Sum_n =
    (ctrl_custom_turning_frame_B.Inertiacompensation_m +
     ctrl_custom_turning_frame_B.Sum1_c) + rtb_Row2_f;
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* DiscreteTransferFcn: '<S55>/Discrete Transfer Fcn' incorporates:
     *  Constant: '<S55>/Constant'
     *  Constant: '<S55>/Constant1'
     */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_b =
      ctrl_custom_turning_frame_B.Sum_n -
      ctrl_custom_turning_frame_P.Constant_Value_gq[1] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_m;
    ctrl_custom_turning_frame_B.DiscreteTransferFcn_o =
      ctrl_custom_turning_frame_P.Constant1_Value_l[0] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_b +
      ctrl_custom_turning_frame_P.Constant1_Value_l[1] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_m;
  }

  /* Gain: '<S85>/Finding rotation speed' incorporates:
   *  Gain: '<S85>/K_omega'
   *  Sum: '<S85>/Sum'
   */
  ctrl_custom_turning_frame_B.Findingrotationspeed_m =
    ((ctrl_custom_turning_frame_B.DiscreteTransferFcn_o -
      ctrl_custom_turning_frame_B.Delay_h) - ctrl_custom_turning_frame_P.K_omega
     * 2.0 * 3.1415926535897931 * rtb_Integrator_g) * (1.0 / (6.2831853071795862
    * ctrl_custom_turning_frame_P.I_s));
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* Gain: '<S88>/Ki' */
    ctrl_custom_turning_frame_B.Ki_o = ctrl_custom_turning_frame_P.Kp / 0.05 *
      rtb_Sum_m;

    /* MATLAB Function: '<S86>/Supervisor' incorporates:
     *  Constant: '<S14>/controller'
     */
    ctrl_custom_turning__Supervisor(ctrl_custom_turning_frame_B.Memory_ln,
      ctrl_custom_turning_frame_P.controller_Value,
      ctrl_custom_turning_frame_B.Delay[2],
      &ctrl_custom_turning_frame_B.sf_Supervisor_j);

    /* Delay: '<S56>/Delay' */
    ctrl_custom_turning_frame_B.Delay_e =
      ctrl_custom_turning_frame_DW.Delay_DSTATE_kg;

    /* Delay: '<S95>/Delay' */
    ctrl_custom_turning_frame_B.Delay_m =
      ctrl_custom_turning_frame_DW.Delay_DSTATE_ki;
  }

  /* MATLAB Function: '<S95>/MATLAB Function' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Tf4'
   *  Constant: '<S14>/K_Tr4'
   *  Constant: '<S14>/Rho'
   */
  ctrl_custom_tu_MATLABFunction_a(rtb_sys[9], ctrl_custom_turning_frame_P.K_T4f,
    ctrl_custom_turning_frame_P.K_T4r, ctrl_custom_turning_frame_P.Rho,
    ctrl_custom_turning_frame_P.D, ctrl_custom_turning_frame_P.eps_c,
    ctrl_custom_turning_frame_B.Delay_m,
    &ctrl_custom_turning_frame_B.sf_MATLABFunction_d);
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* DiscreteTransferFcn: '<S95>/Discrete Transfer Fcn' incorporates:
     *  Constant: '<S95>/Constant1'
     *  Constant: '<S95>/Constant2'
     */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_l =
      (ctrl_custom_turning_frame_B.sf_MATLABFunction_d.n_d -
       ctrl_custom_turning_frame_P.Constant2_Value_h[1] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_e[0]) -
      ctrl_custom_turning_frame_P.Constant2_Value_h[2] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_e[1];
    ctrl_custom_turning_frame_B.DiscreteTransferFcn_p =
      (ctrl_custom_turning_frame_P.Constant1_Value_d[0] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_l +
       ctrl_custom_turning_frame_P.Constant1_Value_d[1] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_e[0]) +
      ctrl_custom_turning_frame_P.Constant1_Value_d[2] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_e[1];

    /* SampleTimeMath: '<S98>/TSamp'
     *
     * About '<S98>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    ctrl_custom_turning_frame_B.TSamp_d =
      ctrl_custom_turning_frame_B.DiscreteTransferFcn_p *
      ctrl_custom_turning_frame_P.TSamp_WtEt_n;

    /* Sum: '<S98>/Diff' incorporates:
     *  UnitDelay: '<S98>/UD'
     */
    rtb_Sum_m = ctrl_custom_turning_frame_B.TSamp_d -
      ctrl_custom_turning_frame_DW.UD_DSTATE_a;

    /* RateLimiter: '<S95>/Acceleration limiter' */
    rtb_psi_dot = rtb_Sum_m - ctrl_custom_turning_frame_DW.PrevY_m;
    if (rtb_psi_dot >
        ctrl_custom_turning_frame_P.Accelerationlimiter_RisingLim_i) {
      rtb_Sum_m = ctrl_custom_turning_frame_DW.PrevY_m +
        ctrl_custom_turning_frame_P.Accelerationlimiter_RisingLim_i;
    } else {
      if (rtb_psi_dot <
          ctrl_custom_turning_frame_P.Accelerationlimiter_FallingLi_i) {
        rtb_Sum_m = ctrl_custom_turning_frame_DW.PrevY_m +
          ctrl_custom_turning_frame_P.Accelerationlimiter_FallingLi_i;
      }
    }

    ctrl_custom_turning_frame_DW.PrevY_m = rtb_Sum_m;

    /* End of RateLimiter: '<S95>/Acceleration limiter' */

    /* Gain: '<S95>/Inertia compensation' */
    ctrl_custom_turning_frame_B.Inertiacompensation_bn =
      ctrl_custom_turning_frame_P.I_s * 2.0 * 3.1415926535897931 * rtb_Sum_m;

    /* Sum: '<S95>/Sum1' incorporates:
     *  Gain: '<S95>/Qf_0'
     *  Gain: '<S95>/Qff_0(nr)'
     *  Gain: '<S95>/Qff_1(nr)'
     *  Trigonometry: '<S95>/Trigonometric Function'
     */
    ctrl_custom_turning_frame_B.Sum1_cp = tanh
      (ctrl_custom_turning_frame_P.epsilon / ctrl_custom_turning_frame_P.n_max *
       ctrl_custom_turning_frame_B.DiscreteTransferFcn_p) *
      ctrl_custom_turning_frame_P.Q_f0 + ctrl_custom_turning_frame_P.K_omega *
      2.0 * 3.1415926535897931 *
      ctrl_custom_turning_frame_B.DiscreteTransferFcn_p;

    /* Memory: '<S95>/Memory' */
    ctrl_custom_turning_frame_B.Memory_j =
      ctrl_custom_turning_frame_DW.Memory_PreviousInput_d;

    /* Sum: '<S97>/Sum' */
    rtb_Sum_m = ctrl_custom_turning_frame_B.DiscreteTransferFcn_p -
      ctrl_custom_turning_frame_B.Delay[3];

    /* Gain: '<S97>/Kp' */
    ctrl_custom_turning_frame_B.Kp_o = ctrl_custom_turning_frame_P.Kp *
      rtb_Sum_m;
  }

  /* Integrator: '<S97>/Integrator' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_ja,
                       (ctrl_custom_turning_frame_B.reset_h));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator_CSTATE_p =
        ctrl_custom_turning_frame_P.Integrator_IC_l;
    }
  }

  /* MATLAB Function: '<S97>/Core controller: Torque,Power and Combined Torque//Power' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S14>/Constant2'
   *  Constant: '<S14>/Constant3'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Qr10'
   *  Constant: '<S14>/K_Qr4'
   *  Constant: '<S14>/K_Tf4'
   *  Constant: '<S14>/K_Tr4'
   *  Constant: '<S14>/Rho'
   */
  CorecontrollerTorquePowerandCom(ctrl_custom_turning_frame_P.k_cc,
    ctrl_custom_turning_frame_P.p_cc, ctrl_custom_turning_frame_P.r_cc,
    ctrl_custom_turning_frame_B.Delay[3], ctrl_custom_turning_frame_P.K_T4f,
    ctrl_custom_turning_frame_P.K_q4f, ctrl_custom_turning_frame_P.D,
    ctrl_custom_turning_frame_B.sf_MATLABFunction_d.T_r,
    ctrl_custom_turning_frame_P.Rho, ctrl_custom_turning_frame_P.eps_c,
    ctrl_custom_turning_frame_P.K_T4r, ctrl_custom_turning_frame_P.K_q4r,
    &ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_p);

  /* MultiPortSwitch: '<S95>/Controller chosen' incorporates:
   *  Constant: '<S95>/NaN'
   *  Integrator: '<S97>/Integrator'
   *  Sum: '<S97>/Sum1'
   */
  switch ((int32_T)ctrl_custom_turning_frame_B.Memory_j) {
   case 1:
    rtb_Row2_f = ctrl_custom_turning_frame_B.Kp_o +
      ctrl_custom_turning_frame_X.Integrator_CSTATE_p;
    break;

   case 2:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_p.Qcq;
    break;

   case 3:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_p.Qcp;
    break;

   case 4:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_p.Qcc;
    break;

   default:
    rtb_Row2_f = ctrl_custom_turning_frame_P.NaN_Value_ks;
    break;
  }

  /* End of MultiPortSwitch: '<S95>/Controller chosen' */

  /* Sum: '<S95>/Sum' */
  ctrl_custom_turning_frame_B.Sum_a =
    (ctrl_custom_turning_frame_B.Inertiacompensation_bn +
     ctrl_custom_turning_frame_B.Sum1_cp) + rtb_Row2_f;
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* DiscreteTransferFcn: '<S56>/Discrete Transfer Fcn' incorporates:
     *  Constant: '<S56>/Constant'
     *  Constant: '<S56>/Constant1'
     */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_fg5 =
      ctrl_custom_turning_frame_B.Sum_a -
      ctrl_custom_turning_frame_P.Constant_Value_m[1] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_p;
    ctrl_custom_turning_frame_B.DiscreteTransferFcn_oy =
      ctrl_custom_turning_frame_P.Constant1_Value_h[0] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_fg5 +
      ctrl_custom_turning_frame_P.Constant1_Value_h[1] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_p;
  }

  /* Gain: '<S94>/Finding rotation speed' incorporates:
   *  Gain: '<S94>/K_omega'
   *  Sum: '<S94>/Sum'
   */
  ctrl_custom_turning_frame_B.Findingrotationspeed_p =
    ((ctrl_custom_turning_frame_B.DiscreteTransferFcn_oy -
      ctrl_custom_turning_frame_B.Delay_e) - ctrl_custom_turning_frame_P.K_omega
     * 2.0 * 3.1415926535897931 * rtb_Integrator_l) * (1.0 / (6.2831853071795862
    * ctrl_custom_turning_frame_P.I_s));
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* Gain: '<S97>/Ki' */
    ctrl_custom_turning_frame_B.Ki_g = ctrl_custom_turning_frame_P.Kp / 0.05 *
      rtb_Sum_m;

    /* MATLAB Function: '<S95>/Supervisor' incorporates:
     *  Constant: '<S14>/controller'
     */
    ctrl_custom_turning__Supervisor(ctrl_custom_turning_frame_B.Memory_j,
      ctrl_custom_turning_frame_P.controller_Value,
      ctrl_custom_turning_frame_B.Delay[3],
      &ctrl_custom_turning_frame_B.sf_Supervisor_g);

    /* Delay: '<S57>/Delay' */
    ctrl_custom_turning_frame_B.Delay_jj =
      ctrl_custom_turning_frame_DW.Delay_DSTATE_p;

    /* Delay: '<S104>/Delay' */
    ctrl_custom_turning_frame_B.Delay_n =
      ctrl_custom_turning_frame_DW.Delay_DSTATE_kf;
  }

  /* MATLAB Function: '<S104>/MATLAB Function' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Tf5'
   *  Constant: '<S14>/K_Tr5'
   *  Constant: '<S14>/Rho'
   */
  ctrl_custom_tu_MATLABFunction_a(rtb_sys[10], ctrl_custom_turning_frame_P.K_T5f,
    ctrl_custom_turning_frame_P.K_T5r, ctrl_custom_turning_frame_P.Rho,
    ctrl_custom_turning_frame_P.D, ctrl_custom_turning_frame_P.eps_c,
    ctrl_custom_turning_frame_B.Delay_n,
    &ctrl_custom_turning_frame_B.sf_MATLABFunction_o);
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* DiscreteTransferFcn: '<S104>/Discrete Transfer Fcn' incorporates:
     *  Constant: '<S104>/Constant1'
     *  Constant: '<S104>/Constant2'
     */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_i =
      (ctrl_custom_turning_frame_B.sf_MATLABFunction_o.n_d -
       ctrl_custom_turning_frame_P.Constant2_Value_b0[1] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_jn[0]) -
      ctrl_custom_turning_frame_P.Constant2_Value_b0[2] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_jn[1];
    ctrl_custom_turning_frame_B.DiscreteTransferFcn_br =
      (ctrl_custom_turning_frame_P.Constant1_Value_kj[0] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_i +
       ctrl_custom_turning_frame_P.Constant1_Value_kj[1] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_jn[0]) +
      ctrl_custom_turning_frame_P.Constant1_Value_kj[2] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_jn[1];

    /* SampleTimeMath: '<S107>/TSamp'
     *
     * About '<S107>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    ctrl_custom_turning_frame_B.TSamp_k4 =
      ctrl_custom_turning_frame_B.DiscreteTransferFcn_br *
      ctrl_custom_turning_frame_P.TSamp_WtEt_ih;

    /* Sum: '<S107>/Diff' incorporates:
     *  UnitDelay: '<S107>/UD'
     */
    rtb_Sum_m = ctrl_custom_turning_frame_B.TSamp_k4 -
      ctrl_custom_turning_frame_DW.UD_DSTATE_l;

    /* RateLimiter: '<S104>/Acceleration limiter' */
    rtb_psi_dot = rtb_Sum_m - ctrl_custom_turning_frame_DW.PrevY_mo;
    if (rtb_psi_dot >
        ctrl_custom_turning_frame_P.Accelerationlimiter_RisingLim_k) {
      rtb_Sum_m = ctrl_custom_turning_frame_DW.PrevY_mo +
        ctrl_custom_turning_frame_P.Accelerationlimiter_RisingLim_k;
    } else {
      if (rtb_psi_dot <
          ctrl_custom_turning_frame_P.Accelerationlimiter_FallingLi_c) {
        rtb_Sum_m = ctrl_custom_turning_frame_DW.PrevY_mo +
          ctrl_custom_turning_frame_P.Accelerationlimiter_FallingLi_c;
      }
    }

    ctrl_custom_turning_frame_DW.PrevY_mo = rtb_Sum_m;

    /* End of RateLimiter: '<S104>/Acceleration limiter' */

    /* Gain: '<S104>/Inertia compensation' */
    ctrl_custom_turning_frame_B.Inertiacompensation_a =
      ctrl_custom_turning_frame_P.I_s * 2.0 * 3.1415926535897931 * rtb_Sum_m;

    /* Sum: '<S104>/Sum1' incorporates:
     *  Gain: '<S104>/Qf_0'
     *  Gain: '<S104>/Qff_0(nr)'
     *  Gain: '<S104>/Qff_1(nr)'
     *  Trigonometry: '<S104>/Trigonometric Function'
     */
    ctrl_custom_turning_frame_B.Sum1_e = tanh
      (ctrl_custom_turning_frame_P.epsilon / ctrl_custom_turning_frame_P.n_max *
       ctrl_custom_turning_frame_B.DiscreteTransferFcn_br) *
      ctrl_custom_turning_frame_P.Q_f0 + ctrl_custom_turning_frame_P.K_omega *
      2.0 * 3.1415926535897931 *
      ctrl_custom_turning_frame_B.DiscreteTransferFcn_br;

    /* Memory: '<S104>/Memory' */
    ctrl_custom_turning_frame_B.Memory_d =
      ctrl_custom_turning_frame_DW.Memory_PreviousInput_l;

    /* Sum: '<S106>/Sum' */
    rtb_Sum_m = ctrl_custom_turning_frame_B.DiscreteTransferFcn_br -
      ctrl_custom_turning_frame_B.Delay[4];

    /* Gain: '<S106>/Kp' */
    ctrl_custom_turning_frame_B.Kp_d = ctrl_custom_turning_frame_P.Kp *
      rtb_Sum_m;
  }

  /* Integrator: '<S106>/Integrator' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_i,
                       (ctrl_custom_turning_frame_B.reset_e));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator_CSTATE_n =
        ctrl_custom_turning_frame_P.Integrator_IC_hh;
    }
  }

  /* MATLAB Function: '<S106>/Core controller: Torque,Power and Combined Torque//Power' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S14>/Constant2'
   *  Constant: '<S14>/Constant3'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Qr11'
   *  Constant: '<S14>/K_Qr5'
   *  Constant: '<S14>/K_Tf5'
   *  Constant: '<S14>/K_Tr5'
   *  Constant: '<S14>/Rho'
   */
  CorecontrollerTorquePowerandCom(ctrl_custom_turning_frame_P.k_cc,
    ctrl_custom_turning_frame_P.p_cc, ctrl_custom_turning_frame_P.r_cc,
    ctrl_custom_turning_frame_B.Delay[4], ctrl_custom_turning_frame_P.K_T5f,
    ctrl_custom_turning_frame_P.K_q5f, ctrl_custom_turning_frame_P.D,
    ctrl_custom_turning_frame_B.sf_MATLABFunction_o.T_r,
    ctrl_custom_turning_frame_P.Rho, ctrl_custom_turning_frame_P.eps_c,
    ctrl_custom_turning_frame_P.K_T5r, ctrl_custom_turning_frame_P.K_q5r,
    &ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_o);

  /* MultiPortSwitch: '<S104>/Controller chosen' incorporates:
   *  Constant: '<S104>/NaN'
   *  Integrator: '<S106>/Integrator'
   *  Sum: '<S106>/Sum1'
   */
  switch ((int32_T)ctrl_custom_turning_frame_B.Memory_d) {
   case 1:
    rtb_Row2_f = ctrl_custom_turning_frame_B.Kp_d +
      ctrl_custom_turning_frame_X.Integrator_CSTATE_n;
    break;

   case 2:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_o.Qcq;
    break;

   case 3:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_o.Qcp;
    break;

   case 4:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_o.Qcc;
    break;

   default:
    rtb_Row2_f = ctrl_custom_turning_frame_P.NaN_Value_ny;
    break;
  }

  /* End of MultiPortSwitch: '<S104>/Controller chosen' */

  /* Sum: '<S104>/Sum' */
  ctrl_custom_turning_frame_B.Sum_f =
    (ctrl_custom_turning_frame_B.Inertiacompensation_a +
     ctrl_custom_turning_frame_B.Sum1_e) + rtb_Row2_f;
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* DiscreteTransferFcn: '<S57>/Discrete Transfer Fcn' incorporates:
     *  Constant: '<S57>/Constant'
     *  Constant: '<S57>/Constant1'
     */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_m =
      ctrl_custom_turning_frame_B.Sum_f -
      ctrl_custom_turning_frame_P.Constant_Value_gh[1] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_g;
    ctrl_custom_turning_frame_B.DiscreteTransferFcn_m =
      ctrl_custom_turning_frame_P.Constant1_Value_e[0] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_m +
      ctrl_custom_turning_frame_P.Constant1_Value_e[1] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_g;
  }

  /* Gain: '<S103>/Finding rotation speed' incorporates:
   *  Gain: '<S103>/K_omega'
   *  Sum: '<S103>/Sum'
   */
  ctrl_custom_turning_frame_B.Findingrotationspeed_j =
    ((ctrl_custom_turning_frame_B.DiscreteTransferFcn_m -
      ctrl_custom_turning_frame_B.Delay_jj) -
     ctrl_custom_turning_frame_P.K_omega * 2.0 * 3.1415926535897931 *
     rtb_Integrator_k) * (1.0 / (6.2831853071795862 *
    ctrl_custom_turning_frame_P.I_s));
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* Gain: '<S106>/Ki' */
    ctrl_custom_turning_frame_B.Ki_m = ctrl_custom_turning_frame_P.Kp / 0.05 *
      rtb_Sum_m;

    /* MATLAB Function: '<S104>/Supervisor' incorporates:
     *  Constant: '<S14>/controller'
     */
    ctrl_custom_turning__Supervisor(ctrl_custom_turning_frame_B.Memory_d,
      ctrl_custom_turning_frame_P.controller_Value,
      ctrl_custom_turning_frame_B.Delay[4],
      &ctrl_custom_turning_frame_B.sf_Supervisor_p);

    /* Delay: '<S58>/Delay' */
    ctrl_custom_turning_frame_B.Delay_mu =
      ctrl_custom_turning_frame_DW.Delay_DSTATE_o;

    /* Delay: '<S113>/Delay' */
    ctrl_custom_turning_frame_B.Delay_e5 =
      ctrl_custom_turning_frame_DW.Delay_DSTATE_h;
  }

  /* MATLAB Function: '<S113>/MATLAB Function' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Tf6'
   *  Constant: '<S14>/K_Tr6'
   *  Constant: '<S14>/Rho'
   */
  /* MATLAB Function 'Thruster control /Thruster 6/Thruster control/MATLAB Function': '<S117>:1' */
  /* '<S117>:1:5' */
  if (rtb_sys[11] < 0.0) {
    rtb_Row1_m = -1.0;
  } else if (rtb_sys[11] > 0.0) {
    rtb_Row1_m = 1.0;
  } else if (rtb_sys[11] == 0.0) {
    rtb_Row1_m = 0.0;
  } else {
    rtb_Row1_m = rtb_sys[11];
  }

  rtb_Row2_f = sqrt(fabs(rtb_sys[11]) / (ctrl_custom_turning_frame_P.Rho *
    rt_powd_snf(ctrl_custom_turning_frame_P.D, 4.0) *
    ctrl_custom_turning_frame_P.K_T6f)) * rtb_Row1_m;

  /* '<S117>:1:7' */
  rtb_psi_dot = tanh(ctrl_custom_turning_frame_P.eps_c * rtb_Row2_f / 27.0) *
    0.5 + 0.5;

  /*  Smooth switching between positive and negative thrust */
  /* '<S117>:1:8' */
  /* '<S117>:1:10' */
  if (ctrl_custom_turning_frame_B.Delay_e5 < 0.0) {
    rtb_Row1_m = -1.0;
  } else if (ctrl_custom_turning_frame_B.Delay_e5 > 0.0) {
    rtb_Row1_m = 1.0;
  } else if (ctrl_custom_turning_frame_B.Delay_e5 == 0.0) {
    rtb_Row1_m = 0.0;
  } else {
    rtb_Row1_m = ctrl_custom_turning_frame_B.Delay_e5;
  }

  rtb_T_r = ((1.0 - rtb_psi_dot) * ctrl_custom_turning_frame_P.K_T6r +
             ctrl_custom_turning_frame_P.K_T6f * rtb_psi_dot) * rtb_Row1_m *
    ctrl_custom_turning_frame_P.Rho * rt_powd_snf(ctrl_custom_turning_frame_P.D,
    4.0) * (ctrl_custom_turning_frame_B.Delay_e5 *
            ctrl_custom_turning_frame_B.Delay_e5);
  ctrl_custom_turning_frame_B.n_d = rtb_Row2_f;

  /* End of MATLAB Function: '<S113>/MATLAB Function' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* DiscreteTransferFcn: '<S113>/Discrete Transfer Fcn' incorporates:
     *  Constant: '<S113>/Constant1'
     *  Constant: '<S113>/Constant2'
     */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_o =
      (ctrl_custom_turning_frame_B.n_d -
       ctrl_custom_turning_frame_P.Constant2_Value_p[1] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k0[0]) -
      ctrl_custom_turning_frame_P.Constant2_Value_p[2] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k0[1];
    ctrl_custom_turning_frame_B.DiscreteTransferFcn_lk =
      (ctrl_custom_turning_frame_P.Constant1_Value_pu[0] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_o +
       ctrl_custom_turning_frame_P.Constant1_Value_pu[1] *
       ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k0[0]) +
      ctrl_custom_turning_frame_P.Constant1_Value_pu[2] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k0[1];

    /* SampleTimeMath: '<S116>/TSamp'
     *
     * About '<S116>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    ctrl_custom_turning_frame_B.TSamp_mr =
      ctrl_custom_turning_frame_B.DiscreteTransferFcn_lk *
      ctrl_custom_turning_frame_P.TSamp_WtEt_l;

    /* Sum: '<S116>/Diff' incorporates:
     *  UnitDelay: '<S116>/UD'
     */
    rtb_Sum_m = ctrl_custom_turning_frame_B.TSamp_mr -
      ctrl_custom_turning_frame_DW.UD_DSTATE_e;

    /* RateLimiter: '<S113>/Acceleration limiter' */
    rtb_psi_dot = rtb_Sum_m - ctrl_custom_turning_frame_DW.PrevY_k4;
    if (rtb_psi_dot >
        ctrl_custom_turning_frame_P.Accelerationlimiter_RisingLim_b) {
      rtb_Sum_m = ctrl_custom_turning_frame_DW.PrevY_k4 +
        ctrl_custom_turning_frame_P.Accelerationlimiter_RisingLim_b;
    } else {
      if (rtb_psi_dot <
          ctrl_custom_turning_frame_P.Accelerationlimiter_FallingLi_j) {
        rtb_Sum_m = ctrl_custom_turning_frame_DW.PrevY_k4 +
          ctrl_custom_turning_frame_P.Accelerationlimiter_FallingLi_j;
      }
    }

    ctrl_custom_turning_frame_DW.PrevY_k4 = rtb_Sum_m;

    /* End of RateLimiter: '<S113>/Acceleration limiter' */

    /* Gain: '<S113>/Inertia compensation' */
    ctrl_custom_turning_frame_B.Inertiacompensation_b3 =
      ctrl_custom_turning_frame_P.I_s * 2.0 * 3.1415926535897931 * rtb_Sum_m;

    /* Sum: '<S113>/Sum1' incorporates:
     *  Gain: '<S113>/Qf_0'
     *  Gain: '<S113>/Qff_0(nr)'
     *  Gain: '<S113>/Qff_1(nr)'
     *  Trigonometry: '<S113>/Trigonometric Function'
     */
    ctrl_custom_turning_frame_B.Sum1_p = tanh
      (ctrl_custom_turning_frame_P.epsilon / ctrl_custom_turning_frame_P.n_max *
       ctrl_custom_turning_frame_B.DiscreteTransferFcn_lk) *
      ctrl_custom_turning_frame_P.Q_f0 + ctrl_custom_turning_frame_P.K_omega *
      2.0 * 3.1415926535897931 *
      ctrl_custom_turning_frame_B.DiscreteTransferFcn_lk;

    /* Memory: '<S113>/Memory' */
    ctrl_custom_turning_frame_B.Memory_o =
      ctrl_custom_turning_frame_DW.Memory_PreviousInput_f2;

    /* Sum: '<S115>/Sum' */
    rtb_Sum_m = ctrl_custom_turning_frame_B.DiscreteTransferFcn_lk -
      ctrl_custom_turning_frame_B.Delay[5];

    /* Gain: '<S115>/Kp' */
    ctrl_custom_turning_frame_B.Kp_k = ctrl_custom_turning_frame_P.Kp *
      rtb_Sum_m;
  }

  /* Integrator: '<S115>/Integrator' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_b,
                       (ctrl_custom_turning_frame_B.reset_iu));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_turning_frame_X.Integrator_CSTATE_ci =
        ctrl_custom_turning_frame_P.Integrator_IC_pr;
    }
  }

  /* MATLAB Function: '<S115>/Core controller: Torque,Power and Combined Torque//Power' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S14>/Constant2'
   *  Constant: '<S14>/Constant3'
   *  Constant: '<S14>/D'
   *  Constant: '<S14>/K_Qr12'
   *  Constant: '<S14>/K_Qr6'
   *  Constant: '<S14>/K_Tf6'
   *  Constant: '<S14>/K_Tr6'
   *  Constant: '<S14>/Rho'
   */
  CorecontrollerTorquePowerandCom(ctrl_custom_turning_frame_P.k_cc,
    ctrl_custom_turning_frame_P.p_cc, ctrl_custom_turning_frame_P.r_cc,
    ctrl_custom_turning_frame_B.Delay[5], ctrl_custom_turning_frame_P.K_T6f,
    ctrl_custom_turning_frame_P.K_q6f, ctrl_custom_turning_frame_P.D, rtb_T_r,
    ctrl_custom_turning_frame_P.Rho, ctrl_custom_turning_frame_P.eps_c,
    ctrl_custom_turning_frame_P.K_T6r, ctrl_custom_turning_frame_P.K_q6r,
    &ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_g);

  /* MultiPortSwitch: '<S113>/Controller chosen' incorporates:
   *  Constant: '<S113>/NaN'
   *  Integrator: '<S115>/Integrator'
   *  Sum: '<S115>/Sum1'
   */
  switch ((int32_T)ctrl_custom_turning_frame_B.Memory_o) {
   case 1:
    rtb_Row2_f = ctrl_custom_turning_frame_B.Kp_k +
      ctrl_custom_turning_frame_X.Integrator_CSTATE_ci;
    break;

   case 2:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_g.Qcq;
    break;

   case 3:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_g.Qcp;
    break;

   case 4:
    rtb_Row2_f = ctrl_custom_turning_frame_B.sf_CorecontrollerTorquePowera_g.Qcc;
    break;

   default:
    rtb_Row2_f = ctrl_custom_turning_frame_P.NaN_Value_m;
    break;
  }

  /* End of MultiPortSwitch: '<S113>/Controller chosen' */

  /* Sum: '<S113>/Sum' */
  ctrl_custom_turning_frame_B.Sum_g =
    (ctrl_custom_turning_frame_B.Inertiacompensation_b3 +
     ctrl_custom_turning_frame_B.Sum1_p) + rtb_Row2_f;
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* DiscreteTransferFcn: '<S58>/Discrete Transfer Fcn' incorporates:
     *  Constant: '<S58>/Constant'
     *  Constant: '<S58>/Constant1'
     */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_ir =
      ctrl_custom_turning_frame_B.Sum_g -
      ctrl_custom_turning_frame_P.Constant_Value_b[1] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_pv;
    ctrl_custom_turning_frame_B.DiscreteTransferFcn_f =
      ctrl_custom_turning_frame_P.Constant1_Value_oi[0] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_ir +
      ctrl_custom_turning_frame_P.Constant1_Value_oi[1] *
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_pv;
  }

  /* Gain: '<S112>/Finding rotation speed' incorporates:
   *  Gain: '<S112>/K_omega'
   *  Sum: '<S112>/Sum'
   */
  ctrl_custom_turning_frame_B.Findingrotationspeed_c =
    ((ctrl_custom_turning_frame_B.DiscreteTransferFcn_f -
      ctrl_custom_turning_frame_B.Delay_mu) -
     ctrl_custom_turning_frame_P.K_omega * 2.0 * 3.1415926535897931 *
     rtb_Integrator_c) * (1.0 / (6.2831853071795862 *
    ctrl_custom_turning_frame_P.I_s));
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* Gain: '<S115>/Ki' */
    ctrl_custom_turning_frame_B.Ki_l = ctrl_custom_turning_frame_P.Kp / 0.05 *
      rtb_Sum_m;

    /* MATLAB Function: '<S113>/Supervisor' incorporates:
     *  Constant: '<S14>/controller'
     */
    ctrl_custom_turning__Supervisor(ctrl_custom_turning_frame_B.Memory_o,
      ctrl_custom_turning_frame_P.controller_Value,
      ctrl_custom_turning_frame_B.Delay[5],
      &ctrl_custom_turning_frame_B.sf_Supervisor_gj);

    /* SignalConversion: '<S15>/TmpSignal ConversionAtDelayInport1' */
    ctrl_custom_turning_frame_B.TmpSignalConversionAtDelayInpor[0] =
      ctrl_custom_turning_frame_B.output[1];
    ctrl_custom_turning_frame_B.TmpSignalConversionAtDelayInpor[1] =
      ctrl_custom_turning_frame_B.output[3];
    ctrl_custom_turning_frame_B.TmpSignalConversionAtDelayInpor[2] =
      ctrl_custom_turning_frame_B.output[5];
    ctrl_custom_turning_frame_B.TmpSignalConversionAtDelayInpor[3] =
      ctrl_custom_turning_frame_B.output[7];
    ctrl_custom_turning_frame_B.TmpSignalConversionAtDelayInpor[4] =
      ctrl_custom_turning_frame_B.output[9];
    ctrl_custom_turning_frame_B.TmpSignalConversionAtDelayInpor[5] =
      ctrl_custom_turning_frame_B.output[11];
  }
}

/* Model update function */
void ctrl_custom_turning_frame_update(void)
{
  /* local block i/o variables */
  real_T rtb_ImpSel_InsertedFor_reset_at;

  /* local scratch DWork variables */
  int32_T ForEach_itr;
  int32_T i;

  /* Update for Integrator: '<S5>/Integrator' */
  ctrl_custom_turning_frame_DW.Integrator_IWORK = 0;

  /* Update for Iterator SubSystem: '<S13>/Optimal angle path and  constraints on rotation speed' */
  for (ForEach_itr = 0; ForEach_itr < 6; ForEach_itr++) {
    /* Update for ForEachSliceSelector: '<S45>/ImpSel_InsertedFor_reset_at_outport_0' */
    rtb_ImpSel_InsertedFor_reset_at =
      ctrl_custom_turning_frame_B.start2[ForEach_itr];
    if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
      /* Update for DiscreteIntegrator: '<S45>/Discrete-Time Integrator' */
      ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].
        DiscreteTimeIntegrator_IC_LOADI = 0U;
      ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].
        DiscreteTimeIntegrator_DSTATE +=
        ctrl_custom_turning_frame_P.CoreSubsys.DiscreteTimeIntegrator_gainval *
        ctrl_custom_turning_frame_B.CoreSubsys[ForEach_itr].MaxRotationRate;
      if (rtb_ImpSel_InsertedFor_reset_at > 0.0) {
        ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].
          DiscreteTimeIntegrator_PrevRese = 1;
      } else if (rtb_ImpSel_InsertedFor_reset_at < 0.0) {
        ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].
          DiscreteTimeIntegrator_PrevRese = -1;
      } else if (rtb_ImpSel_InsertedFor_reset_at == 0.0) {
        ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].
          DiscreteTimeIntegrator_PrevRese = 0;
      } else {
        ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].
          DiscreteTimeIntegrator_PrevRese = 2;
      }

      /* End of Update for DiscreteIntegrator: '<S45>/Discrete-Time Integrator' */

      /* Update for Delay: '<S45>/Delay' */
      ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].Delay_DSTATE =
        ctrl_custom_turning_frame_B.CoreSubsys[ForEach_itr].angle;
    }
  }

  /* End of Update for SubSystem: '<S13>/Optimal angle path and  constraints on rotation speed' */
  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    /* Update for Delay: '<S15>/Delay' */
    for (i = 0; i < 6; i++) {
      ctrl_custom_turning_frame_DW.Delay_DSTATE[i] =
        ctrl_custom_turning_frame_B.TmpSignalConversionAtDelayInpor[i];
    }

    /* End of Update for Delay: '<S15>/Delay' */

    /* Update for Delay: '<S53>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_f = ctrl_custom_turning_frame_B.Qa;

    /* Update for Delay: '<S68>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_k =
      ctrl_custom_turning_frame_B.DiscreteTransferFcn;

    /* Update for DiscreteTransferFcn: '<S68>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states[1] =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states[0];
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states[0] =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp;

    /* Update for UnitDelay: '<S71>/UD' */
    ctrl_custom_turning_frame_DW.UD_DSTATE = ctrl_custom_turning_frame_B.TSamp;

    /* Update for Memory: '<S68>/Memory' */
    ctrl_custom_turning_frame_DW.Memory_PreviousInput =
      ctrl_custom_turning_frame_B.sf_Supervisor.u;

    /* Update for DiscreteTransferFcn: '<S53>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_n;

    /* Update for Delay: '<S54>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_c =
      ctrl_custom_turning_frame_B.sf_ActualForceandTorque_m.Qa;

    /* Update for Delay: '<S77>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_j =
      ctrl_custom_turning_frame_B.DiscreteTransferFcn_l;

    /* Update for DiscreteTransferFcn: '<S77>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j[1] =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j[0];
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j[0] =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_f;

    /* Update for UnitDelay: '<S80>/UD' */
    ctrl_custom_turning_frame_DW.UD_DSTATE_f =
      ctrl_custom_turning_frame_B.TSamp_m;

    /* Update for Memory: '<S77>/Memory' */
    ctrl_custom_turning_frame_DW.Memory_PreviousInput_g =
      ctrl_custom_turning_frame_B.sf_Supervisor_c.u;

    /* Update for DiscreteTransferFcn: '<S54>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j0 =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_fg;

    /* Update for Delay: '<S55>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_m =
      ctrl_custom_turning_frame_B.sf_ActualForceandTorque_f.Qa;

    /* Update for Delay: '<S86>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_e =
      ctrl_custom_turning_frame_B.DiscreteTransferFcn_d;

    /* Update for DiscreteTransferFcn: '<S86>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_f[1] =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_f[0];
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_f[0] =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_k;

    /* Update for UnitDelay: '<S89>/UD' */
    ctrl_custom_turning_frame_DW.UD_DSTATE_p =
      ctrl_custom_turning_frame_B.TSamp_k;

    /* Update for Memory: '<S86>/Memory' */
    ctrl_custom_turning_frame_DW.Memory_PreviousInput_f =
      ctrl_custom_turning_frame_B.sf_Supervisor_j.u;

    /* Update for DiscreteTransferFcn: '<S55>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_m =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_b;

    /* Update for Delay: '<S56>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_kg =
      ctrl_custom_turning_frame_B.sf_ActualForceandTorque_a.Qa;

    /* Update for Delay: '<S95>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_ki =
      ctrl_custom_turning_frame_B.DiscreteTransferFcn_p;

    /* Update for DiscreteTransferFcn: '<S95>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_e[1] =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_e[0];
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_e[0] =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_l;

    /* Update for UnitDelay: '<S98>/UD' */
    ctrl_custom_turning_frame_DW.UD_DSTATE_a =
      ctrl_custom_turning_frame_B.TSamp_d;

    /* Update for Memory: '<S95>/Memory' */
    ctrl_custom_turning_frame_DW.Memory_PreviousInput_d =
      ctrl_custom_turning_frame_B.sf_Supervisor_g.u;

    /* Update for DiscreteTransferFcn: '<S56>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_p =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_fg5;

    /* Update for Delay: '<S57>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_p =
      ctrl_custom_turning_frame_B.sf_ActualForceandTorque_k.Qa;

    /* Update for Delay: '<S104>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_kf =
      ctrl_custom_turning_frame_B.DiscreteTransferFcn_br;

    /* Update for DiscreteTransferFcn: '<S104>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_jn[1] =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_jn[0];
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_jn[0] =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_i;

    /* Update for UnitDelay: '<S107>/UD' */
    ctrl_custom_turning_frame_DW.UD_DSTATE_l =
      ctrl_custom_turning_frame_B.TSamp_k4;

    /* Update for Memory: '<S104>/Memory' */
    ctrl_custom_turning_frame_DW.Memory_PreviousInput_l =
      ctrl_custom_turning_frame_B.sf_Supervisor_p.u;

    /* Update for DiscreteTransferFcn: '<S57>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_g =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_m;

    /* Update for Delay: '<S58>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_o =
      ctrl_custom_turning_frame_B.sf_ActualForceandTorque_c.Qa;

    /* Update for Delay: '<S113>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_h =
      ctrl_custom_turning_frame_B.DiscreteTransferFcn_lk;

    /* Update for DiscreteTransferFcn: '<S113>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k0[1] =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k0[0];
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k0[0] =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_o;

    /* Update for UnitDelay: '<S116>/UD' */
    ctrl_custom_turning_frame_DW.UD_DSTATE_e =
      ctrl_custom_turning_frame_B.TSamp_mr;

    /* Update for Memory: '<S113>/Memory' */
    ctrl_custom_turning_frame_DW.Memory_PreviousInput_f2 =
      ctrl_custom_turning_frame_B.sf_Supervisor_gj.u;

    /* Update for DiscreteTransferFcn: '<S58>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_pv =
      ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_ir;
  }

  if (rtmIsMajorTimeStep(ctrl_custom_turning_frame_M)) {
    rt_ertODEUpdateContinuousStates(&ctrl_custom_turning_frame_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++ctrl_custom_turning_frame_M->Timing.clockTick0)) {
    ++ctrl_custom_turning_frame_M->Timing.clockTickH0;
  }

  ctrl_custom_turning_frame_M->Timing.t[0] = rtsiGetSolverStopTime
    (&ctrl_custom_turning_frame_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++ctrl_custom_turning_frame_M->Timing.clockTick1)) {
      ++ctrl_custom_turning_frame_M->Timing.clockTickH1;
    }

    ctrl_custom_turning_frame_M->Timing.t[1] =
      ctrl_custom_turning_frame_M->Timing.clockTick1 *
      ctrl_custom_turning_frame_M->Timing.stepSize1 +
      ctrl_custom_turning_frame_M->Timing.clockTickH1 *
      ctrl_custom_turning_frame_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void ctrl_custom_turning_frame_derivatives(void)
{
  XDot_ctrl_custom_turning_fram_T *_rtXdot;
  _rtXdot = ((XDot_ctrl_custom_turning_fram_T *)
             ctrl_custom_turning_frame_M->derivs);

  /* Derivatives for TransferFcn: '<S12>/Transfer Fcn2' */
  _rtXdot->TransferFcn2_CSTATE = 0.0;
  _rtXdot->TransferFcn2_CSTATE += ctrl_custom_turning_frame_P.TransferFcn2_A *
    ctrl_custom_turning_frame_X.TransferFcn2_CSTATE;
  _rtXdot->TransferFcn2_CSTATE += ctrl_custom_turning_frame_B.Gain5;

  /* Derivatives for Integrator: '<S8>/Integrator1' */
  _rtXdot->Integrator1_CSTATE = ctrl_custom_turning_frame_B.Sum_c;

  /* Derivatives for Integrator: '<S67>/Integrator' */
  _rtXdot->Integrator_CSTATE_a =
    ctrl_custom_turning_frame_B.Findingrotationspeed;

  /* Derivatives for Integrator: '<S76>/Integrator' */
  _rtXdot->Integrator_CSTATE_f =
    ctrl_custom_turning_frame_B.Findingrotationspeed_h;

  /* Derivatives for Integrator: '<S85>/Integrator' */
  _rtXdot->Integrator_CSTATE_ao =
    ctrl_custom_turning_frame_B.Findingrotationspeed_m;

  /* Derivatives for Integrator: '<S94>/Integrator' */
  _rtXdot->Integrator_CSTATE_k =
    ctrl_custom_turning_frame_B.Findingrotationspeed_p;

  /* Derivatives for Integrator: '<S103>/Integrator' */
  _rtXdot->Integrator_CSTATE_k2 =
    ctrl_custom_turning_frame_B.Findingrotationspeed_j;

  /* Derivatives for Integrator: '<S112>/Integrator' */
  _rtXdot->Integrator_CSTATE_i =
    ctrl_custom_turning_frame_B.Findingrotationspeed_c;

  /* Derivatives for Integrator: '<S5>/Integrator' */
  _rtXdot->Integrator_CSTATE[0] = ctrl_custom_turning_frame_B.Sum1[0];

  /* Derivatives for Integrator: '<S5>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_n[0] = ctrl_custom_turning_frame_B.M1[0];

  /* Derivatives for Integrator: '<S11>/Integrator2' */
  _rtXdot->Integrator2_CSTATE[0] = ctrl_custom_turning_frame_B.Integrator1_i[0];

  /* Derivatives for Integrator: '<S7>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_m[0] =
    ctrl_custom_turning_frame_B.TmpSignalConversionAtMatrixMult[0];

  /* Derivatives for Integrator: '<S11>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_d[0] = ctrl_custom_turning_frame_B.Sum2[0];

  /* Derivatives for Integrator: '<S5>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_j[0] =
    ctrl_custom_turning_frame_B.MatrixMultiply1[0];

  /* Derivatives for Integrator: '<S11>/Integrator' */
  _rtXdot->Integrator_CSTATE_f5[0] = ctrl_custom_turning_frame_B.Sum_m[0];

  /* Derivatives for Integrator: '<S5>/Integrator' */
  _rtXdot->Integrator_CSTATE[1] = ctrl_custom_turning_frame_B.Sum1[1];

  /* Derivatives for Integrator: '<S5>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_n[1] = ctrl_custom_turning_frame_B.M1[1];

  /* Derivatives for Integrator: '<S11>/Integrator2' */
  _rtXdot->Integrator2_CSTATE[1] = ctrl_custom_turning_frame_B.Integrator1_i[1];

  /* Derivatives for Integrator: '<S7>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_m[1] =
    ctrl_custom_turning_frame_B.TmpSignalConversionAtMatrixMult[1];

  /* Derivatives for Integrator: '<S11>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_d[1] = ctrl_custom_turning_frame_B.Sum2[1];

  /* Derivatives for Integrator: '<S5>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_j[1] =
    ctrl_custom_turning_frame_B.MatrixMultiply1[1];

  /* Derivatives for Integrator: '<S11>/Integrator' */
  _rtXdot->Integrator_CSTATE_f5[1] = ctrl_custom_turning_frame_B.Sum_m[1];

  /* Derivatives for Integrator: '<S5>/Integrator' */
  _rtXdot->Integrator_CSTATE[2] = ctrl_custom_turning_frame_B.Sum1[2];

  /* Derivatives for Integrator: '<S5>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_n[2] = ctrl_custom_turning_frame_B.M1[2];

  /* Derivatives for Integrator: '<S11>/Integrator2' */
  _rtXdot->Integrator2_CSTATE[2] = ctrl_custom_turning_frame_B.Integrator1_i[2];

  /* Derivatives for Integrator: '<S7>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_m[2] =
    ctrl_custom_turning_frame_B.TmpSignalConversionAtMatrixMult[2];

  /* Derivatives for Integrator: '<S11>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_d[2] = ctrl_custom_turning_frame_B.Sum2[2];

  /* Derivatives for Integrator: '<S5>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_j[2] =
    ctrl_custom_turning_frame_B.MatrixMultiply1[2];

  /* Derivatives for Integrator: '<S11>/Integrator' */
  _rtXdot->Integrator_CSTATE_f5[2] = ctrl_custom_turning_frame_B.Sum_m[2];

  /* Derivatives for Integrator: '<S70>/Integrator' */
  _rtXdot->Integrator_CSTATE_m = ctrl_custom_turning_frame_B.Ki;

  /* Derivatives for Integrator: '<S79>/Integrator' */
  _rtXdot->Integrator_CSTATE_ko = ctrl_custom_turning_frame_B.Ki_c;

  /* Derivatives for Integrator: '<S88>/Integrator' */
  _rtXdot->Integrator_CSTATE_c = ctrl_custom_turning_frame_B.Ki_o;

  /* Derivatives for Integrator: '<S97>/Integrator' */
  _rtXdot->Integrator_CSTATE_p = ctrl_custom_turning_frame_B.Ki_g;

  /* Derivatives for Integrator: '<S106>/Integrator' */
  _rtXdot->Integrator_CSTATE_n = ctrl_custom_turning_frame_B.Ki_m;

  /* Derivatives for Integrator: '<S115>/Integrator' */
  _rtXdot->Integrator_CSTATE_ci = ctrl_custom_turning_frame_B.Ki_l;
}

/* Model initialize function */
void ctrl_custom_turning_frame_initialize(void)
{
  {
    /* local scratch DWork variables */
    int32_T ForEach_itr;

    /* Start for Iterator SubSystem: '<S13>/Optimal angle path and  constraints on rotation speed' */
    for (ForEach_itr = 0; ForEach_itr < 6; ForEach_itr++) {
      ctrl_custom_turning_frame_B.CoreSubsys[ForEach_itr].angle = 0.0;
      ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].
        DiscreteTimeIntegrator_DSTATE = 0.0;
      ctrl_custom_turning_frame_B.CoreSubsys[ForEach_itr].Delay = 0.0;
      ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].Delay_DSTATE = 0.0;
      ctrl_custom_turning_frame_B.CoreSubsys[ForEach_itr].MaxRotationRate = 0.0;
    }

    /* End of Start for SubSystem: '<S13>/Optimal angle path and  constraints on rotation speed' */
  }

  ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator1_Reset_ZCE = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator1_Reset_ZCE_o = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator1_Reset_ZCE_g = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_g = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_n = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_e = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_l = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_j = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_m = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator2_Reset_ZCE = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_lk = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_p = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_gm = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_ja = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_i = UNINITIALIZED_ZCSIG;
  ctrl_custom_turning_fra_PrevZCX.Integrator_Reset_ZCE_b = UNINITIALIZED_ZCSIG;

  {
    /* local scratch DWork variables */
    int32_T ForEach_itr;
    int32_T i;

    /* InitializeConditions for Integrator: '<S5>/Integrator' */
    if (rtmIsFirstInitCond(ctrl_custom_turning_frame_M)) {
      ctrl_custom_turning_frame_X.Integrator_CSTATE[0] = 0.0;
      ctrl_custom_turning_frame_X.Integrator_CSTATE[1] = 0.0;
      ctrl_custom_turning_frame_X.Integrator_CSTATE[2] = 0.0;
    }

    ctrl_custom_turning_frame_DW.Integrator_IWORK = 1;

    /* End of InitializeConditions for Integrator: '<S5>/Integrator' */

    /* InitializeConditions for TransferFcn: '<S12>/Transfer Fcn2' */
    ctrl_custom_turning_frame_X.TransferFcn2_CSTATE = 0.0;

    /* InitializeConditions for Integrator: '<S8>/Integrator1' */
    ctrl_custom_turning_frame_X.Integrator1_CSTATE =
      ctrl_custom_turning_frame_P.Integrator1_IC;

    /* InitializeConditions for Integrator: '<S67>/Integrator' */
    ctrl_custom_turning_frame_X.Integrator_CSTATE_a =
      ctrl_custom_turning_frame_P.Integrator_IC;

    /* InitializeConditions for Integrator: '<S76>/Integrator' */
    ctrl_custom_turning_frame_X.Integrator_CSTATE_f =
      ctrl_custom_turning_frame_P.Integrator_IC_h;

    /* InitializeConditions for Integrator: '<S85>/Integrator' */
    ctrl_custom_turning_frame_X.Integrator_CSTATE_ao =
      ctrl_custom_turning_frame_P.Integrator_IC_o;

    /* InitializeConditions for Integrator: '<S94>/Integrator' */
    ctrl_custom_turning_frame_X.Integrator_CSTATE_k =
      ctrl_custom_turning_frame_P.Integrator_IC_hz;

    /* InitializeConditions for Integrator: '<S103>/Integrator' */
    ctrl_custom_turning_frame_X.Integrator_CSTATE_k2 =
      ctrl_custom_turning_frame_P.Integrator_IC_d;

    /* InitializeConditions for Integrator: '<S112>/Integrator' */
    ctrl_custom_turning_frame_X.Integrator_CSTATE_i =
      ctrl_custom_turning_frame_P.Integrator_IC_b;

    /* InitializeConditions for Integrator: '<S5>/Integrator1' */
    ctrl_custom_turning_frame_X.Integrator1_CSTATE_n[0] =
      ctrl_custom_turning_frame_P.Integrator1_IC_g[0];

    /* InitializeConditions for Integrator: '<S11>/Integrator2' */
    ctrl_custom_turning_frame_X.Integrator2_CSTATE[0] =
      ctrl_custom_turning_frame_P.Integrator2_IC;

    /* InitializeConditions for Integrator: '<S7>/Integrator1' */
    ctrl_custom_turning_frame_X.Integrator1_CSTATE_m[0] =
      ctrl_custom_turning_frame_P.Integrator1_IC_e;

    /* InitializeConditions for Integrator: '<S11>/Integrator1' */
    ctrl_custom_turning_frame_X.Integrator1_CSTATE_d[0] =
      ctrl_custom_turning_frame_P.Integrator1_IC_b;

    /* InitializeConditions for Integrator: '<S5>/Integrator2' */
    ctrl_custom_turning_frame_X.Integrator2_CSTATE_j[0] =
      ctrl_custom_turning_frame_P.Integrator2_IC_i[0];

    /* InitializeConditions for Integrator: '<S11>/Integrator' */
    ctrl_custom_turning_frame_X.Integrator_CSTATE_f5[0] =
      ctrl_custom_turning_frame_P.Integrator_IC_m;

    /* InitializeConditions for Integrator: '<S5>/Integrator1' */
    ctrl_custom_turning_frame_X.Integrator1_CSTATE_n[1] =
      ctrl_custom_turning_frame_P.Integrator1_IC_g[1];

    /* InitializeConditions for Integrator: '<S11>/Integrator2' */
    ctrl_custom_turning_frame_X.Integrator2_CSTATE[1] =
      ctrl_custom_turning_frame_P.Integrator2_IC;

    /* InitializeConditions for Integrator: '<S7>/Integrator1' */
    ctrl_custom_turning_frame_X.Integrator1_CSTATE_m[1] =
      ctrl_custom_turning_frame_P.Integrator1_IC_e;

    /* InitializeConditions for Integrator: '<S11>/Integrator1' */
    ctrl_custom_turning_frame_X.Integrator1_CSTATE_d[1] =
      ctrl_custom_turning_frame_P.Integrator1_IC_b;

    /* InitializeConditions for Integrator: '<S5>/Integrator2' */
    ctrl_custom_turning_frame_X.Integrator2_CSTATE_j[1] =
      ctrl_custom_turning_frame_P.Integrator2_IC_i[1];

    /* InitializeConditions for Integrator: '<S11>/Integrator' */
    ctrl_custom_turning_frame_X.Integrator_CSTATE_f5[1] =
      ctrl_custom_turning_frame_P.Integrator_IC_m;

    /* InitializeConditions for Integrator: '<S5>/Integrator1' */
    ctrl_custom_turning_frame_X.Integrator1_CSTATE_n[2] =
      ctrl_custom_turning_frame_P.Integrator1_IC_g[2];

    /* InitializeConditions for Integrator: '<S11>/Integrator2' */
    ctrl_custom_turning_frame_X.Integrator2_CSTATE[2] =
      ctrl_custom_turning_frame_P.Integrator2_IC;

    /* InitializeConditions for Integrator: '<S7>/Integrator1' */
    ctrl_custom_turning_frame_X.Integrator1_CSTATE_m[2] =
      ctrl_custom_turning_frame_P.Integrator1_IC_e;

    /* InitializeConditions for Integrator: '<S11>/Integrator1' */
    ctrl_custom_turning_frame_X.Integrator1_CSTATE_d[2] =
      ctrl_custom_turning_frame_P.Integrator1_IC_b;

    /* InitializeConditions for Integrator: '<S5>/Integrator2' */
    ctrl_custom_turning_frame_X.Integrator2_CSTATE_j[2] =
      ctrl_custom_turning_frame_P.Integrator2_IC_i[2];

    /* InitializeConditions for Integrator: '<S11>/Integrator' */
    ctrl_custom_turning_frame_X.Integrator_CSTATE_f5[2] =
      ctrl_custom_turning_frame_P.Integrator_IC_m;

    /* InitializeConditions for Delay: '<S15>/Delay' */
    for (i = 0; i < 6; i++) {
      ctrl_custom_turning_frame_DW.Delay_DSTATE[i] =
        ctrl_custom_turning_frame_P.Delay_InitialCondition;
    }

    /* End of InitializeConditions for Delay: '<S15>/Delay' */

    /* InitializeConditions for Delay: '<S53>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_f =
      ctrl_custom_turning_frame_P.Delay_InitialCondition_m;

    /* InitializeConditions for Delay: '<S68>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_k =
      ctrl_custom_turning_frame_P.Delay_InitialCondition_a;

    /* InitializeConditions for UnitDelay: '<S71>/UD' */
    ctrl_custom_turning_frame_DW.UD_DSTATE =
      ctrl_custom_turning_frame_P.DiscreteDerivative_ICPrevScaled;

    /* InitializeConditions for RateLimiter: '<S68>/Acceleration Limit' */
    ctrl_custom_turning_frame_DW.PrevY =
      ctrl_custom_turning_frame_P.AccelerationLimit_IC;

    /* InitializeConditions for Memory: '<S68>/Memory' */
    ctrl_custom_turning_frame_DW.Memory_PreviousInput =
      ctrl_custom_turning_frame_P.Memory_X0;

    /* InitializeConditions for Integrator: '<S70>/Integrator' */
    ctrl_custom_turning_frame_X.Integrator_CSTATE_m =
      ctrl_custom_turning_frame_P.Integrator_IC_j;

    /* InitializeConditions for DiscreteTransferFcn: '<S53>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialSt_i;

    /* InitializeConditions for Delay: '<S54>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_c =
      ctrl_custom_turning_frame_P.Delay_InitialCondition_j;

    /* InitializeConditions for Delay: '<S77>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_j =
      ctrl_custom_turning_frame_P.Delay_InitialCondition_n;

    /* InitializeConditions for UnitDelay: '<S80>/UD' */
    ctrl_custom_turning_frame_DW.UD_DSTATE_f =
      ctrl_custom_turning_frame_P.DiscreteDerivative_ICPrevScal_l;

    /* InitializeConditions for RateLimiter: '<S77>/Acceleration Limit' */
    ctrl_custom_turning_frame_DW.PrevY_p =
      ctrl_custom_turning_frame_P.AccelerationLimit_IC_l;

    /* InitializeConditions for Memory: '<S77>/Memory' */
    ctrl_custom_turning_frame_DW.Memory_PreviousInput_g =
      ctrl_custom_turning_frame_P.Memory_X0_h;

    /* InitializeConditions for Integrator: '<S79>/Integrator' */
    ctrl_custom_turning_frame_X.Integrator_CSTATE_ko =
      ctrl_custom_turning_frame_P.Integrator_IC_p;

    /* InitializeConditions for DiscreteTransferFcn: '<S54>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j0 =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialSt_p;

    /* InitializeConditions for Delay: '<S55>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_m =
      ctrl_custom_turning_frame_P.Delay_InitialCondition_b;

    /* InitializeConditions for Delay: '<S86>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_e =
      ctrl_custom_turning_frame_P.Delay_InitialCondition_o;

    /* InitializeConditions for UnitDelay: '<S89>/UD' */
    ctrl_custom_turning_frame_DW.UD_DSTATE_p =
      ctrl_custom_turning_frame_P.DiscreteDerivative_ICPrevScal_k;

    /* InitializeConditions for RateLimiter: '<S86>/Acceleration limiter' */
    ctrl_custom_turning_frame_DW.PrevY_k =
      ctrl_custom_turning_frame_P.Accelerationlimiter_IC;

    /* InitializeConditions for Memory: '<S86>/Memory' */
    ctrl_custom_turning_frame_DW.Memory_PreviousInput_f =
      ctrl_custom_turning_frame_P.Memory_X0_d;

    /* InitializeConditions for Integrator: '<S88>/Integrator' */
    ctrl_custom_turning_frame_X.Integrator_CSTATE_c =
      ctrl_custom_turning_frame_P.Integrator_IC_k;

    /* InitializeConditions for DiscreteTransferFcn: '<S55>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_m =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialSt_n;

    /* InitializeConditions for Delay: '<S56>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_kg =
      ctrl_custom_turning_frame_P.Delay_InitialCondition_d;

    /* InitializeConditions for Delay: '<S95>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_ki =
      ctrl_custom_turning_frame_P.Delay_InitialCondition_b4;

    /* InitializeConditions for UnitDelay: '<S98>/UD' */
    ctrl_custom_turning_frame_DW.UD_DSTATE_a =
      ctrl_custom_turning_frame_P.DiscreteDerivative_ICPrevScal_i;

    /* InitializeConditions for RateLimiter: '<S95>/Acceleration limiter' */
    ctrl_custom_turning_frame_DW.PrevY_m =
      ctrl_custom_turning_frame_P.Accelerationlimiter_IC_i;

    /* InitializeConditions for Memory: '<S95>/Memory' */
    ctrl_custom_turning_frame_DW.Memory_PreviousInput_d =
      ctrl_custom_turning_frame_P.Memory_X0_b;

    /* InitializeConditions for Integrator: '<S97>/Integrator' */
    ctrl_custom_turning_frame_X.Integrator_CSTATE_p =
      ctrl_custom_turning_frame_P.Integrator_IC_l;

    /* InitializeConditions for DiscreteTransferFcn: '<S56>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_p =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialSt_g;

    /* InitializeConditions for Delay: '<S57>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_p =
      ctrl_custom_turning_frame_P.Delay_InitialCondition_g;

    /* InitializeConditions for Delay: '<S104>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_kf =
      ctrl_custom_turning_frame_P.Delay_InitialCondition_p;

    /* InitializeConditions for UnitDelay: '<S107>/UD' */
    ctrl_custom_turning_frame_DW.UD_DSTATE_l =
      ctrl_custom_turning_frame_P.DiscreteDerivative_ICPrevScal_b;

    /* InitializeConditions for RateLimiter: '<S104>/Acceleration limiter' */
    ctrl_custom_turning_frame_DW.PrevY_mo =
      ctrl_custom_turning_frame_P.Accelerationlimiter_IC_d;

    /* InitializeConditions for Memory: '<S104>/Memory' */
    ctrl_custom_turning_frame_DW.Memory_PreviousInput_l =
      ctrl_custom_turning_frame_P.Memory_X0_n;

    /* InitializeConditions for Integrator: '<S106>/Integrator' */
    ctrl_custom_turning_frame_X.Integrator_CSTATE_n =
      ctrl_custom_turning_frame_P.Integrator_IC_hh;

    /* InitializeConditions for DiscreteTransferFcn: '<S57>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_g =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialSt_k;

    /* InitializeConditions for Delay: '<S58>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_o =
      ctrl_custom_turning_frame_P.Delay_InitialCondition_md;

    /* InitializeConditions for Delay: '<S113>/Delay' */
    ctrl_custom_turning_frame_DW.Delay_DSTATE_h =
      ctrl_custom_turning_frame_P.Delay_InitialCondition_gp;

    /* InitializeConditions for DiscreteTransferFcn: '<S68>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states[0] =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialStat;

    /* InitializeConditions for DiscreteTransferFcn: '<S77>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j[0] =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialSt_f;

    /* InitializeConditions for DiscreteTransferFcn: '<S86>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_f[0] =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialSt_h;

    /* InitializeConditions for DiscreteTransferFcn: '<S95>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_e[0] =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialS_nq;

    /* InitializeConditions for DiscreteTransferFcn: '<S104>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_jn[0] =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialS_il;

    /* InitializeConditions for DiscreteTransferFcn: '<S113>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k0[0] =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialS_fz;

    /* InitializeConditions for DiscreteTransferFcn: '<S68>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states[1] =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialStat;

    /* InitializeConditions for DiscreteTransferFcn: '<S77>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j[1] =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialSt_f;

    /* InitializeConditions for DiscreteTransferFcn: '<S86>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_f[1] =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialSt_h;

    /* InitializeConditions for DiscreteTransferFcn: '<S95>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_e[1] =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialS_nq;

    /* InitializeConditions for DiscreteTransferFcn: '<S104>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_jn[1] =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialS_il;

    /* InitializeConditions for DiscreteTransferFcn: '<S113>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k0[1] =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialS_fz;

    /* InitializeConditions for UnitDelay: '<S116>/UD' */
    ctrl_custom_turning_frame_DW.UD_DSTATE_e =
      ctrl_custom_turning_frame_P.DiscreteDerivative_ICPrevSca_iv;

    /* InitializeConditions for RateLimiter: '<S113>/Acceleration limiter' */
    ctrl_custom_turning_frame_DW.PrevY_k4 =
      ctrl_custom_turning_frame_P.Accelerationlimiter_IC_g;

    /* InitializeConditions for Memory: '<S113>/Memory' */
    ctrl_custom_turning_frame_DW.Memory_PreviousInput_f2 =
      ctrl_custom_turning_frame_P.Memory_X0_m;

    /* InitializeConditions for Integrator: '<S115>/Integrator' */
    ctrl_custom_turning_frame_X.Integrator_CSTATE_ci =
      ctrl_custom_turning_frame_P.Integrator_IC_pr;

    /* InitializeConditions for DiscreteTransferFcn: '<S58>/Discrete Transfer Fcn' */
    ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_pv =
      ctrl_custom_turning_frame_P.DiscreteTransferFcn_InitialSt_j;

    /* SystemInitialize for Iterator SubSystem: '<S13>/Optimal angle path and  constraints on rotation speed' */
    for (ForEach_itr = 0; ForEach_itr < 6; ForEach_itr++) {
      /* InitializeConditions for DiscreteIntegrator: '<S45>/Discrete-Time Integrator' */
      ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].
        DiscreteTimeIntegrator_IC_LOADI = 1U;
      ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].
        DiscreteTimeIntegrator_PrevRese = 2;

      /* InitializeConditions for Delay: '<S45>/Delay' */
      ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr].Delay_DSTATE =
        ctrl_custom_turning_frame_P.CoreSubsys.Delay_InitialCondition;
    }

    /* End of SystemInitialize for SubSystem: '<S13>/Optimal angle path and  constraints on rotation speed' */

    /* set "at time zero" to false */
    if (rtmIsFirstInitCond(ctrl_custom_turning_frame_M)) {
      rtmSetFirstInitCond(ctrl_custom_turning_frame_M, 0);
    }
  }
}

/* Model terminate function */
void ctrl_custom_turning_frame_terminate(void)
{
  /* (no terminate code required) */
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
  ctrl_custom_turning_frame_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  ctrl_custom_turning_frame_update();
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
  ctrl_custom_turning_frame_initialize();
}

void MdlTerminate(void)
{
  ctrl_custom_turning_frame_terminate();
}

/* Registration function */
RT_MODEL_ctrl_custom_turning__T *ctrl_custom_turning_frame(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)ctrl_custom_turning_frame_M, 0,
                sizeof(RT_MODEL_ctrl_custom_turning__T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&ctrl_custom_turning_frame_M->solverInfo,
                          &ctrl_custom_turning_frame_M->Timing.simTimeStep);
    rtsiSetTPtr(&ctrl_custom_turning_frame_M->solverInfo, &rtmGetTPtr
                (ctrl_custom_turning_frame_M));
    rtsiSetStepSizePtr(&ctrl_custom_turning_frame_M->solverInfo,
                       &ctrl_custom_turning_frame_M->Timing.stepSize0);
    rtsiSetdXPtr(&ctrl_custom_turning_frame_M->solverInfo,
                 &ctrl_custom_turning_frame_M->derivs);
    rtsiSetContStatesPtr(&ctrl_custom_turning_frame_M->solverInfo, (real_T **)
                         &ctrl_custom_turning_frame_M->contStates);
    rtsiSetNumContStatesPtr(&ctrl_custom_turning_frame_M->solverInfo,
      &ctrl_custom_turning_frame_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&ctrl_custom_turning_frame_M->solverInfo,
      &ctrl_custom_turning_frame_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&ctrl_custom_turning_frame_M->solverInfo,
      &ctrl_custom_turning_frame_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&ctrl_custom_turning_frame_M->solverInfo,
      &ctrl_custom_turning_frame_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&ctrl_custom_turning_frame_M->solverInfo,
                          (&rtmGetErrorStatus(ctrl_custom_turning_frame_M)));
    rtsiSetRTModelPtr(&ctrl_custom_turning_frame_M->solverInfo,
                      ctrl_custom_turning_frame_M);
  }

  rtsiSetSimTimeStep(&ctrl_custom_turning_frame_M->solverInfo, MAJOR_TIME_STEP);
  ctrl_custom_turning_frame_M->intgData.y = ctrl_custom_turning_frame_M->odeY;
  ctrl_custom_turning_frame_M->intgData.f[0] = ctrl_custom_turning_frame_M->
    odeF[0];
  ctrl_custom_turning_frame_M->intgData.f[1] = ctrl_custom_turning_frame_M->
    odeF[1];
  ctrl_custom_turning_frame_M->intgData.f[2] = ctrl_custom_turning_frame_M->
    odeF[2];
  ctrl_custom_turning_frame_M->contStates = ((real_T *)
    &ctrl_custom_turning_frame_X);
  rtsiSetSolverData(&ctrl_custom_turning_frame_M->solverInfo, (void *)
                    &ctrl_custom_turning_frame_M->intgData);
  rtsiSetSolverName(&ctrl_custom_turning_frame_M->solverInfo,"ode3");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = ctrl_custom_turning_frame_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    ctrl_custom_turning_frame_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    ctrl_custom_turning_frame_M->Timing.sampleTimes =
      (&ctrl_custom_turning_frame_M->Timing.sampleTimesArray[0]);
    ctrl_custom_turning_frame_M->Timing.offsetTimes =
      (&ctrl_custom_turning_frame_M->Timing.offsetTimesArray[0]);

    /* task periods */
    ctrl_custom_turning_frame_M->Timing.sampleTimes[0] = (0.0);
    ctrl_custom_turning_frame_M->Timing.sampleTimes[1] = (0.01);

    /* task offsets */
    ctrl_custom_turning_frame_M->Timing.offsetTimes[0] = (0.0);
    ctrl_custom_turning_frame_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(ctrl_custom_turning_frame_M,
             &ctrl_custom_turning_frame_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = ctrl_custom_turning_frame_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    ctrl_custom_turning_frame_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ctrl_custom_turning_frame_M, -1);
  ctrl_custom_turning_frame_M->Timing.stepSize0 = 0.01;
  ctrl_custom_turning_frame_M->Timing.stepSize1 = 0.01;
  rtmSetFirstInitCond(ctrl_custom_turning_frame_M, 1);

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    ctrl_custom_turning_frame_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(ctrl_custom_turning_frame_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(ctrl_custom_turning_frame_M->rtwLogInfo, (NULL));
    rtliSetLogT(ctrl_custom_turning_frame_M->rtwLogInfo, "tout");
    rtliSetLogX(ctrl_custom_turning_frame_M->rtwLogInfo, "");
    rtliSetLogXFinal(ctrl_custom_turning_frame_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(ctrl_custom_turning_frame_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(ctrl_custom_turning_frame_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(ctrl_custom_turning_frame_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(ctrl_custom_turning_frame_M->rtwLogInfo, 1);
    rtliSetLogY(ctrl_custom_turning_frame_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(ctrl_custom_turning_frame_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(ctrl_custom_turning_frame_M->rtwLogInfo, (NULL));
  }

  ctrl_custom_turning_frame_M->solverInfoPtr =
    (&ctrl_custom_turning_frame_M->solverInfo);
  ctrl_custom_turning_frame_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&ctrl_custom_turning_frame_M->solverInfo, 0.01);
  rtsiSetSolverMode(&ctrl_custom_turning_frame_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  ctrl_custom_turning_frame_M->blockIO = ((void *) &ctrl_custom_turning_frame_B);
  (void) memset(((void *) &ctrl_custom_turning_frame_B), 0,
                sizeof(B_ctrl_custom_turning_frame_T));

  /* parameters */
  ctrl_custom_turning_frame_M->defaultParam = ((real_T *)
    &ctrl_custom_turning_frame_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &ctrl_custom_turning_frame_X;
    ctrl_custom_turning_frame_M->contStates = (x);
    (void) memset((void *)&ctrl_custom_turning_frame_X, 0,
                  sizeof(X_ctrl_custom_turning_frame_T));
  }

  /* states (dwork) */
  ctrl_custom_turning_frame_M->dwork = ((void *) &ctrl_custom_turning_frame_DW);
  (void) memset((void *)&ctrl_custom_turning_frame_DW, 0,
                sizeof(DW_ctrl_custom_turning_frame_T));

  /* Initialize Sizes */
  ctrl_custom_turning_frame_M->Sizes.numContStates = (35);/* Number of continuous states */
  ctrl_custom_turning_frame_M->Sizes.numPeriodicContStates = (0);/* Number of periodic continuous states */
  ctrl_custom_turning_frame_M->Sizes.numY = (0);/* Number of model outputs */
  ctrl_custom_turning_frame_M->Sizes.numU = (0);/* Number of model inputs */
  ctrl_custom_turning_frame_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  ctrl_custom_turning_frame_M->Sizes.numSampTimes = (2);/* Number of sample times */
  ctrl_custom_turning_frame_M->Sizes.numBlocks = (603);/* Number of blocks */
  ctrl_custom_turning_frame_M->Sizes.numBlockIO = (217);/* Number of block outputs */
  ctrl_custom_turning_frame_M->Sizes.numBlockPrms = (986);/* Sum of parameter "widths" */
  return ctrl_custom_turning_frame_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/

/*========================================================================*
 * NI VeriStand Model Framework code generation
 *
 * Model : ctrl_custom_turning_frame
 * Model version : 1.106
 * VeriStand Model Framework version : 2017.0.0.143 (2017)
 * Source generated on : Sun Jul 23 16:07:01 2017
 *========================================================================*/

/* This file contains automatically generated code for functions
 * to update the inports and outports of a Simulink/Realtime Workshop
 * model. Calls to these functions should be made before each step is taken
 * (inports, call SetExternalInputs) and after each step is taken
 * (outports, call SetExternalOutputs.)
 */
#ifdef NI_ROOTMODEL_ctrl_custom_turning_frame
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

   case 14:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 15:
    return (( double *)ptr)[subindex];

   case 17:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 18:
    return (( double *)ptr)[subindex];

   case 19:
    return NIRT_GetValueByDataType(ptr,subindex,6,Complex);

   case 20:
    return NIRT_GetValueByDataType(ptr,subindex,6,Complex);

   case 21:
    return NIRT_GetValueByDataType(ptr,subindex,3,Complex);

   case 22:
    return NIRT_GetValueByDataType(ptr,subindex,3,Complex);

   case 23:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 24:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 25:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 26:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 27:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 28:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 29:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 30:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 33:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 34:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 35:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 36:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 37:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 38:
    return NIRT_GetValueByDataType(ptr,subindex,8,Complex);

   case 39:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 40:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 42:
    return NIRT_GetValueByDataType(ptr,subindex,8,Complex);

   case 43:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 44:
    return (( double *)ptr)[subindex];

   case 45:
    return (( double *)ptr)[subindex];

   case 46:
    return NIRT_GetValueByDataType(ptr,subindex,45,Complex);

   case 47:
    return (( double *)ptr)[subindex];

   case 48:
    return (( double *)ptr)[subindex];

   case 49:
    return (( double *)ptr)[subindex];

   case 50:
    return (( double *)ptr)[subindex];

   case 51:
    return (( double *)ptr)[subindex];

   case 52:
    return (( double *)ptr)[subindex];

   case 53:
    return (( double *)ptr)[subindex];

   case 54:
    return NIRT_GetValueByDataType(ptr,subindex,53,Complex);

   case 55:
    return (( double *)ptr)[subindex];

   case 56:
    return (( double *)ptr)[subindex];

   case 57:
    return (( double *)ptr)[subindex];

   case 58:
    return (( double *)ptr)[subindex];

   case 59:
    return (( double *)ptr)[subindex];

   case 60:
    return (( double *)ptr)[subindex];

   case 61:
    return (( double *)ptr)[subindex];

   case 62:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 63:
    return NIRT_GetValueByDataType(ptr,subindex,7,Complex);

   case 64:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 65:
    return NIRT_GetValueByDataType(ptr,subindex,7,Complex);
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

   case 14:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 15:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 17:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 18:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 19:
    //Type is enum. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 6, Complex);

   case 20:
    //Type is enum. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 6, Complex);

   case 21:
    //Type is renamed. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 3, Complex);

   case 22:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 3, Complex);

   case 23:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 24:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 25:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 26:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 27:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 28:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 29:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 30:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 33:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 34:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 35:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 36:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 37:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 38:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 8, Complex);

   case 39:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 40:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 42:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 8, Complex);

   case 43:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 44:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 45:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 46:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 45, Complex);

   case 47:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 48:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 49:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 50:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 51:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 52:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 53:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 54:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 53, Complex);

   case 55:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 56:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 57:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 58:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 59:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 60:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 61:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 62:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 63:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 7, Complex);

   case 64:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 65:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 7, Complex);
  }

  //No matching datatype conversion
  return NI_ERROR;
}

extern ctrl_custom_turning_frame_rtModel *S;
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

  // ctrl_custom_turning_frame/Input to model
  if (TaskSampleHit[1]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.Inputtomodel, 0,
      data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/start
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.start, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_p_x
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.K_p_x, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_p_y
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.K_p_y, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_p_psi
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.K_p_psi, 0, data[index
      ++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_i_psi
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.K_i_psi, 0, data[index
      ++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_i_x
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.K_i_x, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_i_y
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.K_i_y, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_d_psi
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.K_d_psi, 0, data[index
      ++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_d_x
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.K_d_x, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_d_y
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.K_d_y, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Pose/x_m
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.x_m, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Pose/y_m
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.y_m, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Pose/psi_m
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.psi_m, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Reference basin/Input to model
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.Inputtomodel_m, 0,
      data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Controll switch
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.Controllswitch, 0,
      data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/start2
  if (TaskSampleHit[1]) {
    for (count = 0; count < 6; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.start2, count,
        data[index++], 24, 0);
    }
  } else {
    index += 6;
  }

  // ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/rpm1
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.rpm1, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/rpm2
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.rpm2, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/rpm3
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.rpm3, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/rpm4
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.rpm4, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/rpm5
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.rpm5, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/rpm6
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.rpm6, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster measurment/thr_angle_1
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.thr_angle_1, 0,
      data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster measurment/thr_angle_2
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.thr_angle_2, 0,
      data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster measurment/thr_angle_3
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.thr_angle_3, 0,
      data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster measurment/thr_angle_4
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.thr_angle_4, 0,
      data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster measurment/thr_angle_5
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.thr_angle_5, 0,
      data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster measurment/thr_angle_6
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.thr_angle_6, 0,
      data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thrust allocation/Angle_controller
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.Angle_controller, 0,
      data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Referance/x_ref
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.x_ref, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Referance/y_ref
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.y_ref, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/w_x
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.w_x, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/w_y
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.w_y, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/w_psi
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.w_psi, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/zeta_psi
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.zeta_psi, 0, data[index
      ++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/zeta_x
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.zeta_x, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/zeta_y
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.zeta_y, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/T_psi
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.T_psi, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/T_x
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.T_x, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/T_y
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.T_y, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Referance/psi_ref
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.psi_ref, 0, data[index
      ++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Core controller/reset
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.reset, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Core controller/reset
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.reset_l, 0, data[index
      ++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Core controller/reset
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.reset_i, 0, data[index
      ++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Core controller/reset
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.reset_h, 0, data[index
      ++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Core controller/reset
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.reset_e, 0, data[index
      ++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Core controller/reset
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.reset_iu, 0, data[index
      ++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/IMU/Acc_x
  if (TaskSampleHit[1]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.Acc_x, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/IMU/Acc_y
  if (TaskSampleHit[1]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.Acc_y, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/IMU/Acc_z
  if (TaskSampleHit[1]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.Acc_z, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/IMU/Gyro_x
  if (TaskSampleHit[1]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.Gyro_x, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/IMU/Gyro_y
  if (TaskSampleHit[1]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.Gyro_y, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/IMU/Gyro_z
  if (TaskSampleHit[1]) {
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_B.Gyro_z, 0, data[index++],
      0, 0);
  } else {
    index += 1;
  }
}                                      /* of SetExternalInputs */

int32_t NumInputPorts(void)
{
  return 59;
}

int32_t NumOutputPorts(void)
{
  return 38;
}

double ni_extout[38];

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

  // ctrl_custom_turning_frame/Output to Workspace: Virtual Signal # 0
  if (TaskSampleHit[1]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
      &ctrl_custom_turning_frame_RGND, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/tau_surge: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Switch, 0, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/tau_sway: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Switch, 1, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/tau_psi: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Switch, 2, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/psi_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Gain5_n, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/x_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Gain, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/y_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Gain1, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/tau_commanded_psi: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.commanded_tau, 2, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/tau_commanded_x: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.commanded_tau, 0, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Observer output /eta_hat output/x_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Integrator, 0, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Observer output /eta_hat output/y_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Integrator, 1, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Observer output /eta_hat output/psi_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Sum, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Observer output /nu_hat output/u_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Integrator1, 0, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Observer output /nu_hat output/v_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Integrator1, 1, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Observer output /nu_hat output/r_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Integrator1, 2, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Observer output /nu_dot_hat output/u_dot_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_turning_frame_B.M1,
      0, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Observer output /nu_dot_hat output/v_dot_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_turning_frame_B.M1,
      1, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Observer output /nu_dot_hat output/r_dot_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_turning_frame_B.M1,
      2, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Observer output /b_hat output/b_x_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Integrator2, 0, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Observer output /b_hat output/b_y_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Integrator2, 1, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Observer output /b_hat output/b_psi_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Integrator2, 2, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/gain/alpha1: Virtual Signal # 0
  if (TaskSampleHit[1]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Saturation1, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/gain/alpha2: Virtual Signal # 0
  if (TaskSampleHit[1]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Saturation2, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/gain/alpha3: Virtual Signal # 0
  if (TaskSampleHit[1]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Saturation3, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/gain/alpha4: Virtual Signal # 0
  if (TaskSampleHit[1]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Saturation4, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/gain/alpha5: Virtual Signal # 0
  if (TaskSampleHit[1]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Saturation5, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/gain/alpha6: Virtual Signal # 0
  if (TaskSampleHit[1]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Saturation6, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/gain/u1: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Tc_out, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/gain/u2: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.sf_MATLABFunction2.Tc_out, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/gain/u3: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.sf_MATLABFunction3.Tc_out, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/gain/u4: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.sf_MATLABFunction4.Tc_out, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/gain/u5: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.sf_MATLABFunction5.Tc_out, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/gain/u6: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.sf_MATLABFunction6.Tc_out, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/tau_commanded_y: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.commanded_tau, 1, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/PID controller/y_error: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.regulationerror, 1, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/PID controller/psi_error: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.Gain5_a, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/PID controller/x_error: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_B.regulationerror, 0, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom_turning_frame/Thruster control /Thruster 1/Propeller Hydrodynamics/Control_test_Pa: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_turning_frame_B.Pa,
      0, 0, 0);
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

  // ctrl_custom_turning_frame/Output to Workspace: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType((real_T*)
    &ctrl_custom_turning_frame_RGND, 0, 0, 0);

  // ctrl_custom_turning_frame/tau_surge: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Switch, 0, 23, 0);

  // ctrl_custom_turning_frame/tau_sway: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Switch, 1, 23, 0);

  // ctrl_custom_turning_frame/tau_psi: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Switch, 2, 23, 0);

  // ctrl_custom_turning_frame/psi_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Gain5_n, 0, 0, 0);

  // ctrl_custom_turning_frame/x_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_turning_frame_B.Gain,
    0, 0, 0);

  // ctrl_custom_turning_frame/y_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Gain1, 0, 0, 0);

  // ctrl_custom_turning_frame/tau_commanded_psi: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.commanded_tau, 2, 23, 0);

  // ctrl_custom_turning_frame/tau_commanded_x: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.commanded_tau, 0, 23, 0);

  // ctrl_custom_turning_frame/Observer output /eta_hat output/x_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Integrator, 0, 23, 0);

  // ctrl_custom_turning_frame/Observer output /eta_hat output/y_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Integrator, 1, 23, 0);

  // ctrl_custom_turning_frame/Observer output /eta_hat output/psi_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_turning_frame_B.Sum,
    0, 0, 0);

  // ctrl_custom_turning_frame/Observer output /nu_hat output/u_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Integrator1, 0, 23, 0);

  // ctrl_custom_turning_frame/Observer output /nu_hat output/v_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Integrator1, 1, 23, 0);

  // ctrl_custom_turning_frame/Observer output /nu_hat output/r_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Integrator1, 2, 23, 0);

  // ctrl_custom_turning_frame/Observer output /nu_dot_hat output/u_dot_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_turning_frame_B.M1,
    0, 23, 0);

  // ctrl_custom_turning_frame/Observer output /nu_dot_hat output/v_dot_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_turning_frame_B.M1,
    1, 23, 0);

  // ctrl_custom_turning_frame/Observer output /nu_dot_hat output/r_dot_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_turning_frame_B.M1,
    2, 23, 0);

  // ctrl_custom_turning_frame/Observer output /b_hat output/b_x_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Integrator2, 0, 23, 0);

  // ctrl_custom_turning_frame/Observer output /b_hat output/b_y_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Integrator2, 1, 23, 0);

  // ctrl_custom_turning_frame/Observer output /b_hat output/b_psi_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Integrator2, 2, 23, 0);

  // ctrl_custom_turning_frame/gain/alpha1: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Saturation1, 0, 0, 0);

  // ctrl_custom_turning_frame/gain/alpha2: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Saturation2, 0, 0, 0);

  // ctrl_custom_turning_frame/gain/alpha3: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Saturation3, 0, 0, 0);

  // ctrl_custom_turning_frame/gain/alpha4: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Saturation4, 0, 0, 0);

  // ctrl_custom_turning_frame/gain/alpha5: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Saturation5, 0, 0, 0);

  // ctrl_custom_turning_frame/gain/alpha6: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Saturation6, 0, 0, 0);

  // ctrl_custom_turning_frame/gain/u1: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Tc_out, 0, 0, 0);

  // ctrl_custom_turning_frame/gain/u2: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.sf_MATLABFunction2.Tc_out, 0, 0, 0);

  // ctrl_custom_turning_frame/gain/u3: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.sf_MATLABFunction3.Tc_out, 0, 0, 0);

  // ctrl_custom_turning_frame/gain/u4: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.sf_MATLABFunction4.Tc_out, 0, 0, 0);

  // ctrl_custom_turning_frame/gain/u5: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.sf_MATLABFunction5.Tc_out, 0, 0, 0);

  // ctrl_custom_turning_frame/gain/u6: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.sf_MATLABFunction6.Tc_out, 0, 0, 0);

  // ctrl_custom_turning_frame/tau_commanded_y: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.commanded_tau, 1, 23, 0);

  // ctrl_custom_turning_frame/PID controller/y_error: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.regulationerror, 1, 23, 0);

  // ctrl_custom_turning_frame/PID controller/psi_error: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.Gain5_a, 0, 0, 0);

  // ctrl_custom_turning_frame/PID controller/x_error: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_turning_frame_B.regulationerror, 0, 23, 0);

  // ctrl_custom_turning_frame/Thruster control /Thruster 1/Propeller Hydrodynamics/Control_test_Pa: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_turning_frame_B.Pa,
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
  { 0, "ctrl_custom_turning_frame/Thrust allocation/C/Value", offsetof
    (P_ctrl_custom_turning_frame_T, C[0]), 27, 24, 2, 0, 0 },

  { 1, "ctrl_custom_turning_frame/Thruster Parameters /D/Value", offsetof
    (P_ctrl_custom_turning_frame_T, D), 62, 1, 2, 2, 0 },

  { 2,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Shaft dynamics/Finding rotation speed/Gain/I_s",
    offsetof(P_ctrl_custom_turning_frame_T, I_s), 62, 1, 2, 4, 0 },

  { 3,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Inertia compensation/Gain/I_s",
    offsetof(P_ctrl_custom_turning_frame_T, I_s), 62, 1, 2, 6, 0 },

  { 4,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Shaft dynamics/Finding rotation speed/Gain/I_s",
    offsetof(P_ctrl_custom_turning_frame_T, I_s), 62, 1, 2, 8, 0 },

  { 5,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Inertia compensation/Gain/I_s",
    offsetof(P_ctrl_custom_turning_frame_T, I_s), 62, 1, 2, 10, 0 },

  { 6,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Shaft dynamics/Finding rotation speed/Gain/I_s",
    offsetof(P_ctrl_custom_turning_frame_T, I_s), 62, 1, 2, 12, 0 },

  { 7,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Inertia compensation/Gain/I_s",
    offsetof(P_ctrl_custom_turning_frame_T, I_s), 62, 1, 2, 14, 0 },

  { 8,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Shaft dynamics/Finding rotation speed/Gain/I_s",
    offsetof(P_ctrl_custom_turning_frame_T, I_s), 62, 1, 2, 16, 0 },

  { 9,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Inertia compensation/Gain/I_s",
    offsetof(P_ctrl_custom_turning_frame_T, I_s), 62, 1, 2, 18, 0 },

  { 10,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Shaft dynamics/Finding rotation speed/Gain/I_s",
    offsetof(P_ctrl_custom_turning_frame_T, I_s), 62, 1, 2, 20, 0 },

  { 11,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Inertia compensation/Gain/I_s",
    offsetof(P_ctrl_custom_turning_frame_T, I_s), 62, 1, 2, 22, 0 },

  { 12,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Shaft dynamics/Finding rotation speed/Gain/I_s",
    offsetof(P_ctrl_custom_turning_frame_T, I_s), 62, 1, 2, 24, 0 },

  { 13,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Inertia compensation/Gain/I_s",
    offsetof(P_ctrl_custom_turning_frame_T, I_s), 62, 1, 2, 26, 0 },

  { 14, "ctrl_custom_turning_frame/Thruster Parameters /K_Tf1/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_T1f), 62, 1, 2, 28, 0 },

  { 15, "ctrl_custom_turning_frame/Thruster Parameters /K_Tr1/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_T1r), 62, 1, 2, 30, 0 },

  { 16, "ctrl_custom_turning_frame/Thruster Parameters /K_Tf2/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_T2f), 62, 1, 2, 32, 0 },

  { 17, "ctrl_custom_turning_frame/Thruster Parameters /K_Tr2/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_T2r), 62, 1, 2, 34, 0 },

  { 18, "ctrl_custom_turning_frame/Thruster Parameters /K_Tf3/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_T3f), 62, 1, 2, 36, 0 },

  { 19, "ctrl_custom_turning_frame/Thruster Parameters /K_Tr3/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_T3r), 62, 1, 2, 38, 0 },

  { 20, "ctrl_custom_turning_frame/Thruster Parameters /K_Tf4/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_T4f), 62, 1, 2, 40, 0 },

  { 21, "ctrl_custom_turning_frame/Thruster Parameters /K_Tr4/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_T4r), 62, 1, 2, 42, 0 },

  { 22, "ctrl_custom_turning_frame/Thruster Parameters /K_Tf5/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_T5f), 62, 1, 2, 44, 0 },

  { 23, "ctrl_custom_turning_frame/Thruster Parameters /K_Tr5/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_T5r), 62, 1, 2, 46, 0 },

  { 24, "ctrl_custom_turning_frame/Thruster Parameters /K_Tf6/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_T6f), 62, 1, 2, 48, 0 },

  { 25, "ctrl_custom_turning_frame/Thruster Parameters /K_Tr6/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_T6r), 62, 1, 2, 50, 0 },

  { 26,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Shaft dynamics/K_omega/Gain/K_omega",
    offsetof(P_ctrl_custom_turning_frame_T, K_omega), 62, 1, 2, 52, 0 },

  { 27,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Qff_1(nr)/Gain/K_omega",
    offsetof(P_ctrl_custom_turning_frame_T, K_omega), 62, 1, 2, 54, 0 },

  { 28,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Shaft dynamics/K_omega/Gain/K_omega",
    offsetof(P_ctrl_custom_turning_frame_T, K_omega), 62, 1, 2, 56, 0 },

  { 29,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Qff_1(nr)/Gain/K_omega",
    offsetof(P_ctrl_custom_turning_frame_T, K_omega), 62, 1, 2, 58, 0 },

  { 30,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Shaft dynamics/K_omega/Gain/K_omega",
    offsetof(P_ctrl_custom_turning_frame_T, K_omega), 62, 1, 2, 60, 0 },

  { 31,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Qff_1(nr)/Gain/K_omega",
    offsetof(P_ctrl_custom_turning_frame_T, K_omega), 62, 1, 2, 62, 0 },

  { 32,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Shaft dynamics/K_omega/Gain/K_omega",
    offsetof(P_ctrl_custom_turning_frame_T, K_omega), 62, 1, 2, 64, 0 },

  { 33,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Qff_1(nr)/Gain/K_omega",
    offsetof(P_ctrl_custom_turning_frame_T, K_omega), 62, 1, 2, 66, 0 },

  { 34,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Shaft dynamics/K_omega/Gain/K_omega",
    offsetof(P_ctrl_custom_turning_frame_T, K_omega), 62, 1, 2, 68, 0 },

  { 35,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Qff_1(nr)/Gain/K_omega",
    offsetof(P_ctrl_custom_turning_frame_T, K_omega), 62, 1, 2, 70, 0 },

  { 36,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Shaft dynamics/K_omega/Gain/K_omega",
    offsetof(P_ctrl_custom_turning_frame_T, K_omega), 62, 1, 2, 72, 0 },

  { 37,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Qff_1(nr)/Gain/K_omega",
    offsetof(P_ctrl_custom_turning_frame_T, K_omega), 62, 1, 2, 74, 0 },

  { 38, "ctrl_custom_turning_frame/Thruster Parameters /K_Qr1/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_q1f), 62, 1, 2, 76, 0 },

  { 39, "ctrl_custom_turning_frame/Thruster Parameters /K_Qr7/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_q1r), 62, 1, 2, 78, 0 },

  { 40, "ctrl_custom_turning_frame/Thruster Parameters /K_Qr2/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_q2f), 62, 1, 2, 80, 0 },

  { 41, "ctrl_custom_turning_frame/Thruster Parameters /K_Qr8/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_q2r), 62, 1, 2, 82, 0 },

  { 42, "ctrl_custom_turning_frame/Thruster Parameters /K_Qr3/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_q3f), 62, 1, 2, 84, 0 },

  { 43, "ctrl_custom_turning_frame/Thruster Parameters /K_Qr9/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_q3r), 62, 1, 2, 86, 0 },

  { 44, "ctrl_custom_turning_frame/Thruster Parameters /K_Qr4/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_q4f), 62, 1, 2, 88, 0 },

  { 45, "ctrl_custom_turning_frame/Thruster Parameters /K_Qr10/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_q4r), 62, 1, 2, 90, 0 },

  { 46, "ctrl_custom_turning_frame/Thruster Parameters /K_Qr5/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_q5f), 62, 1, 2, 92, 0 },

  { 47, "ctrl_custom_turning_frame/Thruster Parameters /K_Qr11/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_q5r), 62, 1, 2, 94, 0 },

  { 48, "ctrl_custom_turning_frame/Thruster Parameters /K_Qr6/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_q6f), 62, 1, 2, 96, 0 },

  { 49, "ctrl_custom_turning_frame/Thruster Parameters /K_Qr12/Value", offsetof
    (P_ctrl_custom_turning_frame_T, K_q6r), 62, 1, 2, 98, 0 },

  { 50,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Core controller/Ki/Gain/Kp",
    offsetof(P_ctrl_custom_turning_frame_T, Kp), 62, 1, 2, 100, 0 },

  { 51,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Core controller/Kp/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Kp), 62, 1, 2, 102, 0 },

  { 52,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Core controller/Ki/Gain/Kp",
    offsetof(P_ctrl_custom_turning_frame_T, Kp), 62, 1, 2, 104, 0 },

  { 53,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Core controller/Kp/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Kp), 62, 1, 2, 106, 0 },

  { 54,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Core controller/Ki/Gain/Kp",
    offsetof(P_ctrl_custom_turning_frame_T, Kp), 62, 1, 2, 108, 0 },

  { 55,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Core controller/Kp/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Kp), 62, 1, 2, 110, 0 },

  { 56,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Core controller/Ki/Gain/Kp",
    offsetof(P_ctrl_custom_turning_frame_T, Kp), 62, 1, 2, 112, 0 },

  { 57,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Core controller/Kp/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Kp), 62, 1, 2, 114, 0 },

  { 58,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Core controller/Ki/Gain/Kp",
    offsetof(P_ctrl_custom_turning_frame_T, Kp), 62, 1, 2, 116, 0 },

  { 59,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Core controller/Kp/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Kp), 62, 1, 2, 118, 0 },

  { 60,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Core controller/Ki/Gain/Kp",
    offsetof(P_ctrl_custom_turning_frame_T, Kp), 62, 1, 2, 120, 0 },

  { 61,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Core controller/Kp/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Kp), 62, 1, 2, 122, 0 },

  { 62,
    "ctrl_custom_turning_frame/Thrust allocation/Optimal angle path and  constraints on rotation speed/Max Rotation Rate/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Max_rotation), 62, 1, 2, 124, 0 },

  { 63,
    "ctrl_custom_turning_frame/Thrust allocation/Optimal angle path and  constraints on rotation speed/Max Rotation Rate/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Max_rotation), 62, 1, 2, 126, 0 },

  { 64,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 1/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Max_thrust), 62, 1, 2, 128, 0 },

  { 65,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 10/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Max_thrust), 62, 1, 2, 130, 0 },

  { 66,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 12/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Max_thrust), 62, 1, 2, 132, 0 },

  { 67,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 3/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Max_thrust), 62, 1, 2, 134, 0 },

  { 68,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 5/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Max_thrust), 62, 1, 2, 136, 0 },

  { 69,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 7/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Max_thrust), 62, 1, 2, 138, 0 },

  { 70,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 7/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Max_thrust), 62, 1, 2, 140, 0 },

  { 71,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 8/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Max_thrust), 62, 1, 2, 142, 0 },

  { 72,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 11/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Min_thrust), 62, 1, 2, 144, 0 },

  { 73,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 13/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Min_thrust), 62, 1, 2, 146, 0 },

  { 74,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 2/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Min_thrust), 62, 1, 2, 148, 0 },

  { 75,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 4/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Min_thrust), 62, 1, 2, 150, 0 },

  { 76,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 6/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Min_thrust), 62, 1, 2, 152, 0 },

  { 77,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 9/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Min_thrust), 62, 1, 2, 154, 0 },

  { 78,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Qf_0/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Q_f0), 62, 1, 2, 156, 0 },

  { 79,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Qf_0/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Q_f0), 62, 1, 2, 158, 0 },

  { 80,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Qf_0/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Q_f0), 62, 1, 2, 160, 0 },

  { 81,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Qf_0/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Q_f0), 62, 1, 2, 162, 0 },

  { 82,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Qf_0/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Q_f0), 62, 1, 2, 164, 0 },

  { 83,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Qf_0/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Q_f0), 62, 1, 2, 166, 0 },

  { 84, "ctrl_custom_turning_frame/Thruster Parameters /Rho/Value", offsetof
    (P_ctrl_custom_turning_frame_T, Rho), 62, 1, 2, 168, 0 },

  { 85,
    "ctrl_custom_turning_frame/Thrust allocation/Constant to avoid singularities/Value",
    offsetof(P_ctrl_custom_turning_frame_T, eps), 62, 1, 2, 170, 0 },

  { 86, "ctrl_custom_turning_frame/Thruster Parameters /Constant/Value",
    offsetof(P_ctrl_custom_turning_frame_T, eps_c), 62, 1, 2, 172, 0 },

  { 87,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Qff_0(nr)/Gain/epsilon",
    offsetof(P_ctrl_custom_turning_frame_T, epsilon), 62, 1, 2, 174, 0 },

  { 88,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Qff_0(nr)/Gain/n_max",
    offsetof(P_ctrl_custom_turning_frame_T, n_max), 62, 1, 2, 176, 0 },

  { 89,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Qff_0(nr)/Gain/epsilon",
    offsetof(P_ctrl_custom_turning_frame_T, epsilon), 62, 1, 2, 178, 0 },

  { 90,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Qff_0(nr)/Gain/n_max",
    offsetof(P_ctrl_custom_turning_frame_T, n_max), 62, 1, 2, 180, 0 },

  { 91,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Qff_0(nr)/Gain/epsilon",
    offsetof(P_ctrl_custom_turning_frame_T, epsilon), 62, 1, 2, 182, 0 },

  { 92,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Qff_0(nr)/Gain/n_max",
    offsetof(P_ctrl_custom_turning_frame_T, n_max), 62, 1, 2, 184, 0 },

  { 93,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Qff_0(nr)/Gain/epsilon",
    offsetof(P_ctrl_custom_turning_frame_T, epsilon), 62, 1, 2, 186, 0 },

  { 94,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Qff_0(nr)/Gain/n_max",
    offsetof(P_ctrl_custom_turning_frame_T, n_max), 62, 1, 2, 188, 0 },

  { 95,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Qff_0(nr)/Gain/epsilon",
    offsetof(P_ctrl_custom_turning_frame_T, epsilon), 62, 1, 2, 190, 0 },

  { 96,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Qff_0(nr)/Gain/n_max",
    offsetof(P_ctrl_custom_turning_frame_T, n_max), 62, 1, 2, 192, 0 },

  { 97,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Qff_0(nr)/Gain/epsilon",
    offsetof(P_ctrl_custom_turning_frame_T, epsilon), 62, 1, 2, 194, 0 },

  { 98,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Qff_0(nr)/Gain/n_max",
    offsetof(P_ctrl_custom_turning_frame_T, n_max), 62, 1, 2, 196, 0 },

  { 99, "ctrl_custom_turning_frame/Thruster Parameters /Constant1/Value",
    offsetof(P_ctrl_custom_turning_frame_T, k_cc), 62, 1, 2, 198, 0 },

  { 100, "ctrl_custom_turning_frame/Thruster Parameters /Constant5/Value",
    offsetof(P_ctrl_custom_turning_frame_T, n_c), 62, 1, 2, 200, 0 },

  { 101, "ctrl_custom_turning_frame/Thruster Parameters /Constant2/Value",
    offsetof(P_ctrl_custom_turning_frame_T, p_cc), 62, 1, 2, 202, 0 },

  { 102,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/negative thrust 1/Coefs",
    offsetof(P_ctrl_custom_turning_frame_T, pwm_thr1_backward), 35, 6, 2, 204, 0
  },

  { 103,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/positive thrust 1/Coefs",
    offsetof(P_ctrl_custom_turning_frame_T, pwm_thr1_forward), 35, 6, 2, 206, 0
  },

  { 104,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/negative thrust 2/Coefs",
    offsetof(P_ctrl_custom_turning_frame_T, pwm_thr2_backward), 35, 6, 2, 208, 0
  },

  { 105,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/positive thrust 2/Coefs",
    offsetof(P_ctrl_custom_turning_frame_T, pwm_thr2_forward), 35, 6, 2, 210, 0
  },

  { 106,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/negative thrust 3/Coefs",
    offsetof(P_ctrl_custom_turning_frame_T, pwm_thr3_backward), 35, 6, 2, 212, 0
  },

  { 107,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/positive thrust 3/Coefs",
    offsetof(P_ctrl_custom_turning_frame_T, pwm_thr3_forward), 35, 6, 2, 214, 0
  },

  { 108,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/negative thrust 4/Coefs",
    offsetof(P_ctrl_custom_turning_frame_T, pwm_thr4_backward), 35, 6, 2, 216, 0
  },

  { 109,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/positive thrust 4/Coefs",
    offsetof(P_ctrl_custom_turning_frame_T, pwm_thr4_forward), 35, 6, 2, 218, 0
  },

  { 110,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/negative thrust 5/Coefs",
    offsetof(P_ctrl_custom_turning_frame_T, pwm_thr5_backward), 35, 6, 2, 220, 0
  },

  { 111,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/positive thrust 5/Coefs",
    offsetof(P_ctrl_custom_turning_frame_T, pwm_thr5_forward), 35, 6, 2, 222, 0
  },

  { 112,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/negative thrust 6/Coefs",
    offsetof(P_ctrl_custom_turning_frame_T, pwm_thr6_backward), 35, 6, 2, 224, 0
  },

  { 113,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/positive thrust 6/Coefs",
    offsetof(P_ctrl_custom_turning_frame_T, pwm_thr6_forward), 35, 6, 2, 226, 0
  },

  { 114, "ctrl_custom_turning_frame/Thruster Parameters /Constant3/Value",
    offsetof(P_ctrl_custom_turning_frame_T, r_cc), 62, 1, 2, 228, 0 },

  { 115, "ctrl_custom_turning_frame/Pose/Gain/Gain", offsetof
    (P_ctrl_custom_turning_frame_T, Gain_Gain), 62, 1, 2, 230, 0 },

  { 116, "ctrl_custom_turning_frame/Pose/Gain1/Gain", offsetof
    (P_ctrl_custom_turning_frame_T, Gain1_Gain), 62, 1, 2, 232, 0 },

  { 117, "ctrl_custom_turning_frame/Pose/Gain5/Gain", offsetof
    (P_ctrl_custom_turning_frame_T, Gain5_Gain), 62, 1, 2, 234, 0 },

  { 118, "ctrl_custom_turning_frame/Pose/Saturation/UpperLimit", offsetof
    (P_ctrl_custom_turning_frame_T, Saturation_UpperSat), 62, 1, 2, 236, 0 },

  { 119, "ctrl_custom_turning_frame/Pose/Saturation/LowerLimit", offsetof
    (P_ctrl_custom_turning_frame_T, Saturation_LowerSat), 62, 1, 2, 238, 0 },

  { 120, "ctrl_custom_turning_frame/Pose/Gain6/Gain", offsetof
    (P_ctrl_custom_turning_frame_T, Gain6_Gain), 62, 1, 2, 240, 0 },

  { 121, "ctrl_custom_turning_frame/Pose/Constant1/Value", offsetof
    (P_ctrl_custom_turning_frame_T, Constant1_Value), 62, 1, 2, 242, 0 },

  { 122, "ctrl_custom_turning_frame/Reference basin/Gain5/Gain", offsetof
    (P_ctrl_custom_turning_frame_T, Gain5_Gain_g), 62, 1, 2, 244, 0 },

  { 123, "ctrl_custom_turning_frame/Switch1/Threshold", offsetof
    (P_ctrl_custom_turning_frame_T, Switch1_Threshold), 62, 1, 2, 246, 0 },

  { 124,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]/Saturation/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation_UpperSat_p), 62, 1, 2,
    248, 0 },

  { 125,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]/Saturation/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation_LowerSat_k), 62, 1, 2,
    250, 0 },

  { 126,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]/Gain/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Gain_Gain_p), 62, 1, 2, 252, 0 },

  { 127,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]/Constant/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant_Value), 62, 1, 2, 254, 0 },

  { 128, "ctrl_custom_turning_frame/Reference basin/Transfer Fcn2/A", offsetof
    (P_ctrl_custom_turning_frame_T, TransferFcn2_A), 62, 1, 2, 256, 0 },

  { 129, "ctrl_custom_turning_frame/Reference basin/Transfer Fcn2/C", offsetof
    (P_ctrl_custom_turning_frame_T, TransferFcn2_C), 62, 1, 2, 258, 0 },

  { 130,
    "ctrl_custom_turning_frame/PID controller1/[-inf inf] to [-pi pi]/Saturation/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation_UpperSat_a), 62, 1, 2,
    260, 0 },

  { 131,
    "ctrl_custom_turning_frame/PID controller1/[-inf inf] to [-pi pi]/Saturation/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation_LowerSat_b), 62, 1, 2,
    262, 0 },

  { 132,
    "ctrl_custom_turning_frame/PID controller1/[-inf inf] to [-pi pi]/Gain/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Gain_Gain_e), 62, 1, 2, 264, 0 },

  { 133,
    "ctrl_custom_turning_frame/PID controller1/[-inf inf] to [-pi pi]/Constant/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant_Value_d), 62, 1, 2, 266, 0
  },

  { 134,
    "ctrl_custom_turning_frame/PID controller1/Integrator1/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator1_IC), 62, 1, 2, 268, 0 },

  { 135,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Integrator1/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator1_IC_g), 36, 3, 2, 270, 0
  },

  { 136,
    "ctrl_custom_turning_frame/PID controller/[-inf inf] to [-pi pi]1/Saturation/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation_UpperSat_i), 62, 1, 2,
    272, 0 },

  { 137,
    "ctrl_custom_turning_frame/PID controller/[-inf inf] to [-pi pi]1/Saturation/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation_LowerSat_p), 62, 1, 2,
    274, 0 },

  { 138,
    "ctrl_custom_turning_frame/PID controller/[-inf inf] to [-pi pi]1/Gain/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Gain_Gain_o), 62, 1, 2, 276, 0 },

  { 139,
    "ctrl_custom_turning_frame/PID controller/[-inf inf] to [-pi pi]1/Constant/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant_Value_p), 62, 1, 2, 278, 0
  },

  { 140, "ctrl_custom_turning_frame/Referance/Integrator2/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator2_IC), 62, 1, 2, 280, 0 },

  { 141,
    "ctrl_custom_turning_frame/Referance/[-inf inf] to [-pi pi]/Saturation/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation_UpperSat_p4), 62, 1, 2,
    282, 0 },

  { 142,
    "ctrl_custom_turning_frame/Referance/[-inf inf] to [-pi pi]/Saturation/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation_LowerSat_c), 62, 1, 2,
    284, 0 },

  { 143, "ctrl_custom_turning_frame/Referance/[-inf inf] to [-pi pi]/Gain/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Gain_Gain_e2), 62, 1, 2, 286, 0 },

  { 144,
    "ctrl_custom_turning_frame/Referance/[-inf inf] to [-pi pi]/Constant/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant_Value_e), 62, 1, 2, 288, 0
  },

  { 145,
    "ctrl_custom_turning_frame/PID controller/[-inf inf] to [-pi pi]/Saturation/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation_UpperSat_ir), 62, 1, 2,
    290, 0 },

  { 146,
    "ctrl_custom_turning_frame/PID controller/[-inf inf] to [-pi pi]/Saturation/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation_LowerSat_l), 62, 1, 2,
    292, 0 },

  { 147,
    "ctrl_custom_turning_frame/PID controller/[-inf inf] to [-pi pi]/Gain/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Gain_Gain_d), 62, 1, 2, 294, 0 },

  { 148,
    "ctrl_custom_turning_frame/PID controller/[-inf inf] to [-pi pi]/Constant/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant_Value_a), 62, 1, 2, 296, 0
  },

  { 149, "ctrl_custom_turning_frame/PID controller/Integrator1/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator1_IC_e), 62, 1, 2, 298, 0
  },

  { 150, "ctrl_custom_turning_frame/Referance/Integrator1/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator1_IC_b), 62, 1, 2, 300, 0
  },

  { 151, "ctrl_custom_turning_frame/Constant/Value", offsetof
    (P_ctrl_custom_turning_frame_T, Constant_Value_i), 62, 1, 2, 302, 0 },

  { 152, "ctrl_custom_turning_frame/Constant1/Value", offsetof
    (P_ctrl_custom_turning_frame_T, Constant1_Value_k), 62, 1, 2, 304, 0 },

  { 153, "ctrl_custom_turning_frame/Switch/Threshold", offsetof
    (P_ctrl_custom_turning_frame_T, Switch_Threshold), 62, 1, 2, 306, 0 },

  { 154, "ctrl_custom_turning_frame/Gain5/Gain", offsetof
    (P_ctrl_custom_turning_frame_T, Gain5_Gain_e), 62, 1, 2, 308, 0 },

  { 155, "ctrl_custom_turning_frame/Gain/Gain", offsetof
    (P_ctrl_custom_turning_frame_T, Gain_Gain_g), 62, 1, 2, 310, 0 },

  { 156, "ctrl_custom_turning_frame/Gain1/Gain", offsetof
    (P_ctrl_custom_turning_frame_T, Gain1_Gain_l), 62, 1, 2, 312, 0 },

  { 157,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Shaft dynamics/Integrator/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator_IC), 62, 1, 2, 314, 0 },

  { 158,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Losses (placeholder)/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Lossesplaceholder_Value), 62, 1, 2,
    316, 0 },

  { 159,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Shaft dynamics/Integrator/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator_IC_h), 62, 1, 2, 318, 0 },

  { 160,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Losses (placeholder)/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Lossesplaceholder_Value_e), 62, 1, 2,
    320, 0 },

  { 161,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Shaft dynamics/Integrator/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator_IC_o), 62, 1, 2, 322, 0 },

  { 162,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Losses (placeholder)/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Lossesplaceholder_Value_d), 62, 1, 2,
    324, 0 },

  { 163,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Shaft dynamics/Integrator/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator_IC_hz), 62, 1, 2, 326, 0
  },

  { 164,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Losses (placeholder)/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Lossesplaceholder_Value_n), 62, 1, 2,
    328, 0 },

  { 165,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Shaft dynamics/Integrator/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator_IC_d), 62, 1, 2, 330, 0 },

  { 166,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Losses (placeholder)/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Lossesplaceholder_Value_k), 62, 1, 2,
    332, 0 },

  { 167,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Shaft dynamics/Integrator/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator_IC_b), 62, 1, 2, 334, 0 },

  { 168,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Losses (placeholder)/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Lossesplaceholder_Value_nh), 62, 1,
    2, 336, 0 },

  { 169, "ctrl_custom_turning_frame/Thruster Parameters /controller/Value",
    offsetof(P_ctrl_custom_turning_frame_T, controller_Value), 62, 1, 2, 338, 0
  },

  { 170,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Gain/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Gain_Gain_a), 62, 1, 2, 340, 0 },

  { 171,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Gain1/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Gain1_Gain_i), 62, 1, 2, 342, 0 },

  { 172,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Gain2/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Gain2_Gain), 62, 1, 2, 344, 0 },

  { 173,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Gain3/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Gain3_Gain), 62, 1, 2, 346, 0 },

  { 174,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Gain4/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Gain4_Gain), 62, 1, 2, 348, 0 },

  { 175,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Gain5/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Gain5_Gain_f), 62, 1, 2, 350, 0 },

  { 176,
    "ctrl_custom_turning_frame/Thrust allocation/Radians to Degrees/Gain/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Gain_Gain_i), 62, 1, 2, 352, 0 },

  { 177, "ctrl_custom_turning_frame/Thrust allocation/X-position Thruster/Value",
    offsetof(P_ctrl_custom_turning_frame_T, XpositionThruster_Value[0]), 35, 6,
    2, 354, 0 },

  { 178, "ctrl_custom_turning_frame/Thrust allocation/Y-position Thruster/Value",
    offsetof(P_ctrl_custom_turning_frame_T, YpositionThruster_Value[0]), 35, 6,
    2, 356, 0 },

  { 179, "ctrl_custom_turning_frame/Thrust allocation/constant angle/Value",
    offsetof(P_ctrl_custom_turning_frame_T, constantangle_Value[0]), 35, 6, 2,
    358, 0 },

  { 180,
    "ctrl_custom_turning_frame/Thrust allocation/Choosing Fixed // Azimuth angle/Threshold",
    offsetof(P_ctrl_custom_turning_frame_T, ChoosingFixedAzimuthangle_Thres), 62,
    1, 2, 360, 0 },

  { 181,
    "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 1/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation1_UpperSat), 62, 1, 2, 362,
    0 },

  { 182,
    "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 1/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation1_LowerSat), 62, 1, 2, 364,
    0 },

  { 183,
    "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 2/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation2_UpperSat), 62, 1, 2, 366,
    0 },

  { 184,
    "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 2/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation2_LowerSat), 62, 1, 2, 368,
    0 },

  { 185,
    "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 3/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation3_UpperSat), 62, 1, 2, 370,
    0 },

  { 186,
    "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 3/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation3_LowerSat), 62, 1, 2, 372,
    0 },

  { 187,
    "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 4/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation4_UpperSat), 62, 1, 2, 374,
    0 },

  { 188,
    "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 4/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation4_LowerSat), 62, 1, 2, 376,
    0 },

  { 189,
    "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 5/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation5_UpperSat), 62, 1, 2, 378,
    0 },

  { 190,
    "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 5/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation5_LowerSat), 62, 1, 2, 380,
    0 },

  { 191,
    "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 6/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation6_UpperSat), 62, 1, 2, 382,
    0 },

  { 192,
    "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 6/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation6_LowerSat), 62, 1, 2, 384,
    0 },

  { 193, "ctrl_custom_turning_frame/Radians to Degrees/Gain/Gain", offsetof
    (P_ctrl_custom_turning_frame_T, Gain_Gain_oe), 62, 1, 2, 386, 0 },

  { 194, "ctrl_custom_turning_frame/X-position Thruster/Value", offsetof
    (P_ctrl_custom_turning_frame_T, XpositionThruster_Value_k[0]), 35, 6, 2, 388,
    0 },

  { 195, "ctrl_custom_turning_frame/Y-position Thruster/Value", offsetof
    (P_ctrl_custom_turning_frame_T, YpositionThruster_Value_l[0]), 35, 6, 2, 390,
    0 },

  { 196,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]1/Saturation/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation_UpperSat_j), 62, 1, 2,
    392, 0 },

  { 197,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]1/Saturation/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation_LowerSat_f), 62, 1, 2,
    394, 0 },

  { 198,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]1/Gain/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, Gain_Gain_gg), 62, 1, 2, 396, 0 },

  { 199,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]1/Constant/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant_Value_iq), 62, 1, 2, 398, 0
  },

  { 200,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Integrator2/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator2_IC_i), 36, 3, 2, 400, 0
  },

  { 201,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Constant6/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant6_Value), 62, 1, 2, 402, 0 },

  { 202,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Constant7/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant7_Value), 62, 1, 2, 404, 0 },

  { 203,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Constant8/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant8_Value), 62, 1, 2, 406, 0 },

  { 204, "ctrl_custom_turning_frame/Nonlinear Passisve Observer/M^-1/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, M1_Gain), 25, 9, 2, 408, 0 },

  { 205,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 1/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation1_LowerSat_p), 62, 1, 2,
    410, 0 },

  { 206,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 2/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation2_UpperSat_j), 62, 1, 2,
    412, 0 },

  { 207,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 8/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation8_LowerSat), 62, 1, 2, 414,
    0 },

  { 208,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 9/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation9_UpperSat), 62, 1, 2, 416,
    0 },

  { 209,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 10/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation10_LowerSat), 62, 1, 2,
    418, 0 },

  { 210,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 11/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation11_UpperSat), 62, 1, 2,
    420, 0 },

  { 211,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 3/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation3_LowerSat_m), 62, 1, 2,
    422, 0 },

  { 212,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 4/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation4_UpperSat_l), 62, 1, 2,
    424, 0 },

  { 213,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 5/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation5_LowerSat_j), 62, 1, 2,
    426, 0 },

  { 214,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 6/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation6_UpperSat_c), 62, 1, 2,
    428, 0 },

  { 215,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 12/LowerLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation12_LowerSat), 62, 1, 2,
    430, 0 },

  { 216,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/Saturation 13/UpperLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Saturation13_UpperSat), 62, 1, 2,
    432, 0 },

  { 217,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Constant/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant_Value_g), 62, 1, 2, 434, 0
  },

  { 218,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Constant1/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant1_Value_o), 62, 1, 2, 436, 0
  },

  { 219,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Constant2/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant2_Value), 62, 1, 2, 438, 0 },

  { 220,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Constant3/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant3_Value), 62, 1, 2, 440, 0 },

  { 221,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Constant4/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant4_Value), 62, 1, 2, 442, 0 },

  { 222,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Constant5/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant5_Value), 62, 1, 2, 444, 0 },

  { 223, "ctrl_custom_turning_frame/PID controller/Gain5/Gain", offsetof
    (P_ctrl_custom_turning_frame_T, Gain5_Gain_a), 62, 1, 2, 446, 0 },

  { 224, "ctrl_custom_turning_frame/Referance/Integrator/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator_IC_m), 62, 1, 2, 448, 0 },

  { 225, "ctrl_custom_turning_frame/Thruster control /Delay/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_InitialCondition), 62, 1, 2,
    450, 0 },

  { 226, "ctrl_custom_turning_frame/Thruster control /Thruster 1/Constant/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant_Value_j[0]), 37, 2, 2, 452,
    0 },

  { 227,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Constant1/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant1_Value_i[0]), 37, 2, 2, 454,
    0 },

  { 228,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Delay/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_InitialCondition_m), 62, 1, 2,
    456, 0 },

  { 229,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Delay/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_InitialCondition_a), 62, 1, 2,
    458, 0 },

  { 230,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Constant1/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant1_Value_p[0]), 30, 3, 2, 460,
    0 },

  { 231,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Constant2/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant2_Value_b[0]), 30, 3, 2, 462,
    0 },

  { 232,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Discrete Transfer Fcn/Numerator",
    offsetof(P_ctrl_custom_turning_frame_T, DiscreteTransferFcn_InitialStat), 62,
    1, 2, 464, 0 },

  { 233,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Discrete Derivative/TSamp/WtEt",
    offsetof(P_ctrl_custom_turning_frame_T, TSamp_WtEt), 0, 1, 2, 466, 0 },

  { 234,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Acceleration Limit/RisingSlewLimit",
    offsetof(P_ctrl_custom_turning_frame_T, AccelerationLimit_RisingLim), 0, 1,
    2, 468, 0 },

  { 235,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Acceleration Limit/FallingSlewLimit",
    offsetof(P_ctrl_custom_turning_frame_T, AccelerationLimit_FallingLim), 0, 1,
    2, 470, 0 },

  { 236,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Acceleration Limit/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, AccelerationLimit_IC), 62, 1, 2, 472,
    0 },

  { 237,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Memory/X0",
    offsetof(P_ctrl_custom_turning_frame_T, Memory_X0), 62, 1, 2, 474, 0 },

  { 238,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Core controller/Integrator/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator_IC_j), 62, 1, 2, 476, 0 },

  { 239,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/NaN/Value",
    offsetof(P_ctrl_custom_turning_frame_T, NaN_Value), 62, 1, 2, 478, 0 },

  { 240,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Discrete Transfer Fcn/Numerator",
    offsetof(P_ctrl_custom_turning_frame_T, DiscreteTransferFcn_InitialSt_i), 62,
    1, 2, 480, 0 },

  { 241, "ctrl_custom_turning_frame/Thruster control /Thruster 2/Constant/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant_Value_dp[0]), 37, 2, 2, 482,
    0 },

  { 242,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Constant1/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant1_Value_b[0]), 37, 2, 2, 484,
    0 },

  { 243,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Delay/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_InitialCondition_j), 62, 1, 2,
    486, 0 },

  { 244,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Delay/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_InitialCondition_n), 62, 1, 2,
    488, 0 },

  { 245,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Constant1/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant1_Value_m[0]), 30, 3, 2, 490,
    0 },

  { 246,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Constant2/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant2_Value_k[0]), 30, 3, 2, 492,
    0 },

  { 247,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Discrete Transfer Fcn/Numerator",
    offsetof(P_ctrl_custom_turning_frame_T, DiscreteTransferFcn_InitialSt_f), 62,
    1, 2, 494, 0 },

  { 248,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Discrete Derivative/TSamp/WtEt",
    offsetof(P_ctrl_custom_turning_frame_T, TSamp_WtEt_g), 0, 1, 2, 496, 0 },

  { 249,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Acceleration Limit/RisingSlewLimit",
    offsetof(P_ctrl_custom_turning_frame_T, AccelerationLimit_RisingLim_p), 0, 1,
    2, 498, 0 },

  { 250,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Acceleration Limit/FallingSlewLimit",
    offsetof(P_ctrl_custom_turning_frame_T, AccelerationLimit_FallingLim_n), 0,
    1, 2, 500, 0 },

  { 251,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Acceleration Limit/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, AccelerationLimit_IC_l), 62, 1, 2,
    502, 0 },

  { 252,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Memory/X0",
    offsetof(P_ctrl_custom_turning_frame_T, Memory_X0_h), 62, 1, 2, 504, 0 },

  { 253,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Core controller/Integrator/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator_IC_p), 62, 1, 2, 506, 0 },

  { 254,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/NaN/Value",
    offsetof(P_ctrl_custom_turning_frame_T, NaN_Value_n), 62, 1, 2, 508, 0 },

  { 255,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Discrete Transfer Fcn/Numerator",
    offsetof(P_ctrl_custom_turning_frame_T, DiscreteTransferFcn_InitialSt_p), 62,
    1, 2, 510, 0 },

  { 256, "ctrl_custom_turning_frame/Thruster control /Thruster 3/Constant/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant_Value_gq[0]), 37, 2, 2, 512,
    0 },

  { 257,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Constant1/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant1_Value_l[0]), 37, 2, 2, 514,
    0 },

  { 258,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Delay/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_InitialCondition_b), 62, 1, 2,
    516, 0 },

  { 259,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Delay/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_InitialCondition_o), 62, 1, 2,
    518, 0 },

  { 260,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Constant1/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant1_Value_c[0]), 30, 3, 2, 520,
    0 },

  { 261,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Constant2/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant2_Value_k5[0]), 30, 3, 2,
    522, 0 },

  { 262,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Discrete Transfer Fcn/Numerator",
    offsetof(P_ctrl_custom_turning_frame_T, DiscreteTransferFcn_InitialSt_h), 62,
    1, 2, 524, 0 },

  { 263,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Discrete Derivative/TSamp/WtEt",
    offsetof(P_ctrl_custom_turning_frame_T, TSamp_WtEt_i), 0, 1, 2, 526, 0 },

  { 264,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Acceleration limiter/RisingSlewLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Accelerationlimiter_RisingLim), 0, 1,
    2, 528, 0 },

  { 265,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Acceleration limiter/FallingSlewLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Accelerationlimiter_FallingLim), 0,
    1, 2, 530, 0 },

  { 266,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Acceleration limiter/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Accelerationlimiter_IC), 62, 1, 2,
    532, 0 },

  { 267,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Memory/X0",
    offsetof(P_ctrl_custom_turning_frame_T, Memory_X0_d), 62, 1, 2, 534, 0 },

  { 268,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Core controller/Integrator/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator_IC_k), 62, 1, 2, 536, 0 },

  { 269,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/NaN/Value",
    offsetof(P_ctrl_custom_turning_frame_T, NaN_Value_k), 62, 1, 2, 538, 0 },

  { 270,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Discrete Transfer Fcn/Numerator",
    offsetof(P_ctrl_custom_turning_frame_T, DiscreteTransferFcn_InitialSt_n), 62,
    1, 2, 540, 0 },

  { 271, "ctrl_custom_turning_frame/Thruster control /Thruster 4/Constant/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant_Value_m[0]), 37, 2, 2, 542,
    0 },

  { 272,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Constant1/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant1_Value_h[0]), 37, 2, 2, 544,
    0 },

  { 273,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Delay/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_InitialCondition_d), 62, 1, 2,
    546, 0 },

  { 274,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Delay/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_InitialCondition_b4), 62, 1, 2,
    548, 0 },

  { 275,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Constant1/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant1_Value_d[0]), 30, 3, 2, 550,
    0 },

  { 276,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Constant2/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant2_Value_h[0]), 30, 3, 2, 552,
    0 },

  { 277,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Discrete Transfer Fcn/Numerator",
    offsetof(P_ctrl_custom_turning_frame_T, DiscreteTransferFcn_InitialS_nq), 62,
    1, 2, 554, 0 },

  { 278,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Discrete Derivative/TSamp/WtEt",
    offsetof(P_ctrl_custom_turning_frame_T, TSamp_WtEt_n), 0, 1, 2, 556, 0 },

  { 279,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Acceleration limiter/RisingSlewLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Accelerationlimiter_RisingLim_i), 0,
    1, 2, 558, 0 },

  { 280,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Acceleration limiter/FallingSlewLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Accelerationlimiter_FallingLi_i), 0,
    1, 2, 560, 0 },

  { 281,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Acceleration limiter/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Accelerationlimiter_IC_i), 62, 1, 2,
    562, 0 },

  { 282,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Memory/X0",
    offsetof(P_ctrl_custom_turning_frame_T, Memory_X0_b), 62, 1, 2, 564, 0 },

  { 283,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Core controller/Integrator/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator_IC_l), 62, 1, 2, 566, 0 },

  { 284,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/NaN/Value",
    offsetof(P_ctrl_custom_turning_frame_T, NaN_Value_ks), 62, 1, 2, 568, 0 },

  { 285,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Discrete Transfer Fcn/Numerator",
    offsetof(P_ctrl_custom_turning_frame_T, DiscreteTransferFcn_InitialSt_g), 62,
    1, 2, 570, 0 },

  { 286, "ctrl_custom_turning_frame/Thruster control /Thruster 5/Constant/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant_Value_gh[0]), 37, 2, 2, 572,
    0 },

  { 287,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Constant1/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant1_Value_e[0]), 37, 2, 2, 574,
    0 },

  { 288,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Delay/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_InitialCondition_g), 62, 1, 2,
    576, 0 },

  { 289,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Delay/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_InitialCondition_p), 62, 1, 2,
    578, 0 },

  { 290,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Constant1/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant1_Value_kj[0]), 30, 3, 2,
    580, 0 },

  { 291,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Constant2/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant2_Value_b0[0]), 30, 3, 2,
    582, 0 },

  { 292,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Discrete Transfer Fcn/Numerator",
    offsetof(P_ctrl_custom_turning_frame_T, DiscreteTransferFcn_InitialS_il), 62,
    1, 2, 584, 0 },

  { 293,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Discrete Derivative/TSamp/WtEt",
    offsetof(P_ctrl_custom_turning_frame_T, TSamp_WtEt_ih), 0, 1, 2, 586, 0 },

  { 294,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Acceleration limiter/RisingSlewLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Accelerationlimiter_RisingLim_k), 0,
    1, 2, 588, 0 },

  { 295,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Acceleration limiter/FallingSlewLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Accelerationlimiter_FallingLi_c), 0,
    1, 2, 590, 0 },

  { 296,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Acceleration limiter/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Accelerationlimiter_IC_d), 62, 1, 2,
    592, 0 },

  { 297,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Memory/X0",
    offsetof(P_ctrl_custom_turning_frame_T, Memory_X0_n), 62, 1, 2, 594, 0 },

  { 298,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Core controller/Integrator/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator_IC_hh), 62, 1, 2, 596, 0
  },

  { 299,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/NaN/Value",
    offsetof(P_ctrl_custom_turning_frame_T, NaN_Value_ny), 62, 1, 2, 598, 0 },

  { 300,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Discrete Transfer Fcn/Numerator",
    offsetof(P_ctrl_custom_turning_frame_T, DiscreteTransferFcn_InitialSt_k), 62,
    1, 2, 600, 0 },

  { 301, "ctrl_custom_turning_frame/Thruster control /Thruster 6/Constant/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant_Value_b[0]), 37, 2, 2, 602,
    0 },

  { 302,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Constant1/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant1_Value_oi[0]), 37, 2, 2,
    604, 0 },

  { 303,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Delay/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_InitialCondition_md), 62, 1, 2,
    606, 0 },

  { 304,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Delay/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_InitialCondition_gp), 62, 1, 2,
    608, 0 },

  { 305,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Constant1/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant1_Value_pu[0]), 30, 3, 2,
    610, 0 },

  { 306,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Constant2/Value",
    offsetof(P_ctrl_custom_turning_frame_T, Constant2_Value_p[0]), 30, 3, 2, 612,
    0 },

  { 307,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Discrete Transfer Fcn/Numerator",
    offsetof(P_ctrl_custom_turning_frame_T, DiscreteTransferFcn_InitialS_fz), 62,
    1, 2, 614, 0 },

  { 308,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Discrete Derivative/TSamp/WtEt",
    offsetof(P_ctrl_custom_turning_frame_T, TSamp_WtEt_l), 0, 1, 2, 616, 0 },

  { 309,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Acceleration limiter/RisingSlewLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Accelerationlimiter_RisingLim_b), 0,
    1, 2, 618, 0 },

  { 310,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Acceleration limiter/FallingSlewLimit",
    offsetof(P_ctrl_custom_turning_frame_T, Accelerationlimiter_FallingLi_j), 0,
    1, 2, 620, 0 },

  { 311,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Acceleration limiter/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Accelerationlimiter_IC_g), 62, 1, 2,
    622, 0 },

  { 312,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Memory/X0",
    offsetof(P_ctrl_custom_turning_frame_T, Memory_X0_m), 62, 1, 2, 624, 0 },

  { 313,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Core controller/Integrator/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, Integrator_IC_pr), 62, 1, 2, 626, 0
  },

  { 314,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/NaN/Value",
    offsetof(P_ctrl_custom_turning_frame_T, NaN_Value_m), 62, 1, 2, 628, 0 },

  { 315,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Discrete Transfer Fcn/Numerator",
    offsetof(P_ctrl_custom_turning_frame_T, DiscreteTransferFcn_InitialSt_j), 62,
    1, 2, 630, 0 },

  { 316, "ctrl_custom_turning_frame/Thruster control /Delay/DelayLength",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_DelayLength), 63, 1, 2, 632, 0
  },

  { 317,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Delay/DelayLength",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_DelayLength_a), 63, 1, 2, 634,
    0 },

  { 318,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Delay/DelayLength",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_DelayLength_h), 63, 1, 2, 636,
    0 },

  { 319,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Delay/DelayLength",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_DelayLength_f), 63, 1, 2, 638,
    0 },

  { 320,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Delay/DelayLength",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_DelayLength_o), 63, 1, 2, 640,
    0 },

  { 321,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Delay/DelayLength",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_DelayLength_e), 63, 1, 2, 642,
    0 },

  { 322,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Delay/DelayLength",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_DelayLength_o2), 63, 1, 2, 644,
    0 },

  { 323,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Delay/DelayLength",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_DelayLength_k), 63, 1, 2, 646,
    0 },

  { 324,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Delay/DelayLength",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_DelayLength_kr), 63, 1, 2, 648,
    0 },

  { 325,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Delay/DelayLength",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_DelayLength_n), 63, 1, 2, 650,
    0 },

  { 326,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Delay/DelayLength",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_DelayLength_n4), 63, 1, 2, 652,
    0 },

  { 327,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Delay/DelayLength",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_DelayLength_ho), 63, 1, 2, 654,
    0 },

  { 328,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Delay/DelayLength",
    offsetof(P_ctrl_custom_turning_frame_T, Delay_DelayLength_hw), 63, 1, 2, 656,
    0 },

  { 329,
    "ctrl_custom_turning_frame/Thrust allocation/Optimal angle path and  constraints on rotation speed/Discrete-Time Integrator/gainval",
    offsetof(P_ctrl_custom_turning_frame_T,
             CoreSubsys.DiscreteTimeIntegrator_gainval), 0, 1, 2, 658, 0 },

  { 330,
    "ctrl_custom_turning_frame/Thrust allocation/Optimal angle path and  constraints on rotation speed/Degrees to Radians/Gain1/Gain",
    offsetof(P_ctrl_custom_turning_frame_T, CoreSubsys.Gain1_Gain), 62, 1, 2,
    660, 0 },

  { 331,
    "ctrl_custom_turning_frame/Thrust allocation/Optimal angle path and  constraints on rotation speed/Delay/InitialCondition",
    offsetof(P_ctrl_custom_turning_frame_T, CoreSubsys.Delay_InitialCondition),
    62, 1, 2, 662, 0 },

  { 332,
    "ctrl_custom_turning_frame/Thrust allocation/Optimal angle path and  constraints on rotation speed/Delay/DelayLength",
    offsetof(P_ctrl_custom_turning_frame_T, CoreSubsys.Delay_DelayLength), 63, 1,
    2, 664, 0 },
};

static int32_t NI_ParamListSize DataSection(".NIVS.paramlistsize") = 333;
static int32_t NI_ParamDimList[] DataSection(".NIVS.paramdimlist") =
{
  6, 4,                                /* Parameter at index 0 */
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
  1, 1,                                /* Parameter at index 11 */
  1, 1,                                /* Parameter at index 12 */
  1, 1,                                /* Parameter at index 13 */
  1, 1,                                /* Parameter at index 14 */
  1, 1,                                /* Parameter at index 15 */
  1, 1,                                /* Parameter at index 16 */
  1, 1,                                /* Parameter at index 17 */
  1, 1,                                /* Parameter at index 18 */
  1, 1,                                /* Parameter at index 19 */
  1, 1,                                /* Parameter at index 20 */
  1, 1,                                /* Parameter at index 21 */
  1, 1,                                /* Parameter at index 22 */
  1, 1,                                /* Parameter at index 23 */
  1, 1,                                /* Parameter at index 24 */
  1, 1,                                /* Parameter at index 25 */
  1, 1,                                /* Parameter at index 26 */
  1, 1,                                /* Parameter at index 27 */
  1, 1,                                /* Parameter at index 28 */
  1, 1,                                /* Parameter at index 29 */
  1, 1,                                /* Parameter at index 30 */
  1, 1,                                /* Parameter at index 31 */
  1, 1,                                /* Parameter at index 32 */
  1, 1,                                /* Parameter at index 33 */
  1, 1,                                /* Parameter at index 34 */
  1, 1,                                /* Parameter at index 35 */
  1, 1,                                /* Parameter at index 36 */
  1, 1,                                /* Parameter at index 37 */
  1, 1,                                /* Parameter at index 38 */
  1, 1,                                /* Parameter at index 39 */
  1, 1,                                /* Parameter at index 40 */
  1, 1,                                /* Parameter at index 41 */
  1, 1,                                /* Parameter at index 42 */
  1, 1,                                /* Parameter at index 43 */
  1, 1,                                /* Parameter at index 44 */
  1, 1,                                /* Parameter at index 45 */
  1, 1,                                /* Parameter at index 46 */
  1, 1,                                /* Parameter at index 47 */
  1, 1,                                /* Parameter at index 48 */
  1, 1,                                /* Parameter at index 49 */
  1, 1,                                /* Parameter at index 50 */
  1, 1,                                /* Parameter at index 51 */
  1, 1,                                /* Parameter at index 52 */
  1, 1,                                /* Parameter at index 53 */
  1, 1,                                /* Parameter at index 54 */
  1, 1,                                /* Parameter at index 55 */
  1, 1,                                /* Parameter at index 56 */
  1, 1,                                /* Parameter at index 57 */
  1, 1,                                /* Parameter at index 58 */
  1, 1,                                /* Parameter at index 59 */
  1, 1,                                /* Parameter at index 60 */
  1, 1,                                /* Parameter at index 61 */
  1, 1,                                /* Parameter at index 62 */
  1, 1,                                /* Parameter at index 63 */
  1, 1,                                /* Parameter at index 64 */
  1, 1,                                /* Parameter at index 65 */
  1, 1,                                /* Parameter at index 66 */
  1, 1,                                /* Parameter at index 67 */
  1, 1,                                /* Parameter at index 68 */
  1, 1,                                /* Parameter at index 69 */
  1, 1,                                /* Parameter at index 70 */
  1, 1,                                /* Parameter at index 71 */
  1, 1,                                /* Parameter at index 72 */
  1, 1,                                /* Parameter at index 73 */
  1, 1,                                /* Parameter at index 74 */
  1, 1,                                /* Parameter at index 75 */
  1, 1,                                /* Parameter at index 76 */
  1, 1,                                /* Parameter at index 77 */
  1, 1,                                /* Parameter at index 78 */
  1, 1,                                /* Parameter at index 79 */
  1, 1,                                /* Parameter at index 80 */
  1, 1,                                /* Parameter at index 81 */
  1, 1,                                /* Parameter at index 82 */
  1, 1,                                /* Parameter at index 83 */
  1, 1,                                /* Parameter at index 84 */
  1, 1,                                /* Parameter at index 85 */
  1, 1,                                /* Parameter at index 86 */
  1, 1,                                /* Parameter at index 87 */
  1, 1,                                /* Parameter at index 88 */
  1, 1,                                /* Parameter at index 89 */
  1, 1,                                /* Parameter at index 90 */
  1, 1,                                /* Parameter at index 91 */
  1, 1,                                /* Parameter at index 92 */
  1, 1,                                /* Parameter at index 93 */
  1, 1,                                /* Parameter at index 94 */
  1, 1,                                /* Parameter at index 95 */
  1, 1,                                /* Parameter at index 96 */
  1, 1,                                /* Parameter at index 97 */
  1, 1,                                /* Parameter at index 98 */
  1, 1,                                /* Parameter at index 99 */
  1, 1,                                /* Parameter at index 100 */
  1, 1,                                /* Parameter at index 101 */
  1, 6,                                /* Parameter at index 102 */
  1, 6,                                /* Parameter at index 103 */
  1, 6,                                /* Parameter at index 104 */
  1, 6,                                /* Parameter at index 105 */
  1, 6,                                /* Parameter at index 106 */
  1, 6,                                /* Parameter at index 107 */
  1, 6,                                /* Parameter at index 108 */
  1, 6,                                /* Parameter at index 109 */
  1, 6,                                /* Parameter at index 110 */
  1, 6,                                /* Parameter at index 111 */
  1, 6,                                /* Parameter at index 112 */
  1, 6,                                /* Parameter at index 113 */
  1, 1,                                /* Parameter at index 114 */
  1, 1,                                /* Parameter at index 115 */
  1, 1,                                /* Parameter at index 116 */
  1, 1,                                /* Parameter at index 117 */
  1, 1,                                /* Parameter at index 118 */
  1, 1,                                /* Parameter at index 119 */
  1, 1,                                /* Parameter at index 120 */
  1, 1,                                /* Parameter at index 121 */
  1, 1,                                /* Parameter at index 122 */
  1, 1,                                /* Parameter at index 123 */
  1, 1,                                /* Parameter at index 124 */
  1, 1,                                /* Parameter at index 125 */
  1, 1,                                /* Parameter at index 126 */
  1, 1,                                /* Parameter at index 127 */
  1, 1,                                /* Parameter at index 128 */
  1, 1,                                /* Parameter at index 129 */
  1, 1,                                /* Parameter at index 130 */
  1, 1,                                /* Parameter at index 131 */
  1, 1,                                /* Parameter at index 132 */
  1, 1,                                /* Parameter at index 133 */
  1, 1,                                /* Parameter at index 134 */
  3, 1,                                /* Parameter at index 135 */
  1, 1,                                /* Parameter at index 136 */
  1, 1,                                /* Parameter at index 137 */
  1, 1,                                /* Parameter at index 138 */
  1, 1,                                /* Parameter at index 139 */
  1, 1,                                /* Parameter at index 140 */
  1, 1,                                /* Parameter at index 141 */
  1, 1,                                /* Parameter at index 142 */
  1, 1,                                /* Parameter at index 143 */
  1, 1,                                /* Parameter at index 144 */
  1, 1,                                /* Parameter at index 145 */
  1, 1,                                /* Parameter at index 146 */
  1, 1,                                /* Parameter at index 147 */
  1, 1,                                /* Parameter at index 148 */
  1, 1,                                /* Parameter at index 149 */
  1, 1,                                /* Parameter at index 150 */
  1, 1,                                /* Parameter at index 151 */
  1, 1,                                /* Parameter at index 152 */
  1, 1,                                /* Parameter at index 153 */
  1, 1,                                /* Parameter at index 154 */
  1, 1,                                /* Parameter at index 155 */
  1, 1,                                /* Parameter at index 156 */
  1, 1,                                /* Parameter at index 157 */
  1, 1,                                /* Parameter at index 158 */
  1, 1,                                /* Parameter at index 159 */
  1, 1,                                /* Parameter at index 160 */
  1, 1,                                /* Parameter at index 161 */
  1, 1,                                /* Parameter at index 162 */
  1, 1,                                /* Parameter at index 163 */
  1, 1,                                /* Parameter at index 164 */
  1, 1,                                /* Parameter at index 165 */
  1, 1,                                /* Parameter at index 166 */
  1, 1,                                /* Parameter at index 167 */
  1, 1,                                /* Parameter at index 168 */
  1, 1,                                /* Parameter at index 169 */
  1, 1,                                /* Parameter at index 170 */
  1, 1,                                /* Parameter at index 171 */
  1, 1,                                /* Parameter at index 172 */
  1, 1,                                /* Parameter at index 173 */
  1, 1,                                /* Parameter at index 174 */
  1, 1,                                /* Parameter at index 175 */
  1, 1,                                /* Parameter at index 176 */
  1, 6,                                /* Parameter at index 177 */
  1, 6,                                /* Parameter at index 178 */
  1, 6,                                /* Parameter at index 179 */
  1, 1,                                /* Parameter at index 180 */
  1, 1,                                /* Parameter at index 181 */
  1, 1,                                /* Parameter at index 182 */
  1, 1,                                /* Parameter at index 183 */
  1, 1,                                /* Parameter at index 184 */
  1, 1,                                /* Parameter at index 185 */
  1, 1,                                /* Parameter at index 186 */
  1, 1,                                /* Parameter at index 187 */
  1, 1,                                /* Parameter at index 188 */
  1, 1,                                /* Parameter at index 189 */
  1, 1,                                /* Parameter at index 190 */
  1, 1,                                /* Parameter at index 191 */
  1, 1,                                /* Parameter at index 192 */
  1, 1,                                /* Parameter at index 193 */
  1, 6,                                /* Parameter at index 194 */
  1, 6,                                /* Parameter at index 195 */
  1, 1,                                /* Parameter at index 196 */
  1, 1,                                /* Parameter at index 197 */
  1, 1,                                /* Parameter at index 198 */
  1, 1,                                /* Parameter at index 199 */
  3, 1,                                /* Parameter at index 200 */
  1, 1,                                /* Parameter at index 201 */
  1, 1,                                /* Parameter at index 202 */
  1, 1,                                /* Parameter at index 203 */
  3, 3,                                /* Parameter at index 204 */
  1, 1,                                /* Parameter at index 205 */
  1, 1,                                /* Parameter at index 206 */
  1, 1,                                /* Parameter at index 207 */
  1, 1,                                /* Parameter at index 208 */
  1, 1,                                /* Parameter at index 209 */
  1, 1,                                /* Parameter at index 210 */
  1, 1,                                /* Parameter at index 211 */
  1, 1,                                /* Parameter at index 212 */
  1, 1,                                /* Parameter at index 213 */
  1, 1,                                /* Parameter at index 214 */
  1, 1,                                /* Parameter at index 215 */
  1, 1,                                /* Parameter at index 216 */
  1, 1,                                /* Parameter at index 217 */
  1, 1,                                /* Parameter at index 218 */
  1, 1,                                /* Parameter at index 219 */
  1, 1,                                /* Parameter at index 220 */
  1, 1,                                /* Parameter at index 221 */
  1, 1,                                /* Parameter at index 222 */
  1, 1,                                /* Parameter at index 223 */
  1, 1,                                /* Parameter at index 224 */
  1, 1,                                /* Parameter at index 225 */
  1, 2,                                /* Parameter at index 226 */
  1, 2,                                /* Parameter at index 227 */
  1, 1,                                /* Parameter at index 228 */
  1, 1,                                /* Parameter at index 229 */
  1, 3,                                /* Parameter at index 230 */
  1, 3,                                /* Parameter at index 231 */
  1, 1,                                /* Parameter at index 232 */
  1, 1,                                /* Parameter at index 233 */
  1, 1,                                /* Parameter at index 234 */
  1, 1,                                /* Parameter at index 235 */
  1, 1,                                /* Parameter at index 236 */
  1, 1,                                /* Parameter at index 237 */
  1, 1,                                /* Parameter at index 238 */
  1, 1,                                /* Parameter at index 239 */
  1, 1,                                /* Parameter at index 240 */
  1, 2,                                /* Parameter at index 241 */
  1, 2,                                /* Parameter at index 242 */
  1, 1,                                /* Parameter at index 243 */
  1, 1,                                /* Parameter at index 244 */
  1, 3,                                /* Parameter at index 245 */
  1, 3,                                /* Parameter at index 246 */
  1, 1,                                /* Parameter at index 247 */
  1, 1,                                /* Parameter at index 248 */
  1, 1,                                /* Parameter at index 249 */
  1, 1,                                /* Parameter at index 250 */
  1, 1,                                /* Parameter at index 251 */
  1, 1,                                /* Parameter at index 252 */
  1, 1,                                /* Parameter at index 253 */
  1, 1,                                /* Parameter at index 254 */
  1, 1,                                /* Parameter at index 255 */
  1, 2,                                /* Parameter at index 256 */
  1, 2,                                /* Parameter at index 257 */
  1, 1,                                /* Parameter at index 258 */
  1, 1,                                /* Parameter at index 259 */
  1, 3,                                /* Parameter at index 260 */
  1, 3,                                /* Parameter at index 261 */
  1, 1,                                /* Parameter at index 262 */
  1, 1,                                /* Parameter at index 263 */
  1, 1,                                /* Parameter at index 264 */
  1, 1,                                /* Parameter at index 265 */
  1, 1,                                /* Parameter at index 266 */
  1, 1,                                /* Parameter at index 267 */
  1, 1,                                /* Parameter at index 268 */
  1, 1,                                /* Parameter at index 269 */
  1, 1,                                /* Parameter at index 270 */
  1, 2,                                /* Parameter at index 271 */
  1, 2,                                /* Parameter at index 272 */
  1, 1,                                /* Parameter at index 273 */
  1, 1,                                /* Parameter at index 274 */
  1, 3,                                /* Parameter at index 275 */
  1, 3,                                /* Parameter at index 276 */
  1, 1,                                /* Parameter at index 277 */
  1, 1,                                /* Parameter at index 278 */
  1, 1,                                /* Parameter at index 279 */
  1, 1,                                /* Parameter at index 280 */
  1, 1,                                /* Parameter at index 281 */
  1, 1,                                /* Parameter at index 282 */
  1, 1,                                /* Parameter at index 283 */
  1, 1,                                /* Parameter at index 284 */
  1, 1,                                /* Parameter at index 285 */
  1, 2,                                /* Parameter at index 286 */
  1, 2,                                /* Parameter at index 287 */
  1, 1,                                /* Parameter at index 288 */
  1, 1,                                /* Parameter at index 289 */
  1, 3,                                /* Parameter at index 290 */
  1, 3,                                /* Parameter at index 291 */
  1, 1,                                /* Parameter at index 292 */
  1, 1,                                /* Parameter at index 293 */
  1, 1,                                /* Parameter at index 294 */
  1, 1,                                /* Parameter at index 295 */
  1, 1,                                /* Parameter at index 296 */
  1, 1,                                /* Parameter at index 297 */
  1, 1,                                /* Parameter at index 298 */
  1, 1,                                /* Parameter at index 299 */
  1, 1,                                /* Parameter at index 300 */
  1, 2,                                /* Parameter at index 301 */
  1, 2,                                /* Parameter at index 302 */
  1, 1,                                /* Parameter at index 303 */
  1, 1,                                /* Parameter at index 304 */
  1, 3,                                /* Parameter at index 305 */
  1, 3,                                /* Parameter at index 306 */
  1, 1,                                /* Parameter at index 307 */
  1, 1,                                /* Parameter at index 308 */
  1, 1,                                /* Parameter at index 309 */
  1, 1,                                /* Parameter at index 310 */
  1, 1,                                /* Parameter at index 311 */
  1, 1,                                /* Parameter at index 312 */
  1, 1,                                /* Parameter at index 313 */
  1, 1,                                /* Parameter at index 314 */
  1, 1,                                /* Parameter at index 315 */
  1, 1,                                /* Parameter at index 316 */
  1, 1,                                /* Parameter at index 317 */
  1, 1,                                /* Parameter at index 318 */
  1, 1,                                /* Parameter at index 319 */
  1, 1,                                /* Parameter at index 320 */
  1, 1,                                /* Parameter at index 321 */
  1, 1,                                /* Parameter at index 322 */
  1, 1,                                /* Parameter at index 323 */
  1, 1,                                /* Parameter at index 324 */
  1, 1,                                /* Parameter at index 325 */
  1, 1,                                /* Parameter at index 326 */
  1, 1,                                /* Parameter at index 327 */
  1, 1,                                /* Parameter at index 328 */
  1, 1,                                /* Parameter at index 329 */
  1, 1,                                /* Parameter at index 330 */
  1, 1,                                /* Parameter at index 331 */
  1, 1,                                /* Parameter at index 332 */
};

static NI_Signal NI_SigList[] DataSection(".NIVS.siglist") =
{
  { 0, "ctrl_custom_turning_frame/Input to model", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Inputtomodel) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 1, "ctrl_custom_turning_frame/start", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, start) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 2,
    "ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_p_x",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, K_p_x) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 3,
    "ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_p_y",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, K_p_y) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 4,
    "ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_p_psi",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, K_p_psi) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 5,
    "ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_i_psi",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, K_i_psi) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 6,
    "ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_i_x",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, K_i_x) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 7,
    "ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_i_y",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, K_i_y) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 8,
    "ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_d_psi",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, K_d_psi) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 9,
    "ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_d_x",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, K_d_x) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 10,
    "ctrl_custom_turning_frame/Initialization of parameters/Control Gains/K_d_y",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, K_d_y) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 11, "ctrl_custom_turning_frame/Pose/x_m", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, x_m) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1,
    2, 0, 0 },

  { 12, "ctrl_custom_turning_frame/Pose/y_m", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, y_m) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1,
    2, 0, 0 },

  { 13, "ctrl_custom_turning_frame/Pose/psi_m", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, psi_m) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 14, "ctrl_custom_turning_frame/Reference basin/Input to model", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Inputtomodel_m) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 15, "ctrl_custom_turning_frame/Reference basin/Gain5", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Gain5) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 16, "ctrl_custom_turning_frame/Controll switch", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Controllswitch) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 17, "ctrl_custom_turning_frame/Switch1/(1, 1)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Switch1) + (0*sizeof(real_T)), BLOCKIO_SIG,
    23, 1, 2, 0, 0 },

  { 18, "ctrl_custom_turning_frame/Switch1/(1, 2)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Switch1) + (1*sizeof(real_T)), BLOCKIO_SIG,
    23, 1, 2, 0, 0 },

  { 19, "ctrl_custom_turning_frame/Switch1/(1, 3)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Switch1) + (2*sizeof(real_T)), BLOCKIO_SIG,
    23, 1, 2, 0, 0 },

  { 20,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Integrator/(1, 1)", 0,
    "", offsetof(B_ctrl_custom_turning_frame_T, Integrator) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 21,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Integrator/(1, 2)", 0,
    "", offsetof(B_ctrl_custom_turning_frame_T, Integrator) + (1*sizeof(real_T)),
    BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 22,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Integrator/(1, 3)", 0,
    "", offsetof(B_ctrl_custom_turning_frame_T, Integrator) + (2*sizeof(real_T)),
    BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 23,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]/Sum",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Sum) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 24, "ctrl_custom_turning_frame/PID controller1/[-inf inf] to [-pi pi]/Sum",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Sum_c) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 25,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Integrator1/(1, 1)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Integrator1) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 26,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Integrator1/(1, 2)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Integrator1) + (1*sizeof
    (real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 27,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Integrator1/(1, 3)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Integrator1) + (2*sizeof
    (real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 28, "ctrl_custom_turning_frame/PID controller/Sum4", 0,
    "regulation error(1, 1)", offsetof(B_ctrl_custom_turning_frame_T,
    regulationerror) + (0*sizeof(real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 29, "ctrl_custom_turning_frame/PID controller/Sum4", 0,
    "regulation error(1, 2)", offsetof(B_ctrl_custom_turning_frame_T,
    regulationerror) + (1*sizeof(real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 30, "ctrl_custom_turning_frame/PID controller/Sum4", 0,
    "regulation error(1, 3)", offsetof(B_ctrl_custom_turning_frame_T,
    regulationerror) + (2*sizeof(real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 31, "ctrl_custom_turning_frame/Referance/Integrator1/(1, 1)", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Integrator1_i) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 32, "ctrl_custom_turning_frame/Referance/Integrator1/(1, 2)", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Integrator1_i) + (1*sizeof(real_T)),
    BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 33, "ctrl_custom_turning_frame/Referance/Integrator1/(1, 3)", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Integrator1_i) + (2*sizeof(real_T)),
    BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 34, "ctrl_custom_turning_frame/Switch/(1, 1)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Switch) + (0*sizeof(real_T)), BLOCKIO_SIG,
    23, 1, 2, 0, 0 },

  { 35, "ctrl_custom_turning_frame/Switch/(1, 2)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Switch) + (1*sizeof(real_T)), BLOCKIO_SIG,
    23, 1, 2, 0, 0 },

  { 36, "ctrl_custom_turning_frame/Switch/(1, 3)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Switch) + (2*sizeof(real_T)), BLOCKIO_SIG,
    23, 1, 2, 0, 0 },

  { 37, "ctrl_custom_turning_frame/start2/(1, 1)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, start2) + (0*sizeof(real_T)), BLOCKIO_SIG,
    24, 1, 2, 0, 0 },

  { 38, "ctrl_custom_turning_frame/start2/(1, 2)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, start2) + (1*sizeof(real_T)), BLOCKIO_SIG,
    24, 1, 2, 0, 0 },

  { 39, "ctrl_custom_turning_frame/start2/(1, 3)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, start2) + (2*sizeof(real_T)), BLOCKIO_SIG,
    24, 1, 2, 0, 0 },

  { 40, "ctrl_custom_turning_frame/start2/(1, 4)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, start2) + (3*sizeof(real_T)), BLOCKIO_SIG,
    24, 1, 2, 0, 0 },

  { 41, "ctrl_custom_turning_frame/start2/(1, 5)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, start2) + (4*sizeof(real_T)), BLOCKIO_SIG,
    24, 1, 2, 0, 0 },

  { 42, "ctrl_custom_turning_frame/start2/(1, 6)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, start2) + (5*sizeof(real_T)), BLOCKIO_SIG,
    24, 1, 2, 0, 0 },

  { 43, "ctrl_custom_turning_frame/Gain5", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Gain5_n) + (0*sizeof(real_T)), BLOCKIO_SIG,
    0, 1, 2, 0, 0 },

  { 44, "ctrl_custom_turning_frame/Gain", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Gain) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 45, "ctrl_custom_turning_frame/Gain1", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Gain1) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 46,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/rpm1",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, rpm1) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 47,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/rpm2",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, rpm2) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 48,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/rpm3",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, rpm3) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 49,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/rpm4",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, rpm4) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 50,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/rpm5",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, rpm5) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 51,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/rpm6",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, rpm6) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 52, "ctrl_custom_turning_frame/Thruster measurment/thr_angle_1", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, thr_angle_1) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 53, "ctrl_custom_turning_frame/Thruster measurment/thr_angle_2", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, thr_angle_2) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 54, "ctrl_custom_turning_frame/Thruster measurment/thr_angle_3", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, thr_angle_3) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 55, "ctrl_custom_turning_frame/Thruster measurment/thr_angle_4", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, thr_angle_4) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 56, "ctrl_custom_turning_frame/Thruster measurment/thr_angle_5", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, thr_angle_5) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 57, "ctrl_custom_turning_frame/Thruster measurment/thr_angle_6", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, thr_angle_6) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 58, "ctrl_custom_turning_frame/Thrust allocation/Angle_controller", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Angle_controller) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 59,
    "ctrl_custom_turning_frame/Thrust allocation/Choosing Fixed // Azimuth angle/(1, 1)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, ChoosingFixedAzimuthangle) +
    (0*sizeof(real_T)), BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 60,
    "ctrl_custom_turning_frame/Thrust allocation/Choosing Fixed // Azimuth angle/(1, 2)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, ChoosingFixedAzimuthangle) +
    (1*sizeof(real_T)), BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 61,
    "ctrl_custom_turning_frame/Thrust allocation/Choosing Fixed // Azimuth angle/(1, 3)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, ChoosingFixedAzimuthangle) +
    (2*sizeof(real_T)), BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 62,
    "ctrl_custom_turning_frame/Thrust allocation/Choosing Fixed // Azimuth angle/(1, 4)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, ChoosingFixedAzimuthangle) +
    (3*sizeof(real_T)), BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 63,
    "ctrl_custom_turning_frame/Thrust allocation/Choosing Fixed // Azimuth angle/(1, 5)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, ChoosingFixedAzimuthangle) +
    (4*sizeof(real_T)), BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 64,
    "ctrl_custom_turning_frame/Thrust allocation/Choosing Fixed // Azimuth angle/(1, 6)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, ChoosingFixedAzimuthangle) +
    (5*sizeof(real_T)), BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 65, "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 1", 0,
    "", offsetof(B_ctrl_custom_turning_frame_T, Saturation1) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 66, "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 2", 0,
    "", offsetof(B_ctrl_custom_turning_frame_T, Saturation2) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 67, "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 3", 0,
    "", offsetof(B_ctrl_custom_turning_frame_T, Saturation3) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 68, "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 4", 0,
    "", offsetof(B_ctrl_custom_turning_frame_T, Saturation4) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 69, "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 5", 0,
    "", offsetof(B_ctrl_custom_turning_frame_T, Saturation5) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 70, "ctrl_custom_turning_frame/Thruster control /Subsystem1/Saturation 6", 0,
    "", offsetof(B_ctrl_custom_turning_frame_T, Saturation6) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 71, "ctrl_custom_turning_frame/Radians to Degrees/Gain/(1, 1)", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Gain_h) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 72, "ctrl_custom_turning_frame/Radians to Degrees/Gain/(1, 2)", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Gain_h) + (1*sizeof(real_T)),
    BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 73, "ctrl_custom_turning_frame/Radians to Degrees/Gain/(1, 3)", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Gain_h) + (2*sizeof(real_T)),
    BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 74, "ctrl_custom_turning_frame/Radians to Degrees/Gain/(1, 4)", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Gain_h) + (3*sizeof(real_T)),
    BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 75, "ctrl_custom_turning_frame/Radians to Degrees/Gain/(1, 5)", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Gain_h) + (4*sizeof(real_T)),
    BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 76, "ctrl_custom_turning_frame/Radians to Degrees/Gain/(1, 6)", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Gain_h) + (5*sizeof(real_T)),
    BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 77,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Integrator2/(1, 1)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Integrator2) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 78,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Integrator2/(1, 2)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Integrator2) + (1*sizeof
    (real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 79,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Integrator2/(1, 3)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Integrator2) + (2*sizeof
    (real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 80,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(1, 1)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix2) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 81,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(2, 1)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix2) + (1*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 82,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(3, 1)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix2) + (2*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 83,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(1, 2)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix2) + (3*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 84,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(2, 2)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix2) + (4*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 85,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(3, 2)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix2) + (5*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 86,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(1, 3)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix2) + (6*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 87,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(2, 3)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix2) + (7*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 88,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(3, 3)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix2) + (8*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 89, "ctrl_custom_turning_frame/Nonlinear Passisve Observer/M^-1/(1, 1)", 0,
    "", offsetof(B_ctrl_custom_turning_frame_T, M1) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 90, "ctrl_custom_turning_frame/Nonlinear Passisve Observer/M^-1/(1, 2)", 0,
    "", offsetof(B_ctrl_custom_turning_frame_T, M1) + (1*sizeof(real_T)),
    BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 91, "ctrl_custom_turning_frame/Nonlinear Passisve Observer/M^-1/(1, 3)", 0,
    "", offsetof(B_ctrl_custom_turning_frame_T, M1) + (2*sizeof(real_T)),
    BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 92,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(1, 1)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 93,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(2, 1)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix) + (1*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 94,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(3, 1)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix) + (2*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 95,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(1, 2)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix) + (3*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 96,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(2, 2)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix) + (4*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 97,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(3, 2)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix) + (5*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 98,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(1, 3)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix) + (6*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 99,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(2, 3)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix) + (7*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 100,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(3, 3)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix) + (8*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 101,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(1, 1)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix1) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 102,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(2, 1)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix1) + (1*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 103,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(3, 1)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix1) + (2*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 104,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(1, 2)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix1) + (3*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 105,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(2, 2)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix1) + (4*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 106,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(3, 2)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix1) + (5*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 107,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(1, 3)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix1) + (6*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 108,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(2, 3)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix1) + (7*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 109,
    "ctrl_custom_turning_frame/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(3, 3)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CreateDiagonalMatrix1) + (8*
    sizeof(real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 110,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Matrix Multiply1/(1, 1)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, MatrixMultiply1) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 111,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Matrix Multiply1/(1, 2)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, MatrixMultiply1) + (1*sizeof
    (real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 112,
    "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Matrix Multiply1/(1, 3)",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, MatrixMultiply1) + (2*sizeof
    (real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 113, "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Sum1/(1, 1)", 0,
    "", offsetof(B_ctrl_custom_turning_frame_T, Sum1) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 114, "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Sum1/(1, 2)", 0,
    "", offsetof(B_ctrl_custom_turning_frame_T, Sum1) + (1*sizeof(real_T)),
    BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 115, "ctrl_custom_turning_frame/Nonlinear Passisve Observer/Sum1/(1, 3)", 0,
    "", offsetof(B_ctrl_custom_turning_frame_T, Sum1) + (2*sizeof(real_T)),
    BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 116, "ctrl_custom_turning_frame/PID controller/Gain5", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Gain5_a) + (0*sizeof(real_T)), BLOCKIO_SIG,
    0, 1, 2, 0, 0 },

  { 117, "ctrl_custom_turning_frame/Referance/x_ref", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, x_ref) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 118, "ctrl_custom_turning_frame/Referance/y_ref", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, y_ref) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 119,
    "ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/w_x",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, w_x) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 120,
    "ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/w_y",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, w_y) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 121,
    "ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/w_psi",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, w_psi) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 122,
    "ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/zeta_psi",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, zeta_psi) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 123,
    "ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/zeta_x",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, zeta_x) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 124,
    "ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/zeta_y",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, zeta_y) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 125,
    "ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/T_psi",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, T_psi) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 126,
    "ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/T_x",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, T_x) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 127,
    "ctrl_custom_turning_frame/Initialization of parameters/Guidance Gains/T_y",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, T_y) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 128, "ctrl_custom_turning_frame/Referance/psi_ref", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, psi_ref) + (0*sizeof(real_T)), BLOCKIO_SIG,
    0, 1, 2, 0, 0 },

  { 129, "ctrl_custom_turning_frame/Referance/Sum/(1, 1)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Sum_m) + (0*sizeof(real_T)), BLOCKIO_SIG, 23,
    1, 2, 0, 0 },

  { 130, "ctrl_custom_turning_frame/Referance/Sum/(1, 2)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Sum_m) + (1*sizeof(real_T)), BLOCKIO_SIG, 23,
    1, 2, 0, 0 },

  { 131, "ctrl_custom_turning_frame/Referance/Sum/(1, 3)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Sum_m) + (2*sizeof(real_T)), BLOCKIO_SIG, 23,
    1, 2, 0, 0 },

  { 132, "ctrl_custom_turning_frame/Referance/Sum2/(1, 1)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Sum2) + (0*sizeof(real_T)), BLOCKIO_SIG, 23,
    1, 2, 0, 0 },

  { 133, "ctrl_custom_turning_frame/Referance/Sum2/(1, 2)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Sum2) + (1*sizeof(real_T)), BLOCKIO_SIG, 23,
    1, 2, 0, 0 },

  { 134, "ctrl_custom_turning_frame/Referance/Sum2/(1, 3)", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Sum2) + (2*sizeof(real_T)), BLOCKIO_SIG, 23,
    1, 2, 0, 0 },

  { 135, "ctrl_custom_turning_frame/Thruster control /Delay/(1, 1)", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Delay) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 136, "ctrl_custom_turning_frame/Thruster control /Delay/(1, 2)", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Delay) + (1*sizeof(real_T)),
    BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 137, "ctrl_custom_turning_frame/Thruster control /Delay/(1, 3)", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Delay) + (2*sizeof(real_T)),
    BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 138, "ctrl_custom_turning_frame/Thruster control /Delay/(1, 4)", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Delay) + (3*sizeof(real_T)),
    BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 139, "ctrl_custom_turning_frame/Thruster control /Delay/(1, 5)", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Delay) + (4*sizeof(real_T)),
    BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 140, "ctrl_custom_turning_frame/Thruster control /Delay/(1, 6)", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Delay) + (5*sizeof(real_T)),
    BLOCKIO_SIG, 24, 1, 2, 0, 0 },

  { 141, "ctrl_custom_turning_frame/Thruster control /Thruster 1/Delay", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Delay_d) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 142,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Delay",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Delay_j) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 143,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Discrete Transfer Fcn",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, DiscreteTransferFcn) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 144,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Discrete Derivative/TSamp",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, TSamp) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 145,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Inertia compensation",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Inertiacompensation) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 146,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Sum1",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Sum1_b) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 147,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Memory",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Memory) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 148,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Core controller/Kp",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Kp) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 149,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Core controller/reset",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, reset) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 150,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Sum",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Sum_h) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 151,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Discrete Transfer Fcn",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, DiscreteTransferFcn_b) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 152,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Shaft dynamics/Finding rotation speed",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Findingrotationspeed) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 153,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Core controller/Ki",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Ki) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 154, "ctrl_custom_turning_frame/Thruster control /Thruster 2/Delay", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Delay_c) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 155,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Delay",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Delay_b) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 156,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Discrete Transfer Fcn",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, DiscreteTransferFcn_l) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 157,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Discrete Derivative/TSamp",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, TSamp_m) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 158,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Inertia compensation",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Inertiacompensation_b) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 159,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Sum1",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Sum1_l) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 160,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Memory",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Memory_l) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 161,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Core controller/Kp",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Kp_c) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 162,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Core controller/reset",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, reset_l) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 163,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Sum",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Sum_d) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 164,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Discrete Transfer Fcn",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, DiscreteTransferFcn_c) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 165,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Shaft dynamics/Finding rotation speed",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Findingrotationspeed_h) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 166,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Core controller/Ki",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Ki_c) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 167, "ctrl_custom_turning_frame/Thruster control /Thruster 3/Delay", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Delay_h) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 168,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Delay",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Delay_i) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 169,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Discrete Transfer Fcn",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, DiscreteTransferFcn_d) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 170,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Discrete Derivative/TSamp",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, TSamp_k) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 171,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Inertia compensation",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Inertiacompensation_m) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 172,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Sum1",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Sum1_c) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 173,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Memory",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Memory_ln) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 174,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Core controller/Kp",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Kp_i) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 175,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Core controller/reset",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, reset_i) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 176,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Sum",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Sum_n) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 177,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Discrete Transfer Fcn",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, DiscreteTransferFcn_o) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 178,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Shaft dynamics/Finding rotation speed",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Findingrotationspeed_m) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 179,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Core controller/Ki",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Ki_o) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 180, "ctrl_custom_turning_frame/Thruster control /Thruster 4/Delay", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Delay_e) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 181,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Delay",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Delay_m) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 182,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Discrete Transfer Fcn",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, DiscreteTransferFcn_p) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 183,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Discrete Derivative/TSamp",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, TSamp_d) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 184,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Inertia compensation",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Inertiacompensation_bn) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 185,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Sum1",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Sum1_cp) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 186,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Memory",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Memory_j) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 187,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Core controller/Kp",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Kp_o) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 188,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Core controller/reset",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, reset_h) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 189,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Sum",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Sum_a) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 190,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Discrete Transfer Fcn",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, DiscreteTransferFcn_oy) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 191,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Shaft dynamics/Finding rotation speed",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Findingrotationspeed_p) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 192,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Core controller/Ki",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Ki_g) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 193, "ctrl_custom_turning_frame/Thruster control /Thruster 5/Delay", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Delay_jj) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 194,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Delay",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Delay_n) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 195,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Discrete Transfer Fcn",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, DiscreteTransferFcn_br) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 196,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Discrete Derivative/TSamp",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, TSamp_k4) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 197,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Inertia compensation",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Inertiacompensation_a) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 198,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Sum1",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Sum1_e) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 199,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Memory",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Memory_d) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 200,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Core controller/Kp",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Kp_d) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 201,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Core controller/reset",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, reset_e) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 202,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Sum",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Sum_f) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 203,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Discrete Transfer Fcn",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, DiscreteTransferFcn_m) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 204,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Shaft dynamics/Finding rotation speed",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Findingrotationspeed_j) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 205,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Core controller/Ki",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Ki_m) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 206, "ctrl_custom_turning_frame/Thruster control /Thruster 6/Delay", 0, "",
    offsetof(B_ctrl_custom_turning_frame_T, Delay_mu) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 207,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Delay",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Delay_e5) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 208,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Discrete Transfer Fcn",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, DiscreteTransferFcn_lk) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 209,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Discrete Derivative/TSamp",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, TSamp_mr) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 210,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Inertia compensation",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Inertiacompensation_b3) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 211,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Sum1",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Sum1_p) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 212,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Memory",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Memory_o) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 213,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Core controller/Kp",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Kp_k) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 214,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Core controller/reset",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, reset_iu) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 215,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Sum",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Sum_g) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 216,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Discrete Transfer Fcn",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, DiscreteTransferFcn_f) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 217,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Shaft dynamics/Finding rotation speed",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Findingrotationspeed_c) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 218,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Core controller/Ki",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Ki_l) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 219, "ctrl_custom_turning_frame/IMU/Acc_x", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Acc_x) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 220, "ctrl_custom_turning_frame/IMU/Acc_y", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Acc_y) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 221, "ctrl_custom_turning_frame/IMU/Acc_z", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Acc_z) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 222, "ctrl_custom_turning_frame/IMU/Gyro_x", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Gyro_x) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 223, "ctrl_custom_turning_frame/IMU/Gyro_y", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Gyro_y) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 224, "ctrl_custom_turning_frame/IMU/Gyro_z", 0, "", offsetof
    (B_ctrl_custom_turning_frame_T, Gyro_z) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 225,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/MATLAB Function",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, n_d) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 226,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/MATLAB Function",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, n_d_m) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 227,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/MATLAB Function",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, n_d_k) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 228,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Propeller Hydrodynamics/Actual Force and Torque",
    1, "", offsetof(B_ctrl_custom_turning_frame_T, Qa) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 229,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Propeller Hydrodynamics/Actual Force and Torque",
    2, "", offsetof(B_ctrl_custom_turning_frame_T, Pa) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 230,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function1",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, Tc_out) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 231,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function",
    0, "(1, 1)", offsetof(B_ctrl_custom_turning_frame_T, output) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 26, 1, 2, 0, 0 },

  { 232,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function",
    0, "(1, 2)", offsetof(B_ctrl_custom_turning_frame_T, output) + (1*sizeof
    (real_T)), BLOCKIO_SIG, 26, 1, 2, 0, 0 },

  { 233,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function",
    0, "(1, 3)", offsetof(B_ctrl_custom_turning_frame_T, output) + (2*sizeof
    (real_T)), BLOCKIO_SIG, 26, 1, 2, 0, 0 },

  { 234,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function",
    0, "(1, 4)", offsetof(B_ctrl_custom_turning_frame_T, output) + (3*sizeof
    (real_T)), BLOCKIO_SIG, 26, 1, 2, 0, 0 },

  { 235,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function",
    0, "(1, 5)", offsetof(B_ctrl_custom_turning_frame_T, output) + (4*sizeof
    (real_T)), BLOCKIO_SIG, 26, 1, 2, 0, 0 },

  { 236,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function",
    0, "(1, 6)", offsetof(B_ctrl_custom_turning_frame_T, output) + (5*sizeof
    (real_T)), BLOCKIO_SIG, 26, 1, 2, 0, 0 },

  { 237,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function",
    0, "(1, 7)", offsetof(B_ctrl_custom_turning_frame_T, output) + (6*sizeof
    (real_T)), BLOCKIO_SIG, 26, 1, 2, 0, 0 },

  { 238,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function",
    0, "(1, 8)", offsetof(B_ctrl_custom_turning_frame_T, output) + (7*sizeof
    (real_T)), BLOCKIO_SIG, 26, 1, 2, 0, 0 },

  { 239,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function",
    0, "(1, 9)", offsetof(B_ctrl_custom_turning_frame_T, output) + (8*sizeof
    (real_T)), BLOCKIO_SIG, 26, 1, 2, 0, 0 },

  { 240,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function",
    0, "(1, 10)", offsetof(B_ctrl_custom_turning_frame_T, output) + (9*sizeof
    (real_T)), BLOCKIO_SIG, 26, 1, 2, 0, 0 },

  { 241,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function",
    0, "(1, 11)", offsetof(B_ctrl_custom_turning_frame_T, output) + (10*sizeof
    (real_T)), BLOCKIO_SIG, 26, 1, 2, 0, 0 },

  { 242,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function",
    0, "(1, 12)", offsetof(B_ctrl_custom_turning_frame_T, output) + (11*sizeof
    (real_T)), BLOCKIO_SIG, 26, 1, 2, 0, 0 },

  { 243, "ctrl_custom_turning_frame/MATLAB Function", 0, "(1, 1)", offsetof
    (B_ctrl_custom_turning_frame_T, commanded_tau) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 244, "ctrl_custom_turning_frame/MATLAB Function", 0, "(1, 2)", offsetof
    (B_ctrl_custom_turning_frame_T, commanded_tau) + (1*sizeof(real_T)),
    BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 245, "ctrl_custom_turning_frame/MATLAB Function", 0, "(1, 3)", offsetof
    (B_ctrl_custom_turning_frame_T, commanded_tau) + (2*sizeof(real_T)),
    BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 246,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Supervisor",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_Supervisor_gj.u) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 247,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    0, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePowera_g.Qcq) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 248,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    1, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePowera_g.Qcp) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 249,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    2, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePowera_g.Qcc) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 250,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Propeller Hydrodynamics/Actual Force and Torque",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_ActualForceandTorque_c.Ta)
    + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 251,
    "ctrl_custom_turning_frame/Thruster control /Thruster 6/Propeller Hydrodynamics/Actual Force and Torque",
    1, "", offsetof(B_ctrl_custom_turning_frame_T, sf_ActualForceandTorque_c.Qa)
    + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 252,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Supervisor",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_Supervisor_p.u) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 253,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/MATLAB Function",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction_o.n_d) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 254,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/MATLAB Function",
    1, "", offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction_o.T_r) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 255,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    0, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePowera_o.Qcq) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 256,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    1, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePowera_o.Qcp) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 257,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    2, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePowera_o.Qcc) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 258,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Propeller Hydrodynamics/Actual Force and Torque",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_ActualForceandTorque_k.Ta)
    + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 259,
    "ctrl_custom_turning_frame/Thruster control /Thruster 5/Propeller Hydrodynamics/Actual Force and Torque",
    1, "", offsetof(B_ctrl_custom_turning_frame_T, sf_ActualForceandTorque_k.Qa)
    + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 260,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Supervisor",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_Supervisor_g.u) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 261,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/MATLAB Function",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction_d.n_d) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 262,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/MATLAB Function",
    1, "", offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction_d.T_r) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 263,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    0, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePowera_p.Qcq) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 264,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    1, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePowera_p.Qcp) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 265,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    2, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePowera_p.Qcc) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 266,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Propeller Hydrodynamics/Actual Force and Torque",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_ActualForceandTorque_a.Ta)
    + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 267,
    "ctrl_custom_turning_frame/Thruster control /Thruster 4/Propeller Hydrodynamics/Actual Force and Torque",
    1, "", offsetof(B_ctrl_custom_turning_frame_T, sf_ActualForceandTorque_a.Qa)
    + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 268,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Supervisor",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_Supervisor_j.u) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 269,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    0, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePower_ao.Qcq) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 270,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    1, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePower_ao.Qcp) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 271,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    2, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePower_ao.Qcc) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 272,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Propeller Hydrodynamics/Actual Force and Torque",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_ActualForceandTorque_f.Ta)
    + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 273,
    "ctrl_custom_turning_frame/Thruster control /Thruster 3/Propeller Hydrodynamics/Actual Force and Torque",
    1, "", offsetof(B_ctrl_custom_turning_frame_T, sf_ActualForceandTorque_f.Qa)
    + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 274,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Supervisor",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_Supervisor_c.u) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 275,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/MATLAB Function",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction_a.n_d) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 276,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/MATLAB Function",
    1, "", offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction_a.T_r) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 277,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    0, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePowera_a.Qcq) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 278,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    1, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePowera_a.Qcp) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 279,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    2, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePowera_a.Qcc) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 280,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Propeller Hydrodynamics/Actual Force and Torque",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_ActualForceandTorque_m.Ta)
    + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 281,
    "ctrl_custom_turning_frame/Thruster control /Thruster 2/Propeller Hydrodynamics/Actual Force and Torque",
    1, "", offsetof(B_ctrl_custom_turning_frame_T, sf_ActualForceandTorque_m.Qa)
    + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 282,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Supervisor",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_Supervisor.u) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 283,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    0, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePowerand.Qcq) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 284,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    1, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePowerand.Qcp) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 285,
    "ctrl_custom_turning_frame/Thruster control /Thruster 1/Thruster control/Core controller/Core controller: Torque,Power and Combined Torque//Power",
    2, "", offsetof(B_ctrl_custom_turning_frame_T,
                    sf_CorecontrollerTorquePowerand.Qcc) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 286,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function6",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction6.Tc_out) +
    (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 287,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function5",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction5.Tc_out) +
    (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 288,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function4",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction4.Tc_out) +
    (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 289,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function3",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction3.Tc_out) +
    (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 290,
    "ctrl_custom_turning_frame/Thruster control /Thrust and Shaft speed mapped to PWM/MATLAB Function2",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction2.Tc_out) +
    (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 291,
    "ctrl_custom_turning_frame/Thrust allocation/Optimal angle path and  constraints on rotation speed/Discrete-Time Integrator",
    0, "angle", offsetof(B_ctrl_custom_turning_frame_T, CoreSubsys[5].angle) +
    (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 292,
    "ctrl_custom_turning_frame/Thrust allocation/Optimal angle path and  constraints on rotation speed/Delay",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CoreSubsys[5].Delay) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 293,
    "ctrl_custom_turning_frame/Thrust allocation/Optimal angle path and  constraints on rotation speed/Max Rotation Rate",
    0, "", offsetof(B_ctrl_custom_turning_frame_T, CoreSubsys[5].MaxRotationRate)
    + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 294, "ctrl_custom_turning_frame/Referance/MATLAB Function1", 0, "(1, 1)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction1_k.y) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 295, "ctrl_custom_turning_frame/Referance/MATLAB Function1", 0, "(2, 1)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction1_k.y) + (1*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 296, "ctrl_custom_turning_frame/Referance/MATLAB Function1", 0, "(3, 1)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction1_k.y) + (2*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 297, "ctrl_custom_turning_frame/Referance/MATLAB Function1", 0, "(1, 2)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction1_k.y) + (3*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 298, "ctrl_custom_turning_frame/Referance/MATLAB Function1", 0, "(2, 2)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction1_k.y) + (4*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 299, "ctrl_custom_turning_frame/Referance/MATLAB Function1", 0, "(3, 2)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction1_k.y) + (5*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 300, "ctrl_custom_turning_frame/Referance/MATLAB Function1", 0, "(1, 3)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction1_k.y) + (6*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 301, "ctrl_custom_turning_frame/Referance/MATLAB Function1", 0, "(2, 3)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction1_k.y) + (7*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 302, "ctrl_custom_turning_frame/Referance/MATLAB Function1", 0, "(3, 3)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction1_k.y) + (8*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 303, "ctrl_custom_turning_frame/Referance/MATLAB Function", 0, "(1, 1)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction_b.y) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 304, "ctrl_custom_turning_frame/Referance/MATLAB Function", 0, "(2, 1)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction_b.y) + (1*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 305, "ctrl_custom_turning_frame/Referance/MATLAB Function", 0, "(3, 1)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction_b.y) + (2*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 306, "ctrl_custom_turning_frame/Referance/MATLAB Function", 0, "(1, 2)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction_b.y) + (3*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 307, "ctrl_custom_turning_frame/Referance/MATLAB Function", 0, "(2, 2)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction_b.y) + (4*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 308, "ctrl_custom_turning_frame/Referance/MATLAB Function", 0, "(3, 2)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction_b.y) + (5*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 309, "ctrl_custom_turning_frame/Referance/MATLAB Function", 0, "(1, 3)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction_b.y) + (6*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 310, "ctrl_custom_turning_frame/Referance/MATLAB Function", 0, "(2, 3)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction_b.y) + (7*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 311, "ctrl_custom_turning_frame/Referance/MATLAB Function", 0, "(3, 3)",
    offsetof(B_ctrl_custom_turning_frame_T, sf_MATLABFunction_b.y) + (8*sizeof
    (real_T)), BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { -1, "", -1, "", 0, 0, 0 }
};

static int32_t NI_SigListSize DataSection(".NIVS.siglistsize") = 312;
static int32_t NI_VirtualBlockSources[1];
static int32_t NI_SigDimList[] DataSection(".NIVS.sigdimlist") =
{ 1, 1
};

static int32_t NI_ExtListSize DataSection(".NIVS.extlistsize") = 92;
static NI_ExternalIO NI_ExtList[] DataSection(".NIVS.extlist") =
{
  { 1, "Input to model", 1, EXT_IN, 1, 1, 1 },

  { 2, "start", 0, EXT_IN, 1, 1, 1 },

  { 3, "Initialization of parameters/Control Gains/K_p_x", 0, EXT_IN, 1, 1, 1 },

  { 4, "Initialization of parameters/Control Gains/K_p_y", 0, EXT_IN, 1, 1, 1 },

  { 5, "Initialization of parameters/Control Gains/K_p_psi", 0, EXT_IN, 1, 1, 1
  },

  { 6, "Initialization of parameters/Control Gains/K_i_psi", 0, EXT_IN, 1, 1, 1
  },

  { 7, "Initialization of parameters/Control Gains/K_i_x", 0, EXT_IN, 1, 1, 1 },

  { 8, "Initialization of parameters/Control Gains/K_i_y", 0, EXT_IN, 1, 1, 1 },

  { 9, "Initialization of parameters/Control Gains/K_d_psi", 0, EXT_IN, 1, 1, 1
  },

  { 10, "Initialization of parameters/Control Gains/K_d_x", 0, EXT_IN, 1, 1, 1 },

  { 11, "Initialization of parameters/Control Gains/K_d_y", 0, EXT_IN, 1, 1, 1 },

  { 12, "Pose/x_m", 0, EXT_IN, 1, 1, 1 },

  { 13, "Pose/y_m", 0, EXT_IN, 1, 1, 1 },

  { 14, "Pose/psi_m", 0, EXT_IN, 1, 1, 1 },

  { 15, "Reference basin/Input to model", 0, EXT_IN, 1, 1, 1 },

  { 16, "Controll switch", 0, EXT_IN, 1, 1, 1 },

  { 17, "start2", 1, EXT_IN, 6, 6, 1 },

  { 18, "Thruster control /Thrust and Shaft speed mapped to PWM/rpm1 ", 0,
    EXT_IN, 1, 1, 1 },

  { 19, "Thruster control /Thrust and Shaft speed mapped to PWM/rpm2", 0, EXT_IN,
    1, 1, 1 },

  { 20, "Thruster control /Thrust and Shaft speed mapped to PWM/rpm3", 0, EXT_IN,
    1, 1, 1 },

  { 21, "Thruster control /Thrust and Shaft speed mapped to PWM/rpm4", 0, EXT_IN,
    1, 1, 1 },

  { 22, "Thruster control /Thrust and Shaft speed mapped to PWM/rpm5", 0, EXT_IN,
    1, 1, 1 },

  { 23, "Thruster control /Thrust and Shaft speed mapped to PWM/rpm6", 0, EXT_IN,
    1, 1, 1 },

  { 24, "Thruster measurment/thr_angle_1", 0, EXT_IN, 1, 1, 1 },

  { 25, "Thruster measurment/thr_angle_2", 0, EXT_IN, 1, 1, 1 },

  { 26, "Thruster measurment/thr_angle_3", 0, EXT_IN, 1, 1, 1 },

  { 27, "Thruster measurment/thr_angle_4", 0, EXT_IN, 1, 1, 1 },

  { 28, "Thruster measurment/thr_angle_5", 0, EXT_IN, 1, 1, 1 },

  { 29, "Thruster measurment/thr_angle_6", 0, EXT_IN, 1, 1, 1 },

  { 30, "Thrust allocation/Angle_controller", 0, EXT_IN, 1, 1, 1 },

  { 31, "Referance/x_ref", 0, EXT_IN, 1, 1, 1 },

  { 32, "Referance/y_ref", 0, EXT_IN, 1, 1, 1 },

  { 33, "Initialization of parameters/Guidance Gains/w_x", 0, EXT_IN, 1, 1, 1 },

  { 34, "Initialization of parameters/Guidance Gains/w_y", 0, EXT_IN, 1, 1, 1 },

  { 35, "Initialization of parameters/Guidance Gains/w_psi", 0, EXT_IN, 1, 1, 1
  },

  { 36, "Initialization of parameters/Guidance Gains/zeta_psi", 0, EXT_IN, 1, 1,
    1 },

  { 37, "Initialization of parameters/Guidance Gains/zeta_x", 0, EXT_IN, 1, 1, 1
  },

  { 38, "Initialization of parameters/Guidance Gains/zeta_y", 0, EXT_IN, 1, 1, 1
  },

  { 39, "Initialization of parameters/Guidance Gains/T_psi", 0, EXT_IN, 1, 1, 1
  },

  { 40, "Initialization of parameters/Guidance Gains/T_x", 0, EXT_IN, 1, 1, 1 },

  { 41, "Initialization of parameters/Guidance Gains/T_y", 0, EXT_IN, 1, 1, 1 },

  { 42, "Referance/psi_ref", 0, EXT_IN, 1, 1, 1 },

  { 43, "Thruster control /Thruster 1/Thruster control/Core controller/reset", 0,
    EXT_IN, 1, 1, 1 },

  { 44, "Thruster control /Thruster 2/Thruster control/Core controller/reset", 0,
    EXT_IN, 1, 1, 1 },

  { 45, "Thruster control /Thruster 3/Thruster control/Core controller/reset", 0,
    EXT_IN, 1, 1, 1 },

  { 46, "Thruster control /Thruster 4/Thruster control/Core controller/reset", 0,
    EXT_IN, 1, 1, 1 },

  { 47, "Thruster control /Thruster 5/Thruster control/Core controller/reset", 0,
    EXT_IN, 1, 1, 1 },

  { 48, "Thruster control /Thruster 6/Thruster control/Core controller/reset", 0,
    EXT_IN, 1, 1, 1 },

  { 49, "IMU/Acc_x", 1, EXT_IN, 1, 1, 1 },

  { 50, "IMU/Acc_y", 1, EXT_IN, 1, 1, 1 },

  { 51, "IMU/Acc_z", 1, EXT_IN, 1, 1, 1 },

  { 52, "IMU/Gyro_x", 1, EXT_IN, 1, 1, 1 },

  { 53, "IMU/Gyro_y", 1, EXT_IN, 1, 1, 1 },

  { 54, "IMU/Gyro_z", 1, EXT_IN, 1, 1, 1 },

  { 1, "Output to Workspace", 1, EXT_OUT, 1, 1, 1 },

  { 2, "tau_surge", 0, EXT_OUT, 1, 1, 1 },

  { 3, "tau_sway", 0, EXT_OUT, 1, 1, 1 },

  { 4, "tau_psi", 0, EXT_OUT, 1, 1, 1 },

  { 5, "psi_hat", 0, EXT_OUT, 1, 1, 1 },

  { 6, "x_hat", 0, EXT_OUT, 1, 1, 1 },

  { 7, "y_hat", 0, EXT_OUT, 1, 1, 1 },

  { 8, "tau_commanded_psi", 0, EXT_OUT, 1, 1, 1 },

  { 9, "tau_commanded_x", 0, EXT_OUT, 1, 1, 1 },

  { 10, "Observer output /eta_hat output/x_hat", 0, EXT_OUT, 1, 1, 1 },

  { 11, "Observer output /eta_hat output/y_hat", 0, EXT_OUT, 1, 1, 1 },

  { 12, "Observer output /eta_hat output/psi_hat", 0, EXT_OUT, 1, 1, 1 },

  { 13, "Observer output /nu_hat output/u_hat", 0, EXT_OUT, 1, 1, 1 },

  { 14, "Observer output /nu_hat output/v_hat", 0, EXT_OUT, 1, 1, 1 },

  { 15, "Observer output /nu_hat output/r_hat", 0, EXT_OUT, 1, 1, 1 },

  { 16, "Observer output /nu_dot_hat output/u_dot_hat", 0, EXT_OUT, 1, 1, 1 },

  { 17, "Observer output /nu_dot_hat output/v_dot_hat", 0, EXT_OUT, 1, 1, 1 },

  { 18, "Observer output /nu_dot_hat output/r_dot_hat", 0, EXT_OUT, 1, 1, 1 },

  { 19, "Observer output /b_hat output/b_x_hat", 0, EXT_OUT, 1, 1, 1 },

  { 20, "Observer output /b_hat output/b_y_hat", 0, EXT_OUT, 1, 1, 1 },

  { 21, "Observer output /b_hat output/b_psi_hat", 0, EXT_OUT, 1, 1, 1 },

  { 22, "gain/alpha1", 1, EXT_OUT, 1, 1, 1 },

  { 23, "gain/alpha2", 1, EXT_OUT, 1, 1, 1 },

  { 24, "gain/alpha3", 1, EXT_OUT, 1, 1, 1 },

  { 25, "gain/alpha4", 1, EXT_OUT, 1, 1, 1 },

  { 26, "gain/alpha5", 1, EXT_OUT, 1, 1, 1 },

  { 27, "gain/alpha6", 1, EXT_OUT, 1, 1, 1 },

  { 28, "gain/u1", 0, EXT_OUT, 1, 1, 1 },

  { 29, "gain/u2", 0, EXT_OUT, 1, 1, 1 },

  { 30, "gain/u3", 0, EXT_OUT, 1, 1, 1 },

  { 31, "gain/u4", 0, EXT_OUT, 1, 1, 1 },

  { 32, "gain/u5", 0, EXT_OUT, 1, 1, 1 },

  { 33, "gain/u6", 0, EXT_OUT, 1, 1, 1 },

  { 34, "tau_commanded_y", 0, EXT_OUT, 1, 1, 1 },

  { 35, "PID controller/y_error", 0, EXT_OUT, 1, 1, 1 },

  { 36, "PID controller/psi_error", 0, EXT_OUT, 1, 1, 1 },

  { 37, "PID controller/x_error", 0, EXT_OUT, 1, 1, 1 },

  { 38, "Thruster control /Thruster 1/Propeller Hydrodynamics/Control_test_Pa",
    0, EXT_OUT, 1, 1, 1 },

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
  "ctrl_custom_turning_frame";
static const char* NI_CompiledModelVersion = "1.106";
static const char* NI_CompiledModelDateTime = "Sun Jul 23 16:07:01 2017";
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
  memcpy(&rtParameter[0], &ctrl_custom_turning_frame_P, sizeof
         (P_ctrl_custom_turning_frame_T));
  return NI_OK;
}

/*  After the model has initialized and updated the parameters in
   rtParameter[0] (aka ctrl_custom_turning_frame_P) we make a copy to rtParameter[1] so
   that it is double buffered. We also do a memcpy to each task's copy.
 */
int32_t NI_InitParamDoubleBuf()
{
  int32_t idx = 1;

#ifdef MULTITASKING

  for (; idx <= NUMST - TID01EQ; idx++)
#endif

    memcpy(&rtParameter[idx], &rtParameter[0], sizeof
           (P_ctrl_custom_turning_frame_T));
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
             (P_ctrl_custom_turning_frame_T));
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
               (P_ctrl_custom_turning_frame_T));
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
             (P_ctrl_custom_turning_frame_T));
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
           (P_ctrl_custom_turning_frame_T));
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
           (P_ctrl_custom_turning_frame_T));
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
  int32_t ForEach_itr1;
  if ((numContStates != NULL) && (numDiscStates != NULL) && (numClockTicks !=
       NULL)) {
    if (*numContStates < 0 || *numDiscStates < 0 || *numClockTicks < 0) {
      *numContStates = 35;
      *numDiscStates = 2579.0;
      *numClockTicks = NUMST - TID01EQ;
      return NI_OK;
    }
  }

  if ((contStates != NULL) && (contStatesNames != NULL)) {
    idx = 0;
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE), 1, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE), 2, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.TransferFcn2_CSTATE), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "TransferFcn2_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator1_CSTATE), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_n), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE_n");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_n), 1, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE_n");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_n), 2, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE_n");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator2_CSTATE), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator2_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator2_CSTATE), 1, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator2_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator2_CSTATE), 2, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator2_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_m), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE_m");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_m), 1, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE_m");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_m), 2, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE_m");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_d), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE_d");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_d), 1, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE_d");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_d), 2, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE_d");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE_a), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_a");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE_f), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_f");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE_ao), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_ao");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE_k), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_k");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE_k2), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_k2");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE_i), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_i");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator2_CSTATE_j), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator2_CSTATE_j");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator2_CSTATE_j), 1, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator2_CSTATE_j");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator2_CSTATE_j), 2, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator2_CSTATE_j");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE_f5), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_f5");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE_f5), 1, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_f5");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE_f5), 2, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_f5");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE_m), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_m");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE_ko), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_ko");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE_c), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_c");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE_p), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_p");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE_n), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_n");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_turning_frame_X.Integrator_CSTATE_ci), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_ci");
  }

  if ((discStates != NULL) && (discStatesNames != NULL)) {
    idx = 0;
    for (count = 0; count < 6; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.Delay_DSTATE, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.Delay_DSTATE");
    }

    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Delay_DSTATE_f, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Delay_DSTATE_f");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Delay_DSTATE_k, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Delay_DSTATE_k");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states, 0, 29, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states, 1, 29, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.UD_DSTATE, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.UD_DSTATE");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Delay_DSTATE_c, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Delay_DSTATE_c");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Delay_DSTATE_j, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Delay_DSTATE_j");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j, 0, 29, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j, 1, 29, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.UD_DSTATE_f, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.UD_DSTATE_f");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j0, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j0");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Delay_DSTATE_m, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Delay_DSTATE_m");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Delay_DSTATE_e, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Delay_DSTATE_e");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_f, 0, 29, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_f");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_f, 1, 29, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_f");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.UD_DSTATE_p, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.UD_DSTATE_p");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_m, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_m");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Delay_DSTATE_kg, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Delay_DSTATE_kg");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Delay_DSTATE_ki, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Delay_DSTATE_ki");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_e, 0, 29, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_e");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_e, 1, 29, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_e");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.UD_DSTATE_a, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.UD_DSTATE_a");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_p, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_p");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Delay_DSTATE_p, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Delay_DSTATE_p");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Delay_DSTATE_kf, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Delay_DSTATE_kf");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_jn, 0, 29, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_jn");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_jn, 1, 29, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_jn");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.UD_DSTATE_l, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.UD_DSTATE_l");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_g, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_g");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Delay_DSTATE_o, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Delay_DSTATE_o");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Delay_DSTATE_h, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Delay_DSTATE_h");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k0, 0, 29, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k0");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k0, 1, 29, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k0");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.UD_DSTATE_e, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.UD_DSTATE_e");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_pv, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_pv");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Inputtomodel_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Inputtomodel_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.OutputtoWorkspace_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.OutputtoWorkspace_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.start_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.start_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.K_p_x_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.K_p_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.K_p_y_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.K_p_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.K_p_psi_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.K_p_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.K_i_psi_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.K_i_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.K_i_x_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.K_i_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.K_i_y_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.K_i_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.K_d_psi_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.K_d_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.K_d_x_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.K_d_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.K_d_y_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.K_d_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.x_m_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.x_m_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.y_m_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.y_m_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.psi_m_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.psi_m_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Inputtomodel_DWORK1_o, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Inputtomodel_DWORK1_o");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Controllswitch_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Controllswitch_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.tau_surge_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.tau_surge_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.tau_sway_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.tau_sway_DWORK1");
    for (count = 0; count < 6; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.start2_DWORK1, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.start2_DWORK1");
    }

    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.tau_psi_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.tau_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.psi_hat_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.psi_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.x_hat_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.x_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.y_hat_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.y_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.rpm1_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.rpm1_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.rpm2_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.rpm2_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.rpm3_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.rpm3_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.rpm4_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.rpm4_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.rpm5_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.rpm5_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.rpm6_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.rpm6_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.thr_angle_1_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.thr_angle_1_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.thr_angle_2_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.thr_angle_2_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.thr_angle_3_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.thr_angle_3_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.thr_angle_4_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.thr_angle_4_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.thr_angle_5_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.thr_angle_5_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.thr_angle_6_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.thr_angle_6_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Angle_controller_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Angle_controller_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.tau_commanded_psi_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.tau_commanded_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.tau_commanded_x_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.tau_commanded_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.x_hat_DWORK1_o, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.x_hat_DWORK1_o");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.y_hat_DWORK1_d, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.y_hat_DWORK1_d");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.psi_hat_DWORK1_g, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.psi_hat_DWORK1_g");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.u_hat_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.u_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.v_hat_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.v_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.r_hat_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.r_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.u_dot_hat_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.u_dot_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.v_dot_hat_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.v_dot_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.r_dot_hat_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.r_dot_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.b_x_hat_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.b_x_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.b_y_hat_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.b_y_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.b_psi_hat_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.b_psi_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.alpha1_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.alpha1_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.alpha2_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.alpha2_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.alpha3_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.alpha3_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.alpha4_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.alpha4_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.alpha5_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.alpha5_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.alpha6_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.alpha6_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.u1_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.u1_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.u2_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.u2_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.u3_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.u3_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.u4_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.u4_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.u5_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.u5_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.u6_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.u6_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.tau_commanded_y_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.tau_commanded_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.y_error_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.y_error_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.psi_error_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.psi_error_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.x_error_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.x_error_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.x_ref_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.x_ref_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.y_ref_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.y_ref_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.w_x_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.w_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.w_y_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.w_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.w_psi_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.w_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.zeta_psi_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.zeta_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.zeta_x_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.zeta_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.zeta_y_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.zeta_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.T_psi_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.T_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.T_x_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.T_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.T_y_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.T_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.psi_ref_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.psi_ref_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.PrevY, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.PrevY");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Memory_PreviousInput, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Memory_PreviousInput");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.reset_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.reset_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_n, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_n");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Control_test_Pa_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Control_test_Pa_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_f, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_f");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.PrevY_p, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.PrevY_p");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Memory_PreviousInput_g, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Memory_PreviousInput_g");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.reset_DWORK1_d, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.reset_DWORK1_d");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_fg, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_fg");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_k, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_k");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.PrevY_k, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.PrevY_k");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Memory_PreviousInput_f, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Memory_PreviousInput_f");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.reset_DWORK1_o, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.reset_DWORK1_o");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_b, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_b");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_l, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_l");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.PrevY_m, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.PrevY_m");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Memory_PreviousInput_d, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Memory_PreviousInput_d");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.reset_DWORK1_l, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.reset_DWORK1_l");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_fg5, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_fg5");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_i, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_i");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.PrevY_mo, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.PrevY_mo");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Memory_PreviousInput_l, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Memory_PreviousInput_l");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.reset_DWORK1_dp, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.reset_DWORK1_dp");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_m, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_m");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_o, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_o");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.PrevY_k4, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.PrevY_k4");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Memory_PreviousInput_f2, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Memory_PreviousInput_f2");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.reset_DWORK1_dy, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.reset_DWORK1_dy");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_ir, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_ir");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Acc_x_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Acc_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Acc_y_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Acc_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Acc_z_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Acc_z_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Gyro_x_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Gyro_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Gyro_y_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Gyro_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_turning_frame_DW.Gyro_z_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_turning_frame_DW.Gyro_z_DWORK1");
    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.Inputtomodel_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.Inputtomodel_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.OutputtoWorkspace_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.OutputtoWorkspace_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.start_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.start_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.K_p_x_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.K_p_x_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.K_p_y_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.K_p_y_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.K_p_psi_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.K_p_psi_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.K_i_psi_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.K_i_psi_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.K_i_x_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.K_i_x_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.K_i_y_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.K_i_y_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.K_d_psi_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.K_d_psi_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.K_d_x_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.K_d_x_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.K_d_y_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.K_d_y_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.x_m_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.x_m_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.y_m_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.y_m_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.psi_m_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.psi_m_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.Inputtomodel_DWORK2_c, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.Inputtomodel_DWORK2_c");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.Controllswitch_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.Controllswitch_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.tau_surge_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.tau_surge_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.tau_sway_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.tau_sway_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.start2_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.start2_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.tau_psi_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.tau_psi_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.psi_hat_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.psi_hat_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.x_hat_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.x_hat_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.y_hat_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.y_hat_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.rpm1_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.rpm1_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.rpm2_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.rpm2_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.rpm3_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.rpm3_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.rpm4_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.rpm4_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.rpm5_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.rpm5_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.rpm6_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.rpm6_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.thr_angle_1_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.thr_angle_1_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.thr_angle_2_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.thr_angle_2_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.thr_angle_3_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.thr_angle_3_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.thr_angle_4_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.thr_angle_4_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.thr_angle_5_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.thr_angle_5_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.thr_angle_6_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.thr_angle_6_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.Angle_controller_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.Angle_controller_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.tau_commanded_psi_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.tau_commanded_psi_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.tau_commanded_x_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.tau_commanded_x_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.x_hat_DWORK2_b, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.x_hat_DWORK2_b");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.y_hat_DWORK2_l, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.y_hat_DWORK2_l");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.psi_hat_DWORK2_k, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.psi_hat_DWORK2_k");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.u_hat_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.u_hat_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.v_hat_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.v_hat_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.r_hat_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.r_hat_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.u_dot_hat_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.u_dot_hat_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.v_dot_hat_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.v_dot_hat_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.r_dot_hat_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.r_dot_hat_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.b_x_hat_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.b_x_hat_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.b_y_hat_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.b_y_hat_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.b_psi_hat_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.b_psi_hat_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.alpha1_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.alpha1_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.alpha2_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.alpha2_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.alpha3_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.alpha3_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.alpha4_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.alpha4_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.alpha5_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.alpha5_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.alpha6_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.alpha6_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.u1_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.u1_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.u2_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.u2_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.u3_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.u3_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.u4_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.u4_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.u5_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.u5_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.u6_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.u6_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.tau_commanded_y_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.tau_commanded_y_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.y_error_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.y_error_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.psi_error_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.psi_error_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.x_error_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.x_error_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.x_ref_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.x_ref_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.y_ref_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.y_ref_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.w_x_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.w_x_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.w_y_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.w_y_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.w_psi_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.w_psi_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.zeta_psi_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.zeta_psi_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.zeta_x_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.zeta_x_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.zeta_y_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.zeta_y_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.T_psi_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.T_psi_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.T_x_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.T_x_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.T_y_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.T_y_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.psi_ref_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.psi_ref_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.reset_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.reset_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.Control_test_Pa_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.Control_test_Pa_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.reset_DWORK2_k, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.reset_DWORK2_k");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.reset_DWORK2_p, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.reset_DWORK2_p");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.reset_DWORK2_m, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.reset_DWORK2_m");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.reset_DWORK2_i, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.reset_DWORK2_i");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.reset_DWORK2_j, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.reset_DWORK2_j");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.Acc_x_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.Acc_x_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.Acc_y_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.Acc_y_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.Acc_z_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.Acc_z_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.Gyro_x_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.Gyro_x_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.Gyro_y_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.Gyro_y_DWORK2");
    }

    for (count = 0; count < 26; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.Gyro_z_DWORK2, count, 22, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.Gyro_z_DWORK2");
    }

    for (ForEach_itr1 = 0; ForEach_itr1 < 6; ForEach_itr1++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr1].
         DiscreteTimeIntegrator_DSTATE, 0, 0, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr1].DiscreteTimeIntegrator_DSTATE");
    }

    for (ForEach_itr1 = 0; ForEach_itr1 < 6; ForEach_itr1++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr1].Delay_DSTATE, 0,
         0, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr1].Delay_DSTATE");
    }

    for (ForEach_itr1 = 0; ForEach_itr1 < 6; ForEach_itr1++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr1].
         DiscreteTimeIntegrator_PrevRese, 0, 2, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr1].DiscreteTimeIntegrator_PrevRese");
    }

    for (ForEach_itr1 = 0; ForEach_itr1 < 6; ForEach_itr1++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr1].
         DiscreteTimeIntegrator_IC_LOADI, 0, 3, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr1].DiscreteTimeIntegrator_IC_LOADI");
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
  int32_t ForEach_itr1;
  if (contStates != NULL) {
    idx = 0;
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE), 0,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE), 1,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE), 2,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.TransferFcn2_CSTATE),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator1_CSTATE), 0,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_n),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_n),
      1, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_n),
      2, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator2_CSTATE), 0,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator2_CSTATE), 1,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator2_CSTATE), 2,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_m),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_m),
      1, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_m),
      2, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_d),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_d),
      1, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator1_CSTATE_d),
      2, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE_a),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE_f),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE_ao),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE_k),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE_k2),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE_i),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator2_CSTATE_j),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator2_CSTATE_j),
      1, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator2_CSTATE_j),
      2, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE_f5),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE_f5),
      1, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE_f5),
      2, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE_m),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE_ko),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE_c),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE_p),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE_n),
      0, contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_turning_frame_X.Integrator_CSTATE_ci),
      0, contStates[idx++], 0, 0);
  }

  if (discStates != NULL) {
    idx = 0;
    for (count = 0; count < 6; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Delay_DSTATE, count,
        discStates[idx++], 24, 0);
    }

    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Delay_DSTATE_f, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Delay_DSTATE_k, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states, 0,
       discStates[idx++], 29, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states, 1,
       discStates[idx++], 29, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.UD_DSTATE, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Delay_DSTATE_c, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Delay_DSTATE_j, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j, 0,
       discStates[idx++], 29, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j, 1,
       discStates[idx++], 29, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.UD_DSTATE_f, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_j0, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Delay_DSTATE_m, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Delay_DSTATE_e, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_f, 0,
       discStates[idx++], 29, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_f, 1,
       discStates[idx++], 29, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.UD_DSTATE_p, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_m, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Delay_DSTATE_kg, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Delay_DSTATE_ki, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_e, 0,
       discStates[idx++], 29, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_e, 1,
       discStates[idx++], 29, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.UD_DSTATE_a, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_p, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Delay_DSTATE_p, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Delay_DSTATE_kf, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_jn, 0,
       discStates[idx++], 29, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_jn, 1,
       discStates[idx++], 29, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.UD_DSTATE_l, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_g, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Delay_DSTATE_o, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Delay_DSTATE_h, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k0, 0,
       discStates[idx++], 29, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_k0, 1,
       discStates[idx++], 29, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.UD_DSTATE_e, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_states_pv, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Inputtomodel_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.OutputtoWorkspace_DWORK1, 0, discStates[idx
       ++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.start_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_p_x_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_p_y_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_p_psi_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_i_psi_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_i_x_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_i_y_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_d_psi_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_d_x_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_d_y_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.x_m_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.y_m_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.psi_m_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Inputtomodel_DWORK1_o,
      0, discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Controllswitch_DWORK1,
      0, discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.tau_surge_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.tau_sway_DWORK1, 0,
      discStates[idx++], 0, 0);
    for (count = 0; count < 6; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.start2_DWORK1, count,
        discStates[idx++], 24, 0);
    }

    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.tau_psi_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.psi_hat_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.x_hat_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.y_hat_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.rpm1_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.rpm2_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.rpm3_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.rpm4_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.rpm5_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.rpm6_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.thr_angle_1_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.thr_angle_2_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.thr_angle_3_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.thr_angle_4_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.thr_angle_5_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.thr_angle_6_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.Angle_controller_DWORK1, 0, discStates[idx
       ++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.tau_commanded_psi_DWORK1, 0, discStates[idx
       ++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.tau_commanded_x_DWORK1,
      0, discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.x_hat_DWORK1_o, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.y_hat_DWORK1_d, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.psi_hat_DWORK1_g, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u_hat_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.v_hat_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.r_hat_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u_dot_hat_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.v_dot_hat_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.r_dot_hat_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.b_x_hat_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.b_y_hat_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.b_psi_hat_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.alpha1_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.alpha2_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.alpha3_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.alpha4_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.alpha5_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.alpha6_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u1_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u2_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u3_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u4_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u5_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u6_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.tau_commanded_y_DWORK1,
      0, discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.y_error_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.psi_error_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.x_error_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.x_ref_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.y_ref_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.w_x_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.w_y_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.w_psi_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.zeta_psi_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.zeta_x_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.zeta_y_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.T_psi_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.T_x_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.T_y_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.psi_ref_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp, 0, discStates[idx
       ++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.PrevY, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Memory_PreviousInput,
      0, discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.reset_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_n, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Control_test_Pa_DWORK1,
      0, discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_f, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.PrevY_p, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Memory_PreviousInput_g,
      0, discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.reset_DWORK1_d, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_fg, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_k, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.PrevY_k, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Memory_PreviousInput_f,
      0, discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.reset_DWORK1_o, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_b, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_l, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.PrevY_m, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Memory_PreviousInput_d,
      0, discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.reset_DWORK1_l, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_fg5, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_i, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.PrevY_mo, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Memory_PreviousInput_l,
      0, discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.reset_DWORK1_dp, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_m, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_o, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.PrevY_k4, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.Memory_PreviousInput_f2, 0, discStates[idx
       ++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.reset_DWORK1_dy, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType
      (&ctrl_custom_turning_frame_DW.DiscreteTransferFcn_tmp_ir, 0,
       discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Acc_x_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Acc_y_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Acc_z_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Gyro_x_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Gyro_y_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Gyro_z_DWORK1, 0,
      discStates[idx++], 0, 0);
    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Inputtomodel_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType
        (&ctrl_custom_turning_frame_DW.OutputtoWorkspace_DWORK2, count,
         discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.start_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_p_x_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_p_y_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_p_psi_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_i_psi_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_i_x_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_i_y_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_d_psi_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_d_x_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.K_d_y_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.x_m_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.y_m_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.psi_m_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType
        (&ctrl_custom_turning_frame_DW.Inputtomodel_DWORK2_c, count,
         discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType
        (&ctrl_custom_turning_frame_DW.Controllswitch_DWORK2, count,
         discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.tau_surge_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.tau_sway_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.start2_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.tau_psi_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.psi_hat_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.x_hat_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.y_hat_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.rpm1_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.rpm2_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.rpm3_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.rpm4_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.rpm5_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.rpm6_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.thr_angle_1_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.thr_angle_2_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.thr_angle_3_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.thr_angle_4_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.thr_angle_5_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.thr_angle_6_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType
        (&ctrl_custom_turning_frame_DW.Angle_controller_DWORK2, count,
         discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType
        (&ctrl_custom_turning_frame_DW.tau_commanded_psi_DWORK2, count,
         discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType
        (&ctrl_custom_turning_frame_DW.tau_commanded_x_DWORK2, count,
         discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.x_hat_DWORK2_b,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.y_hat_DWORK2_l,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.psi_hat_DWORK2_k,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u_hat_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.v_hat_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.r_hat_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u_dot_hat_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.v_dot_hat_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.r_dot_hat_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.b_x_hat_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.b_y_hat_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.b_psi_hat_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.alpha1_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.alpha2_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.alpha3_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.alpha4_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.alpha5_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.alpha6_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u1_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u2_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u3_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u4_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u5_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.u6_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType
        (&ctrl_custom_turning_frame_DW.tau_commanded_y_DWORK2, count,
         discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.y_error_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.psi_error_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.x_error_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.x_ref_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.y_ref_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.w_x_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.w_y_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.w_psi_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.zeta_psi_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.zeta_x_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.zeta_y_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.T_psi_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.T_x_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.T_y_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.psi_ref_DWORK2,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.reset_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType
        (&ctrl_custom_turning_frame_DW.Control_test_Pa_DWORK2, count,
         discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.reset_DWORK2_k,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.reset_DWORK2_p,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.reset_DWORK2_m,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.reset_DWORK2_i,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.reset_DWORK2_j,
        count, discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Acc_x_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Acc_y_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Acc_z_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Gyro_x_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Gyro_y_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (count = 0; count < 26; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_turning_frame_DW.Gyro_z_DWORK2, count,
        discStates[idx++], 22, 0);
    }

    for (ForEach_itr1 = 0; ForEach_itr1 < 6; ForEach_itr1++) {
      NIRT_SetValueByDataType
        (&ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr1].
         DiscreteTimeIntegrator_DSTATE, 0, discStates[idx++], 0, 0);
    }

    for (ForEach_itr1 = 0; ForEach_itr1 < 6; ForEach_itr1++) {
      NIRT_SetValueByDataType
        (&ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr1].Delay_DSTATE, 0,
         discStates[idx++], 0, 0);
    }

    for (ForEach_itr1 = 0; ForEach_itr1 < 6; ForEach_itr1++) {
      NIRT_SetValueByDataType
        (&ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr1].
         DiscreteTimeIntegrator_PrevRese, 0, discStates[idx++], 2, 0);
    }

    for (ForEach_itr1 = 0; ForEach_itr1 < 6; ForEach_itr1++) {
      NIRT_SetValueByDataType
        (&ctrl_custom_turning_frame_DW.CoreSubsys[ForEach_itr1].
         DiscreteTimeIntegrator_IC_LOADI, 0, discStates[idx++], 3, 0);
    }
  }

  if (clockTicks != NULL) {
    S->Timing.clockTick0 = clockTicks[0];
    S->Timing.clockTick1 = clockTicks[0];
  }

  return NI_OK;
}

#endif                                 // of NI_ROOTMODEL_ctrl_custom_turning_frame
