/*
 * ctrl_custom.c
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

#include "ctrl_custom.h"
#include "ctrl_custom_private.h"

const real_T ctrl_custom_RGND = 0.0;   /* real_T ground */

/* Block signals (auto storage) */
B_ctrl_custom_T ctrl_custom_B;

/* Continuous states */
X_ctrl_custom_T ctrl_custom_X;

/* Block states (auto storage) */
DW_ctrl_custom_T ctrl_custom_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_ctrl_custom_T ctrl_custom_PrevZCX;

/* Real-time model */
RT_MODEL_ctrl_custom_T ctrl_custom_M_;
RT_MODEL_ctrl_custom_T *const ctrl_custom_M = &ctrl_custom_M_;

/* Forward declaration for local functions */
static void ctrl_custom_diag(const real_T v[6], real_T d[36]);
static real_T ctrl_custom_xnrm2(int32_T n, const real_T x[18], int32_T ix0);
static real_T ctrl_custom_xnrm2_g(int32_T n, const real_T x[6], int32_T ix0);
static void ctrl_custom_xaxpy_nb(int32_T n, real_T a, const real_T x[3], int32_T
  ix0, real_T y[18], int32_T iy0);
static void ctrl_custom_xaxpy_n(int32_T n, real_T a, const real_T x[18], int32_T
  ix0, real_T y[3], int32_T iy0);
static void ctrl_custom_xscal(real_T a, real_T x[9], int32_T ix0);
static void ctrl_custom_xscal_b(real_T a, real_T x[36], int32_T ix0);
static void ctrl_custom_xswap(real_T x[36], int32_T ix0, int32_T iy0);
static void ctrl_custom_xswap_e(real_T x[9], int32_T ix0, int32_T iy0);
static void ctrl_custom_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
static void ctrl_custom_xrot(real_T x[36], int32_T ix0, int32_T iy0, real_T c,
  real_T s);
static void ctrl_custom_xrot_c(real_T x[9], int32_T ix0, int32_T iy0, real_T c,
  real_T s);
static real_T ctrl_custom_xdotc_pd(int32_T n, const real_T x[36], int32_T ix0,
  const real_T y[36], int32_T iy0);
static void ctrl_custom_xaxpy_nbvx(int32_T n, real_T a, int32_T ix0, real_T y[36],
  int32_T iy0);
static real_T ctrl_custom_xdotc_p(int32_T n, const real_T x[9], int32_T ix0,
  const real_T y[9], int32_T iy0);
static void ctrl_custom_xaxpy_nbv(int32_T n, real_T a, int32_T ix0, real_T y[9],
  int32_T iy0);
static real_T ctrl_custom_xdotc(int32_T n, const real_T x[18], int32_T ix0,
  const real_T y[18], int32_T iy0);
static void ctrl_custom_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[18],
  int32_T iy0);
static void ctrl_custom_svd_b(const real_T A[18], real_T U[9], real_T S[9],
  real_T V[18]);
static void ctrl_custom_svd(const real_T A[18], real_T U[9], real_T S[9], real_T
  V[18]);
static void ctrl_custom_isfinite(const real_T x[9], boolean_T b[9]);
static real_T ctrl_custom_xnrm2_gw(int32_T n, const real_T x[36], int32_T ix0);
static real_T ctrl_custom_xnrm2_gwr(int32_T n, const real_T x[12], int32_T ix0);
static void ctrl_custom_xaxpy_nbvxkwp(int32_T n, real_T a, const real_T x[3],
  int32_T ix0, real_T y[36], int32_T iy0);
static void ctrl_custom_xaxpy_nbvxkw(int32_T n, real_T a, const real_T x[36],
  int32_T ix0, real_T y[3], int32_T iy0);
static void ctrl_custom_xscal_b0(real_T a, real_T x[144], int32_T ix0);
static void ctrl_custom_xswap_ef(real_T x[144], int32_T ix0, int32_T iy0);
static void ctrl_custom_xrot_cj(real_T x[144], int32_T ix0, int32_T iy0, real_T
  c, real_T s);
static real_T ctrl_custom_xdotc_pd2t(int32_T n, const real_T x[144], int32_T ix0,
  const real_T y[144], int32_T iy0);
static void ctrl_custom_xaxpy_nbvxkwpl(int32_T n, real_T a, int32_T ix0, real_T
  y[144], int32_T iy0);
static real_T ctrl_custom_xdotc_pd2(int32_T n, const real_T x[36], int32_T ix0,
  const real_T y[36], int32_T iy0);
static void ctrl_custom_xaxpy_nbvxk(int32_T n, real_T a, int32_T ix0, real_T y
  [36], int32_T iy0);
static void ctrl_custom_svd_bye(const real_T A[36], real_T U[9], real_T S[9],
  real_T V[36]);
static void ctrl_custom_svd_by(const real_T A[36], real_T U[9], real_T S[9],
  real_T V[36]);
static void ctrl_custom_abs(const real_T x[2], real_T y[2]);
static void ctrl_custom_cosd(real_T *x);
static void ctrl_custom_sind(real_T *x);
static void ctrl_custom_cosd_e(real_T *x);
static void ctrl_custom_sind_j(real_T *x);

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
  int_T nXc = 27;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  ctrl_custom_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  ctrl_custom_output();
  ctrl_custom_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  ctrl_custom_output();
  ctrl_custom_derivatives();

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
 *    '<S10>/MATLAB Function'
 *    '<S10>/MATLAB Function1'
 */
void ctrl_custom_MATLABFunction(const real_T rtu_omega[9], const real_T
  rtu_zeta[9], B_MATLABFunction_ctrl_custom_T *localB)
{
  int32_T i;
  int32_T i_0;

  /* MATLAB Function 'Referance/MATLAB Function': '<S37>:1' */
  /* '<S37>:1:3' */
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
 *    '<S48>/MATLAB Function2'
 *    '<S48>/MATLAB Function3'
 *    '<S48>/MATLAB Function4'
 *    '<S48>/MATLAB Function5'
 *    '<S48>/MATLAB Function6'
 */
void ctrl_custom_MATLABFunction2(real_T rtu_Tc_in1, real_T rtu_signal, real_T
  rtu_Tc_in2, B_MATLABFunction2_ctrl_custom_T *localB)
{
  /* MATLAB Function 'Thruster control /Thrust mapped to PWM/MATLAB Function2': '<S50>:1' */
  if (rtu_signal >= 0.0) {
    /* '<S50>:1:4' */
    /* '<S50>:1:5' */
    localB->Tc_out = rtu_Tc_in1;
  } else {
    /* signal < 0 */
    /* '<S50>:1:7' */
    localB->Tc_out = rtu_Tc_in2;
  }
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_diag(const real_T v[6], real_T d[36])
{
  int32_T j;
  memset(&d[0], 0, 36U * sizeof(real_T));
  for (j = 0; j < 6; j++) {
    d[j + 6 * j] = v[j];
  }
}

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static real_T ctrl_custom_xnrm2(int32_T n, const real_T x[18], int32_T ix0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static real_T ctrl_custom_xnrm2_g(int32_T n, const real_T x[6], int32_T ix0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xaxpy_nb(int32_T n, real_T a, const real_T x[3], int32_T
  ix0, real_T y[18], int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xaxpy_n(int32_T n, real_T a, const real_T x[18], int32_T
  ix0, real_T y[3], int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xscal(real_T a, real_T x[9], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 2; k++) {
    x[k - 1] *= a;
  }
}

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xscal_b(real_T a, real_T x[36], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 5; k++) {
    x[k - 1] *= a;
  }
}

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xswap(real_T x[36], int32_T ix0, int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xswap_e(real_T x[9], int32_T ix0, int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xrotg(real_T *a, real_T *b, real_T *c, real_T *s)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xrot(real_T x[36], int32_T ix0, int32_T iy0, real_T c,
  real_T s)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xrot_c(real_T x[9], int32_T ix0, int32_T iy0, real_T c,
  real_T s)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static real_T ctrl_custom_xdotc_pd(int32_T n, const real_T x[36], int32_T ix0,
  const real_T y[36], int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xaxpy_nbvx(int32_T n, real_T a, int32_T ix0, real_T y[36],
  int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static real_T ctrl_custom_xdotc_p(int32_T n, const real_T x[9], int32_T ix0,
  const real_T y[9], int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xaxpy_nbv(int32_T n, real_T a, int32_T ix0, real_T y[9],
  int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static real_T ctrl_custom_xdotc(int32_T n, const real_T x[18], int32_T ix0,
  const real_T y[18], int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[18],
  int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_svd_b(const real_T A[18], real_T U[9], real_T S[9],
  real_T V[18])
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
  snorm = ctrl_custom_xnrm2(3, b_A, 1);
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
      ctrl_custom_xaxpy(3, -(ctrl_custom_xdotc(3, b_A, 1, b_A, qs + 1) / b_A[0]),
                        1, b_A, qs + 1);
    }

    e[q] = b_A[qs];
  }

  while (i + 1 < 4) {
    U[i] = b_A[i];
    i++;
  }

  snorm = ctrl_custom_xnrm2_g(5, e, 2);
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
      ctrl_custom_xaxpy_n(2, e[i], b_A, 3 * i + 2, work, 2);
    }

    for (i = 1; i + 1 < 7; i++) {
      ctrl_custom_xaxpy_nb(2, -e[i] / e[1], work, 2, b_A, 3 * i + 2);
    }
  }

  for (i = 1; i + 1 < 7; i++) {
    Vf[i] = e[i];
  }

  apply_transform = false;
  snorm = ctrl_custom_xnrm2(2, b_A, 5);
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
      ctrl_custom_xaxpy(2, -(ctrl_custom_xdotc(2, b_A, 5, b_A, qs + 1) / b_A[4]),
                        5, b_A, qs + 1);
    }

    e[q] = b_A[qs];
  }

  for (i = 1; i + 1 < 4; i++) {
    U[i + 3] = b_A[i + 3];
  }

  snorm = ctrl_custom_xnrm2_g(4, e, 3);
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
      ctrl_custom_xaxpy_n(1, e[i], b_A, 3 * i + 3, work, 3);
    }

    for (i = 2; i + 1 < 7; i++) {
      ctrl_custom_xaxpy_nb(1, -e[i] / e[2], work, 3, b_A, 3 * i + 3);
    }
  }

  for (i = 2; i + 1 < 7; i++) {
    Vf[i + 6] = e[i];
  }

  for (q = 3; q + 1 < 7; q++) {
    e[q] = b_A[3 * q + 2];
  }

  snorm = ctrl_custom_xnrm2_g(3, e, 4);
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
        ctrl_custom_xaxpy_nbv(3 - q, -(ctrl_custom_xdotc_p(3 - q, U, i + 1, U,
          qs) / U[i]), i + 1, U, qs);
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
        ctrl_custom_xaxpy_nbvx(5 - i, -(ctrl_custom_xdotc_pd(5 - i, Vf, q, Vf,
          kase) / Vf[q - 1]), q, Vf, kase);
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
    ctrl_custom_xscal(snorm, U, 1);
  }

  if (ztest != 0.0) {
    ztest0 = fabs(ztest);
    snorm = ztest0 / ztest;
    ztest = ztest0;
    s[1] *= snorm;
    ctrl_custom_xscal_b(snorm, Vf, 7);
  }

  e[0] = ztest;
  ztest = e[1];
  if (s[1] != 0.0) {
    ztest0 = fabs(s[1]);
    snorm = s[1] / ztest0;
    s[1] = ztest0;
    ztest = e[1] / snorm;
    ctrl_custom_xscal(snorm, U, 4);
  }

  if (ztest != 0.0) {
    ztest0 = fabs(ztest);
    snorm = ztest0 / ztest;
    ztest = ztest0;
    s[2] = b_A[8] * snorm;
    ctrl_custom_xscal_b(snorm, Vf, 13);
  }

  e[1] = ztest;
  ztest = e[2];
  if (s[2] != 0.0) {
    ztest0 = fabs(s[2]);
    snorm = s[2] / ztest0;
    s[2] = ztest0;
    ztest = e[2] / snorm;
    ctrl_custom_xscal(snorm, U, 7);
  }

  if (ztest != 0.0) {
    ztest0 = fabs(ztest);
    snorm = ztest0 / ztest;
    ztest = ztest0;
    s[3] = 0.0 * snorm;
    ctrl_custom_xscal_b(snorm, Vf, 19);
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
        ctrl_custom_xrotg(&ztest, &ztest0, &sqds, &smm1);
        s[qs] = ztest;
        if (qs + 1 > q + 1) {
          ztest0 = e[qs - 1] * -smm1;
          e[qs - 1] *= sqds;
        }

        ctrl_custom_xrot(Vf, 1 + 6 * qs, 1 + 6 * (m + 1), sqds, smm1);
      }
      break;

     case 2:
      ztest0 = e[q - 1];
      e[q - 1] = 0.0;
      for (qs = q; qs + 1 <= m + 2; qs++) {
        ztest = s[qs];
        ctrl_custom_xrotg(&ztest, &ztest0, &sqds, &smm1);
        s[qs] = ztest;
        ztest0 = -smm1 * e[qs];
        e[qs] *= sqds;
        ctrl_custom_xrot_c(U, 1 + 3 * qs, 1 + 3 * (q - 1), sqds, smm1);
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
        ctrl_custom_xrotg(&ztest0, &ztest, &sqds, &smm1);
        if (qs > q + 1) {
          e[qs - 2] = ztest0;
        }

        ztest0 = s[qs - 1] * sqds + e[qs - 1] * smm1;
        e[qs - 1] = e[qs - 1] * sqds - s[qs - 1] * smm1;
        ztest = smm1 * s[qs];
        s[qs] *= sqds;
        ctrl_custom_xrot(Vf, 1 + 6 * (qs - 1), 1 + 6 * qs, sqds, smm1);
        ctrl_custom_xrotg(&ztest0, &ztest, &sqds, &smm1);
        s[qs - 1] = ztest0;
        ztest0 = e[qs - 1] * sqds + smm1 * s[qs];
        s[qs] = e[qs - 1] * -smm1 + sqds * s[qs];
        ztest = smm1 * e[qs];
        e[qs] *= sqds;
        if (qs < 3) {
          ctrl_custom_xrot_c(U, 1 + 3 * (qs - 1), 1 + 3 * qs, sqds, smm1);
        }
      }

      e[m] = ztest0;
      i++;
      break;

     default:
      if (s[q] < 0.0) {
        s[q] = -s[q];
        ctrl_custom_xscal_b(-1.0, Vf, 1 + 6 * q);
      }

      i = q + 1;
      while ((q + 1 < 4) && (s[q] < s[i])) {
        ztest0 = s[q];
        s[q] = s[i];
        s[i] = ztest0;
        ctrl_custom_xswap(Vf, 1 + 6 * q, 1 + 6 * (q + 1));
        if (q + 1 < 3) {
          ctrl_custom_xswap_e(U, 1 + 3 * q, 1 + 3 * (q + 1));
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_svd(const real_T A[18], real_T U[9], real_T S[9], real_T
  V[18])
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
    ctrl_custom_svd_b(A, U, S, V);
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_isfinite(const real_T x[9], boolean_T b[9])
{
  int32_T i;
  for (i = 0; i < 9; i++) {
    b[i] = ((!rtIsInf(x[i])) && (!rtIsNaN(x[i])));
  }
}

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static real_T ctrl_custom_xnrm2_gw(int32_T n, const real_T x[36], int32_T ix0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static real_T ctrl_custom_xnrm2_gwr(int32_T n, const real_T x[12], int32_T ix0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xaxpy_nbvxkwp(int32_T n, real_T a, const real_T x[3],
  int32_T ix0, real_T y[36], int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xaxpy_nbvxkw(int32_T n, real_T a, const real_T x[36],
  int32_T ix0, real_T y[3], int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xscal_b0(real_T a, real_T x[144], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 11; k++) {
    x[k - 1] *= a;
  }
}

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xswap_ef(real_T x[144], int32_T ix0, int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xrot_cj(real_T x[144], int32_T ix0, int32_T iy0, real_T
  c, real_T s)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static real_T ctrl_custom_xdotc_pd2t(int32_T n, const real_T x[144], int32_T ix0,
  const real_T y[144], int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xaxpy_nbvxkwpl(int32_T n, real_T a, int32_T ix0, real_T
  y[144], int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static real_T ctrl_custom_xdotc_pd2(int32_T n, const real_T x[36], int32_T ix0,
  const real_T y[36], int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_xaxpy_nbvxk(int32_T n, real_T a, int32_T ix0, real_T y
  [36], int32_T iy0)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_svd_bye(const real_T A[36], real_T U[9], real_T S[9],
  real_T V[36])
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
  snorm = ctrl_custom_xnrm2_gw(3, b_A, 1);
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
      ctrl_custom_xaxpy_nbvxk(3, -(ctrl_custom_xdotc_pd2(3, b_A, 1, b_A, qs + 1)
        / b_A[0]), 1, b_A, qs + 1);
    }

    e[q] = b_A[qs];
  }

  while (iter + 1 < 4) {
    U[iter] = b_A[iter];
    iter++;
  }

  snorm = ctrl_custom_xnrm2_gwr(11, e, 2);
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
      ctrl_custom_xaxpy_nbvxkw(2, e[iter], b_A, 3 * iter + 2, work, 2);
    }

    for (iter = 1; iter + 1 < 13; iter++) {
      ctrl_custom_xaxpy_nbvxkwp(2, -e[iter] / e[1], work, 2, b_A, 3 * iter + 2);
    }
  }

  for (iter = 1; iter + 1 < 13; iter++) {
    Vf[iter] = e[iter];
  }

  apply_transform = false;
  snorm = ctrl_custom_xnrm2_gw(2, b_A, 5);
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
      ctrl_custom_xaxpy_nbvxk(2, -(ctrl_custom_xdotc_pd2(2, b_A, 5, b_A, qs + 1)
        / b_A[4]), 5, b_A, qs + 1);
    }

    e[q] = b_A[qs];
  }

  for (iter = 1; iter + 1 < 4; iter++) {
    U[iter + 3] = b_A[iter + 3];
  }

  snorm = ctrl_custom_xnrm2_gwr(10, e, 3);
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
      ctrl_custom_xaxpy_nbvxkw(1, e[iter], b_A, 3 * iter + 3, work, 3);
    }

    for (iter = 2; iter + 1 < 13; iter++) {
      ctrl_custom_xaxpy_nbvxkwp(1, -e[iter] / e[2], work, 3, b_A, 3 * iter + 3);
    }
  }

  for (iter = 2; iter + 1 < 13; iter++) {
    Vf[iter + 12] = e[iter];
  }

  for (q = 3; q + 1 < 13; q++) {
    e[q] = b_A[3 * q + 2];
  }

  snorm = ctrl_custom_xnrm2_gwr(9, e, 4);
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
        ctrl_custom_xaxpy_nbv(3 - q, -(ctrl_custom_xdotc_p(3 - q, U, iter + 1, U,
          qs) / U[iter]), iter + 1, U, qs);
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
        ctrl_custom_xaxpy_nbvxkwpl(11 - iter, -(ctrl_custom_xdotc_pd2t(11 - iter,
          Vf, q, Vf, kase) / Vf[q - 1]), q, Vf, kase);
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
    ctrl_custom_xscal(snorm, U, 1);
  }

  if (ztest != 0.0) {
    ztest0 = fabs(ztest);
    snorm = ztest0 / ztest;
    ztest = ztest0;
    s[1] *= snorm;
    ctrl_custom_xscal_b0(snorm, Vf, 13);
  }

  e[0] = ztest;
  ztest = e[1];
  if (s[1] != 0.0) {
    ztest0 = fabs(s[1]);
    snorm = s[1] / ztest0;
    s[1] = ztest0;
    ztest = e[1] / snorm;
    ctrl_custom_xscal(snorm, U, 4);
  }

  if (ztest != 0.0) {
    ztest0 = fabs(ztest);
    snorm = ztest0 / ztest;
    ztest = ztest0;
    s[2] = b_A[8] * snorm;
    ctrl_custom_xscal_b0(snorm, Vf, 25);
  }

  e[1] = ztest;
  ztest = e[2];
  if (s[2] != 0.0) {
    ztest0 = fabs(s[2]);
    snorm = s[2] / ztest0;
    s[2] = ztest0;
    ztest = e[2] / snorm;
    ctrl_custom_xscal(snorm, U, 7);
  }

  if (ztest != 0.0) {
    ztest0 = fabs(ztest);
    snorm = ztest0 / ztest;
    ztest = ztest0;
    s[3] = 0.0 * snorm;
    ctrl_custom_xscal_b0(snorm, Vf, 37);
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
        ctrl_custom_xrotg(&ztest, &ztest0, &sqds, &smm1);
        s[qs] = ztest;
        if (qs + 1 > q + 1) {
          ztest0 = e[qs - 1] * -smm1;
          e[qs - 1] *= sqds;
        }

        ctrl_custom_xrot_cj(Vf, 1 + 12 * qs, 1 + 12 * (m + 1), sqds, smm1);
      }
      break;

     case 2:
      ztest0 = e[q - 1];
      e[q - 1] = 0.0;
      for (qs = q; qs + 1 <= m + 2; qs++) {
        ztest = s[qs];
        ctrl_custom_xrotg(&ztest, &ztest0, &sqds, &smm1);
        s[qs] = ztest;
        ztest0 = -smm1 * e[qs];
        e[qs] *= sqds;
        ctrl_custom_xrot_c(U, 1 + 3 * qs, 1 + 3 * (q - 1), sqds, smm1);
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
        ctrl_custom_xrotg(&ztest0, &ztest, &sqds, &smm1);
        if (qs > q + 1) {
          e[qs - 2] = ztest0;
        }

        ztest0 = s[qs - 1] * sqds + e[qs - 1] * smm1;
        e[qs - 1] = e[qs - 1] * sqds - s[qs - 1] * smm1;
        ztest = smm1 * s[qs];
        s[qs] *= sqds;
        ctrl_custom_xrot_cj(Vf, 1 + 12 * (qs - 1), 1 + 12 * qs, sqds, smm1);
        ctrl_custom_xrotg(&ztest0, &ztest, &sqds, &smm1);
        s[qs - 1] = ztest0;
        ztest0 = e[qs - 1] * sqds + smm1 * s[qs];
        s[qs] = e[qs - 1] * -smm1 + sqds * s[qs];
        ztest = smm1 * e[qs];
        e[qs] *= sqds;
        if (qs < 3) {
          ctrl_custom_xrot_c(U, 1 + 3 * (qs - 1), 1 + 3 * qs, sqds, smm1);
        }
      }

      e[m] = ztest0;
      iter++;
      break;

     default:
      if (s[q] < 0.0) {
        s[q] = -s[q];
        ctrl_custom_xscal_b0(-1.0, Vf, 1 + 12 * q);
      }

      iter = q + 1;
      while ((q + 1 < 4) && (s[q] < s[iter])) {
        ztest0 = s[q];
        s[q] = s[iter];
        s[iter] = ztest0;
        ctrl_custom_xswap_ef(Vf, 1 + 12 * q, 1 + 12 * (q + 1));
        if (q + 1 < 3) {
          ctrl_custom_xswap_e(U, 1 + 3 * q, 1 + 3 * (q + 1));
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_svd_by(const real_T A[36], real_T U[9], real_T S[9],
  real_T V[36])
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
    ctrl_custom_svd_bye(A, U, S, V);
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_abs(const real_T x[2], real_T y[2])
{
  y[0] = fabs(x[0]);
  y[1] = fabs(x[1]);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void ctrl_custom_cosd(real_T *x)
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
static void ctrl_custom_sind(real_T *x)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_cosd_e(real_T *x)
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

/* Function for MATLAB Function: '<S11>/MATLAB Function' */
static void ctrl_custom_sind_j(real_T *x)
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
void ctrl_custom_output(void)
{
  /* local block i/o variables */
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
  real_T rtb_sys[12];

  /* local scratch DWork variables */
  int32_T ForEach_itr;
  ZCEventType zcEvent;
  real_T s[6];
  real_T alpha[6];
  real_T K[6];
  real_T S_singular_cross[9];
  real_T T0[12];
  real_T c1[2];
  real_T V_singular2[36];
  real_T varargin_1[2];
  static const int8_T d[12] = { 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0 };

  static const int8_T e[12] = { 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 };

  boolean_T f[9];
  real_T g;
  real_T h;
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
  real_T rtb_MatrixMultiply4[3];
  real_T rtb_Row2;
  real_T rtb_Row1_d;
  real_T rtb_psi_dot;
  real_T rtb_MatrixMultiply2[3];
  real_T rtb_MatrixMultiply[3];
  real_T rtb_MatrixMultiply1[3];
  real_T rtb_y[6];
  real_T rtb_TmpSignalConversionAtSFunct[6];
  real_T rtb_TmpSignalConversionAtSFun_e[10];
  real_T rtb_CreateDiagonalMatrix5[9];
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
  real_T V_singular2_0[36];
  real_T rtb_psi_dot_0[18];
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
  real_T rtb_psi_dot_i[4];
  real_T tmp_0[3];
  real_T tmp_1[3];
  real_T tmp_2[9];
  real_T tmp_3[9];
  real_T rtb_Row2_0[3];
  int32_T b_data[9];
  int32_T b_sizes;
  int32_T c_data[9];
  boolean_T f_0;
  real_T Alpha1_idx_2;
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
  if (rtmIsMajorTimeStep(ctrl_custom_M)) {
    /* set solver stop time */
    if (!(ctrl_custom_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&ctrl_custom_M->solverInfo,
                            ((ctrl_custom_M->Timing.clockTickH0 + 1) *
        ctrl_custom_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&ctrl_custom_M->solverInfo,
                            ((ctrl_custom_M->Timing.clockTick0 + 1) *
        ctrl_custom_M->Timing.stepSize0 + ctrl_custom_M->Timing.clockTickH0 *
        ctrl_custom_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(ctrl_custom_M)) {
    ctrl_custom_M->Timing.t[0] = rtsiGetT(&ctrl_custom_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(ctrl_custom_M)) {
  }

  /* S-Function (sdspdiag2): '<S16>/Create Diagonal Matrix' incorporates:
   *  SignalConversion: '<S16>/TmpSignal ConversionAtCreate Diagonal MatrixInport1'
   */
  memset(&rtb_CreateDiagonalMatrix5[0], 0, 9U * sizeof(real_T));
  rtb_CreateDiagonalMatrix5[0] = ctrl_custom_B.K_p_x;
  rtb_CreateDiagonalMatrix5[4] = ctrl_custom_B.K_p_y;
  rtb_CreateDiagonalMatrix5[8] = ctrl_custom_B.K_p_psi;

  /* Gain: '<S8>/Gain' */
  ctrl_custom_B.Gain = ctrl_custom_P.Gain_Gain * ctrl_custom_B.x_m;

  /* Gain: '<S8>/Gain1' */
  ctrl_custom_B.Gain1 = ctrl_custom_P.Gain1_Gain * ctrl_custom_B.y_m;

  /* Gain: '<S8>/Gain5' */
  rtb_Row2 = ctrl_custom_P.Gain5_Gain * ctrl_custom_B.psi_m;

  /* Saturate: '<S8>/Saturation' */
  if (rtb_Row2 > ctrl_custom_P.Saturation_UpperSat) {
    rtb_Row2 = ctrl_custom_P.Saturation_UpperSat;
  } else {
    if (rtb_Row2 < ctrl_custom_P.Saturation_LowerSat) {
      rtb_Row2 = ctrl_custom_P.Saturation_LowerSat;
    }
  }

  /* End of Saturate: '<S8>/Saturation' */

  /* Signum: '<S8>/Sign' */
  if (rtb_Row2 < 0.0) {
    Alpha1_idx_2 = -1.0;
  } else if (rtb_Row2 > 0.0) {
    Alpha1_idx_2 = 1.0;
  } else if (rtb_Row2 == 0.0) {
    Alpha1_idx_2 = 0.0;
  } else {
    Alpha1_idx_2 = rtb_Row2;
  }

  /* End of Signum: '<S8>/Sign' */

  /* Gain: '<S8>/Gain6' */
  rtb_Row1_d = ctrl_custom_P.Gain6_Gain * Alpha1_idx_2;

  /* Sum: '<S8>/Sum1' */
  rtb_Row2 += rtb_Row1_d;

  /* Math: '<S8>/Math Function' incorporates:
   *  Constant: '<S8>/Constant1'
   */
  rtb_Row2 = rt_remd_snf(rtb_Row2, ctrl_custom_P.Constant1_Value);

  /* Sum: '<S8>/Sum' */
  ctrl_custom_B.Sum = rtb_Row2 - rtb_Row1_d;

  /* Integrator: '<S5>/Integrator' */
  if (rtmIsMajorTimeStep(ctrl_custom_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_PrevZCX.Integrator_Reset_ZCE,
                       (ctrl_custom_B.Startbutton));

    /* evaluate zero-crossings */
    if ((zcEvent != NO_ZCEVENT) || (ctrl_custom_DW.Integrator_IWORK != 0)) {
      ctrl_custom_X.Integrator_CSTATE[0] = ctrl_custom_B.Gain;
      ctrl_custom_X.Integrator_CSTATE[1] = ctrl_custom_B.Gain1;
      ctrl_custom_X.Integrator_CSTATE[2] = ctrl_custom_B.Sum;
    }
  }

  ctrl_custom_B.Integrator[0] = ctrl_custom_X.Integrator_CSTATE[0];
  ctrl_custom_B.Integrator[1] = ctrl_custom_X.Integrator_CSTATE[1];
  ctrl_custom_B.Integrator[2] = ctrl_custom_X.Integrator_CSTATE[2];

  /* End of Integrator: '<S5>/Integrator' */

  /* Saturate: '<S27>/Saturation' */
  if (ctrl_custom_B.Integrator[2] > ctrl_custom_P.Saturation_UpperSat_p) {
    rtb_Row1_d = ctrl_custom_P.Saturation_UpperSat_p;
  } else if (ctrl_custom_B.Integrator[2] < ctrl_custom_P.Saturation_LowerSat_k)
  {
    rtb_Row1_d = ctrl_custom_P.Saturation_LowerSat_k;
  } else {
    rtb_Row1_d = ctrl_custom_B.Integrator[2];
  }

  /* End of Saturate: '<S27>/Saturation' */

  /* Signum: '<S27>/Sign' */
  if (rtb_Row1_d < 0.0) {
    rtb_psi_dot = -1.0;
  } else if (rtb_Row1_d > 0.0) {
    rtb_psi_dot = 1.0;
  } else if (rtb_Row1_d == 0.0) {
    rtb_psi_dot = 0.0;
  } else {
    rtb_psi_dot = rtb_Row1_d;
  }

  /* End of Signum: '<S27>/Sign' */

  /* Gain: '<S27>/Gain' */
  rtb_Row2 = ctrl_custom_P.Gain_Gain_p * rtb_psi_dot;

  /* Sum: '<S27>/Sum1' */
  rtb_Row1_d += rtb_Row2;

  /* Math: '<S27>/Math Function' incorporates:
   *  Constant: '<S27>/Constant'
   */
  rtb_Row1_d = rt_remd_snf(rtb_Row1_d, ctrl_custom_P.Constant_Value);

  /* Sum: '<S27>/Sum' */
  ctrl_custom_B.Sum_h = rtb_Row1_d - rtb_Row2;

  /* Saturate: '<S36>/Saturation' */
  if (ctrl_custom_B.Sum_h > ctrl_custom_P.Saturation_UpperSat_i) {
    rtb_Row1_d = ctrl_custom_P.Saturation_UpperSat_i;
  } else if (ctrl_custom_B.Sum_h < ctrl_custom_P.Saturation_LowerSat_p) {
    rtb_Row1_d = ctrl_custom_P.Saturation_LowerSat_p;
  } else {
    rtb_Row1_d = ctrl_custom_B.Sum_h;
  }

  /* End of Saturate: '<S36>/Saturation' */

  /* Signum: '<S36>/Sign' */
  if (rtb_Row1_d < 0.0) {
    rtb_psi_dot = -1.0;
  } else if (rtb_Row1_d > 0.0) {
    rtb_psi_dot = 1.0;
  } else if (rtb_Row1_d == 0.0) {
    rtb_psi_dot = 0.0;
  } else {
    rtb_psi_dot = rtb_Row1_d;
  }

  /* End of Signum: '<S36>/Sign' */

  /* Gain: '<S36>/Gain' */
  rtb_Row2 = ctrl_custom_P.Gain_Gain_o * rtb_psi_dot;

  /* Sum: '<S36>/Sum1' */
  rtb_Row1_d += rtb_Row2;

  /* Math: '<S36>/Math Function' incorporates:
   *  Constant: '<S36>/Constant'
   */
  rtb_Row1_d = rt_remd_snf(rtb_Row1_d, ctrl_custom_P.Constant_Value_p);

  /* Sum: '<S36>/Sum' */
  rtb_Row1_d -= rtb_Row2;

  /* Saturate: '<S40>/Saturation' incorporates:
   *  Integrator: '<S10>/Integrator2'
   */
  if (ctrl_custom_X.Integrator2_CSTATE[2] > ctrl_custom_P.Saturation_UpperSat_p4)
  {
    rtb_Row2 = ctrl_custom_P.Saturation_UpperSat_p4;
  } else if (ctrl_custom_X.Integrator2_CSTATE[2] <
             ctrl_custom_P.Saturation_LowerSat_c) {
    rtb_Row2 = ctrl_custom_P.Saturation_LowerSat_c;
  } else {
    rtb_Row2 = ctrl_custom_X.Integrator2_CSTATE[2];
  }

  /* End of Saturate: '<S40>/Saturation' */

  /* Signum: '<S40>/Sign' */
  if (rtb_Row2 < 0.0) {
    Alpha1_idx_2 = -1.0;
  } else if (rtb_Row2 > 0.0) {
    Alpha1_idx_2 = 1.0;
  } else if (rtb_Row2 == 0.0) {
    Alpha1_idx_2 = 0.0;
  } else {
    Alpha1_idx_2 = rtb_Row2;
  }

  /* End of Signum: '<S40>/Sign' */

  /* Gain: '<S40>/Gain' */
  rtb_psi_dot = ctrl_custom_P.Gain_Gain_e * Alpha1_idx_2;

  /* Sum: '<S40>/Sum1' */
  rtb_Row2 += rtb_psi_dot;

  /* Math: '<S40>/Math Function' incorporates:
   *  Constant: '<S40>/Constant'
   */
  rtb_Row2 = rt_remd_snf(rtb_Row2, ctrl_custom_P.Constant_Value_e);

  /* Sum: '<S40>/Sum' */
  rtb_Row2 -= rtb_psi_dot;

  /* SignalConversion: '<S10>/TmpSignal ConversionAtMatrix Multiply3Inport2' */
  rtb_MatrixMultiply4[2] = rtb_Row2;

  /* Sum: '<S7>/Sum4' incorporates:
   *  Integrator: '<S10>/Integrator2'
   */
  ctrl_custom_B.regulationerror[0] = ctrl_custom_B.Integrator[0] -
    ctrl_custom_X.Integrator2_CSTATE[0];

  /* SignalConversion: '<S10>/TmpSignal ConversionAtMatrix Multiply3Inport2' incorporates:
   *  Integrator: '<S10>/Integrator2'
   */
  rtb_MatrixMultiply4[0] = ctrl_custom_X.Integrator2_CSTATE[0];

  /* Sum: '<S7>/Sum4' incorporates:
   *  Integrator: '<S10>/Integrator2'
   */
  ctrl_custom_B.regulationerror[1] = ctrl_custom_B.Integrator[1] -
    ctrl_custom_X.Integrator2_CSTATE[1];

  /* SignalConversion: '<S10>/TmpSignal ConversionAtMatrix Multiply3Inport2' incorporates:
   *  Integrator: '<S10>/Integrator2'
   */
  rtb_MatrixMultiply4[1] = ctrl_custom_X.Integrator2_CSTATE[1];

  /* Sum: '<S7>/Sum4' incorporates:
   *  SignalConversion: '<S10>/TmpSignal ConversionAtMatrix Multiply3Inport2'
   */
  ctrl_custom_B.regulationerror[2] = ctrl_custom_B.Sum_h - rtb_Row2;

  /* Saturate: '<S35>/Saturation' */
  if (ctrl_custom_B.regulationerror[2] > ctrl_custom_P.Saturation_UpperSat_ir) {
    rtb_psi_dot = ctrl_custom_P.Saturation_UpperSat_ir;
  } else if (ctrl_custom_B.regulationerror[2] <
             ctrl_custom_P.Saturation_LowerSat_l) {
    rtb_psi_dot = ctrl_custom_P.Saturation_LowerSat_l;
  } else {
    rtb_psi_dot = ctrl_custom_B.regulationerror[2];
  }

  /* End of Saturate: '<S35>/Saturation' */

  /* Signum: '<S35>/Sign' */
  if (rtb_psi_dot < 0.0) {
    rtb_Row2 = -1.0;
  } else if (rtb_psi_dot > 0.0) {
    rtb_Row2 = 1.0;
  } else if (rtb_psi_dot == 0.0) {
    rtb_Row2 = 0.0;
  } else {
    rtb_Row2 = rtb_psi_dot;
  }

  /* End of Signum: '<S35>/Sign' */

  /* Gain: '<S35>/Gain' */
  rtb_Row2 *= ctrl_custom_P.Gain_Gain_d;

  /* Sum: '<S35>/Sum1' */
  rtb_psi_dot += rtb_Row2;

  /* Math: '<S35>/Math Function' incorporates:
   *  Constant: '<S35>/Constant'
   */
  rtb_psi_dot = rt_remd_snf(rtb_psi_dot, ctrl_custom_P.Constant_Value_a);

  /* Sum: '<S35>/Sum' */
  rtb_psi_dot -= rtb_Row2;

  /* SignalConversion: '<S7>/TmpSignal ConversionAtMatrix MultiplyInport2' incorporates:
   *  Fcn: '<S33>/Row1'
   *  Fcn: '<S33>/Row2'
   *  Fcn: '<S33>/Row3'
   */
  ctrl_custom_B.TmpSignalConversionAtMatrixMult[0] = cos(rtb_Row1_d) *
    ctrl_custom_B.regulationerror[0] + sin(rtb_Row1_d) *
    ctrl_custom_B.regulationerror[1];
  ctrl_custom_B.TmpSignalConversionAtMatrixMult[1] = -sin(rtb_Row1_d) *
    ctrl_custom_B.regulationerror[0] + cos(rtb_Row1_d) *
    ctrl_custom_B.regulationerror[1];
  ctrl_custom_B.TmpSignalConversionAtMatrixMult[2] = rtb_psi_dot;

  /* Product: '<S7>/Matrix Multiply' */
  for (i_0 = 0; i_0 < 3; i_0++) {
    rtb_MatrixMultiply2[i_0] = rtb_CreateDiagonalMatrix5[i_0 + 6] *
      ctrl_custom_B.TmpSignalConversionAtMatrixMult[2] +
      (rtb_CreateDiagonalMatrix5[i_0 + 3] *
       ctrl_custom_B.TmpSignalConversionAtMatrixMult[1] +
       rtb_CreateDiagonalMatrix5[i_0] *
       ctrl_custom_B.TmpSignalConversionAtMatrixMult[0]);
  }

  /* End of Product: '<S7>/Matrix Multiply' */

  /* S-Function (sdspdiag2): '<S16>/Create Diagonal Matrix1' incorporates:
   *  SignalConversion: '<S16>/TmpSignal ConversionAtCreate Diagonal Matrix1Inport1'
   */
  memset(&rtb_CreateDiagonalMatrix5[0], 0, 9U * sizeof(real_T));
  rtb_CreateDiagonalMatrix5[0] = ctrl_custom_B.K_i_x;
  rtb_CreateDiagonalMatrix5[4] = ctrl_custom_B.K_i_y;
  rtb_CreateDiagonalMatrix5[8] = ctrl_custom_B.K_i_psi;

  /* Integrator: '<S7>/Integrator1' */
  if (rtmIsMajorTimeStep(ctrl_custom_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_PrevZCX.Integrator1_Reset_ZCE,
                       (ctrl_custom_B.Startbutton));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_X.Integrator1_CSTATE[0] = ctrl_custom_P.Integrator1_IC;
      ctrl_custom_X.Integrator1_CSTATE[1] = ctrl_custom_P.Integrator1_IC;
      ctrl_custom_X.Integrator1_CSTATE[2] = ctrl_custom_P.Integrator1_IC;
    }
  }

  ctrl_custom_B.Integrator1[0] = ctrl_custom_X.Integrator1_CSTATE[0];
  ctrl_custom_B.Integrator1[1] = ctrl_custom_X.Integrator1_CSTATE[1];
  ctrl_custom_B.Integrator1[2] = ctrl_custom_X.Integrator1_CSTATE[2];

  /* End of Integrator: '<S7>/Integrator1' */

  /* Product: '<S7>/Matrix Multiply1' */
  for (i_0 = 0; i_0 < 3; i_0++) {
    rtb_MatrixMultiply[i_0] = rtb_CreateDiagonalMatrix5[i_0 + 6] *
      ctrl_custom_B.Integrator1[2] + (rtb_CreateDiagonalMatrix5[i_0 + 3] *
      ctrl_custom_B.Integrator1[1] + rtb_CreateDiagonalMatrix5[i_0] *
      ctrl_custom_B.Integrator1[0]);
  }

  /* End of Product: '<S7>/Matrix Multiply1' */

  /* S-Function (sdspdiag2): '<S16>/Create Diagonal Matrix2' incorporates:
   *  SignalConversion: '<S16>/TmpSignal ConversionAtCreate Diagonal Matrix2Inport1'
   */
  memset(&rtb_CreateDiagonalMatrix5[0], 0, 9U * sizeof(real_T));
  rtb_CreateDiagonalMatrix5[0] = ctrl_custom_B.K_d_x;

  /* Integrator: '<S10>/Integrator1' */
  ctrl_custom_B.Integrator1_i[0] = ctrl_custom_X.Integrator1_CSTATE_d[0];

  /* S-Function (sdspdiag2): '<S16>/Create Diagonal Matrix2' incorporates:
   *  SignalConversion: '<S16>/TmpSignal ConversionAtCreate Diagonal Matrix2Inport1'
   */
  rtb_CreateDiagonalMatrix5[4] = ctrl_custom_B.K_d_y;

  /* Integrator: '<S10>/Integrator1' */
  ctrl_custom_B.Integrator1_i[1] = ctrl_custom_X.Integrator1_CSTATE_d[1];

  /* S-Function (sdspdiag2): '<S16>/Create Diagonal Matrix2' incorporates:
   *  SignalConversion: '<S16>/TmpSignal ConversionAtCreate Diagonal Matrix2Inport1'
   */
  rtb_CreateDiagonalMatrix5[8] = ctrl_custom_B.K_d_psi;

  /* Integrator: '<S10>/Integrator1' */
  ctrl_custom_B.Integrator1_i[2] = ctrl_custom_X.Integrator1_CSTATE_d[2];

  /* Integrator: '<S5>/Integrator1' */
  if (rtmIsMajorTimeStep(ctrl_custom_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_PrevZCX.Integrator1_Reset_ZCE_o,
                       (ctrl_custom_B.Startbutton));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_X.Integrator1_CSTATE_n[0] = ctrl_custom_P.Integrator1_IC_g[0];
      ctrl_custom_X.Integrator1_CSTATE_n[1] = ctrl_custom_P.Integrator1_IC_g[1];
      ctrl_custom_X.Integrator1_CSTATE_n[2] = ctrl_custom_P.Integrator1_IC_g[2];
    }
  }

  ctrl_custom_B.Integrator1_a[0] = ctrl_custom_X.Integrator1_CSTATE_n[0];
  ctrl_custom_B.Integrator1_a[1] = ctrl_custom_X.Integrator1_CSTATE_n[1];
  ctrl_custom_B.Integrator1_a[2] = ctrl_custom_X.Integrator1_CSTATE_n[2];

  /* End of Integrator: '<S5>/Integrator1' */

  /* Sum: '<S7>/Sum' incorporates:
   *  Fcn: '<S34>/Row1'
   *  Fcn: '<S34>/Row2'
   *  Fcn: '<S34>/Row3'
   *  Fcn: '<S7>/yaw angle1'
   *  Product: '<S7>/Matrix Multiply2'
   */
  rtb_Row1_d = ctrl_custom_B.Integrator1_a[0] - (cos(rtb_MatrixMultiply4[2]) *
    ctrl_custom_B.Integrator1_i[0] + sin(rtb_MatrixMultiply4[2]) *
    ctrl_custom_B.Integrator1_i[1]);
  rtb_Row2 = ctrl_custom_B.Integrator1_a[1] - (-sin(rtb_MatrixMultiply4[2]) *
    ctrl_custom_B.Integrator1_i[0] + cos(rtb_MatrixMultiply4[2]) *
    ctrl_custom_B.Integrator1_i[1]);
  rtb_psi_dot = ctrl_custom_B.Integrator1_a[2] - ctrl_custom_B.Integrator1_i[2];

  /* Sum: '<S7>/Sum1' incorporates:
   *  Product: '<S7>/Matrix Multiply2'
   */
  for (i_0 = 0; i_0 < 3; i_0++) {
    ctrl_custom_B.Sum1[i_0] = ((0.0 - rtb_MatrixMultiply2[i_0]) -
      rtb_MatrixMultiply[i_0]) - ((rtb_CreateDiagonalMatrix5[i_0 + 3] * rtb_Row2
      + rtb_CreateDiagonalMatrix5[i_0] * rtb_Row1_d) +
      rtb_CreateDiagonalMatrix5[i_0 + 6] * rtb_psi_dot);
  }

  /* End of Sum: '<S7>/Sum1' */

  /* Gain: '<Root>/Gain5' */
  ctrl_custom_B.Gain5 = ctrl_custom_P.Gain5_Gain_e * ctrl_custom_B.Sum_h;

  /* Gain: '<Root>/Gain' */
  ctrl_custom_B.Gain_h = ctrl_custom_P.Gain_Gain_g * ctrl_custom_B.Integrator[0];

  /* Gain: '<Root>/Gain1' */
  ctrl_custom_B.Gain1_n = ctrl_custom_P.Gain1_Gain_l * ctrl_custom_B.Integrator
    [1];

  /* SignalConversion: '<S44>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  MATLAB Function: '<S11>/angle between  [-180 180]'
   */
  rtb_TmpSignalConversionAtSFunct[0] = ctrl_custom_B.thr_angle_1;
  rtb_TmpSignalConversionAtSFunct[1] = ctrl_custom_B.thr_angle_2;
  rtb_TmpSignalConversionAtSFunct[2] = ctrl_custom_B.thr_angle_3;
  rtb_TmpSignalConversionAtSFunct[3] = ctrl_custom_B.thr_angle_4;
  rtb_TmpSignalConversionAtSFunct[4] = ctrl_custom_B.thr_angle_5;
  rtb_TmpSignalConversionAtSFunct[5] = ctrl_custom_B.thr_angle_6;

  /* MATLAB Function: '<S11>/angle between  [-180 180]' */
  /* MATLAB Function 'Thrust allocation/angle between  [-180 180]': '<S44>:1' */
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
  /* '<S44>:1:39' */
  /* '<S44>:1:40' */
  for (i_0 = 0; i_0 < 6; i_0++) {
    if (rtb_TmpSignalConversionAtSFunct[i_0] < 0.0) {
      rtb_psi_dot = -1.0;
    } else if (rtb_TmpSignalConversionAtSFunct[i_0] > 0.0) {
      rtb_psi_dot = 1.0;
    } else if (rtb_TmpSignalConversionAtSFunct[i_0] == 0.0) {
      rtb_psi_dot = 0.0;
    } else {
      rtb_psi_dot = rtb_TmpSignalConversionAtSFunct[i_0];
    }

    rtb_y[i_0] = rt_remd_snf(rtb_psi_dot * 3.1415926535897931 +
      rtb_TmpSignalConversionAtSFunct[i_0], 6.2831853071795862);
    alpha[i_0] = rtb_TmpSignalConversionAtSFunct[i_0] + 3.1415926535897931;
    if (rtb_TmpSignalConversionAtSFunct[i_0] < 0.0) {
      s[i_0] = -1.0;
    } else if (rtb_TmpSignalConversionAtSFunct[i_0] > 0.0) {
      s[i_0] = 1.0;
    } else if (rtb_TmpSignalConversionAtSFunct[i_0] == 0.0) {
      s[i_0] = 0.0;
    } else {
      s[i_0] = rtb_TmpSignalConversionAtSFunct[i_0];
    }
  }

  /* SignalConversion: '<S41>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  MATLAB Function: '<S11>/MATLAB Function'
   */
  /*  s = sign(angle); */
  /* '<S44>:1:43' */
  rtb_TmpSignalConversionAtSFun_e[0] = ctrl_custom_B.Sum1[0];
  rtb_TmpSignalConversionAtSFun_e[1] = ctrl_custom_B.Sum1[1];
  rtb_TmpSignalConversionAtSFun_e[2] = ctrl_custom_B.Sum1[2];
  for (i_0 = 0; i_0 < 6; i_0++) {
    /* MATLAB Function: '<S11>/angle between  [-180 180]' */
    rtb_psi_dot = fabs(rt_remd_snf(alpha[i_0], 6.2831853071795862) /
                       6.2831853071795862);
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

    /* SignalConversion: '<S41>/TmpSignal ConversionAt SFunction Inport1' incorporates:
     *  Gain: '<S43>/Gain'
     *  MATLAB Function: '<S11>/MATLAB Function'
     *  MATLAB Function: '<S11>/angle between  [-180 180]'
     */
    rtb_TmpSignalConversionAtSFun_e[i_0 + 3] = ctrl_custom_P.Gain_Gain_p4 *
      (rtb_y[i_0] - s_0 * 3.1415926535897931);
  }

  /* MATLAB Function: '<S11>/MATLAB Function' incorporates:
   *  Constant: '<S11>/C'
   *  Constant: '<S11>/X-position Thruster'
   *  Constant: '<S11>/Y-position Thruster'
   */
  /* MATLAB Function 'Thrust allocation/MATLAB Function': '<S41>:1' */
  /* '<S41>:1:85' */
  /* '<S41>:1:84' */
  /*  Complete system goes here! */
  /*  Allocating dimensions for faster computing */
  /*  Parameters thrusters */
  /* '<S41>:1:5' */
  rtb_MatrixMultiply1[0] = rtb_TmpSignalConversionAtSFun_e[0];
  rtb_MatrixMultiply1[1] = rtb_TmpSignalConversionAtSFun_e[1];
  rtb_MatrixMultiply1[2] = rtb_TmpSignalConversionAtSFun_e[2];

  /* '<S41>:1:6' */
  alpha[0] = rtb_TmpSignalConversionAtSFun_e[3];
  alpha[1] = rtb_TmpSignalConversionAtSFun_e[4];
  alpha[2] = rtb_TmpSignalConversionAtSFun_e[5];
  alpha[3] = rtb_TmpSignalConversionAtSFun_e[6];
  alpha[4] = rtb_TmpSignalConversionAtSFun_e[7];
  alpha[5] = rtb_TmpSignalConversionAtSFun_e[8];

  /*  Constraints for Thruster-Thruster interaction. Can be seen in "Initfile" */
  /*  how they are found */
  /* '<S41>:1:10' */
  /* '<S41>:1:11' */
  /* '<S41>:1:12' */
  /* '<S41>:1:13' */
  /* '<S41>:1:14' */
  /* '<S41>:1:15' */
  if (((rtb_TmpSignalConversionAtSFun_e[3] < ctrl_custom_P.C[0] - 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[3] > ctrl_custom_P.C[6] + 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_e[3] > ctrl_custom_P.C[12] + 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[3] < ctrl_custom_P.C[18] - 0.1))) {
    /* '<S41>:1:19' */
    /* '<S41>:1:20' */
    K[0] = 0.0;
  } else {
    /* '<S41>:1:22' */
    K[0] = 1.0;
  }

  if (((rtb_TmpSignalConversionAtSFun_e[4] > ctrl_custom_P.C[1] - 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[4] < ctrl_custom_P.C[7] + 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_e[4] > ctrl_custom_P.C[13] - 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[4] < ctrl_custom_P.C[19] + 0.1))) {
    /* '<S41>:1:25' */
    /* '<S41>:1:26' */
    K[1] = 0.0;
  } else {
    /* '<S41>:1:28' */
    K[1] = 1.0;
  }

  if (((rtb_TmpSignalConversionAtSFun_e[5] < ctrl_custom_P.C[2] + 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[5] > ctrl_custom_P.C[8] - 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_e[5] < ctrl_custom_P.C[14] + 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[5] > ctrl_custom_P.C[20] - 0.1))) {
    /* '<S41>:1:31' */
    /* '<S41>:1:32' */
    K[2] = 0.0;
  } else {
    /* '<S41>:1:34' */
    K[2] = 1.0;
  }

  if (((rtb_TmpSignalConversionAtSFun_e[6] > ctrl_custom_P.C[3] + 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[6] < ctrl_custom_P.C[9] - 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_e[6] < ctrl_custom_P.C[15] - 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[6] > ctrl_custom_P.C[21] + 0.1))) {
    /* '<S41>:1:37' */
    /* '<S41>:1:38' */
    K[3] = 0.0;
  } else {
    /* '<S41>:1:40' */
    K[3] = 1.0;
  }

  if (((rtb_TmpSignalConversionAtSFun_e[7] < ctrl_custom_P.C[4] - 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[7] > ctrl_custom_P.C[10] + 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_e[7] < ctrl_custom_P.C[16] - 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[7] > ctrl_custom_P.C[22] + 0.1))) {
    /* '<S41>:1:43' */
    /* '<S41>:1:44' */
    K[4] = 0.0;
  } else {
    /* '<S41>:1:46' */
    K[4] = 1.0;
  }

  if (((rtb_TmpSignalConversionAtSFun_e[8] > ctrl_custom_P.C[5] + 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[8] < ctrl_custom_P.C[11] - 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_e[8] > ctrl_custom_P.C[17] + 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[8] < ctrl_custom_P.C[23] - 0.1))) {
    /* '<S41>:1:49' */
    /* '<S41>:1:50' */
    K[5] = 0.0;
  } else {
    /* '<S41>:1:52' */
    K[5] = 1.0;
  }

  /*  number of thrusters */
  /*  Shells for faster computing */
  /* '<S41>:1:58' */
  /* '<S41>:1:59' */
  /* '<S41>:1:60' */
  /* '<S41>:1:62' */
  for (i_0 = 0; i_0 < 6; i_0++) {
    /* '<S41>:1:62' */
    /* '<S41>:1:63' */
    rtb_y[i_0] = alpha[i_0];
    ctrl_custom_cosd_e(&rtb_y[i_0]);

    /* Thrust in x-direction for cartesian */
    /* '<S41>:1:64' */
    s[i_0] = alpha[i_0];
    ctrl_custom_sind_j(&s[i_0]);

    /* Thrust in y-direction for cartesian */
    /* '<S41>:1:65' */
    g = alpha[i_0];
    ctrl_custom_sind_j(&g);
    h = alpha[i_0];
    ctrl_custom_cosd_e(&h);
    rtb_TmpSignalConversionAtSFunct[i_0] = g *
      ctrl_custom_P.XpositionThruster_Value[i_0] - h *
      ctrl_custom_P.YpositionThruster_Value[i_0];
  }

  /* '<S41>:1:69' */
  /* '<S41>:1:70' */
  /* '<S41>:1:71' */
  ctrl_custom_diag(K, V_singular2);
  for (i_0 = 0; i_0 < 6; i_0++) {
    rtb_y_1[3 * i_0] = rtb_y[i_0];
    rtb_y_1[1 + 3 * i_0] = s[i_0];
    rtb_y_1[2 + 3 * i_0] = rtb_TmpSignalConversionAtSFunct[i_0];
  }

  for (i_0 = 0; i_0 < 6; i_0++) {
    for (b_i = 0; b_i < 3; b_i++) {
      rtb_y_0[b_i + 3 * i_0] = 0.0;
      for (b_sizes = 0; b_sizes < 6; b_sizes++) {
        rtb_y_0[b_i + 3 * i_0] += rtb_y_1[3 * b_sizes + b_i] * V_singular2[6 *
          i_0 + b_sizes];
      }
    }
  }

  ctrl_custom_svd(rtb_y_0, rtb_CreateDiagonalMatrix5, S_singular_cross, rtb_y_1);

  /* '<S41>:1:72' */
  for (i_0 = 0; i_0 < 9; i_0++) {
    S_singular_cross[i_0] = 1.0 / S_singular_cross[i_0];
  }

  /* '<S41>:1:73' */
  ctrl_custom_isfinite(S_singular_cross, tmp);
  i_0 = 0;
  for (b_i = 0; b_i < 9; b_i++) {
    f_0 = !tmp[b_i];
    if (f_0) {
      i_0++;
    }

    f[b_i] = f_0;
  }

  b_sizes = i_0;
  i_0 = 0;
  for (b_i = 0; b_i < 9; b_i++) {
    if (f[b_i]) {
      b_data[i_0] = b_i + 1;
      i_0++;
    }
  }

  /* '<S41>:1:73' */
  for (i_0 = 0; i_0 < b_sizes; i_0++) {
    S_singular_cross[b_data[i_0] - 1] = 0.0;
  }

  if (S_singular_cross[8] > 10.0 * S_singular_cross[4]) {
    /* '<S41>:1:74' */
    /* '<S41>:1:75' */
    S_singular_cross[8] = 0.0;
  }

  /* '<S41>:1:78' */
  /* '<S41>:1:80' */
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
      V_singular[i_0 + 6 * b_i] += rtb_y_0[i_0] * rtb_CreateDiagonalMatrix5[b_i];
      V_singular[i_0 + 6 * b_i] += rtb_y_0[i_0 + 6] *
        rtb_CreateDiagonalMatrix5[b_i + 3];
      V_singular[i_0 + 6 * b_i] += rtb_y_0[i_0 + 12] *
        rtb_CreateDiagonalMatrix5[b_i + 6];
      rtb_y[i_0] += V_singular[6 * b_i + i_0] * rtb_MatrixMultiply1[b_i];
    }
  }

  /*  Optimized Thrust */
  /* '<S41>:1:84' */
  /* '<S41>:1:89' */
  for (i_0 = 0; i_0 < 12; i_0++) {
    d_0[3 * i_0] = d[i_0];
    d_0[1 + 3 * i_0] = e[i_0];
  }

  d_0[2] = ctrl_custom_P.YpositionThruster_Value[0];
  d_0[5] = ctrl_custom_P.XpositionThruster_Value[0];
  d_0[8] = ctrl_custom_P.YpositionThruster_Value[1];
  d_0[11] = ctrl_custom_P.XpositionThruster_Value[1];
  d_0[14] = ctrl_custom_P.YpositionThruster_Value[2];
  d_0[17] = ctrl_custom_P.XpositionThruster_Value[2];
  d_0[20] = ctrl_custom_P.YpositionThruster_Value[3];
  d_0[23] = ctrl_custom_P.XpositionThruster_Value[3];
  d_0[26] = ctrl_custom_P.YpositionThruster_Value[4];
  d_0[29] = ctrl_custom_P.XpositionThruster_Value[4];
  d_0[32] = ctrl_custom_P.YpositionThruster_Value[5];
  d_0[35] = ctrl_custom_P.XpositionThruster_Value[5];
  ctrl_custom_svd_by(d_0, rtb_CreateDiagonalMatrix5, S_singular_cross,
                     V_singular2);

  /* '<S41>:1:90' */
  for (i_0 = 0; i_0 < 9; i_0++) {
    S_singular_cross[i_0] = 1.0 / S_singular_cross[i_0];
  }

  /* '<S41>:1:91' */
  ctrl_custom_isfinite(S_singular_cross, tmp);
  i_0 = 0;
  for (b_i = 0; b_i < 9; b_i++) {
    f_0 = !tmp[b_i];
    if (f_0) {
      i_0++;
    }

    f[b_i] = f_0;
  }

  b_sizes = i_0;
  i_0 = 0;
  for (b_i = 0; b_i < 9; b_i++) {
    if (f[b_i]) {
      c_data[i_0] = b_i + 1;
      i_0++;
    }
  }

  /* '<S41>:1:91' */
  for (i_0 = 0; i_0 < b_sizes; i_0++) {
    S_singular_cross[c_data[i_0] - 1] = 0.0;
  }

  if (S_singular_cross[8] > 2.0 * S_singular_cross[4]) {
    /* '<S41>:1:92' */
    /* '<S41>:1:93' */
    S_singular_cross[8] = 0.0;
  }

  /* '<S41>:1:95' */
  for (i_0 = 0; i_0 < 12; i_0++) {
    for (b_i = 0; b_i < 3; b_i++) {
      d_0[i_0 + 12 * b_i] = 0.0;
      d_0[i_0 + 12 * b_i] += S_singular_cross[3 * b_i] * V_singular2[i_0];
      d_0[i_0 + 12 * b_i] += S_singular_cross[3 * b_i + 1] * V_singular2[i_0 +
        12];
      d_0[i_0 + 12 * b_i] += S_singular_cross[3 * b_i + 2] * V_singular2[i_0 +
        24];
    }

    T0[i_0] = 0.0;
    for (b_i = 0; b_i < 3; b_i++) {
      V_singular2_0[i_0 + 12 * b_i] = 0.0;
      V_singular2_0[i_0 + 12 * b_i] += d_0[i_0] * rtb_CreateDiagonalMatrix5[b_i];
      V_singular2_0[i_0 + 12 * b_i] += d_0[i_0 + 12] *
        rtb_CreateDiagonalMatrix5[b_i + 3];
      V_singular2_0[i_0 + 12 * b_i] += d_0[i_0 + 24] *
        rtb_CreateDiagonalMatrix5[b_i + 6];
      T0[i_0] += V_singular2_0[12 * b_i + i_0] * rtb_MatrixMultiply1[b_i];
    }
  }

  /* '<S41>:1:97' */
  K[0] = 57.295779513082323 * rt_atan2d_snf(T0[1], T0[0]);
  K[1] = 57.295779513082323 * rt_atan2d_snf(T0[3], T0[2]);
  K[2] = 57.295779513082323 * rt_atan2d_snf(T0[5], T0[4]);
  K[3] = 57.295779513082323 * rt_atan2d_snf(T0[7], T0[6]);
  K[4] = 57.295779513082323 * rt_atan2d_snf(T0[9], T0[8]);
  K[5] = 57.295779513082323 * rt_atan2d_snf(T0[11], T0[10]);

  /*  Constraints */
  /*  Thruster 1 OK */
  /* C1 = [151 130 -151 -130 ]; */
  if (((K[0] < ctrl_custom_P.C[0]) && (K[0] > ctrl_custom_P.C[6]) && (rtb_y[0] >
        0.0)) || ((K[0] < ctrl_custom_P.C[0]) && (K[0] > ctrl_custom_P.C[6]) &&
                  (rtb_y[0] < 0.0))) {
    /* '<S41>:1:103' */
    /* '<S41>:1:104' */
    c1[0] = ctrl_custom_P.C[0];
    c1[1] = ctrl_custom_P.C[6];

    /* '<S41>:1:105' */
    c1_5[0] = ctrl_custom_P.C[0] - K[0];
    c1_5[1] = ctrl_custom_P.C[6] - K[0];
    ctrl_custom_abs(c1_5, varargin_1);
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

    /* '<S41>:1:106' */
    rtb_Row1_d = c1[b_i];
  } else if (((K[0] > ctrl_custom_P.C[12]) && (K[0] < ctrl_custom_P.C[18]) &&
              (rtb_y[0] > 0.0)) || ((K[0] > ctrl_custom_P.C[12]) && (K[0] <
               ctrl_custom_P.C[18]) && (rtb_y[0] < 0.0))) {
    /* '<S41>:1:107' */
    /* '<S41>:1:108' */
    c1[0] = ctrl_custom_P.C[12];
    c1[1] = ctrl_custom_P.C[18];

    /* '<S41>:1:109' */
    c1_5[0] = ctrl_custom_P.C[12] - K[0];
    c1_5[1] = ctrl_custom_P.C[18] - K[0];
    ctrl_custom_abs(c1_5, varargin_1);
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

    /* '<S41>:1:110' */
    rtb_Row1_d = c1[b_i];
  } else {
    /* '<S41>:1:112' */
    rtb_Row1_d = K[0];
  }

  if (((rtb_TmpSignalConversionAtSFun_e[3] < ctrl_custom_P.C[0] - 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[3] > ctrl_custom_P.C[6] + 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_e[3] > ctrl_custom_P.C[12] + 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[3] < ctrl_custom_P.C[18] - 0.1))) {
    /* '<S41>:1:114' */
    /* '<S41>:1:115' */
    rtb_y[0] = 0.0;
  } else {
    /* '<S41>:1:117' */
  }

  /*  Thruster 2  */
  /* C2 = [-99.85 -80.15 -50 -29]; */
  if (((K[1] < ctrl_custom_P.C[1]) && (K[1] > ctrl_custom_P.C[7]) && (rtb_y[1] >
        0.0)) || ((K[1] < ctrl_custom_P.C[1]) && (K[1] > ctrl_custom_P.C[7]) &&
                  (rtb_y[1] < 0.0))) {
    /* '<S41>:1:122' */
    /* '<S41>:1:123' */
    c1[0] = ctrl_custom_P.C[1];
    c1[1] = ctrl_custom_P.C[7];

    /* '<S41>:1:124' */
    c1_4[0] = ctrl_custom_P.C[1] - K[1];
    c1_4[1] = ctrl_custom_P.C[7] - K[1];
    ctrl_custom_abs(c1_4, varargin_1);
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

    /* '<S41>:1:125' */
    rtb_Row2 = c1[b_i];
  } else if (((K[1] < ctrl_custom_P.C[13]) && (K[1] > ctrl_custom_P.C[19]) &&
              (rtb_y[1] > 0.0)) || ((K[1] < ctrl_custom_P.C[13]) && (K[1] >
               ctrl_custom_P.C[19]) && (rtb_y[1] < 0.0))) {
    /* '<S41>:1:126' */
    /* '<S41>:1:127' */
    c1[0] = ctrl_custom_P.C[13];
    c1[1] = ctrl_custom_P.C[19];

    /* '<S41>:1:128' */
    c1_4[0] = ctrl_custom_P.C[13] - K[1];
    c1_4[1] = ctrl_custom_P.C[19] - K[1];
    ctrl_custom_abs(c1_4, varargin_1);
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

    /* '<S41>:1:129' */
    rtb_Row2 = c1[b_i];
  } else {
    /* '<S41>:1:131' */
    rtb_Row2 = K[1];
  }

  if (((rtb_TmpSignalConversionAtSFun_e[4] < ctrl_custom_P.C[1] - 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[4] > ctrl_custom_P.C[7] + 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_e[4] < ctrl_custom_P.C[13] - 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[4] > ctrl_custom_P.C[19] + 0.1))) {
    /* '<S41>:1:133' */
    /* '<S41>:1:134' */
    rtb_y[1] = 0.0;
  } else {
    /* '<S41>:1:136' */
  }

  /*  Thruster 3  */
  /*  C3 = [99.85 80.15 50 29];  */
  if (((K[2] > ctrl_custom_P.C[2]) && (K[2] < ctrl_custom_P.C[8]) && (rtb_y[2] >
        0.0)) || ((K[2] > ctrl_custom_P.C[2]) && (K[2] < ctrl_custom_P.C[8]) &&
                  (rtb_y[2] < 0.0))) {
    /* '<S41>:1:142' */
    /* '<S41>:1:143' */
    c1[0] = ctrl_custom_P.C[2];
    c1[1] = ctrl_custom_P.C[8];

    /* '<S41>:1:144' */
    c1_3[0] = ctrl_custom_P.C[2] - K[2];
    c1_3[1] = ctrl_custom_P.C[8] - K[2];
    ctrl_custom_abs(c1_3, varargin_1);
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

    /* '<S41>:1:145' */
    Alpha1_idx_2 = c1[b_i];
  } else if (((K[2] > ctrl_custom_P.C[14]) && (K[2] < ctrl_custom_P.C[20]) &&
              (rtb_y[2] > 0.0)) || ((K[2] > ctrl_custom_P.C[14]) && (K[2] <
               ctrl_custom_P.C[20]) && (rtb_y[2] < 0.0))) {
    /* '<S41>:1:146' */
    /* '<S41>:1:147' */
    c1[0] = ctrl_custom_P.C[14];
    c1[1] = ctrl_custom_P.C[20];

    /* '<S41>:1:148' */
    c1_3[0] = ctrl_custom_P.C[14] - K[2];
    c1_3[1] = ctrl_custom_P.C[20] - K[2];
    ctrl_custom_abs(c1_3, varargin_1);
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

    /* '<S41>:1:149' */
    Alpha1_idx_2 = c1[b_i];
  } else {
    /* '<S41>:1:151' */
    Alpha1_idx_2 = K[2];
  }

  if (((rtb_TmpSignalConversionAtSFun_e[5] > ctrl_custom_P.C[2] + 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[5] < ctrl_custom_P.C[8] - 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_e[5] > ctrl_custom_P.C[14] + 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[5] < ctrl_custom_P.C[20] - 0.1))) {
    /* '<S41>:1:153' */
    /* '<S41>:1:154' */
    rtb_y[2] = 0.0;
  } else {
    /* '<S41>:1:156' */
  }

  /*  Thruster 4 OK */
  /* C4 = [-52.8 -34.2 52.8 34.2];  */
  if (((K[3] > ctrl_custom_P.C[3]) && (K[3] < ctrl_custom_P.C[9]) && (rtb_y[3] >
        0.0)) || ((K[3] > ctrl_custom_P.C[3]) && (K[3] < ctrl_custom_P.C[9]) &&
                  (rtb_y[3] < 0.0))) {
    /* '<S41>:1:161' */
    /* '<S41>:1:162' */
    c1[0] = ctrl_custom_P.C[3];
    c1[1] = ctrl_custom_P.C[9];

    /* '<S41>:1:163' */
    c1_2[0] = ctrl_custom_P.C[3] - K[3];
    c1_2[1] = ctrl_custom_P.C[9] - K[3];
    ctrl_custom_abs(c1_2, varargin_1);
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

    /* '<S41>:1:164' */
    Alpha1_idx_3 = c1[b_i];
  } else if (((K[3] < ctrl_custom_P.C[15]) && (K[3] > ctrl_custom_P.C[21]) &&
              (rtb_y[3] > 0.0)) || ((K[3] < ctrl_custom_P.C[15]) && (K[3] >
               ctrl_custom_P.C[21]) && (rtb_y[3] < 0.0))) {
    /* '<S41>:1:165' */
    /* '<S41>:1:166' */
    c1[0] = ctrl_custom_P.C[15];
    c1[1] = ctrl_custom_P.C[21];

    /* '<S41>:1:167' */
    c1_2[0] = ctrl_custom_P.C[15] - K[3];
    c1_2[1] = ctrl_custom_P.C[21] - K[3];
    ctrl_custom_abs(c1_2, varargin_1);
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

    /* '<S41>:1:168' */
    Alpha1_idx_3 = c1[b_i];
  } else {
    /* '<S41>:1:170' */
    Alpha1_idx_3 = K[3];
  }

  if (((rtb_TmpSignalConversionAtSFun_e[6] > ctrl_custom_P.C[3] + 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[6] < ctrl_custom_P.C[9] - 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_e[6] < ctrl_custom_P.C[15] - 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[6] > ctrl_custom_P.C[21] + 0.1))) {
    /* '<S41>:1:172' */
    /* '<S41>:1:173' */
    rtb_y[3] = 0.0;
  } else {
    /* '<S41>:1:175' */
  }

  /*  Thruster 5 */
  /* C5 = [-98.25 -81.75 -145.8 -127.2]; */
  if (((K[4] < ctrl_custom_P.C[4]) && (K[4] > ctrl_custom_P.C[10]) && (rtb_y[4] >
        0.0)) || ((K[4] < ctrl_custom_P.C[4]) && (K[4] > ctrl_custom_P.C[10]) &&
                  (rtb_y[4] < 0.0))) {
    /* '<S41>:1:180' */
    /* '<S41>:1:181' */
    c1[0] = ctrl_custom_P.C[4];
    c1[1] = ctrl_custom_P.C[10];

    /* '<S41>:1:182' */
    c1_1[0] = ctrl_custom_P.C[4] - K[4];
    c1_1[1] = ctrl_custom_P.C[10] - K[4];
    ctrl_custom_abs(c1_1, varargin_1);
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

    /* '<S41>:1:183' */
    Alpha1_idx_4 = c1[b_i];
  } else if (((K[4] < ctrl_custom_P.C[16]) && (K[4] > ctrl_custom_P.C[22]) &&
              (rtb_y[4] > 0.0)) || ((K[4] < ctrl_custom_P.C[16]) && (K[4] >
               ctrl_custom_P.C[22]) && (rtb_y[4] < 0.0))) {
    /* '<S41>:1:184' */
    /* '<S41>:1:185' */
    c1[0] = ctrl_custom_P.C[16];
    c1[1] = ctrl_custom_P.C[22];

    /* '<S41>:1:186' */
    c1_1[0] = ctrl_custom_P.C[16] - K[4];
    c1_1[1] = ctrl_custom_P.C[22] - K[4];
    ctrl_custom_abs(c1_1, varargin_1);
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

    /* '<S41>:1:187' */
    Alpha1_idx_4 = c1[b_i];
  } else {
    /* '<S41>:1:189' */
    Alpha1_idx_4 = K[4];
  }

  if (((rtb_TmpSignalConversionAtSFun_e[7] < ctrl_custom_P.C[4] - 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[7] > ctrl_custom_P.C[10] + 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_e[7] < ctrl_custom_P.C[16] - 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[7] > ctrl_custom_P.C[22] + 0.1))) {
    /* '<S41>:1:191' */
    /* '<S41>:1:192' */
    rtb_y[4] = 0.0;
  } else {
    /* '<S41>:1:194' */
  }

  /*  Thruster 6 */
  /* C6 = [98.75 81.75 145.8 127.2]; */
  if (((K[5] > ctrl_custom_P.C[5]) && (K[5] < ctrl_custom_P.C[11]) && (rtb_y[5] >
        0.0)) || ((K[5] > ctrl_custom_P.C[5]) && (K[5] < ctrl_custom_P.C[11]) &&
                  (rtb_y[5] < 0.0))) {
    /* '<S41>:1:199' */
    /* '<S41>:1:200' */
    c1[0] = ctrl_custom_P.C[5];
    c1[1] = ctrl_custom_P.C[11];

    /* '<S41>:1:201' */
    c1_0[0] = ctrl_custom_P.C[5] - K[5];
    c1_0[1] = ctrl_custom_P.C[11] - K[5];
    ctrl_custom_abs(c1_0, varargin_1);
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

    /* '<S41>:1:202' */
    rtb_psi_dot = c1[b_i];
  } else if (((K[5] > ctrl_custom_P.C[17]) && (K[5] < ctrl_custom_P.C[23]) &&
              (rtb_y[5] > 0.0)) || ((K[5] > ctrl_custom_P.C[17]) && (K[5] <
               ctrl_custom_P.C[23]) && (rtb_y[5] < 0.0))) {
    /* '<S41>:1:203' */
    /* '<S41>:1:204' */
    c1[0] = ctrl_custom_P.C[17];
    c1[1] = ctrl_custom_P.C[23];

    /* '<S41>:1:205' */
    c1_0[0] = ctrl_custom_P.C[17] - K[5];
    c1_0[1] = ctrl_custom_P.C[23] - K[5];
    ctrl_custom_abs(c1_0, varargin_1);
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

    /* '<S41>:1:206' */
    rtb_psi_dot = c1[b_i];
  } else {
    /* '<S41>:1:208' */
    rtb_psi_dot = K[5];
  }

  if (((rtb_TmpSignalConversionAtSFun_e[8] > ctrl_custom_P.C[5] + 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[8] < ctrl_custom_P.C[11] - 0.1)) ||
      ((rtb_TmpSignalConversionAtSFun_e[8] > ctrl_custom_P.C[17] + 0.1) &&
       (rtb_TmpSignalConversionAtSFun_e[8] < ctrl_custom_P.C[23] - 0.1))) {
    /* '<S41>:1:210' */
    /* '<S41>:1:211' */
    rtb_y[5] = 0.0;
  } else {
    /* '<S41>:1:213' */
  }

  /*  Thruster 2&3  */
  if (rtb_Row2 == ctrl_custom_P.C[7]) {
    /* '<S41>:1:217' */
    /* '<S41>:1:218' */
    Alpha1_idx_2 = K[1] - (ctrl_custom_P.C[7] - K[1]);
  } else if (rtb_Row2 == ctrl_custom_P.C[1]) {
    /* '<S41>:1:219' */
    /* '<S41>:1:220' */
    Alpha1_idx_2 = K[1] - (ctrl_custom_P.C[1] - K[1]);
  } else if (rtb_Row2 == ctrl_custom_P.C[13]) {
    /* '<S41>:1:221' */
    /* '<S41>:1:222' */
    Alpha1_idx_2 = K[1] - (ctrl_custom_P.C[13] - K[1]);
  } else if (rtb_Row2 == ctrl_custom_P.C[19]) {
    /* '<S41>:1:223' */
    /* '<S41>:1:224' */
    Alpha1_idx_2 = K[1] - (ctrl_custom_P.C[19] - K[1]);
  } else if (Alpha1_idx_2 == ctrl_custom_P.C[8]) {
    /* '<S41>:1:226' */
    /* '<S41>:1:227' */
    rtb_Row2 = K[2] - (ctrl_custom_P.C[8] - K[2]);
  } else if (Alpha1_idx_2 == ctrl_custom_P.C[2]) {
    /* '<S41>:1:228' */
    /* '<S41>:1:229' */
    rtb_Row2 = K[2] - (ctrl_custom_P.C[2] - K[2]);
  } else if (Alpha1_idx_2 == ctrl_custom_P.C[14]) {
    /* '<S41>:1:230' */
    /* '<S41>:1:231' */
    rtb_Row2 = K[2] - (ctrl_custom_P.C[14] - K[2]);
  } else {
    if (Alpha1_idx_2 == ctrl_custom_P.C[20]) {
      /* '<S41>:1:232' */
      /* '<S41>:1:233' */
      rtb_Row2 = K[2] - (ctrl_custom_P.C[20] - K[2]);
    }
  }

  /*  Thruster 5&6 */
  if (Alpha1_idx_4 == ctrl_custom_P.C[10]) {
    /* '<S41>:1:237' */
    /* '<S41>:1:238' */
    rtb_psi_dot = K[4] - (ctrl_custom_P.C[10] - K[4]);
  } else if (Alpha1_idx_4 == ctrl_custom_P.C[4]) {
    /* '<S41>:1:239' */
    /* '<S41>:1:240' */
    rtb_psi_dot = K[4] - (ctrl_custom_P.C[4] - K[4]);
  } else if (Alpha1_idx_4 == ctrl_custom_P.C[16]) {
    /* '<S41>:1:241' */
    /* '<S41>:1:242' */
    rtb_psi_dot = K[4] - (ctrl_custom_P.C[16] - K[4]);
  } else if (Alpha1_idx_4 == ctrl_custom_P.C[22]) {
    /* '<S41>:1:243' */
    /* '<S41>:1:244' */
    rtb_psi_dot = K[4] - (ctrl_custom_P.C[22] - K[4]);
  } else if (rtb_psi_dot == ctrl_custom_P.C[11]) {
    /* '<S41>:1:246' */
    /* '<S41>:1:247' */
    Alpha1_idx_4 = K[5] - (ctrl_custom_P.C[11] - K[5]);
  } else if (rtb_psi_dot == ctrl_custom_P.C[5]) {
    /* '<S41>:1:248' */
    /* '<S41>:1:249' */
    Alpha1_idx_4 = K[5] - (ctrl_custom_P.C[5] - K[5]);
  } else if (rtb_psi_dot == ctrl_custom_P.C[17]) {
    /* '<S41>:1:250' */
    /* '<S41>:1:251' */
    Alpha1_idx_4 = K[5] - (ctrl_custom_P.C[17] - K[5]);
  } else {
    if (rtb_psi_dot == ctrl_custom_P.C[23]) {
      /* '<S41>:1:252' */
      /* '<S41>:1:253' */
      Alpha1_idx_4 = K[5] - (ctrl_custom_P.C[23] - K[5]);
    }
  }

  /*  Thruster 4 & 1 */
  if (Alpha1_idx_3 == ctrl_custom_P.C[9]) {
    /* '<S41>:1:256' */
    /* '<S41>:1:257' */
    rtb_Row1_d = K[3] - (ctrl_custom_P.C[9] - K[3]);
  } else if (Alpha1_idx_3 == ctrl_custom_P.C[3]) {
    /* '<S41>:1:258' */
    /* '<S41>:1:259' */
    rtb_Row1_d = K[3] - (ctrl_custom_P.C[3] - K[3]);
  } else if (Alpha1_idx_3 == ctrl_custom_P.C[15]) {
    /* '<S41>:1:260' */
    /* '<S41>:1:261' */
    rtb_Row1_d = K[3] - (ctrl_custom_P.C[15] - K[3]);
  } else {
    if (Alpha1_idx_3 == ctrl_custom_P.C[21]) {
      /* '<S41>:1:262' */
      /* '<S41>:1:263' */
      rtb_Row1_d = K[3] - (ctrl_custom_P.C[21] - K[3]);
    }
  }

  if (rtb_Row1_d == ctrl_custom_P.C[6]) {
    /* '<S41>:1:266' */
    /* '<S41>:1:267' */
    Alpha1_idx_3 = K[0] - (ctrl_custom_P.C[6] - K[0]);
  } else if (rtb_Row1_d == ctrl_custom_P.C[0]) {
    /* '<S41>:1:268' */
    /* '<S41>:1:269' */
    Alpha1_idx_3 = K[0] - (ctrl_custom_P.C[0] - K[0]);
  } else if (rtb_Row1_d == ctrl_custom_P.C[12]) {
    /* '<S41>:1:270' */
    /* '<S41>:1:271' */
    Alpha1_idx_3 = K[0] - (ctrl_custom_P.C[12] - K[0]);
  } else {
    if (rtb_Row1_d == ctrl_custom_P.C[18]) {
      /* '<S41>:1:272' */
      /* '<S41>:1:273' */
      Alpha1_idx_3 = K[0] - (ctrl_custom_P.C[18] - K[0]);
    }
  }

  /* '<S41>:1:276' */
  /* Desired_thrust = [u_d(1) u_d(2) u_d(3) u_d(4) u_d(5) u_d(6)]'; */
  /*  u_d = -Desired_thrust; */
  /*  Update outputs */
  /* '<S41>:1:283' */
  rtb_sys[0] = rtb_Row1_d;
  rtb_sys[1] = rtb_Row2;
  rtb_sys[2] = Alpha1_idx_2;
  rtb_sys[3] = Alpha1_idx_3;
  rtb_sys[4] = Alpha1_idx_4;
  rtb_sys[5] = rtb_psi_dot;
  for (i_0 = 0; i_0 < 6; i_0++) {
    rtb_sys[i_0 + 6] = rtb_y[i_0];
  }

  /* Switch: '<S11>/Choosing Fixed // Azimuth angle' incorporates:
   *  Constant: '<S11>/constant angle'
   */
  for (i_0 = 0; i_0 < 6; i_0++) {
    if (ctrl_custom_B.Angle_controller >=
        ctrl_custom_P.ChoosingFixedAzimuthangle_Thres) {
      ctrl_custom_B.ChoosingFixedAzimuthangle[i_0] = rtb_sys[i_0];
    } else {
      ctrl_custom_B.ChoosingFixedAzimuthangle[i_0] =
        ctrl_custom_P.constantangle_Value[i_0];
    }
  }

  /* End of Switch: '<S11>/Choosing Fixed // Azimuth angle' */

  /* Outputs for Iterator SubSystem: '<S11>/Optimal angle path and  constraints on rotation speed' incorporates:
   *  ForEach: '<S42>/For Each'
   */
  for (ForEach_itr = 0; ForEach_itr < 6; ForEach_itr++) {
    /* Integrator: '<S42>/Integrator' incorporates:
     *  Constant: '<S11>/constant angle'
     *  ForEachSliceSelector: '<S42>/ImpSel_InsertedFor_initial angle _at_outport_0'
     *  ForEachSliceSelector: '<S42>/ImpSel_InsertedFor_reset_at_outport_0'
     */
    if (rtmIsMajorTimeStep(ctrl_custom_M)) {
      zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                         &ctrl_custom_PrevZCX.CoreSubsys[ForEach_itr].
                         Integrator_Reset_ZCE_j,
                         (ctrl_custom_B.Startbutton1[ForEach_itr]));

      /* evaluate zero-crossings */
      if ((zcEvent != NO_ZCEVENT) || (ctrl_custom_DW.CoreSubsys[ForEach_itr].
           Integrator_IWORK != 0)) {
        ctrl_custom_X.CoreSubsys[ForEach_itr].Integrator_CSTATE_d =
          ctrl_custom_P.constantangle_Value[ForEach_itr];
      }
    }

    ctrl_custom_B.CoreSubsys[ForEach_itr].angle =
      ctrl_custom_X.CoreSubsys[ForEach_itr].Integrator_CSTATE_d;

    /* End of Integrator: '<S42>/Integrator' */

    /* Gain: '<S45>/Gain1' */
    rtb_psi_dot = ctrl_custom_P.CoreSubsys.Gain1_Gain *
      ctrl_custom_B.CoreSubsys[ForEach_itr].angle;
    if (rtmIsMajorTimeStep(ctrl_custom_M)) {
      /* Delay: '<S42>/Delay' */
      ctrl_custom_B.CoreSubsys[ForEach_itr].Delay =
        ctrl_custom_DW.CoreSubsys[ForEach_itr].Delay_DSTATE;
    }

    /* MATLAB Function: '<S42>/MATLAB Function1' incorporates:
     *  ForEachSliceSelector: '<S42>/ImpSel_InsertedFor_Desired Angle_at_outport_0'
     */
    /* MATLAB Function 'Thrust allocation/Optimal angle path and  constraints on rotation speed/Ensuring angle is  [-pi pi]': '<S46>:1' */
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
    /* '<S46>:1:39' */
    /* '<S46>:1:40' */
    /*  s = sign(angle); */
    /* '<S46>:1:43' */
    /* MATLAB Function 'Thrust allocation/Optimal angle path and  constraints on rotation speed/MATLAB Function1': '<S47>:1' */
    /* '<S47>:1:3' */
    rtb_Row2 = ctrl_custom_B.ChoosingFixedAzimuthangle[ForEach_itr] -
      ctrl_custom_B.CoreSubsys[ForEach_itr].Delay;
    if (fabs(rtb_Row2) >= 360.0) {
      /* '<S47>:1:4' */
      /* '<S47>:1:5' */
      rtb_Row2 = rt_remd_snf(rtb_Row2, 360.0);
    }

    if (fabs(rtb_Row2) >= 180.0) {
      /* '<S47>:1:8' */
      /* '<S47>:1:9' */
      if (rtb_Row2 < 0.0) {
        Alpha1_idx_2 = -1.0;
      } else if (rtb_Row2 > 0.0) {
        Alpha1_idx_2 = 1.0;
      } else if (rtb_Row2 == 0.0) {
        Alpha1_idx_2 = 0.0;
      } else {
        Alpha1_idx_2 = rtb_Row2;
      }

      rtb_Row2 -= Alpha1_idx_2 * 360.0;
    }

    /* End of MATLAB Function: '<S42>/MATLAB Function1' */

    /* Saturate: '<S42>/Max Rotation Rate' */
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
    if (rtb_Row2 > ctrl_custom_P.Max_rotation) {
      ctrl_custom_B.CoreSubsys[ForEach_itr].MaxRotationRate =
        ctrl_custom_P.Max_rotation;
    } else if (rtb_Row2 < -ctrl_custom_P.Max_rotation) {
      ctrl_custom_B.CoreSubsys[ForEach_itr].MaxRotationRate =
        -ctrl_custom_P.Max_rotation;
    } else {
      ctrl_custom_B.CoreSubsys[ForEach_itr].MaxRotationRate = rtb_Row2;
    }

    /* End of Saturate: '<S42>/Max Rotation Rate' */

    /* MATLAB Function: '<S42>/Ensuring angle is  [-pi pi]' */
    Alpha1_idx_3 = fabs(rt_remd_snf(rtb_psi_dot + 3.1415926535897931,
      6.2831853071795862) / 6.2831853071795862);
    if (rtb_psi_dot < 0.0) {
      rtb_Row2 = -1.0;
    } else if (rtb_psi_dot > 0.0) {
      rtb_Row2 = 1.0;
    } else if (rtb_psi_dot == 0.0) {
      rtb_Row2 = 0.0;
    } else {
      rtb_Row2 = rtb_psi_dot;
    }

    if (Alpha1_idx_3 > 0.0) {
      Alpha1_idx_3 = 1.0;
    } else {
      if (Alpha1_idx_3 == 0.0) {
        Alpha1_idx_3 = 0.0;
      }
    }

    Alpha1_idx_3 = (Alpha1_idx_3 - 1.0) * 2.0 + rtb_Row2;
    if (rtb_psi_dot < 0.0) {
      rtb_Row2 = -1.0;
    } else if (rtb_psi_dot > 0.0) {
      rtb_Row2 = 1.0;
    } else if (rtb_psi_dot == 0.0) {
      rtb_Row2 = 0.0;
    } else {
      rtb_Row2 = rtb_psi_dot;
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

    /* ForEachSliceAssignment: '<S42>/ImpAsg_InsertedFor_commanded Angle_at_inport_0' incorporates:
     *  MATLAB Function: '<S42>/Ensuring angle is  [-pi pi]'
     */
    ctrl_custom_B.ImpAsg_InsertedFor_commandedAng[ForEach_itr] = rt_remd_snf
      (rtb_Row2 * 3.1415926535897931 + rtb_psi_dot, 6.2831853071795862) -
      Alpha1_idx_3 * 3.1415926535897931;
  }

  /* End of Outputs for SubSystem: '<S11>/Optimal angle path and  constraints on rotation speed' */

  /* Gain: '<S9>/Gain' */
  for (i_0 = 0; i_0 < 6; i_0++) {
    alpha[i_0] = ctrl_custom_P.Gain_Gain_oe *
      ctrl_custom_B.ImpAsg_InsertedFor_commandedAng[i_0];
  }

  /* End of Gain: '<S9>/Gain' */

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Constant: '<Root>/X-position Thruster'
   *  Constant: '<Root>/Y-position Thruster'
   */
  /* MATLAB Function 'MATLAB Function': '<S3>:1' */
  /* '<S3>:1:4' */
  /* '<S3>:1:5' */
  /* '<S3>:1:6' */
  /* '<S3>:1:10' */
  rtb_psi_dot = alpha[0];
  ctrl_custom_cosd(&rtb_psi_dot);
  rtb_Row2 = alpha[1];
  ctrl_custom_cosd(&rtb_Row2);
  rtb_Row1_d = alpha[2];
  ctrl_custom_cosd(&rtb_Row1_d);
  Alpha1_idx_2 = alpha[3];
  ctrl_custom_cosd(&Alpha1_idx_2);
  Alpha1_idx_4 = alpha[4];
  ctrl_custom_cosd(&Alpha1_idx_4);
  g = alpha[5];
  ctrl_custom_cosd(&g);
  h = alpha[0];
  ctrl_custom_sind(&h);
  i = alpha[1];
  ctrl_custom_sind(&i);
  j = alpha[2];
  ctrl_custom_sind(&j);
  k = alpha[3];
  ctrl_custom_sind(&k);
  l = alpha[4];
  ctrl_custom_sind(&l);
  m = alpha[5];
  ctrl_custom_sind(&m);
  n = alpha[0];
  ctrl_custom_sind(&n);
  o = alpha[0];
  ctrl_custom_cosd(&o);
  p = alpha[1];
  ctrl_custom_sind(&p);
  q = alpha[1];
  ctrl_custom_cosd(&q);
  r = alpha[2];
  ctrl_custom_sind(&r);
  s_0 = alpha[2];
  ctrl_custom_cosd(&s_0);
  t = alpha[3];
  ctrl_custom_sind(&t);
  Alpha1_idx_3 = alpha[3];
  ctrl_custom_cosd(&Alpha1_idx_3);
  v = alpha[4];
  ctrl_custom_sind(&v);
  w = alpha[4];
  ctrl_custom_cosd(&w);
  x = alpha[5];
  ctrl_custom_sind(&x);
  y = alpha[5];
  ctrl_custom_cosd(&y);
  rtb_psi_dot_0[0] = rtb_psi_dot;
  rtb_psi_dot_0[3] = rtb_Row2;
  rtb_psi_dot_0[6] = rtb_Row1_d;
  rtb_psi_dot_0[9] = Alpha1_idx_2;
  rtb_psi_dot_0[12] = Alpha1_idx_4;
  rtb_psi_dot_0[15] = g;
  rtb_psi_dot_0[1] = h;
  rtb_psi_dot_0[4] = i;
  rtb_psi_dot_0[7] = j;
  rtb_psi_dot_0[10] = k;
  rtb_psi_dot_0[13] = l;
  rtb_psi_dot_0[16] = m;
  rtb_psi_dot_0[2] = n * ctrl_custom_P.XpositionThruster_Value_k[0] - o *
    ctrl_custom_P.YpositionThruster_Value_l[0];
  rtb_psi_dot_0[5] = p * ctrl_custom_P.XpositionThruster_Value_k[1] - q *
    ctrl_custom_P.YpositionThruster_Value_l[1];
  rtb_psi_dot_0[8] = r * ctrl_custom_P.XpositionThruster_Value_k[2] - s_0 *
    ctrl_custom_P.YpositionThruster_Value_l[2];
  rtb_psi_dot_0[11] = t * ctrl_custom_P.XpositionThruster_Value_k[3] -
    Alpha1_idx_3 * ctrl_custom_P.YpositionThruster_Value_l[3];
  rtb_psi_dot_0[14] = v * ctrl_custom_P.XpositionThruster_Value_k[4] - w *
    ctrl_custom_P.YpositionThruster_Value_l[4];
  rtb_psi_dot_0[17] = x * ctrl_custom_P.XpositionThruster_Value_k[5] - y *
    ctrl_custom_P.YpositionThruster_Value_l[5];

  /* Saturate: '<S48>/Saturation 7' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  for (i_0 = 0; i_0 < 6; i_0++) {
    if (rtb_sys[6 + i_0] > ctrl_custom_P.Max_thrust) {
      rtb_TmpSignalConversionAtSFunct[i_0] = ctrl_custom_P.Max_thrust;
    } else if (rtb_sys[6 + i_0] < -ctrl_custom_P.Max_thrust) {
      rtb_TmpSignalConversionAtSFunct[i_0] = -ctrl_custom_P.Max_thrust;
    } else {
      rtb_TmpSignalConversionAtSFunct[i_0] = rtb_sys[6 + i_0];
    }
  }

  /* End of Saturate: '<S48>/Saturation 7' */

  /* MATLAB Function: '<Root>/MATLAB Function' */
  for (i_0 = 0; i_0 < 3; i_0++) {
    ctrl_custom_B.commanded_tau[i_0] = 0.0;
    for (b_i = 0; b_i < 6; b_i++) {
      ctrl_custom_B.commanded_tau[i_0] += rtb_psi_dot_0[3 * b_i + i_0] *
        rtb_TmpSignalConversionAtSFunct[b_i];
    }
  }

  /* Saturate: '<S28>/Saturation' */
  if (ctrl_custom_B.Sum > ctrl_custom_P.Saturation_UpperSat_j) {
    Alpha1_idx_2 = ctrl_custom_P.Saturation_UpperSat_j;
  } else if (ctrl_custom_B.Sum < ctrl_custom_P.Saturation_LowerSat_f) {
    Alpha1_idx_2 = ctrl_custom_P.Saturation_LowerSat_f;
  } else {
    Alpha1_idx_2 = ctrl_custom_B.Sum;
  }

  /* End of Saturate: '<S28>/Saturation' */

  /* Signum: '<S28>/Sign' */
  if (Alpha1_idx_2 < 0.0) {
    rtb_psi_dot = -1.0;
  } else if (Alpha1_idx_2 > 0.0) {
    rtb_psi_dot = 1.0;
  } else if (Alpha1_idx_2 == 0.0) {
    rtb_psi_dot = 0.0;
  } else {
    rtb_psi_dot = Alpha1_idx_2;
  }

  /* End of Signum: '<S28>/Sign' */

  /* Gain: '<S28>/Gain' */
  rtb_psi_dot *= ctrl_custom_P.Gain_Gain_gg;

  /* Sum: '<S28>/Sum1' */
  Alpha1_idx_2 += rtb_psi_dot;

  /* Math: '<S28>/Math Function' incorporates:
   *  Constant: '<S28>/Constant'
   */
  Alpha1_idx_2 = rt_remd_snf(Alpha1_idx_2, ctrl_custom_P.Constant_Value_i);

  /* Sum: '<S28>/Sum' */
  Alpha1_idx_2 -= rtb_psi_dot;

  /* Fcn: '<S5>/Fcn' */
  rtb_psi_dot = Alpha1_idx_2;

  /* Integrator: '<S5>/Integrator2' */
  if (rtmIsMajorTimeStep(ctrl_custom_M)) {
    zcEvent = rt_ZCFcn(ANY_ZERO_CROSSING,
                       &ctrl_custom_PrevZCX.Integrator2_Reset_ZCE,
                       (ctrl_custom_B.Startbutton));

    /* evaluate zero-crossings */
    if (zcEvent != NO_ZCEVENT) {
      ctrl_custom_X.Integrator2_CSTATE_j[0] = ctrl_custom_P.Integrator2_IC_i[0];
      ctrl_custom_X.Integrator2_CSTATE_j[1] = ctrl_custom_P.Integrator2_IC_i[1];
      ctrl_custom_X.Integrator2_CSTATE_j[2] = ctrl_custom_P.Integrator2_IC_i[2];
    }
  }

  ctrl_custom_B.Integrator2[0] = ctrl_custom_X.Integrator2_CSTATE_j[0];
  ctrl_custom_B.Integrator2[1] = ctrl_custom_X.Integrator2_CSTATE_j[1];
  ctrl_custom_B.Integrator2[2] = ctrl_custom_X.Integrator2_CSTATE_j[2];

  /* End of Integrator: '<S5>/Integrator2' */
  if (rtmIsMajorTimeStep(ctrl_custom_M)) {
    /* S-Function (sdspdiag2): '<S18>/Create Diagonal Matrix2' incorporates:
     *  Constant: '<S18>/Constant6'
     *  Constant: '<S18>/Constant7'
     *  Constant: '<S18>/Constant8'
     */
    memset(&ctrl_custom_B.CreateDiagonalMatrix2[0], 0, 9U * sizeof(real_T));
    ctrl_custom_B.CreateDiagonalMatrix2[0] = ctrl_custom_P.Constant6_Value;
    ctrl_custom_B.CreateDiagonalMatrix2[4] = ctrl_custom_P.Constant7_Value;
    ctrl_custom_B.CreateDiagonalMatrix2[8] = ctrl_custom_P.Constant8_Value;
  }

  /* Sum: '<S5>/Sum' */
  rtb_MatrixMultiply2[0] = ctrl_custom_B.Gain - ctrl_custom_B.Integrator[0];
  rtb_MatrixMultiply2[1] = ctrl_custom_B.Gain1 - ctrl_custom_B.Integrator[1];
  rtb_MatrixMultiply2[2] = Alpha1_idx_2 - ctrl_custom_B.Sum_h;

  /* MATLAB Function: '<S5>/C(nu)*nu' */
  /* MATLAB Function 'Nonlinear Passisve Observer/D(nu)*nu': '<S23>:1' */
  /* '<S23>:1:3' */
  /* '<S23>:1:4' */
  /* '<S23>:1:5' */
  /*  DAMPING  */
  /*  Surge: */
  /*  Based on fitting of towing data from -0.8 < u < 0.8 m/s */
  /* '<S23>:1:11' */
  /* '<S23>:1:12' */
  /* '<S23>:1:13' */
  /*  Sway: */
  /*  Based on fitting of towing data from -0.45 < u < 0.45 m/s */
  /* '<S23>:1:17' */
  /* '<S23>:1:18' */
  /* '<S23>:1:19' */
  /*  Yaw: */
  /*  Based on fitting of towing data from -8 < u < 8 deg/s */
  /*  The fitting range is limited. Towing should be performed for higher */
  /*  velocities. */
  /* '<S23>:1:25' */
  /* '<S23>:1:26' */
  /* '<S23>:1:27' */
  /*  Y_vvv og N_rrr er fra curvefitting uten minus, men ser ut til å fungere */
  /*  med minus.  */
  /*  Assembly of the damping matrix */
  /* '<S23>:1:40' */
  /* '<S23>:1:41' */
  /* '<S23>:1:42' */
  /*  Y_r + Y_rr*abs(r) + Y_rrr*r^2 + Y_vr*abs(v); Not verified, temporarily disabled */
  /*  N_v + N_vv*abs(v) + N_vvv*v^2 + N_rv*abs(r); Not verified, temporarily disabled */
  /* '<S23>:1:47' */
  /* '<S23>:1:54' */
  /* MATLAB Function 'Nonlinear Passisve Observer/C(nu)*nu': '<S22>:1' */
  /* '<S22>:1:3' */
  /* '<S22>:1:4' */
  /* '<S22>:1:5' */
  /*  MATRICES */
  /* '<S22>:1:8' */
  /* 0.0432; */
  /*  Added mass */
  /* '<S22>:1:11' */
  /*  Correolis matrix */
  /* '<S22>:1:14' */
  rtb_Row2 = -99.03 * ctrl_custom_B.Integrator1_a[1] - -0.525 *
    ctrl_custom_B.Integrator1_a[2];

  /* '<S22>:1:15' */
  rtb_Row1_d = 124.658 * ctrl_custom_B.Integrator1_a[0];

  /* Fcn: '<S26>/Row1' incorporates:
   *  Fcn: '<S5>/Fcn'
   */
  /* '<S22>:1:17' */
  /* '<S22>:1:24' */
  rtb_psi_dot_1[0] = Alpha1_idx_2;
  rtb_psi_dot_3[0] = Alpha1_idx_2;

  /* Fcn: '<S26>/Row2' incorporates:
   *  Fcn: '<S5>/Fcn'
   */
  rtb_psi_dot_5[0] = Alpha1_idx_2;
  rtb_psi_dot_7[0] = Alpha1_idx_2;

  /* Fcn: '<S25>/Row1' incorporates:
   *  Fcn: '<S5>/Fcn'
   */
  rtb_psi_dot_a[0] = Alpha1_idx_2;
  rtb_psi_dot_c[0] = Alpha1_idx_2;

  /* Fcn: '<S25>/Row2' incorporates:
   *  Fcn: '<S5>/Fcn'
   */
  rtb_psi_dot_e[0] = Alpha1_idx_2;
  rtb_psi_dot_g[0] = Alpha1_idx_2;
  for (i_0 = 0; i_0 < 3; i_0++) {
    /* Product: '<S5>/Matrix Multiply2' */
    Alpha1_idx_2 = ctrl_custom_B.CreateDiagonalMatrix2[i_0 + 6] *
      rtb_MatrixMultiply2[2] + (ctrl_custom_B.CreateDiagonalMatrix2[i_0 + 3] *
      rtb_MatrixMultiply2[1] + ctrl_custom_B.CreateDiagonalMatrix2[i_0] *
      rtb_MatrixMultiply2[0]);

    /* Fcn: '<S26>/Row1' */
    rtb_psi_dot_1[i_0 + 1] = ctrl_custom_B.Integrator2[i_0];
    rtb_psi_dot_2[i_0 + 1] = ctrl_custom_B.Integrator2[i_0];
    rtb_psi_dot_3[i_0 + 1] = ctrl_custom_B.Integrator2[i_0];
    rtb_psi_dot_4[i_0 + 1] = ctrl_custom_B.Integrator2[i_0];

    /* Fcn: '<S26>/Row2' */
    rtb_psi_dot_5[i_0 + 1] = ctrl_custom_B.Integrator2[i_0];
    rtb_psi_dot_6[i_0 + 1] = ctrl_custom_B.Integrator2[i_0];
    rtb_psi_dot_7[i_0 + 1] = ctrl_custom_B.Integrator2[i_0];
    rtb_psi_dot_8[i_0 + 1] = ctrl_custom_B.Integrator2[i_0];

    /* Fcn: '<S26>/Row3' */
    rtb_psi_dot_9[i_0 + 1] = ctrl_custom_B.Integrator2[i_0];

    /* Fcn: '<S25>/Row1' */
    rtb_psi_dot_a[i_0 + 1] = Alpha1_idx_2;
    rtb_psi_dot_b[i_0 + 1] = Alpha1_idx_2;
    rtb_psi_dot_c[i_0 + 1] = Alpha1_idx_2;
    rtb_psi_dot_d[i_0 + 1] = Alpha1_idx_2;

    /* Fcn: '<S25>/Row2' */
    rtb_psi_dot_e[i_0 + 1] = Alpha1_idx_2;
    rtb_psi_dot_f[i_0 + 1] = Alpha1_idx_2;
    rtb_psi_dot_g[i_0 + 1] = Alpha1_idx_2;
    rtb_psi_dot_h[i_0 + 1] = Alpha1_idx_2;

    /* Fcn: '<S25>/Row3' */
    rtb_psi_dot_i[i_0 + 1] = Alpha1_idx_2;
  }

  /* Sum: '<S5>/Sum2' incorporates:
   *  Fcn: '<S25>/Row1'
   *  Fcn: '<S25>/Row2'
   *  Fcn: '<S25>/Row3'
   */
  tmp_0[0] = cos(rtb_psi_dot_a[0]) * rtb_psi_dot_b[1] + sin(rtb_psi_dot_c[0]) *
    rtb_psi_dot_d[2];
  tmp_0[1] = -sin(rtb_psi_dot_e[0]) * rtb_psi_dot_f[1] + cos(rtb_psi_dot_g[0]) *
    rtb_psi_dot_h[2];
  tmp_0[2] = rtb_psi_dot_i[3];

  /* Sum: '<S5>/Sum3' incorporates:
   *  Fcn: '<S26>/Row1'
   *  Fcn: '<S26>/Row2'
   *  Fcn: '<S26>/Row3'
   */
  tmp_1[0] = cos(rtb_psi_dot_1[0]) * rtb_psi_dot_2[1] + sin(rtb_psi_dot_3[0]) *
    rtb_psi_dot_4[2];
  tmp_1[1] = -sin(rtb_psi_dot_5[0]) * rtb_psi_dot_6[1] + cos(rtb_psi_dot_7[0]) *
    rtb_psi_dot_8[2];
  tmp_1[2] = rtb_psi_dot_9[3];

  /* MATLAB Function: '<S5>/D(nu)*nu' */
  tmp_2[0] = (0.0 * fabs(ctrl_custom_B.Integrator1_a[0]) + -2.332) +
    ctrl_custom_B.Integrator1_a[0] * ctrl_custom_B.Integrator1_a[0] * -8.557;
  tmp_2[3] = 0.0;
  tmp_2[6] = 0.0;
  tmp_2[1] = 0.0;
  tmp_2[4] = (0.3976 * fabs(ctrl_custom_B.Integrator1_a[1]) + -4.673) +
    ctrl_custom_B.Integrator1_a[1] * ctrl_custom_B.Integrator1_a[1] * -313.3;
  tmp_2[7] = 0.0;
  tmp_2[2] = 0.0;
  tmp_2[5] = 0.0;
  tmp_2[8] = (-0.01148 * fabs(ctrl_custom_B.Integrator1_a[2]) + -0.01675) +
    ctrl_custom_B.Integrator1_a[2] * ctrl_custom_B.Integrator1_a[2] * -0.0003578;
  for (i_0 = 0; i_0 < 3; i_0++) {
    rtb_CreateDiagonalMatrix5[3 * i_0] = -tmp_2[3 * i_0];
    rtb_CreateDiagonalMatrix5[1 + 3 * i_0] = -tmp_2[3 * i_0 + 1];
    rtb_CreateDiagonalMatrix5[2 + 3 * i_0] = -tmp_2[3 * i_0 + 2];
  }

  /* MATLAB Function: '<S5>/C(nu)*nu' */
  tmp_3[0] = 0.0;
  tmp_3[3] = 0.0;
  tmp_3[6] = rtb_Row2;
  tmp_3[1] = 0.0;
  tmp_3[4] = 0.0;
  tmp_3[7] = rtb_Row1_d;
  tmp_3[2] = -rtb_Row2;
  tmp_3[5] = -rtb_Row1_d;
  tmp_3[8] = 0.0;
  for (i_0 = 0; i_0 < 3; i_0++) {
    /* Sum: '<S5>/Sum3' incorporates:
     *  Gain: '<S5>/M^-1'
     *  MATLAB Function: '<S5>/C(nu)*nu'
     *  MATLAB Function: '<S5>/D(nu)*nu'
     *  Sum: '<S5>/Sum2'
     */
    rtb_MatrixMultiply[i_0] = (((tmp_0[i_0] + ctrl_custom_B.Sum1[i_0]) +
      tmp_1[i_0]) - ((rtb_CreateDiagonalMatrix5[i_0 + 3] *
                      ctrl_custom_B.Integrator1_a[1] +
                      rtb_CreateDiagonalMatrix5[i_0] *
                      ctrl_custom_B.Integrator1_a[0]) +
                     rtb_CreateDiagonalMatrix5[i_0 + 6] *
                     ctrl_custom_B.Integrator1_a[2])) - (tmp_3[i_0 + 6] *
      ctrl_custom_B.Integrator1_a[2] + (tmp_3[i_0 + 3] *
      ctrl_custom_B.Integrator1_a[1] + tmp_3[i_0] * ctrl_custom_B.Integrator1_a
      [0]));
  }

  /* Gain: '<S5>/M^-1' */
  for (i_0 = 0; i_0 < 3; i_0++) {
    ctrl_custom_B.M1[i_0] = 0.0;
    ctrl_custom_B.M1[i_0] += ctrl_custom_P.M1_Gain[i_0] * rtb_MatrixMultiply[0];
    ctrl_custom_B.M1[i_0] += ctrl_custom_P.M1_Gain[i_0 + 3] *
      rtb_MatrixMultiply[1];
    ctrl_custom_B.M1[i_0] += ctrl_custom_P.M1_Gain[i_0 + 6] *
      rtb_MatrixMultiply[2];
  }

  /* Saturate: '<S48>/Saturation 1' */
  if (rtb_sys[6] > ctrl_custom_P.Max_thrust) {
    rtb_Row1_d = ctrl_custom_P.Max_thrust;
  } else if (rtb_sys[6] < ctrl_custom_P.Saturation1_LowerSat) {
    rtb_Row1_d = ctrl_custom_P.Saturation1_LowerSat;
  } else {
    rtb_Row1_d = rtb_sys[6];
  }

  /* End of Saturate: '<S48>/Saturation 1' */

  /* Polyval: '<S48>/positive thrust 1' */
  rtb_Row2 = ctrl_custom_P.pwm_thr1_forward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_Row2 = rtb_Row2 * rtb_Row1_d + ctrl_custom_P.pwm_thr1_forward[i_0 + 1];
  }

  /* End of Polyval: '<S48>/positive thrust 1' */

  /* Saturate: '<S48>/Saturation 2' */
  if (rtb_sys[6] > ctrl_custom_P.Saturation2_UpperSat) {
    rtb_Row1_d = ctrl_custom_P.Saturation2_UpperSat;
  } else if (rtb_sys[6] < ctrl_custom_P.Min_thrust) {
    rtb_Row1_d = ctrl_custom_P.Min_thrust;
  } else {
    rtb_Row1_d = rtb_sys[6];
  }

  /* End of Saturate: '<S48>/Saturation 2' */

  /* Polyval: '<S48>/negative thrust 1' */
  Alpha1_idx_2 = ctrl_custom_P.pwm_thr1_backward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    Alpha1_idx_2 = Alpha1_idx_2 * rtb_Row1_d +
      ctrl_custom_P.pwm_thr1_backward[i_0 + 1];
  }

  /* End of Polyval: '<S48>/negative thrust 1' */

  /* MATLAB Function: '<S48>/MATLAB Function1' */
  /* MATLAB Function 'Thruster control /Thrust mapped to PWM/MATLAB Function1': '<S49>:1' */
  if (rtb_sys[6] >= 0.0) {
    /* '<S49>:1:4' */
    /* '<S49>:1:5' */
    ctrl_custom_B.Tc_out = rtb_Row2;
  } else {
    /* signal < 0 */
    /* '<S49>:1:7' */
    ctrl_custom_B.Tc_out = Alpha1_idx_2;
  }

  /* End of MATLAB Function: '<S48>/MATLAB Function1' */

  /* Saturate: '<S48>/Saturation 8' */
  if (rtb_sys[7] > ctrl_custom_P.Max_thrust) {
    rtb_Row2 = ctrl_custom_P.Max_thrust;
  } else if (rtb_sys[7] < ctrl_custom_P.Saturation8_LowerSat) {
    rtb_Row2 = ctrl_custom_P.Saturation8_LowerSat;
  } else {
    rtb_Row2 = rtb_sys[7];
  }

  /* End of Saturate: '<S48>/Saturation 8' */

  /* Polyval: '<S48>/positive thrust 2' */
  rtb_positivethrust2 = ctrl_custom_P.pwm_thr2_forward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_positivethrust2 = rtb_positivethrust2 * rtb_Row2 +
      ctrl_custom_P.pwm_thr2_forward[i_0 + 1];
  }

  /* End of Polyval: '<S48>/positive thrust 2' */

  /* Saturate: '<S48>/Saturation 9' */
  if (rtb_sys[7] > ctrl_custom_P.Saturation9_UpperSat) {
    rtb_Row2 = ctrl_custom_P.Saturation9_UpperSat;
  } else if (rtb_sys[7] < ctrl_custom_P.Min_thrust) {
    rtb_Row2 = ctrl_custom_P.Min_thrust;
  } else {
    rtb_Row2 = rtb_sys[7];
  }

  /* End of Saturate: '<S48>/Saturation 9' */

  /* Polyval: '<S48>/negative thrust 2' */
  rtb_negativethrust2 = ctrl_custom_P.pwm_thr2_backward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_negativethrust2 = rtb_negativethrust2 * rtb_Row2 +
      ctrl_custom_P.pwm_thr2_backward[i_0 + 1];
  }

  /* End of Polyval: '<S48>/negative thrust 2' */

  /* MATLAB Function: '<S48>/MATLAB Function2' */
  ctrl_custom_MATLABFunction2(rtb_positivethrust2, rtb_sys[7],
    rtb_negativethrust2, &ctrl_custom_B.sf_MATLABFunction2);

  /* Saturate: '<S48>/Saturation 10' */
  if (rtb_sys[8] > ctrl_custom_P.Max_thrust) {
    rtb_Row2 = ctrl_custom_P.Max_thrust;
  } else if (rtb_sys[8] < ctrl_custom_P.Saturation10_LowerSat) {
    rtb_Row2 = ctrl_custom_P.Saturation10_LowerSat;
  } else {
    rtb_Row2 = rtb_sys[8];
  }

  /* End of Saturate: '<S48>/Saturation 10' */

  /* Polyval: '<S48>/positive thrust 3' */
  rtb_positivethrust3 = ctrl_custom_P.pwm_thr3_forward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_positivethrust3 = rtb_positivethrust3 * rtb_Row2 +
      ctrl_custom_P.pwm_thr3_forward[i_0 + 1];
  }

  /* End of Polyval: '<S48>/positive thrust 3' */

  /* Saturate: '<S48>/Saturation 11' */
  if (rtb_sys[8] > ctrl_custom_P.Saturation11_UpperSat) {
    rtb_Row2 = ctrl_custom_P.Saturation11_UpperSat;
  } else if (rtb_sys[8] < ctrl_custom_P.Min_thrust) {
    rtb_Row2 = ctrl_custom_P.Min_thrust;
  } else {
    rtb_Row2 = rtb_sys[8];
  }

  /* End of Saturate: '<S48>/Saturation 11' */

  /* Polyval: '<S48>/negative thrust 3' */
  rtb_negativethrust3 = ctrl_custom_P.pwm_thr3_backward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_negativethrust3 = rtb_negativethrust3 * rtb_Row2 +
      ctrl_custom_P.pwm_thr3_backward[i_0 + 1];
  }

  /* End of Polyval: '<S48>/negative thrust 3' */

  /* MATLAB Function: '<S48>/MATLAB Function3' */
  ctrl_custom_MATLABFunction2(rtb_positivethrust3, rtb_sys[8],
    rtb_negativethrust3, &ctrl_custom_B.sf_MATLABFunction3);

  /* Saturate: '<S48>/Saturation 3' */
  if (rtb_sys[9] > ctrl_custom_P.Max_thrust) {
    rtb_Row2 = ctrl_custom_P.Max_thrust;
  } else if (rtb_sys[9] < ctrl_custom_P.Saturation3_LowerSat) {
    rtb_Row2 = ctrl_custom_P.Saturation3_LowerSat;
  } else {
    rtb_Row2 = rtb_sys[9];
  }

  /* End of Saturate: '<S48>/Saturation 3' */

  /* Polyval: '<S48>/positive thrust 4' */
  rtb_positivethrust4 = ctrl_custom_P.pwm_thr4_forward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_positivethrust4 = rtb_positivethrust4 * rtb_Row2 +
      ctrl_custom_P.pwm_thr4_forward[i_0 + 1];
  }

  /* End of Polyval: '<S48>/positive thrust 4' */

  /* Saturate: '<S48>/Saturation 4' */
  if (rtb_sys[9] > ctrl_custom_P.Saturation4_UpperSat) {
    rtb_Row2 = ctrl_custom_P.Saturation4_UpperSat;
  } else if (rtb_sys[9] < ctrl_custom_P.Min_thrust) {
    rtb_Row2 = ctrl_custom_P.Min_thrust;
  } else {
    rtb_Row2 = rtb_sys[9];
  }

  /* End of Saturate: '<S48>/Saturation 4' */

  /* Polyval: '<S48>/negative thrust 4' */
  rtb_negativethrust4 = ctrl_custom_P.pwm_thr4_backward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_negativethrust4 = rtb_negativethrust4 * rtb_Row2 +
      ctrl_custom_P.pwm_thr4_backward[i_0 + 1];
  }

  /* End of Polyval: '<S48>/negative thrust 4' */

  /* MATLAB Function: '<S48>/MATLAB Function4' */
  ctrl_custom_MATLABFunction2(rtb_positivethrust4, rtb_sys[9],
    rtb_negativethrust4, &ctrl_custom_B.sf_MATLABFunction4);

  /* Saturate: '<S48>/Saturation 5' */
  if (rtb_sys[10] > ctrl_custom_P.Max_thrust) {
    rtb_Row2 = ctrl_custom_P.Max_thrust;
  } else if (rtb_sys[10] < ctrl_custom_P.Saturation5_LowerSat) {
    rtb_Row2 = ctrl_custom_P.Saturation5_LowerSat;
  } else {
    rtb_Row2 = rtb_sys[10];
  }

  /* End of Saturate: '<S48>/Saturation 5' */

  /* Polyval: '<S48>/positive thrust 5' */
  rtb_positivethrust5 = ctrl_custom_P.pwm_thr5_forward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_positivethrust5 = rtb_positivethrust5 * rtb_Row2 +
      ctrl_custom_P.pwm_thr5_forward[i_0 + 1];
  }

  /* End of Polyval: '<S48>/positive thrust 5' */

  /* Saturate: '<S48>/Saturation 6' */
  if (rtb_sys[10] > ctrl_custom_P.Saturation6_UpperSat) {
    rtb_Row2 = ctrl_custom_P.Saturation6_UpperSat;
  } else if (rtb_sys[10] < ctrl_custom_P.Min_thrust) {
    rtb_Row2 = ctrl_custom_P.Min_thrust;
  } else {
    rtb_Row2 = rtb_sys[10];
  }

  /* End of Saturate: '<S48>/Saturation 6' */

  /* Polyval: '<S48>/negative thrust 5' */
  rtb_negativethrust5 = ctrl_custom_P.pwm_thr5_backward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_negativethrust5 = rtb_negativethrust5 * rtb_Row2 +
      ctrl_custom_P.pwm_thr5_backward[i_0 + 1];
  }

  /* End of Polyval: '<S48>/negative thrust 5' */

  /* MATLAB Function: '<S48>/MATLAB Function5' */
  ctrl_custom_MATLABFunction2(rtb_positivethrust5, rtb_sys[10],
    rtb_negativethrust5, &ctrl_custom_B.sf_MATLABFunction5);

  /* Saturate: '<S48>/Saturation 12' */
  if (rtb_sys[11] > ctrl_custom_P.Max_thrust) {
    rtb_Row2 = ctrl_custom_P.Max_thrust;
  } else if (rtb_sys[11] < ctrl_custom_P.Saturation12_LowerSat) {
    rtb_Row2 = ctrl_custom_P.Saturation12_LowerSat;
  } else {
    rtb_Row2 = rtb_sys[11];
  }

  /* End of Saturate: '<S48>/Saturation 12' */

  /* Polyval: '<S48>/positive thrust 6' */
  rtb_positivethrust6 = ctrl_custom_P.pwm_thr6_forward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_positivethrust6 = rtb_positivethrust6 * rtb_Row2 +
      ctrl_custom_P.pwm_thr6_forward[i_0 + 1];
  }

  /* End of Polyval: '<S48>/positive thrust 6' */

  /* Saturate: '<S48>/Saturation 13' */
  if (rtb_sys[11] > ctrl_custom_P.Saturation13_UpperSat) {
    rtb_Row2 = ctrl_custom_P.Saturation13_UpperSat;
  } else if (rtb_sys[11] < ctrl_custom_P.Min_thrust) {
    rtb_Row2 = ctrl_custom_P.Min_thrust;
  } else {
    rtb_Row2 = rtb_sys[11];
  }

  /* End of Saturate: '<S48>/Saturation 13' */

  /* Polyval: '<S48>/negative thrust 6' */
  rtb_negativethrust6 = ctrl_custom_P.pwm_thr6_backward[0];
  for (i_0 = 0; i_0 < 5; i_0++) {
    rtb_negativethrust6 = rtb_negativethrust6 * rtb_Row2 +
      ctrl_custom_P.pwm_thr6_backward[i_0 + 1];
  }

  /* End of Polyval: '<S48>/negative thrust 6' */

  /* MATLAB Function: '<S48>/MATLAB Function6' */
  ctrl_custom_MATLABFunction2(rtb_positivethrust6, rtb_sys[11],
    rtb_negativethrust6, &ctrl_custom_B.sf_MATLABFunction6);
  if (rtmIsMajorTimeStep(ctrl_custom_M)) {
    /* S-Function (sdspdiag2): '<S18>/Create Diagonal Matrix' */
    memset(&ctrl_custom_B.CreateDiagonalMatrix[0], 0, 9U * sizeof(real_T));

    /* S-Function (sdspdiag2): '<S18>/Create Diagonal Matrix1' */
    memset(&ctrl_custom_B.CreateDiagonalMatrix1[0], 0, 9U * sizeof(real_T));

    /* S-Function (sdspdiag2): '<S18>/Create Diagonal Matrix' incorporates:
     *  Constant: '<S18>/Constant'
     *  Constant: '<S18>/Constant1'
     *  Constant: '<S18>/Constant2'
     */
    ctrl_custom_B.CreateDiagonalMatrix[0] = ctrl_custom_P.Constant_Value_g;
    ctrl_custom_B.CreateDiagonalMatrix[4] = ctrl_custom_P.Constant1_Value_o;
    ctrl_custom_B.CreateDiagonalMatrix[8] = ctrl_custom_P.Constant2_Value;

    /* S-Function (sdspdiag2): '<S18>/Create Diagonal Matrix1' incorporates:
     *  Constant: '<S18>/Constant3'
     *  Constant: '<S18>/Constant4'
     *  Constant: '<S18>/Constant5'
     */
    ctrl_custom_B.CreateDiagonalMatrix1[0] = ctrl_custom_P.Constant3_Value;
    ctrl_custom_B.CreateDiagonalMatrix1[4] = ctrl_custom_P.Constant4_Value;
    ctrl_custom_B.CreateDiagonalMatrix1[8] = ctrl_custom_P.Constant5_Value;
  }

  /* Sum: '<S5>/Sum1' incorporates:
   *  Fcn: '<S24>/Fcn'
   *  Fcn: '<S24>/Fcn1'
   *  Fcn: '<S24>/Fcn2'
   */
  rtb_Row2_0[0] = cos(rtb_psi_dot) * ctrl_custom_B.Integrator1_a[0] - sin
    (rtb_psi_dot) * ctrl_custom_B.Integrator1_a[1];
  rtb_Row2_0[1] = sin(rtb_psi_dot) * ctrl_custom_B.Integrator1_a[0] + cos
    (rtb_psi_dot) * ctrl_custom_B.Integrator1_a[1];
  rtb_Row2_0[2] = ctrl_custom_B.Integrator1_a[2];
  for (i_0 = 0; i_0 < 3; i_0++) {
    /* Product: '<S5>/Matrix Multiply1' */
    ctrl_custom_B.MatrixMultiply1[i_0] = 0.0;
    ctrl_custom_B.MatrixMultiply1[i_0] +=
      ctrl_custom_B.CreateDiagonalMatrix1[i_0] * rtb_MatrixMultiply2[0];
    ctrl_custom_B.MatrixMultiply1[i_0] +=
      ctrl_custom_B.CreateDiagonalMatrix1[i_0 + 3] * rtb_MatrixMultiply2[1];
    ctrl_custom_B.MatrixMultiply1[i_0] +=
      ctrl_custom_B.CreateDiagonalMatrix1[i_0 + 6] * rtb_MatrixMultiply2[2];

    /* Sum: '<S5>/Sum1' incorporates:
     *  Product: '<S5>/Matrix Multiply'
     */
    ctrl_custom_B.Sum1_g[i_0] = (ctrl_custom_B.CreateDiagonalMatrix[i_0 + 6] *
      rtb_MatrixMultiply2[2] + (ctrl_custom_B.CreateDiagonalMatrix[i_0 + 3] *
      rtb_MatrixMultiply2[1] + ctrl_custom_B.CreateDiagonalMatrix[i_0] *
      rtb_MatrixMultiply2[0])) + rtb_Row2_0[i_0];
  }

  /* Gain: '<S7>/Gain5' */
  ctrl_custom_B.Gain5_a = ctrl_custom_P.Gain5_Gain_a *
    ctrl_custom_B.regulationerror[2];

  /* S-Function (sdspdiag2): '<S17>/Create Diagonal Matrix3' */
  memset(&rtb_CreateDiagonalMatrix3[0], 0, 9U * sizeof(real_T));

  /* S-Function (sdspdiag2): '<S17>/Create Diagonal Matrix4' */
  memset(&rtb_CreateDiagonalMatrix4[0], 0, 9U * sizeof(real_T));

  /* S-Function (sdspdiag2): '<S17>/Create Diagonal Matrix3' incorporates:
   *  SignalConversion: '<S17>/TmpSignal ConversionAtCreate Diagonal Matrix3Inport1'
   */
  rtb_CreateDiagonalMatrix3[0] = ctrl_custom_B.w_x;
  rtb_CreateDiagonalMatrix3[4] = ctrl_custom_B.w_y;
  rtb_CreateDiagonalMatrix3[8] = ctrl_custom_B.w_psi;

  /* S-Function (sdspdiag2): '<S17>/Create Diagonal Matrix4' incorporates:
   *  SignalConversion: '<S17>/TmpSignal ConversionAtCreate Diagonal Matrix4Inport1'
   */
  rtb_CreateDiagonalMatrix4[0] = ctrl_custom_B.zeta_x;
  rtb_CreateDiagonalMatrix4[4] = ctrl_custom_B.zeta_y;
  rtb_CreateDiagonalMatrix4[8] = ctrl_custom_B.zeta_psi;

  /* MATLAB Function: '<S10>/MATLAB Function' */
  ctrl_custom_MATLABFunction(rtb_CreateDiagonalMatrix3,
    rtb_CreateDiagonalMatrix4, &ctrl_custom_B.sf_MATLABFunction_b);

  /* MATLAB Function: '<S10>/MATLAB Function1' */
  ctrl_custom_MATLABFunction(rtb_CreateDiagonalMatrix3,
    rtb_CreateDiagonalMatrix4, &ctrl_custom_B.sf_MATLABFunction1_k);

  /* S-Function (sdspdiag2): '<S17>/Create Diagonal Matrix5' incorporates:
   *  MATLAB Function: '<S17>/MATLAB Function'
   *  MATLAB Function: '<S17>/MATLAB Function1'
   *  MATLAB Function: '<S17>/MATLAB Function2'
   */
  /* MATLAB Function 'Referance/MATLAB Function2': '<S39>:1' */
  /* '<S39>:1:3' */
  /* MATLAB Function 'Initialization of parameters/Guidance Gains/MATLAB Function': '<S19>:1' */
  /* '<S19>:1:3' */
  /* MATLAB Function 'Initialization of parameters/Guidance Gains/MATLAB Function1': '<S20>:1' */
  /* '<S20>:1:3' */
  /* MATLAB Function 'Initialization of parameters/Guidance Gains/MATLAB Function2': '<S21>:1' */
  /* '<S21>:1:3' */
  memset(&rtb_CreateDiagonalMatrix5[0], 0, 9U * sizeof(real_T));
  rtb_CreateDiagonalMatrix5[0] = 1.0 / ctrl_custom_B.T_x;
  rtb_CreateDiagonalMatrix5[4] = 1.0 / ctrl_custom_B.T_y;
  rtb_CreateDiagonalMatrix5[8] = 1.0 / ctrl_custom_B.T_psi;

  /* SignalConversion: '<S10>/TmpSignal ConversionAtMatrix MultiplyInport2' incorporates:
   *  Gain: '<S10>/Gain5'
   */
  rtb_psi_dot = ctrl_custom_P.Gain5_Gain_n * ctrl_custom_B.psi_ref;
  for (i_0 = 0; i_0 < 3; i_0++) {
    /* Sum: '<S10>/Sum' incorporates:
     *  Integrator: '<S10>/Integrator'
     *  Product: '<S10>/Matrix Multiply'
     *  Product: '<S10>/Matrix Multiply1'
     *  SignalConversion: '<S10>/TmpSignal ConversionAtMatrix MultiplyInport2'
     */
    ctrl_custom_B.Sum_m[i_0] = (rtb_CreateDiagonalMatrix5[i_0 + 6] * rtb_psi_dot
      + (rtb_CreateDiagonalMatrix5[i_0 + 3] * ctrl_custom_B.y_ref +
         rtb_CreateDiagonalMatrix5[i_0] * ctrl_custom_B.x_ref)) -
      (rtb_CreateDiagonalMatrix5[i_0 + 6] * ctrl_custom_X.Integrator_CSTATE_f[2]
       + (rtb_CreateDiagonalMatrix5[i_0 + 3] *
          ctrl_custom_X.Integrator_CSTATE_f[1] + rtb_CreateDiagonalMatrix5[i_0] *
          ctrl_custom_X.Integrator_CSTATE_f[0]));

    /* Product: '<S10>/Matrix Multiply2' incorporates:
     *  Sum: '<S10>/Sum1'
     */
    tmp_0[i_0] = 0.0;

    /* Product: '<S10>/Matrix Multiply3' incorporates:
     *  Sum: '<S10>/Sum1'
     */
    tmp_1[i_0] = 0.0;

    /* Sum: '<S10>/Sum2' */
    rtb_Row1_d = 0.0;
    for (b_i = 0; b_i < 3; b_i++) {
      /* MATLAB Function: '<S10>/MATLAB Function2' incorporates:
       *  Product: '<S10>/Matrix Multiply4'
       */
      tmp_2[i_0 + 3 * b_i] = 0.0;
      tmp_2[i_0 + 3 * b_i] += rtb_CreateDiagonalMatrix3[3 * b_i] *
        rtb_CreateDiagonalMatrix3[i_0];
      tmp_2[i_0 + 3 * b_i] += rtb_CreateDiagonalMatrix3[3 * b_i + 1] *
        rtb_CreateDiagonalMatrix3[i_0 + 3];
      tmp_2[i_0 + 3 * b_i] += rtb_CreateDiagonalMatrix3[3 * b_i + 2] *
        rtb_CreateDiagonalMatrix3[i_0 + 6];

      /* Sum: '<S10>/Sum2' incorporates:
       *  Product: '<S10>/Matrix Multiply4'
       */
      rtb_Row1_d += tmp_2[3 * b_i + i_0] * ctrl_custom_B.Integrator1_i[b_i];

      /* Product: '<S10>/Matrix Multiply2' incorporates:
       *  Integrator: '<S10>/Integrator'
       *  Sum: '<S10>/Sum1'
       */
      tmp_0[i_0] += ctrl_custom_B.sf_MATLABFunction_b.y[3 * b_i + i_0] *
        ctrl_custom_X.Integrator_CSTATE_f[b_i];

      /* Product: '<S10>/Matrix Multiply3' incorporates:
       *  Sum: '<S10>/Sum1'
       */
      tmp_1[i_0] += ctrl_custom_B.sf_MATLABFunction1_k.y[3 * b_i + i_0] *
        rtb_MatrixMultiply4[b_i];
    }

    /* Sum: '<S10>/Sum2' incorporates:
     *  Product: '<S10>/Matrix Multiply4'
     *  Sum: '<S10>/Sum1'
     */
    ctrl_custom_B.Sum2[i_0] = (tmp_0[i_0] - tmp_1[i_0]) - rtb_Row1_d;
  }

  if (rtmIsMajorTimeStep(ctrl_custom_M)) {
  }
}

/* Model update function */
void ctrl_custom_update(void)
{
  /* local scratch DWork variables */
  int32_T ForEach_itr;

  /* Update for Integrator: '<S5>/Integrator' */
  ctrl_custom_DW.Integrator_IWORK = 0;

  /* Update for Iterator SubSystem: '<S11>/Optimal angle path and  constraints on rotation speed' */
  for (ForEach_itr = 0; ForEach_itr < 6; ForEach_itr++) {
    /* Update for Integrator: '<S42>/Integrator' */
    ctrl_custom_DW.CoreSubsys[ForEach_itr].Integrator_IWORK = 0;
    if (rtmIsMajorTimeStep(ctrl_custom_M)) {
      /* Update for Delay: '<S42>/Delay' */
      ctrl_custom_DW.CoreSubsys[ForEach_itr].Delay_DSTATE =
        ctrl_custom_B.CoreSubsys[ForEach_itr].angle;
    }
  }

  /* End of Update for SubSystem: '<S11>/Optimal angle path and  constraints on rotation speed' */
  if (rtmIsMajorTimeStep(ctrl_custom_M)) {
    rt_ertODEUpdateContinuousStates(&ctrl_custom_M->solverInfo);
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
  if (!(++ctrl_custom_M->Timing.clockTick0)) {
    ++ctrl_custom_M->Timing.clockTickH0;
  }

  ctrl_custom_M->Timing.t[0] = rtsiGetSolverStopTime(&ctrl_custom_M->solverInfo);

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
    if (!(++ctrl_custom_M->Timing.clockTick1)) {
      ++ctrl_custom_M->Timing.clockTickH1;
    }

    ctrl_custom_M->Timing.t[1] = ctrl_custom_M->Timing.clockTick1 *
      ctrl_custom_M->Timing.stepSize1 + ctrl_custom_M->Timing.clockTickH1 *
      ctrl_custom_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void ctrl_custom_derivatives(void)
{
  /* local scratch DWork variables */
  int32_T ForEach_itr;
  XDot_ctrl_custom_T *_rtXdot;
  _rtXdot = ((XDot_ctrl_custom_T *) ctrl_custom_M->derivs);

  /* Derivatives for Integrator: '<S5>/Integrator' */
  _rtXdot->Integrator_CSTATE[0] = ctrl_custom_B.Sum1_g[0];

  /* Derivatives for Integrator: '<S10>/Integrator2' */
  _rtXdot->Integrator2_CSTATE[0] = ctrl_custom_B.Integrator1_i[0];

  /* Derivatives for Integrator: '<S7>/Integrator1' */
  _rtXdot->Integrator1_CSTATE[0] =
    ctrl_custom_B.TmpSignalConversionAtMatrixMult[0];

  /* Derivatives for Integrator: '<S10>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_d[0] = ctrl_custom_B.Sum2[0];

  /* Derivatives for Integrator: '<S5>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_n[0] = ctrl_custom_B.M1[0];

  /* Derivatives for Integrator: '<S5>/Integrator' */
  _rtXdot->Integrator_CSTATE[1] = ctrl_custom_B.Sum1_g[1];

  /* Derivatives for Integrator: '<S10>/Integrator2' */
  _rtXdot->Integrator2_CSTATE[1] = ctrl_custom_B.Integrator1_i[1];

  /* Derivatives for Integrator: '<S7>/Integrator1' */
  _rtXdot->Integrator1_CSTATE[1] =
    ctrl_custom_B.TmpSignalConversionAtMatrixMult[1];

  /* Derivatives for Integrator: '<S10>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_d[1] = ctrl_custom_B.Sum2[1];

  /* Derivatives for Integrator: '<S5>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_n[1] = ctrl_custom_B.M1[1];

  /* Derivatives for Integrator: '<S5>/Integrator' */
  _rtXdot->Integrator_CSTATE[2] = ctrl_custom_B.Sum1_g[2];

  /* Derivatives for Integrator: '<S10>/Integrator2' */
  _rtXdot->Integrator2_CSTATE[2] = ctrl_custom_B.Integrator1_i[2];

  /* Derivatives for Integrator: '<S7>/Integrator1' */
  _rtXdot->Integrator1_CSTATE[2] =
    ctrl_custom_B.TmpSignalConversionAtMatrixMult[2];

  /* Derivatives for Integrator: '<S10>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_d[2] = ctrl_custom_B.Sum2[2];

  /* Derivatives for Integrator: '<S5>/Integrator1' */
  _rtXdot->Integrator1_CSTATE_n[2] = ctrl_custom_B.M1[2];

  /* Derivatives for Iterator SubSystem: '<S11>/Optimal angle path and  constraints on rotation speed' */
  for (ForEach_itr = 0; ForEach_itr < 6; ForEach_itr++) {
    /* Derivatives for Integrator: '<S42>/Integrator' */
    _rtXdot->CoreSubsys[ForEach_itr].Integrator_CSTATE_d =
      ctrl_custom_B.CoreSubsys[ForEach_itr].MaxRotationRate;
  }

  /* End of Derivatives for SubSystem: '<S11>/Optimal angle path and  constraints on rotation speed' */

  /* Derivatives for Integrator: '<S5>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_j[0] = ctrl_custom_B.MatrixMultiply1[0];

  /* Derivatives for Integrator: '<S10>/Integrator' */
  _rtXdot->Integrator_CSTATE_f[0] = ctrl_custom_B.Sum_m[0];

  /* Derivatives for Integrator: '<S5>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_j[1] = ctrl_custom_B.MatrixMultiply1[1];

  /* Derivatives for Integrator: '<S10>/Integrator' */
  _rtXdot->Integrator_CSTATE_f[1] = ctrl_custom_B.Sum_m[1];

  /* Derivatives for Integrator: '<S5>/Integrator2' */
  _rtXdot->Integrator2_CSTATE_j[2] = ctrl_custom_B.MatrixMultiply1[2];

  /* Derivatives for Integrator: '<S10>/Integrator' */
  _rtXdot->Integrator_CSTATE_f[2] = ctrl_custom_B.Sum_m[2];
}

/* Model initialize function */
void ctrl_custom_initialize(void)
{
  {
    /* local scratch DWork variables */
    int32_T ForEach_itr;

    /* Start for Iterator SubSystem: '<S11>/Optimal angle path and  constraints on rotation speed' */
    for (ForEach_itr = 0; ForEach_itr < 6; ForEach_itr++) {
      ctrl_custom_PrevZCX.CoreSubsys[ForEach_itr].Integrator_Reset_ZCE_j =
        UNINITIALIZED_ZCSIG;
      ctrl_custom_B.CoreSubsys[ForEach_itr].angle = 0.0;
      ctrl_custom_B.CoreSubsys[ForEach_itr].Delay = 0.0;
      ctrl_custom_DW.CoreSubsys[ForEach_itr].Delay_DSTATE = 0.0;
      ctrl_custom_B.CoreSubsys[ForEach_itr].MaxRotationRate = 0.0;
    }

    /* End of Start for SubSystem: '<S11>/Optimal angle path and  constraints on rotation speed' */
  }

  ctrl_custom_PrevZCX.Integrator_Reset_ZCE = UNINITIALIZED_ZCSIG;
  ctrl_custom_PrevZCX.Integrator1_Reset_ZCE = UNINITIALIZED_ZCSIG;
  ctrl_custom_PrevZCX.Integrator1_Reset_ZCE_o = UNINITIALIZED_ZCSIG;
  ctrl_custom_PrevZCX.Integrator2_Reset_ZCE = UNINITIALIZED_ZCSIG;

  {
    /* local scratch DWork variables */
    int32_T ForEach_itr;

    /* InitializeConditions for Integrator: '<S5>/Integrator' */
    if (rtmIsFirstInitCond(ctrl_custom_M)) {
      ctrl_custom_X.Integrator_CSTATE[0] = 0.0;
      ctrl_custom_X.Integrator_CSTATE[1] = 0.0;
      ctrl_custom_X.Integrator_CSTATE[2] = 0.0;
    }

    ctrl_custom_DW.Integrator_IWORK = 1;

    /* End of InitializeConditions for Integrator: '<S5>/Integrator' */

    /* InitializeConditions for Integrator: '<S10>/Integrator2' */
    ctrl_custom_X.Integrator2_CSTATE[0] = ctrl_custom_P.Integrator2_IC;

    /* InitializeConditions for Integrator: '<S7>/Integrator1' */
    ctrl_custom_X.Integrator1_CSTATE[0] = ctrl_custom_P.Integrator1_IC;

    /* InitializeConditions for Integrator: '<S10>/Integrator1' */
    ctrl_custom_X.Integrator1_CSTATE_d[0] = ctrl_custom_P.Integrator1_IC_b;

    /* InitializeConditions for Integrator: '<S5>/Integrator1' */
    ctrl_custom_X.Integrator1_CSTATE_n[0] = ctrl_custom_P.Integrator1_IC_g[0];

    /* InitializeConditions for Integrator: '<S5>/Integrator2' */
    ctrl_custom_X.Integrator2_CSTATE_j[0] = ctrl_custom_P.Integrator2_IC_i[0];

    /* InitializeConditions for Integrator: '<S10>/Integrator' */
    ctrl_custom_X.Integrator_CSTATE_f[0] = ctrl_custom_P.Integrator_IC;

    /* InitializeConditions for Integrator: '<S10>/Integrator2' */
    ctrl_custom_X.Integrator2_CSTATE[1] = ctrl_custom_P.Integrator2_IC;

    /* InitializeConditions for Integrator: '<S7>/Integrator1' */
    ctrl_custom_X.Integrator1_CSTATE[1] = ctrl_custom_P.Integrator1_IC;

    /* InitializeConditions for Integrator: '<S10>/Integrator1' */
    ctrl_custom_X.Integrator1_CSTATE_d[1] = ctrl_custom_P.Integrator1_IC_b;

    /* InitializeConditions for Integrator: '<S5>/Integrator1' */
    ctrl_custom_X.Integrator1_CSTATE_n[1] = ctrl_custom_P.Integrator1_IC_g[1];

    /* InitializeConditions for Integrator: '<S5>/Integrator2' */
    ctrl_custom_X.Integrator2_CSTATE_j[1] = ctrl_custom_P.Integrator2_IC_i[1];

    /* InitializeConditions for Integrator: '<S10>/Integrator' */
    ctrl_custom_X.Integrator_CSTATE_f[1] = ctrl_custom_P.Integrator_IC;

    /* InitializeConditions for Integrator: '<S10>/Integrator2' */
    ctrl_custom_X.Integrator2_CSTATE[2] = ctrl_custom_P.Integrator2_IC;

    /* InitializeConditions for Integrator: '<S7>/Integrator1' */
    ctrl_custom_X.Integrator1_CSTATE[2] = ctrl_custom_P.Integrator1_IC;

    /* InitializeConditions for Integrator: '<S10>/Integrator1' */
    ctrl_custom_X.Integrator1_CSTATE_d[2] = ctrl_custom_P.Integrator1_IC_b;

    /* InitializeConditions for Integrator: '<S5>/Integrator1' */
    ctrl_custom_X.Integrator1_CSTATE_n[2] = ctrl_custom_P.Integrator1_IC_g[2];

    /* InitializeConditions for Integrator: '<S5>/Integrator2' */
    ctrl_custom_X.Integrator2_CSTATE_j[2] = ctrl_custom_P.Integrator2_IC_i[2];

    /* InitializeConditions for Integrator: '<S10>/Integrator' */
    ctrl_custom_X.Integrator_CSTATE_f[2] = ctrl_custom_P.Integrator_IC;

    /* SystemInitialize for Iterator SubSystem: '<S11>/Optimal angle path and  constraints on rotation speed' */
    for (ForEach_itr = 0; ForEach_itr < 6; ForEach_itr++) {
      /* InitializeConditions for Integrator: '<S42>/Integrator' */
      if (rtmIsFirstInitCond(ctrl_custom_M)) {
        ctrl_custom_X.CoreSubsys[ForEach_itr].Integrator_CSTATE_d = 0.0;
      }

      ctrl_custom_DW.CoreSubsys[ForEach_itr].Integrator_IWORK = 1;

      /* End of InitializeConditions for Integrator: '<S42>/Integrator' */

      /* InitializeConditions for Delay: '<S42>/Delay' */
      ctrl_custom_DW.CoreSubsys[ForEach_itr].Delay_DSTATE =
        ctrl_custom_P.CoreSubsys.Delay_InitialCondition;
    }

    /* End of SystemInitialize for SubSystem: '<S11>/Optimal angle path and  constraints on rotation speed' */

    /* set "at time zero" to false */
    if (rtmIsFirstInitCond(ctrl_custom_M)) {
      rtmSetFirstInitCond(ctrl_custom_M, 0);
    }
  }
}

/* Model terminate function */
void ctrl_custom_terminate(void)
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
  ctrl_custom_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  ctrl_custom_update();
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
  ctrl_custom_initialize();
}

void MdlTerminate(void)
{
  ctrl_custom_terminate();
}

/* Registration function */
RT_MODEL_ctrl_custom_T *ctrl_custom(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)ctrl_custom_M, 0,
                sizeof(RT_MODEL_ctrl_custom_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&ctrl_custom_M->solverInfo,
                          &ctrl_custom_M->Timing.simTimeStep);
    rtsiSetTPtr(&ctrl_custom_M->solverInfo, &rtmGetTPtr(ctrl_custom_M));
    rtsiSetStepSizePtr(&ctrl_custom_M->solverInfo,
                       &ctrl_custom_M->Timing.stepSize0);
    rtsiSetdXPtr(&ctrl_custom_M->solverInfo, &ctrl_custom_M->derivs);
    rtsiSetContStatesPtr(&ctrl_custom_M->solverInfo, (real_T **)
                         &ctrl_custom_M->contStates);
    rtsiSetNumContStatesPtr(&ctrl_custom_M->solverInfo,
      &ctrl_custom_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&ctrl_custom_M->solverInfo,
      &ctrl_custom_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&ctrl_custom_M->solverInfo,
      &ctrl_custom_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&ctrl_custom_M->solverInfo,
      &ctrl_custom_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&ctrl_custom_M->solverInfo, (&rtmGetErrorStatus
      (ctrl_custom_M)));
    rtsiSetRTModelPtr(&ctrl_custom_M->solverInfo, ctrl_custom_M);
  }

  rtsiSetSimTimeStep(&ctrl_custom_M->solverInfo, MAJOR_TIME_STEP);
  ctrl_custom_M->intgData.y = ctrl_custom_M->odeY;
  ctrl_custom_M->intgData.f[0] = ctrl_custom_M->odeF[0];
  ctrl_custom_M->intgData.f[1] = ctrl_custom_M->odeF[1];
  ctrl_custom_M->intgData.f[2] = ctrl_custom_M->odeF[2];
  ctrl_custom_M->contStates = ((real_T *) &ctrl_custom_X);
  rtsiSetSolverData(&ctrl_custom_M->solverInfo, (void *)&ctrl_custom_M->intgData);
  rtsiSetSolverName(&ctrl_custom_M->solverInfo,"ode3");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = ctrl_custom_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    ctrl_custom_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    ctrl_custom_M->Timing.sampleTimes = (&ctrl_custom_M->
      Timing.sampleTimesArray[0]);
    ctrl_custom_M->Timing.offsetTimes = (&ctrl_custom_M->
      Timing.offsetTimesArray[0]);

    /* task periods */
    ctrl_custom_M->Timing.sampleTimes[0] = (0.0);
    ctrl_custom_M->Timing.sampleTimes[1] = (0.01);

    /* task offsets */
    ctrl_custom_M->Timing.offsetTimes[0] = (0.0);
    ctrl_custom_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(ctrl_custom_M, &ctrl_custom_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = ctrl_custom_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    ctrl_custom_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ctrl_custom_M, -1);
  ctrl_custom_M->Timing.stepSize0 = 0.01;
  ctrl_custom_M->Timing.stepSize1 = 0.01;
  rtmSetFirstInitCond(ctrl_custom_M, 1);

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    ctrl_custom_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(ctrl_custom_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(ctrl_custom_M->rtwLogInfo, (NULL));
    rtliSetLogT(ctrl_custom_M->rtwLogInfo, "tout");
    rtliSetLogX(ctrl_custom_M->rtwLogInfo, "");
    rtliSetLogXFinal(ctrl_custom_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(ctrl_custom_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(ctrl_custom_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(ctrl_custom_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(ctrl_custom_M->rtwLogInfo, 1);
    rtliSetLogY(ctrl_custom_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(ctrl_custom_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(ctrl_custom_M->rtwLogInfo, (NULL));
  }

  ctrl_custom_M->solverInfoPtr = (&ctrl_custom_M->solverInfo);
  ctrl_custom_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&ctrl_custom_M->solverInfo, 0.01);
  rtsiSetSolverMode(&ctrl_custom_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  ctrl_custom_M->blockIO = ((void *) &ctrl_custom_B);
  (void) memset(((void *) &ctrl_custom_B), 0,
                sizeof(B_ctrl_custom_T));

  /* parameters */
  ctrl_custom_M->defaultParam = ((real_T *)&ctrl_custom_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &ctrl_custom_X;
    ctrl_custom_M->contStates = (x);
    (void) memset((void *)&ctrl_custom_X, 0,
                  sizeof(X_ctrl_custom_T));
  }

  /* states (dwork) */
  ctrl_custom_M->dwork = ((void *) &ctrl_custom_DW);
  (void) memset((void *)&ctrl_custom_DW, 0,
                sizeof(DW_ctrl_custom_T));

  /* Initialize Sizes */
  ctrl_custom_M->Sizes.numContStates = (27);/* Number of continuous states */
  ctrl_custom_M->Sizes.numPeriodicContStates = (0);/* Number of periodic continuous states */
  ctrl_custom_M->Sizes.numY = (0);     /* Number of model outputs */
  ctrl_custom_M->Sizes.numU = (0);     /* Number of model inputs */
  ctrl_custom_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  ctrl_custom_M->Sizes.numSampTimes = (2);/* Number of sample times */
  ctrl_custom_M->Sizes.numBlocks = (289);/* Number of blocks */
  ctrl_custom_M->Sizes.numBlockIO = (78);/* Number of block outputs */
  ctrl_custom_M->Sizes.numBlockPrms = (688);/* Sum of parameter "widths" */
  return ctrl_custom_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/

/*========================================================================*
 * NI VeriStand Model Framework code generation
 *
 * Model : ctrl_custom
 * Model version : 1.141
 * VeriStand Model Framework version : 2017.0.0.143 (2017)
 * Source generated on : Wed Jul 26 18:28:29 2017
 *========================================================================*/

/* This file contains automatically generated code for functions
 * to update the inports and outports of a Simulink/Realtime Workshop
 * model. Calls to these functions should be made before each step is taken
 * (inports, call SetExternalInputs) and after each step is taken
 * (outports, call SetExternalOutputs.)
 */
#ifdef NI_ROOTMODEL_ctrl_custom
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
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 23:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 24:
    return NIRT_GetValueByDataType(ptr,subindex,3,Complex);

   case 25:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 26:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 27:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 28:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 31:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 32:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 33:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 34:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 35:
    return NIRT_GetValueByDataType(ptr,subindex,8,Complex);

   case 36:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 37:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 39:
    return NIRT_GetValueByDataType(ptr,subindex,8,Complex);

   case 40:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 41:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 42:
    return (( double *)ptr)[subindex];

   case 43:
    return (( double *)ptr)[subindex];

   case 44:
    return NIRT_GetValueByDataType(ptr,subindex,43,Complex);

   case 45:
    return (( double *)ptr)[subindex];

   case 46:
    return (( double *)ptr)[subindex];

   case 47:
    return (( double *)ptr)[subindex];

   case 48:
    return NIRT_GetValueByDataType(ptr,subindex,47,Complex);

   case 49:
    return (( double *)ptr)[subindex];

   case 50:
    return (( double *)ptr)[subindex];

   case 51:
    return (( double *)ptr)[subindex];

   case 52:
    return (( double *)ptr)[subindex];

   case 53:
    return NIRT_GetValueByDataType(ptr,subindex,52,Complex);

   case 54:
    return (( double *)ptr)[subindex];

   case 55:
    return (( double *)ptr)[subindex];

   case 56:
    return NIRT_GetValueByDataType(ptr,subindex,55,Complex);

   case 57:
    return (( double *)ptr)[subindex];

   case 58:
    return (( double *)ptr)[subindex];

   case 59:
    return NIRT_GetValueByDataType(ptr,subindex,58,Complex);

   case 60:
    return (( double *)ptr)[subindex];

   case 61:
    return (( double *)ptr)[subindex];

   case 62:
    return NIRT_GetValueByDataType(ptr,subindex,61,Complex);

   case 63:
    return (( double *)ptr)[subindex];

   case 64:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 65:
    return NIRT_GetValueByDataType(ptr,subindex,7,Complex);

   case 66:
    return NIRT_GetValueByDataType(ptr,subindex,0,Complex);

   case 67:
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
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 23:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 24:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 3, Complex);

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

   case 31:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 32:
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
    return NIRT_SetValueByDataType(ptr, subindex, value, 8, Complex);

   case 36:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 37:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 39:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 8, Complex);

   case 40:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 41:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 42:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 43:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 44:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 43, Complex);

   case 45:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 46:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 47:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 48:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 47, Complex);

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
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 52, Complex);

   case 54:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 55:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 56:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 55, Complex);

   case 57:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 58:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 59:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 58, Complex);

   case 60:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 61:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 62:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 61, Complex);

   case 63:
    //Type is struct. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 64:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 65:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 7, Complex);

   case 66:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);

   case 67:
    //Type is matrix. Call SetValueByDataType on its contained type
    return NIRT_SetValueByDataType(ptr, subindex, value, 7, Complex);
  }

  //No matching datatype conversion
  return NI_ERROR;
}

extern ctrl_custom_rtModel *S;
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

  // ctrl_custom/Input to model
  if (TaskSampleHit[1]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.Inputtomodel, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Startbutton
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.Startbutton, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Control Gains/K_p_x
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.K_p_x, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Control Gains/K_p_y
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.K_p_y, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Control Gains/K_p_psi
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.K_p_psi, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Control Gains/K_i_psi
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.K_i_psi, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Control Gains/K_i_x
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.K_i_x, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Control Gains/K_i_y
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.K_i_y, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Control Gains/K_d_psi
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.K_d_psi, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Control Gains/K_d_x
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.K_d_x, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Control Gains/K_d_y
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.K_d_y, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Pose/x_m
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.x_m, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Pose/y_m
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.y_m, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Pose/psi_m
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.psi_m, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Startbutton1
  if (TaskSampleHit[0]) {
    for (count = 0; count < 6; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_B.Startbutton1, count, data[index++],
        23, 0);
    }
  } else {
    index += 6;
  }

  // ctrl_custom/Thruster measurment/thr_angle_1
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.thr_angle_1, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Thruster measurment/thr_angle_2
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.thr_angle_2, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Thruster measurment/thr_angle_3
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.thr_angle_3, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Thruster measurment/thr_angle_4
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.thr_angle_4, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Thruster measurment/thr_angle_5
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.thr_angle_5, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Thruster measurment/thr_angle_6
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.thr_angle_6, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Thrust allocation/Angle_controller
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.Angle_controller, 0, data[index++], 0,
      0);
  } else {
    index += 1;
  }

  // ctrl_custom/Referance/x_ref
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.x_ref, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Referance/y_ref
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.y_ref, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Referance/psi_ref
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.psi_ref, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Guidance Gains/w_x
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.w_x, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Guidance Gains/w_y
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.w_y, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Guidance Gains/w_psi
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.w_psi, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Guidance Gains/zeta_psi
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.zeta_psi, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Guidance Gains/zeta_x
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.zeta_x, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Guidance Gains/zeta_y
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.zeta_y, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Guidance Gains/T_psi
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.T_psi, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Guidance Gains/T_x
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.T_x, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Initialization of parameters/Guidance Gains/T_y
  if (TaskSampleHit[0]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.T_y, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/IMU/Acc_x
  if (TaskSampleHit[1]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.Acc_x, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/IMU/Acc_y
  if (TaskSampleHit[1]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.Acc_y, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/IMU/Acc_z
  if (TaskSampleHit[1]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.Acc_z, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/IMU/Gyro_x
  if (TaskSampleHit[1]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.Gyro_x, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/IMU/Gyro_y
  if (TaskSampleHit[1]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.Gyro_y, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/IMU/Gyro_z
  if (TaskSampleHit[1]) {
    NIRT_SetValueByDataType(&ctrl_custom_B.Gyro_z, 0, data[index++], 0, 0);
  } else {
    index += 1;
  }
}                                      /* of SetExternalInputs */

int32_t NumInputPorts(void)
{
  return 45;
}

int32_t NumOutputPorts(void)
{
  return 40;
}

double ni_extout[40];

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

  // ctrl_custom/Output to Workspace: Virtual Signal # 0
  if (TaskSampleHit[1]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType((real_T*)&ctrl_custom_RGND, 0,
      0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/tau_surge: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Sum1, 0, 22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/tau_sway: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Sum1, 1, 22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/tau_psi: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Sum1, 2, 22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/psi_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Gain5, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/x_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Gain_h, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/y_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Gain1_n, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/tau_commanded_psi: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.commanded_tau, 2,
      22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/tau_commanded_x: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.commanded_tau, 0,
      22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Observer output /eta_hat output/x_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator, 0,
      22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Observer output /eta_hat output/y_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator, 1,
      22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Observer output /eta_hat output/psi_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Sum_h, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Observer output /nu_hat output/u_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator1_a, 0,
      22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Observer output /nu_hat output/v_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator1_a, 1,
      22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Observer output /nu_hat output/r_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator1_a, 2,
      22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Observer output /nu_dot_hat output/u_dot_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.M1, 0, 22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Observer output /nu_dot_hat output/v_dot_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.M1, 1, 22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Observer output /nu_dot_hat output/r_dot_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.M1, 2, 22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Observer output /b_hat output/b_x_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator2, 0,
      22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Observer output /b_hat output/b_y_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator2, 1,
      22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/Observer output /b_hat output/b_psi_hat: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator2, 2,
      22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/gain/alpha1: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_B.ImpAsg_InsertedFor_commandedAng, 0, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/gain/alpha2: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_B.ImpAsg_InsertedFor_commandedAng, 1, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/gain/alpha3: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_B.ImpAsg_InsertedFor_commandedAng, 2, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/gain/alpha4: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_B.ImpAsg_InsertedFor_commandedAng, 3, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/gain/alpha5: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_B.ImpAsg_InsertedFor_commandedAng, 4, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/gain/alpha6: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_B.ImpAsg_InsertedFor_commandedAng, 5, 23, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/gain/u1: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Tc_out, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/gain/u2: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_B.sf_MATLABFunction2.Tc_out, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/gain/u3: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_B.sf_MATLABFunction3.Tc_out, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/gain/u4: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_B.sf_MATLABFunction4.Tc_out, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/gain/u5: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_B.sf_MATLABFunction5.Tc_out, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/gain/u6: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType
      (&ctrl_custom_B.sf_MATLABFunction6.Tc_out, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/tau_commanded_y: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.commanded_tau, 1,
      22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/PID controller/y_error: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.regulationerror,
      1, 22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/PID controller/psi_error: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Gain5_a, 0, 0, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/PID controller/x_error: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.regulationerror,
      0, 22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/PID controller/Integral_x: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator1, 0,
      22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/PID controller/Integral_psi: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator1, 2,
      22, 0);
  } else {
    index += 1;
  }

  // ctrl_custom/PID controller/Integral_y: Virtual Signal # 0
  if (TaskSampleHit[0]) {              // sample and hold
    ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator1, 1,
      22, 0);
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

  // ctrl_custom/Output to Workspace: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType((real_T*)&ctrl_custom_RGND, 0, 0,
    0);

  // ctrl_custom/tau_surge: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Sum1, 0, 22, 0);

  // ctrl_custom/tau_sway: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Sum1, 1, 22, 0);

  // ctrl_custom/tau_psi: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Sum1, 2, 22, 0);

  // ctrl_custom/psi_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Gain5, 0, 0, 0);

  // ctrl_custom/x_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Gain_h, 0, 0, 0);

  // ctrl_custom/y_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Gain1_n, 0, 0, 0);

  // ctrl_custom/tau_commanded_psi: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.commanded_tau, 2,
    22, 0);

  // ctrl_custom/tau_commanded_x: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.commanded_tau, 0,
    22, 0);

  // ctrl_custom/Observer output /eta_hat output/x_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator, 0, 22,
    0);

  // ctrl_custom/Observer output /eta_hat output/y_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator, 1, 22,
    0);

  // ctrl_custom/Observer output /eta_hat output/psi_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Sum_h, 0, 0, 0);

  // ctrl_custom/Observer output /nu_hat output/u_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator1_a, 0,
    22, 0);

  // ctrl_custom/Observer output /nu_hat output/v_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator1_a, 1,
    22, 0);

  // ctrl_custom/Observer output /nu_hat output/r_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator1_a, 2,
    22, 0);

  // ctrl_custom/Observer output /nu_dot_hat output/u_dot_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.M1, 0, 22, 0);

  // ctrl_custom/Observer output /nu_dot_hat output/v_dot_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.M1, 1, 22, 0);

  // ctrl_custom/Observer output /nu_dot_hat output/r_dot_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.M1, 2, 22, 0);

  // ctrl_custom/Observer output /b_hat output/b_x_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator2, 0, 22,
    0);

  // ctrl_custom/Observer output /b_hat output/b_y_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator2, 1, 22,
    0);

  // ctrl_custom/Observer output /b_hat output/b_psi_hat: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator2, 2, 22,
    0);

  // ctrl_custom/gain/alpha1: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_B.ImpAsg_InsertedFor_commandedAng, 0, 23, 0);

  // ctrl_custom/gain/alpha2: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_B.ImpAsg_InsertedFor_commandedAng, 1, 23, 0);

  // ctrl_custom/gain/alpha3: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_B.ImpAsg_InsertedFor_commandedAng, 2, 23, 0);

  // ctrl_custom/gain/alpha4: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_B.ImpAsg_InsertedFor_commandedAng, 3, 23, 0);

  // ctrl_custom/gain/alpha5: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_B.ImpAsg_InsertedFor_commandedAng, 4, 23, 0);

  // ctrl_custom/gain/alpha6: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_B.ImpAsg_InsertedFor_commandedAng, 5, 23, 0);

  // ctrl_custom/gain/u1: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Tc_out, 0, 0, 0);

  // ctrl_custom/gain/u2: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_B.sf_MATLABFunction2.Tc_out, 0, 0, 0);

  // ctrl_custom/gain/u3: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_B.sf_MATLABFunction3.Tc_out, 0, 0, 0);

  // ctrl_custom/gain/u4: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_B.sf_MATLABFunction4.Tc_out, 0, 0, 0);

  // ctrl_custom/gain/u5: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_B.sf_MATLABFunction5.Tc_out, 0, 0, 0);

  // ctrl_custom/gain/u6: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType
    (&ctrl_custom_B.sf_MATLABFunction6.Tc_out, 0, 0, 0);

  // ctrl_custom/tau_commanded_y: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.commanded_tau, 1,
    22, 0);

  // ctrl_custom/PID controller/y_error: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.regulationerror, 1,
    22, 0);

  // ctrl_custom/PID controller/psi_error: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Gain5_a, 0, 0, 0);

  // ctrl_custom/PID controller/x_error: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.regulationerror, 0,
    22, 0);

  // ctrl_custom/PID controller/Integral_x: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator1, 0, 22,
    0);

  // ctrl_custom/PID controller/Integral_psi: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator1, 2, 22,
    0);

  // ctrl_custom/PID controller/Integral_y: Virtual Signal # 0
  ni_extout[index++] = NIRT_GetValueByDataType(&ctrl_custom_B.Integrator1, 1, 22,
    0);
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
  { 0, "ctrl_custom/Thrust allocation/C/Value", offsetof(P_ctrl_custom_T, C[0]),
    27, 24, 2, 0, 0 },

  { 1,
    "ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/Max Rotation Rate/UpperLimit",
    offsetof(P_ctrl_custom_T, Max_rotation), 64, 1, 2, 2, 0 },

  { 2,
    "ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/Max Rotation Rate/LowerLimit",
    offsetof(P_ctrl_custom_T, Max_rotation), 64, 1, 2, 4, 0 },

  { 3,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 1/UpperLimit",
    offsetof(P_ctrl_custom_T, Max_thrust), 64, 1, 2, 6, 0 },

  { 4,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 10/UpperLimit",
    offsetof(P_ctrl_custom_T, Max_thrust), 64, 1, 2, 8, 0 },

  { 5,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 12/UpperLimit",
    offsetof(P_ctrl_custom_T, Max_thrust), 64, 1, 2, 10, 0 },

  { 6,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 3/UpperLimit",
    offsetof(P_ctrl_custom_T, Max_thrust), 64, 1, 2, 12, 0 },

  { 7,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 5/UpperLimit",
    offsetof(P_ctrl_custom_T, Max_thrust), 64, 1, 2, 14, 0 },

  { 8,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 7/UpperLimit",
    offsetof(P_ctrl_custom_T, Max_thrust), 64, 1, 2, 16, 0 },

  { 9,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 7/LowerLimit",
    offsetof(P_ctrl_custom_T, Max_thrust), 64, 1, 2, 18, 0 },

  { 10,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 8/UpperLimit",
    offsetof(P_ctrl_custom_T, Max_thrust), 64, 1, 2, 20, 0 },

  { 11,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 11/LowerLimit",
    offsetof(P_ctrl_custom_T, Min_thrust), 64, 1, 2, 22, 0 },

  { 12,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 13/LowerLimit",
    offsetof(P_ctrl_custom_T, Min_thrust), 64, 1, 2, 24, 0 },

  { 13,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 2/LowerLimit",
    offsetof(P_ctrl_custom_T, Min_thrust), 64, 1, 2, 26, 0 },

  { 14,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 4/LowerLimit",
    offsetof(P_ctrl_custom_T, Min_thrust), 64, 1, 2, 28, 0 },

  { 15,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 6/LowerLimit",
    offsetof(P_ctrl_custom_T, Min_thrust), 64, 1, 2, 30, 0 },

  { 16,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 9/LowerLimit",
    offsetof(P_ctrl_custom_T, Min_thrust), 64, 1, 2, 32, 0 },

  { 17, "ctrl_custom/Thrust allocation/Constant to avoid singularities/Value",
    offsetof(P_ctrl_custom_T, eps), 64, 1, 2, 34, 0 },

  { 18,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/negative thrust 1/Coefs",
    offsetof(P_ctrl_custom_T, pwm_thr1_backward), 33, 6, 2, 36, 0 },

  { 19,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/positive thrust 1/Coefs",
    offsetof(P_ctrl_custom_T, pwm_thr1_forward), 33, 6, 2, 38, 0 },

  { 20,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/negative thrust 2/Coefs",
    offsetof(P_ctrl_custom_T, pwm_thr2_backward), 33, 6, 2, 40, 0 },

  { 21,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/positive thrust 2/Coefs",
    offsetof(P_ctrl_custom_T, pwm_thr2_forward), 33, 6, 2, 42, 0 },

  { 22,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/negative thrust 3/Coefs",
    offsetof(P_ctrl_custom_T, pwm_thr3_backward), 33, 6, 2, 44, 0 },

  { 23,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/positive thrust 3/Coefs",
    offsetof(P_ctrl_custom_T, pwm_thr3_forward), 33, 6, 2, 46, 0 },

  { 24,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/negative thrust 4/Coefs",
    offsetof(P_ctrl_custom_T, pwm_thr4_backward), 33, 6, 2, 48, 0 },

  { 25,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/positive thrust 4/Coefs",
    offsetof(P_ctrl_custom_T, pwm_thr4_forward), 33, 6, 2, 50, 0 },

  { 26,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/negative thrust 5/Coefs",
    offsetof(P_ctrl_custom_T, pwm_thr5_backward), 33, 6, 2, 52, 0 },

  { 27,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/positive thrust 5/Coefs",
    offsetof(P_ctrl_custom_T, pwm_thr5_forward), 33, 6, 2, 54, 0 },

  { 28,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/negative thrust 6/Coefs",
    offsetof(P_ctrl_custom_T, pwm_thr6_backward), 33, 6, 2, 56, 0 },

  { 29,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/positive thrust 6/Coefs",
    offsetof(P_ctrl_custom_T, pwm_thr6_forward), 33, 6, 2, 58, 0 },

  { 30, "ctrl_custom/Pose/Gain/Gain", offsetof(P_ctrl_custom_T, Gain_Gain), 64,
    1, 2, 60, 0 },

  { 31, "ctrl_custom/Pose/Gain1/Gain", offsetof(P_ctrl_custom_T, Gain1_Gain), 64,
    1, 2, 62, 0 },

  { 32, "ctrl_custom/Pose/Gain5/Gain", offsetof(P_ctrl_custom_T, Gain5_Gain), 64,
    1, 2, 64, 0 },

  { 33, "ctrl_custom/Pose/Saturation/UpperLimit", offsetof(P_ctrl_custom_T,
    Saturation_UpperSat), 64, 1, 2, 66, 0 },

  { 34, "ctrl_custom/Pose/Saturation/LowerLimit", offsetof(P_ctrl_custom_T,
    Saturation_LowerSat), 64, 1, 2, 68, 0 },

  { 35, "ctrl_custom/Pose/Gain6/Gain", offsetof(P_ctrl_custom_T, Gain6_Gain), 64,
    1, 2, 70, 0 },

  { 36, "ctrl_custom/Pose/Constant1/Value", offsetof(P_ctrl_custom_T,
    Constant1_Value), 64, 1, 2, 72, 0 },

  { 37,
    "ctrl_custom/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]/Saturation/UpperLimit",
    offsetof(P_ctrl_custom_T, Saturation_UpperSat_p), 64, 1, 2, 74, 0 },

  { 38,
    "ctrl_custom/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]/Saturation/LowerLimit",
    offsetof(P_ctrl_custom_T, Saturation_LowerSat_k), 64, 1, 2, 76, 0 },

  { 39,
    "ctrl_custom/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]/Gain/Gain",
    offsetof(P_ctrl_custom_T, Gain_Gain_p), 64, 1, 2, 78, 0 },

  { 40,
    "ctrl_custom/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]/Constant/Value",
    offsetof(P_ctrl_custom_T, Constant_Value), 64, 1, 2, 80, 0 },

  { 41,
    "ctrl_custom/PID controller/[-inf inf] to [-pi pi]1/Saturation/UpperLimit",
    offsetof(P_ctrl_custom_T, Saturation_UpperSat_i), 64, 1, 2, 82, 0 },

  { 42,
    "ctrl_custom/PID controller/[-inf inf] to [-pi pi]1/Saturation/LowerLimit",
    offsetof(P_ctrl_custom_T, Saturation_LowerSat_p), 64, 1, 2, 84, 0 },

  { 43, "ctrl_custom/PID controller/[-inf inf] to [-pi pi]1/Gain/Gain", offsetof
    (P_ctrl_custom_T, Gain_Gain_o), 64, 1, 2, 86, 0 },

  { 44, "ctrl_custom/PID controller/[-inf inf] to [-pi pi]1/Constant/Value",
    offsetof(P_ctrl_custom_T, Constant_Value_p), 64, 1, 2, 88, 0 },

  { 45, "ctrl_custom/Referance/Integrator2/InitialCondition", offsetof
    (P_ctrl_custom_T, Integrator2_IC), 64, 1, 2, 90, 0 },

  { 46, "ctrl_custom/Referance/[-inf inf] to [-pi pi]/Saturation/UpperLimit",
    offsetof(P_ctrl_custom_T, Saturation_UpperSat_p4), 64, 1, 2, 92, 0 },

  { 47, "ctrl_custom/Referance/[-inf inf] to [-pi pi]/Saturation/LowerLimit",
    offsetof(P_ctrl_custom_T, Saturation_LowerSat_c), 64, 1, 2, 94, 0 },

  { 48, "ctrl_custom/Referance/[-inf inf] to [-pi pi]/Gain/Gain", offsetof
    (P_ctrl_custom_T, Gain_Gain_e), 64, 1, 2, 96, 0 },

  { 49, "ctrl_custom/Referance/[-inf inf] to [-pi pi]/Constant/Value", offsetof
    (P_ctrl_custom_T, Constant_Value_e), 64, 1, 2, 98, 0 },

  { 50,
    "ctrl_custom/PID controller/[-inf inf] to [-pi pi]/Saturation/UpperLimit",
    offsetof(P_ctrl_custom_T, Saturation_UpperSat_ir), 64, 1, 2, 100, 0 },

  { 51,
    "ctrl_custom/PID controller/[-inf inf] to [-pi pi]/Saturation/LowerLimit",
    offsetof(P_ctrl_custom_T, Saturation_LowerSat_l), 64, 1, 2, 102, 0 },

  { 52, "ctrl_custom/PID controller/[-inf inf] to [-pi pi]/Gain/Gain", offsetof
    (P_ctrl_custom_T, Gain_Gain_d), 64, 1, 2, 104, 0 },

  { 53, "ctrl_custom/PID controller/[-inf inf] to [-pi pi]/Constant/Value",
    offsetof(P_ctrl_custom_T, Constant_Value_a), 64, 1, 2, 106, 0 },

  { 54, "ctrl_custom/PID controller/Integrator1/InitialCondition", offsetof
    (P_ctrl_custom_T, Integrator1_IC), 64, 1, 2, 108, 0 },

  { 55, "ctrl_custom/Referance/Integrator1/InitialCondition", offsetof
    (P_ctrl_custom_T, Integrator1_IC_b), 64, 1, 2, 110, 0 },

  { 56, "ctrl_custom/Nonlinear Passisve Observer/Integrator1/InitialCondition",
    offsetof(P_ctrl_custom_T, Integrator1_IC_g), 34, 3, 2, 112, 0 },

  { 57, "ctrl_custom/Gain5/Gain", offsetof(P_ctrl_custom_T, Gain5_Gain_e), 64, 1,
    2, 114, 0 },

  { 58, "ctrl_custom/Gain/Gain", offsetof(P_ctrl_custom_T, Gain_Gain_g), 64, 1,
    2, 116, 0 },

  { 59, "ctrl_custom/Gain1/Gain", offsetof(P_ctrl_custom_T, Gain1_Gain_l), 64, 1,
    2, 118, 0 },

  { 60, "ctrl_custom/Thrust allocation/Radians to Degrees/Gain/Gain", offsetof
    (P_ctrl_custom_T, Gain_Gain_p4), 64, 1, 2, 120, 0 },

  { 61, "ctrl_custom/Thrust allocation/X-position Thruster/Value", offsetof
    (P_ctrl_custom_T, XpositionThruster_Value[0]), 33, 6, 2, 122, 0 },

  { 62, "ctrl_custom/Thrust allocation/Y-position Thruster/Value", offsetof
    (P_ctrl_custom_T, YpositionThruster_Value[0]), 33, 6, 2, 124, 0 },

  { 63, "ctrl_custom/Thrust allocation/constant angle/Value", offsetof
    (P_ctrl_custom_T, constantangle_Value[0]), 33, 6, 2, 126, 0 },

  { 64,
    "ctrl_custom/Thrust allocation/Choosing Fixed // Azimuth angle/Threshold",
    offsetof(P_ctrl_custom_T, ChoosingFixedAzimuthangle_Thres), 64, 1, 2, 128, 0
  },

  { 65, "ctrl_custom/Radians to Degrees/Gain/Gain", offsetof(P_ctrl_custom_T,
    Gain_Gain_oe), 64, 1, 2, 130, 0 },

  { 66, "ctrl_custom/X-position Thruster/Value", offsetof(P_ctrl_custom_T,
    XpositionThruster_Value_k[0]), 33, 6, 2, 132, 0 },

  { 67, "ctrl_custom/Y-position Thruster/Value", offsetof(P_ctrl_custom_T,
    YpositionThruster_Value_l[0]), 33, 6, 2, 134, 0 },

  { 68,
    "ctrl_custom/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]1/Saturation/UpperLimit",
    offsetof(P_ctrl_custom_T, Saturation_UpperSat_j), 64, 1, 2, 136, 0 },

  { 69,
    "ctrl_custom/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]1/Saturation/LowerLimit",
    offsetof(P_ctrl_custom_T, Saturation_LowerSat_f), 64, 1, 2, 138, 0 },

  { 70,
    "ctrl_custom/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]1/Gain/Gain",
    offsetof(P_ctrl_custom_T, Gain_Gain_gg), 64, 1, 2, 140, 0 },

  { 71,
    "ctrl_custom/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]1/Constant/Value",
    offsetof(P_ctrl_custom_T, Constant_Value_i), 64, 1, 2, 142, 0 },

  { 72, "ctrl_custom/Nonlinear Passisve Observer/Integrator2/InitialCondition",
    offsetof(P_ctrl_custom_T, Integrator2_IC_i), 34, 3, 2, 144, 0 },

  { 73,
    "ctrl_custom/Initialization of parameters/Observer Gains/Constant6/Value",
    offsetof(P_ctrl_custom_T, Constant6_Value), 64, 1, 2, 146, 0 },

  { 74,
    "ctrl_custom/Initialization of parameters/Observer Gains/Constant7/Value",
    offsetof(P_ctrl_custom_T, Constant7_Value), 64, 1, 2, 148, 0 },

  { 75,
    "ctrl_custom/Initialization of parameters/Observer Gains/Constant8/Value",
    offsetof(P_ctrl_custom_T, Constant8_Value), 64, 1, 2, 150, 0 },

  { 76, "ctrl_custom/Nonlinear Passisve Observer/M^-1/Gain", offsetof
    (P_ctrl_custom_T, M1_Gain), 25, 9, 2, 152, 0 },

  { 77,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 1/LowerLimit",
    offsetof(P_ctrl_custom_T, Saturation1_LowerSat), 64, 1, 2, 154, 0 },

  { 78,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 2/UpperLimit",
    offsetof(P_ctrl_custom_T, Saturation2_UpperSat), 64, 1, 2, 156, 0 },

  { 79,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 8/LowerLimit",
    offsetof(P_ctrl_custom_T, Saturation8_LowerSat), 64, 1, 2, 158, 0 },

  { 80,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 9/UpperLimit",
    offsetof(P_ctrl_custom_T, Saturation9_UpperSat), 64, 1, 2, 160, 0 },

  { 81,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 10/LowerLimit",
    offsetof(P_ctrl_custom_T, Saturation10_LowerSat), 64, 1, 2, 162, 0 },

  { 82,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 11/UpperLimit",
    offsetof(P_ctrl_custom_T, Saturation11_UpperSat), 64, 1, 2, 164, 0 },

  { 83,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 3/LowerLimit",
    offsetof(P_ctrl_custom_T, Saturation3_LowerSat), 64, 1, 2, 166, 0 },

  { 84,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 4/UpperLimit",
    offsetof(P_ctrl_custom_T, Saturation4_UpperSat), 64, 1, 2, 168, 0 },

  { 85,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 5/LowerLimit",
    offsetof(P_ctrl_custom_T, Saturation5_LowerSat), 64, 1, 2, 170, 0 },

  { 86,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 6/UpperLimit",
    offsetof(P_ctrl_custom_T, Saturation6_UpperSat), 64, 1, 2, 172, 0 },

  { 87,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 12/LowerLimit",
    offsetof(P_ctrl_custom_T, Saturation12_LowerSat), 64, 1, 2, 174, 0 },

  { 88,
    "ctrl_custom/Thruster control /Thrust mapped to PWM/Saturation 13/UpperLimit",
    offsetof(P_ctrl_custom_T, Saturation13_UpperSat), 64, 1, 2, 176, 0 },

  { 89, "ctrl_custom/Initialization of parameters/Observer Gains/Constant/Value",
    offsetof(P_ctrl_custom_T, Constant_Value_g), 64, 1, 2, 178, 0 },

  { 90,
    "ctrl_custom/Initialization of parameters/Observer Gains/Constant1/Value",
    offsetof(P_ctrl_custom_T, Constant1_Value_o), 64, 1, 2, 180, 0 },

  { 91,
    "ctrl_custom/Initialization of parameters/Observer Gains/Constant2/Value",
    offsetof(P_ctrl_custom_T, Constant2_Value), 64, 1, 2, 182, 0 },

  { 92,
    "ctrl_custom/Initialization of parameters/Observer Gains/Constant3/Value",
    offsetof(P_ctrl_custom_T, Constant3_Value), 64, 1, 2, 184, 0 },

  { 93,
    "ctrl_custom/Initialization of parameters/Observer Gains/Constant4/Value",
    offsetof(P_ctrl_custom_T, Constant4_Value), 64, 1, 2, 186, 0 },

  { 94,
    "ctrl_custom/Initialization of parameters/Observer Gains/Constant5/Value",
    offsetof(P_ctrl_custom_T, Constant5_Value), 64, 1, 2, 188, 0 },

  { 95, "ctrl_custom/PID controller/Gain5/Gain", offsetof(P_ctrl_custom_T,
    Gain5_Gain_a), 64, 1, 2, 190, 0 },

  { 96, "ctrl_custom/Referance/Gain5/Gain", offsetof(P_ctrl_custom_T,
    Gain5_Gain_n), 64, 1, 2, 192, 0 },

  { 97, "ctrl_custom/Referance/Integrator/InitialCondition", offsetof
    (P_ctrl_custom_T, Integrator_IC), 64, 1, 2, 194, 0 },

  { 98,
    "ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/Degrees to Radians/Gain1/Gain",
    offsetof(P_ctrl_custom_T, CoreSubsys.Gain1_Gain), 64, 1, 2, 196, 0 },

  { 99,
    "ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/Delay/InitialCondition",
    offsetof(P_ctrl_custom_T, CoreSubsys.Delay_InitialCondition), 64, 1, 2, 198,
    0 },

  { 100,
    "ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/Delay/DelayLength",
    offsetof(P_ctrl_custom_T, CoreSubsys.Delay_DelayLength), 65, 1, 2, 200, 0 },
};

static int32_t NI_ParamListSize DataSection(".NIVS.paramlistsize") = 101;
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
  1, 6,                                /* Parameter at index 18 */
  1, 6,                                /* Parameter at index 19 */
  1, 6,                                /* Parameter at index 20 */
  1, 6,                                /* Parameter at index 21 */
  1, 6,                                /* Parameter at index 22 */
  1, 6,                                /* Parameter at index 23 */
  1, 6,                                /* Parameter at index 24 */
  1, 6,                                /* Parameter at index 25 */
  1, 6,                                /* Parameter at index 26 */
  1, 6,                                /* Parameter at index 27 */
  1, 6,                                /* Parameter at index 28 */
  1, 6,                                /* Parameter at index 29 */
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
  3, 1,                                /* Parameter at index 56 */
  1, 1,                                /* Parameter at index 57 */
  1, 1,                                /* Parameter at index 58 */
  1, 1,                                /* Parameter at index 59 */
  1, 1,                                /* Parameter at index 60 */
  1, 6,                                /* Parameter at index 61 */
  1, 6,                                /* Parameter at index 62 */
  1, 6,                                /* Parameter at index 63 */
  1, 1,                                /* Parameter at index 64 */
  1, 1,                                /* Parameter at index 65 */
  1, 6,                                /* Parameter at index 66 */
  1, 6,                                /* Parameter at index 67 */
  1, 1,                                /* Parameter at index 68 */
  1, 1,                                /* Parameter at index 69 */
  1, 1,                                /* Parameter at index 70 */
  1, 1,                                /* Parameter at index 71 */
  3, 1,                                /* Parameter at index 72 */
  1, 1,                                /* Parameter at index 73 */
  1, 1,                                /* Parameter at index 74 */
  1, 1,                                /* Parameter at index 75 */
  3, 3,                                /* Parameter at index 76 */
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
};

static NI_Signal NI_SigList[] DataSection(".NIVS.siglist") =
{
  { 0, "ctrl_custom/Input to model", 0, "", offsetof(B_ctrl_custom_T,
    Inputtomodel) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 1, "ctrl_custom/Startbutton", 0, "", offsetof(B_ctrl_custom_T, Startbutton)
    + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 2, "ctrl_custom/Initialization of parameters/Control Gains/K_p_x", 0, "",
    offsetof(B_ctrl_custom_T, K_p_x) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2,
    0, 0 },

  { 3, "ctrl_custom/Initialization of parameters/Control Gains/K_p_y", 0, "",
    offsetof(B_ctrl_custom_T, K_p_y) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2,
    0, 0 },

  { 4, "ctrl_custom/Initialization of parameters/Control Gains/K_p_psi", 0, "",
    offsetof(B_ctrl_custom_T, K_p_psi) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1,
    2, 0, 0 },

  { 5, "ctrl_custom/Initialization of parameters/Control Gains/K_i_psi", 0, "",
    offsetof(B_ctrl_custom_T, K_i_psi) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1,
    2, 0, 0 },

  { 6, "ctrl_custom/Initialization of parameters/Control Gains/K_i_x", 0, "",
    offsetof(B_ctrl_custom_T, K_i_x) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2,
    0, 0 },

  { 7, "ctrl_custom/Initialization of parameters/Control Gains/K_i_y", 0, "",
    offsetof(B_ctrl_custom_T, K_i_y) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2,
    0, 0 },

  { 8, "ctrl_custom/Initialization of parameters/Control Gains/K_d_psi", 0, "",
    offsetof(B_ctrl_custom_T, K_d_psi) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1,
    2, 0, 0 },

  { 9, "ctrl_custom/Initialization of parameters/Control Gains/K_d_x", 0, "",
    offsetof(B_ctrl_custom_T, K_d_x) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2,
    0, 0 },

  { 10, "ctrl_custom/Initialization of parameters/Control Gains/K_d_y", 0, "",
    offsetof(B_ctrl_custom_T, K_d_y) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2,
    0, 0 },

  { 11, "ctrl_custom/Pose/x_m", 0, "", offsetof(B_ctrl_custom_T, x_m) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 12, "ctrl_custom/Pose/Gain", 0, "", offsetof(B_ctrl_custom_T, Gain) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 13, "ctrl_custom/Pose/y_m", 0, "", offsetof(B_ctrl_custom_T, y_m) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 14, "ctrl_custom/Pose/Gain1", 0, "", offsetof(B_ctrl_custom_T, Gain1) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 15, "ctrl_custom/Pose/psi_m", 0, "", offsetof(B_ctrl_custom_T, psi_m) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 16, "ctrl_custom/Pose/Sum", 0, "", offsetof(B_ctrl_custom_T, Sum) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 17, "ctrl_custom/Nonlinear Passisve Observer/Integrator/(1, 1)", 0, "",
    offsetof(B_ctrl_custom_T, Integrator) + (0*sizeof(real_T)), BLOCKIO_SIG, 22,
    1, 2, 0, 0 },

  { 18, "ctrl_custom/Nonlinear Passisve Observer/Integrator/(1, 2)", 0, "",
    offsetof(B_ctrl_custom_T, Integrator) + (1*sizeof(real_T)), BLOCKIO_SIG, 22,
    1, 2, 0, 0 },

  { 19, "ctrl_custom/Nonlinear Passisve Observer/Integrator/(1, 3)", 0, "",
    offsetof(B_ctrl_custom_T, Integrator) + (2*sizeof(real_T)), BLOCKIO_SIG, 22,
    1, 2, 0, 0 },

  { 20, "ctrl_custom/Nonlinear Passisve Observer/[-inf inf] to [-pi pi]/Sum", 0,
    "", offsetof(B_ctrl_custom_T, Sum_h) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1,
    2, 0, 0 },

  { 21, "ctrl_custom/PID controller/Sum4", 0, "regulation error(1, 1)", offsetof
    (B_ctrl_custom_T, regulationerror) + (0*sizeof(real_T)), BLOCKIO_SIG, 22, 1,
    2, 0, 0 },

  { 22, "ctrl_custom/PID controller/Sum4", 0, "regulation error(1, 2)", offsetof
    (B_ctrl_custom_T, regulationerror) + (1*sizeof(real_T)), BLOCKIO_SIG, 22, 1,
    2, 0, 0 },

  { 23, "ctrl_custom/PID controller/Sum4", 0, "regulation error(1, 3)", offsetof
    (B_ctrl_custom_T, regulationerror) + (2*sizeof(real_T)), BLOCKIO_SIG, 22, 1,
    2, 0, 0 },

  { 24, "ctrl_custom/PID controller/Integrator1/(1, 1)", 0, "", offsetof
    (B_ctrl_custom_T, Integrator1) + (0*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2,
    0, 0 },

  { 25, "ctrl_custom/PID controller/Integrator1/(1, 2)", 0, "", offsetof
    (B_ctrl_custom_T, Integrator1) + (1*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2,
    0, 0 },

  { 26, "ctrl_custom/PID controller/Integrator1/(1, 3)", 0, "", offsetof
    (B_ctrl_custom_T, Integrator1) + (2*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2,
    0, 0 },

  { 27, "ctrl_custom/Referance/Integrator1/(1, 1)", 0, "", offsetof
    (B_ctrl_custom_T, Integrator1_i) + (0*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2,
    0, 0 },

  { 28, "ctrl_custom/Referance/Integrator1/(1, 2)", 0, "", offsetof
    (B_ctrl_custom_T, Integrator1_i) + (1*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2,
    0, 0 },

  { 29, "ctrl_custom/Referance/Integrator1/(1, 3)", 0, "", offsetof
    (B_ctrl_custom_T, Integrator1_i) + (2*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2,
    0, 0 },

  { 30, "ctrl_custom/Nonlinear Passisve Observer/Integrator1/(1, 1)", 0, "",
    offsetof(B_ctrl_custom_T, Integrator1_a) + (0*sizeof(real_T)), BLOCKIO_SIG,
    22, 1, 2, 0, 0 },

  { 31, "ctrl_custom/Nonlinear Passisve Observer/Integrator1/(1, 2)", 0, "",
    offsetof(B_ctrl_custom_T, Integrator1_a) + (1*sizeof(real_T)), BLOCKIO_SIG,
    22, 1, 2, 0, 0 },

  { 32, "ctrl_custom/Nonlinear Passisve Observer/Integrator1/(1, 3)", 0, "",
    offsetof(B_ctrl_custom_T, Integrator1_a) + (2*sizeof(real_T)), BLOCKIO_SIG,
    22, 1, 2, 0, 0 },

  { 33, "ctrl_custom/PID controller/Sum1/(1, 1)", 0, "", offsetof
    (B_ctrl_custom_T, Sum1) + (0*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0 },

  { 34, "ctrl_custom/PID controller/Sum1/(1, 2)", 0, "", offsetof
    (B_ctrl_custom_T, Sum1) + (1*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0 },

  { 35, "ctrl_custom/PID controller/Sum1/(1, 3)", 0, "", offsetof
    (B_ctrl_custom_T, Sum1) + (2*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0 },

  { 36, "ctrl_custom/Startbutton1/(1, 1)", 0, "", offsetof(B_ctrl_custom_T,
    Startbutton1) + (0*sizeof(real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 37, "ctrl_custom/Startbutton1/(1, 2)", 0, "", offsetof(B_ctrl_custom_T,
    Startbutton1) + (1*sizeof(real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 38, "ctrl_custom/Startbutton1/(1, 3)", 0, "", offsetof(B_ctrl_custom_T,
    Startbutton1) + (2*sizeof(real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 39, "ctrl_custom/Startbutton1/(1, 4)", 0, "", offsetof(B_ctrl_custom_T,
    Startbutton1) + (3*sizeof(real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 40, "ctrl_custom/Startbutton1/(1, 5)", 0, "", offsetof(B_ctrl_custom_T,
    Startbutton1) + (4*sizeof(real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 41, "ctrl_custom/Startbutton1/(1, 6)", 0, "", offsetof(B_ctrl_custom_T,
    Startbutton1) + (5*sizeof(real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 42, "ctrl_custom/Gain5", 0, "", offsetof(B_ctrl_custom_T, Gain5) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 43, "ctrl_custom/Gain", 0, "", offsetof(B_ctrl_custom_T, Gain_h) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 44, "ctrl_custom/Gain1", 0, "", offsetof(B_ctrl_custom_T, Gain1_n) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 45, "ctrl_custom/Thruster measurment/thr_angle_1", 0, "", offsetof
    (B_ctrl_custom_T, thr_angle_1) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0,
    0 },

  { 46, "ctrl_custom/Thruster measurment/thr_angle_2", 0, "", offsetof
    (B_ctrl_custom_T, thr_angle_2) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0,
    0 },

  { 47, "ctrl_custom/Thruster measurment/thr_angle_3", 0, "", offsetof
    (B_ctrl_custom_T, thr_angle_3) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0,
    0 },

  { 48, "ctrl_custom/Thruster measurment/thr_angle_4", 0, "", offsetof
    (B_ctrl_custom_T, thr_angle_4) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0,
    0 },

  { 49, "ctrl_custom/Thruster measurment/thr_angle_5", 0, "", offsetof
    (B_ctrl_custom_T, thr_angle_5) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0,
    0 },

  { 50, "ctrl_custom/Thruster measurment/thr_angle_6", 0, "", offsetof
    (B_ctrl_custom_T, thr_angle_6) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0,
    0 },

  { 51, "ctrl_custom/Thrust allocation/Angle_controller", 0, "", offsetof
    (B_ctrl_custom_T, Angle_controller) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1,
    2, 0, 0 },

  { 52, "ctrl_custom/Thrust allocation/Choosing Fixed // Azimuth angle/(1, 1)",
    0, "", offsetof(B_ctrl_custom_T, ChoosingFixedAzimuthangle) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 53, "ctrl_custom/Thrust allocation/Choosing Fixed // Azimuth angle/(1, 2)",
    0, "", offsetof(B_ctrl_custom_T, ChoosingFixedAzimuthangle) + (1*sizeof
    (real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 54, "ctrl_custom/Thrust allocation/Choosing Fixed // Azimuth angle/(1, 3)",
    0, "", offsetof(B_ctrl_custom_T, ChoosingFixedAzimuthangle) + (2*sizeof
    (real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 55, "ctrl_custom/Thrust allocation/Choosing Fixed // Azimuth angle/(1, 4)",
    0, "", offsetof(B_ctrl_custom_T, ChoosingFixedAzimuthangle) + (3*sizeof
    (real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 56, "ctrl_custom/Thrust allocation/Choosing Fixed // Azimuth angle/(1, 5)",
    0, "", offsetof(B_ctrl_custom_T, ChoosingFixedAzimuthangle) + (4*sizeof
    (real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 57, "ctrl_custom/Thrust allocation/Choosing Fixed // Azimuth angle/(1, 6)",
    0, "", offsetof(B_ctrl_custom_T, ChoosingFixedAzimuthangle) + (5*sizeof
    (real_T)), BLOCKIO_SIG, 23, 1, 2, 0, 0 },

  { 58, "ctrl_custom/Nonlinear Passisve Observer/Integrator2/(1, 1)", 0, "",
    offsetof(B_ctrl_custom_T, Integrator2) + (0*sizeof(real_T)), BLOCKIO_SIG, 22,
    1, 2, 0, 0 },

  { 59, "ctrl_custom/Nonlinear Passisve Observer/Integrator2/(1, 2)", 0, "",
    offsetof(B_ctrl_custom_T, Integrator2) + (1*sizeof(real_T)), BLOCKIO_SIG, 22,
    1, 2, 0, 0 },

  { 60, "ctrl_custom/Nonlinear Passisve Observer/Integrator2/(1, 3)", 0, "",
    offsetof(B_ctrl_custom_T, Integrator2) + (2*sizeof(real_T)), BLOCKIO_SIG, 22,
    1, 2, 0, 0 },

  { 61,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(1, 1)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix2) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 62,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(2, 1)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix2) + (1*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 63,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(3, 1)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix2) + (2*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 64,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(1, 2)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix2) + (3*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 65,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(2, 2)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix2) + (4*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 66,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(3, 2)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix2) + (5*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 67,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(1, 3)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix2) + (6*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 68,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(2, 3)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix2) + (7*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 69,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix2/(3, 3)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix2) + (8*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 70, "ctrl_custom/Nonlinear Passisve Observer/M^-1/(1, 1)", 0, "", offsetof
    (B_ctrl_custom_T, M1) + (0*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0 },

  { 71, "ctrl_custom/Nonlinear Passisve Observer/M^-1/(1, 2)", 0, "", offsetof
    (B_ctrl_custom_T, M1) + (1*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0 },

  { 72, "ctrl_custom/Nonlinear Passisve Observer/M^-1/(1, 3)", 0, "", offsetof
    (B_ctrl_custom_T, M1) + (2*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0 },

  { 73,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(1, 1)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 74,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(2, 1)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix) + (1*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 75,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(3, 1)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix) + (2*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 76,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(1, 2)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix) + (3*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 77,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(2, 2)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix) + (4*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 78,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(3, 2)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix) + (5*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 79,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(1, 3)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix) + (6*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 80,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(2, 3)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix) + (7*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 81,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix/(3, 3)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix) + (8*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 82,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(1, 1)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix1) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 83,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(2, 1)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix1) + (1*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 84,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(3, 1)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix1) + (2*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 85,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(1, 2)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix1) + (3*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 86,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(2, 2)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix1) + (4*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 87,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(3, 2)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix1) + (5*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 88,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(1, 3)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix1) + (6*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 89,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(2, 3)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix1) + (7*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 90,
    "ctrl_custom/Initialization of parameters/Observer Gains/Create Diagonal Matrix1/(3, 3)",
    0, "", offsetof(B_ctrl_custom_T, CreateDiagonalMatrix1) + (8*sizeof(real_T)),
    BLOCKIO_SIG, 25, 1, 2, 0, 0 },

  { 91, "ctrl_custom/Nonlinear Passisve Observer/Matrix Multiply1/(1, 1)", 0, "",
    offsetof(B_ctrl_custom_T, MatrixMultiply1) + (0*sizeof(real_T)), BLOCKIO_SIG,
    22, 1, 2, 0, 0 },

  { 92, "ctrl_custom/Nonlinear Passisve Observer/Matrix Multiply1/(1, 2)", 0, "",
    offsetof(B_ctrl_custom_T, MatrixMultiply1) + (1*sizeof(real_T)), BLOCKIO_SIG,
    22, 1, 2, 0, 0 },

  { 93, "ctrl_custom/Nonlinear Passisve Observer/Matrix Multiply1/(1, 3)", 0, "",
    offsetof(B_ctrl_custom_T, MatrixMultiply1) + (2*sizeof(real_T)), BLOCKIO_SIG,
    22, 1, 2, 0, 0 },

  { 94, "ctrl_custom/Nonlinear Passisve Observer/Sum1/(1, 1)", 0, "", offsetof
    (B_ctrl_custom_T, Sum1_g) + (0*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0
  },

  { 95, "ctrl_custom/Nonlinear Passisve Observer/Sum1/(1, 2)", 0, "", offsetof
    (B_ctrl_custom_T, Sum1_g) + (1*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0
  },

  { 96, "ctrl_custom/Nonlinear Passisve Observer/Sum1/(1, 3)", 0, "", offsetof
    (B_ctrl_custom_T, Sum1_g) + (2*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0
  },

  { 97, "ctrl_custom/PID controller/Gain5", 0, "", offsetof(B_ctrl_custom_T,
    Gain5_a) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 98, "ctrl_custom/Referance/x_ref", 0, "", offsetof(B_ctrl_custom_T, x_ref) +
    (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 99, "ctrl_custom/Referance/y_ref", 0, "", offsetof(B_ctrl_custom_T, y_ref) +
    (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 100, "ctrl_custom/Referance/psi_ref", 0, "", offsetof(B_ctrl_custom_T,
    psi_ref) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 101, "ctrl_custom/Initialization of parameters/Guidance Gains/w_x", 0, "",
    offsetof(B_ctrl_custom_T, w_x) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0,
    0 },

  { 102, "ctrl_custom/Initialization of parameters/Guidance Gains/w_y", 0, "",
    offsetof(B_ctrl_custom_T, w_y) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0,
    0 },

  { 103, "ctrl_custom/Initialization of parameters/Guidance Gains/w_psi", 0, "",
    offsetof(B_ctrl_custom_T, w_psi) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2,
    0, 0 },

  { 104, "ctrl_custom/Initialization of parameters/Guidance Gains/zeta_psi", 0,
    "", offsetof(B_ctrl_custom_T, zeta_psi) + (0*sizeof(real_T)), BLOCKIO_SIG, 0,
    1, 2, 0, 0 },

  { 105, "ctrl_custom/Initialization of parameters/Guidance Gains/zeta_x", 0, "",
    offsetof(B_ctrl_custom_T, zeta_x) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2,
    0, 0 },

  { 106, "ctrl_custom/Initialization of parameters/Guidance Gains/zeta_y", 0, "",
    offsetof(B_ctrl_custom_T, zeta_y) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2,
    0, 0 },

  { 107, "ctrl_custom/Initialization of parameters/Guidance Gains/T_psi", 0, "",
    offsetof(B_ctrl_custom_T, T_psi) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2,
    0, 0 },

  { 108, "ctrl_custom/Initialization of parameters/Guidance Gains/T_x", 0, "",
    offsetof(B_ctrl_custom_T, T_x) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0,
    0 },

  { 109, "ctrl_custom/Initialization of parameters/Guidance Gains/T_y", 0, "",
    offsetof(B_ctrl_custom_T, T_y) + (0*sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0,
    0 },

  { 110, "ctrl_custom/Referance/Sum/(1, 1)", 0, "", offsetof(B_ctrl_custom_T,
    Sum_m) + (0*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0 },

  { 111, "ctrl_custom/Referance/Sum/(1, 2)", 0, "", offsetof(B_ctrl_custom_T,
    Sum_m) + (1*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0 },

  { 112, "ctrl_custom/Referance/Sum/(1, 3)", 0, "", offsetof(B_ctrl_custom_T,
    Sum_m) + (2*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0 },

  { 113, "ctrl_custom/Referance/Sum2/(1, 1)", 0, "", offsetof(B_ctrl_custom_T,
    Sum2) + (0*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0 },

  { 114, "ctrl_custom/Referance/Sum2/(1, 2)", 0, "", offsetof(B_ctrl_custom_T,
    Sum2) + (1*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0 },

  { 115, "ctrl_custom/Referance/Sum2/(1, 3)", 0, "", offsetof(B_ctrl_custom_T,
    Sum2) + (2*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0 },

  { 116, "ctrl_custom/IMU/Acc_x", 0, "", offsetof(B_ctrl_custom_T, Acc_x) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 117, "ctrl_custom/IMU/Acc_y", 0, "", offsetof(B_ctrl_custom_T, Acc_y) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 118, "ctrl_custom/IMU/Acc_z", 0, "", offsetof(B_ctrl_custom_T, Acc_z) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 119, "ctrl_custom/IMU/Gyro_x", 0, "", offsetof(B_ctrl_custom_T, Gyro_x) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 120, "ctrl_custom/IMU/Gyro_y", 0, "", offsetof(B_ctrl_custom_T, Gyro_y) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 121, "ctrl_custom/IMU/Gyro_z", 0, "", offsetof(B_ctrl_custom_T, Gyro_z) + (0*
    sizeof(real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 122, "ctrl_custom/Thruster control /Thrust mapped to PWM/MATLAB Function1",
    0, "", offsetof(B_ctrl_custom_T, Tc_out) + (0*sizeof(real_T)), BLOCKIO_SIG,
    0, 1, 2, 0, 0 },

  { 123, "ctrl_custom/MATLAB Function", 0, "(1, 1)", offsetof(B_ctrl_custom_T,
    commanded_tau) + (0*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0 },

  { 124, "ctrl_custom/MATLAB Function", 0, "(1, 2)", offsetof(B_ctrl_custom_T,
    commanded_tau) + (1*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0 },

  { 125, "ctrl_custom/MATLAB Function", 0, "(1, 3)", offsetof(B_ctrl_custom_T,
    commanded_tau) + (2*sizeof(real_T)), BLOCKIO_SIG, 22, 1, 2, 0, 0 },

  { 126, "ctrl_custom/Thruster control /Thrust mapped to PWM/MATLAB Function6",
    0, "", offsetof(B_ctrl_custom_T, sf_MATLABFunction6.Tc_out) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 127, "ctrl_custom/Thruster control /Thrust mapped to PWM/MATLAB Function5",
    0, "", offsetof(B_ctrl_custom_T, sf_MATLABFunction5.Tc_out) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 128, "ctrl_custom/Thruster control /Thrust mapped to PWM/MATLAB Function4",
    0, "", offsetof(B_ctrl_custom_T, sf_MATLABFunction4.Tc_out) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 129, "ctrl_custom/Thruster control /Thrust mapped to PWM/MATLAB Function3",
    0, "", offsetof(B_ctrl_custom_T, sf_MATLABFunction3.Tc_out) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 130, "ctrl_custom/Thruster control /Thrust mapped to PWM/MATLAB Function2",
    0, "", offsetof(B_ctrl_custom_T, sf_MATLABFunction2.Tc_out) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 131,
    "ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/Integrator",
    0, "angle", offsetof(B_ctrl_custom_T, CoreSubsys[5].angle) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 132,
    "ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/Delay",
    0, "", offsetof(B_ctrl_custom_T, CoreSubsys[5].Delay) + (0*sizeof(real_T)),
    BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 133,
    "ctrl_custom/Thrust allocation/Optimal angle path and  constraints on rotation speed/Max Rotation Rate",
    0, "", offsetof(B_ctrl_custom_T, CoreSubsys[5].MaxRotationRate) + (0*sizeof
    (real_T)), BLOCKIO_SIG, 0, 1, 2, 0, 0 },

  { 134, "ctrl_custom/Referance/MATLAB Function1", 0, "(1, 1)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction1_k.y) + (0*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 135, "ctrl_custom/Referance/MATLAB Function1", 0, "(2, 1)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction1_k.y) + (1*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 136, "ctrl_custom/Referance/MATLAB Function1", 0, "(3, 1)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction1_k.y) + (2*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 137, "ctrl_custom/Referance/MATLAB Function1", 0, "(1, 2)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction1_k.y) + (3*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 138, "ctrl_custom/Referance/MATLAB Function1", 0, "(2, 2)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction1_k.y) + (4*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 139, "ctrl_custom/Referance/MATLAB Function1", 0, "(3, 2)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction1_k.y) + (5*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 140, "ctrl_custom/Referance/MATLAB Function1", 0, "(1, 3)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction1_k.y) + (6*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 141, "ctrl_custom/Referance/MATLAB Function1", 0, "(2, 3)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction1_k.y) + (7*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 142, "ctrl_custom/Referance/MATLAB Function1", 0, "(3, 3)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction1_k.y) + (8*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 143, "ctrl_custom/Referance/MATLAB Function", 0, "(1, 1)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction_b.y) + (0*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 144, "ctrl_custom/Referance/MATLAB Function", 0, "(2, 1)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction_b.y) + (1*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 145, "ctrl_custom/Referance/MATLAB Function", 0, "(3, 1)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction_b.y) + (2*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 146, "ctrl_custom/Referance/MATLAB Function", 0, "(1, 2)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction_b.y) + (3*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 147, "ctrl_custom/Referance/MATLAB Function", 0, "(2, 2)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction_b.y) + (4*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 148, "ctrl_custom/Referance/MATLAB Function", 0, "(3, 2)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction_b.y) + (5*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 149, "ctrl_custom/Referance/MATLAB Function", 0, "(1, 3)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction_b.y) + (6*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 150, "ctrl_custom/Referance/MATLAB Function", 0, "(2, 3)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction_b.y) + (7*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { 151, "ctrl_custom/Referance/MATLAB Function", 0, "(3, 3)", offsetof
    (B_ctrl_custom_T, sf_MATLABFunction_b.y) + (8*sizeof(real_T)), BLOCKIO_SIG,
    25, 1, 2, 0, 0 },

  { -1, "", -1, "", 0, 0, 0 }
};

static int32_t NI_SigListSize DataSection(".NIVS.siglistsize") = 152;
static int32_t NI_VirtualBlockSources[1];
static int32_t NI_SigDimList[] DataSection(".NIVS.sigdimlist") =
{ 1, 1
};

static int32_t NI_ExtListSize DataSection(".NIVS.extlistsize") = 80;
static NI_ExternalIO NI_ExtList[] DataSection(".NIVS.extlist") =
{
  { 1, "Input to model", 1, EXT_IN, 1, 1, 1 },

  { 2, "Startbutton", 0, EXT_IN, 1, 1, 1 },

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

  { 15, "Startbutton1", 0, EXT_IN, 6, 6, 1 },

  { 16, "Thruster measurment/thr_angle_1", 0, EXT_IN, 1, 1, 1 },

  { 17, "Thruster measurment/thr_angle_2", 0, EXT_IN, 1, 1, 1 },

  { 18, "Thruster measurment/thr_angle_3", 0, EXT_IN, 1, 1, 1 },

  { 19, "Thruster measurment/thr_angle_4", 0, EXT_IN, 1, 1, 1 },

  { 20, "Thruster measurment/thr_angle_5", 0, EXT_IN, 1, 1, 1 },

  { 21, "Thruster measurment/thr_angle_6", 0, EXT_IN, 1, 1, 1 },

  { 22, "Thrust allocation/Angle_controller", 0, EXT_IN, 1, 1, 1 },

  { 23, "Referance/x_ref", 0, EXT_IN, 1, 1, 1 },

  { 24, "Referance/y_ref", 0, EXT_IN, 1, 1, 1 },

  { 25, "Referance/psi_ref", 0, EXT_IN, 1, 1, 1 },

  { 26, "Initialization of parameters/Guidance Gains/w_x", 0, EXT_IN, 1, 1, 1 },

  { 27, "Initialization of parameters/Guidance Gains/w_y", 0, EXT_IN, 1, 1, 1 },

  { 28, "Initialization of parameters/Guidance Gains/w_psi", 0, EXT_IN, 1, 1, 1
  },

  { 29, "Initialization of parameters/Guidance Gains/zeta_psi", 0, EXT_IN, 1, 1,
    1 },

  { 30, "Initialization of parameters/Guidance Gains/zeta_x", 0, EXT_IN, 1, 1, 1
  },

  { 31, "Initialization of parameters/Guidance Gains/zeta_y", 0, EXT_IN, 1, 1, 1
  },

  { 32, "Initialization of parameters/Guidance Gains/T_psi", 0, EXT_IN, 1, 1, 1
  },

  { 33, "Initialization of parameters/Guidance Gains/T_x", 0, EXT_IN, 1, 1, 1 },

  { 34, "Initialization of parameters/Guidance Gains/T_y", 0, EXT_IN, 1, 1, 1 },

  { 35, "IMU/Acc_x", 1, EXT_IN, 1, 1, 1 },

  { 36, "IMU/Acc_y", 1, EXT_IN, 1, 1, 1 },

  { 37, "IMU/Acc_z", 1, EXT_IN, 1, 1, 1 },

  { 38, "IMU/Gyro_x", 1, EXT_IN, 1, 1, 1 },

  { 39, "IMU/Gyro_y", 1, EXT_IN, 1, 1, 1 },

  { 40, "IMU/Gyro_z", 1, EXT_IN, 1, 1, 1 },

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

  { 22, "gain/alpha1", 0, EXT_OUT, 1, 1, 1 },

  { 23, "gain/alpha2", 0, EXT_OUT, 1, 1, 1 },

  { 24, "gain/alpha3", 0, EXT_OUT, 1, 1, 1 },

  { 25, "gain/alpha4", 0, EXT_OUT, 1, 1, 1 },

  { 26, "gain/alpha5", 0, EXT_OUT, 1, 1, 1 },

  { 27, "gain/alpha6", 0, EXT_OUT, 1, 1, 1 },

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

  { 38, "PID controller/Integral_x", 0, EXT_OUT, 1, 1, 1 },

  { 39, "PID controller/Integral_psi", 0, EXT_OUT, 1, 1, 1 },

  { 40, "PID controller/Integral_y", 0, EXT_OUT, 1, 1, 1 },

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
  "ctrl_custom";
static const char* NI_CompiledModelVersion = "1.141";
static const char* NI_CompiledModelDateTime = "Wed Jul 26 18:28:29 2017";
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
  memcpy(&rtParameter[0], &ctrl_custom_P, sizeof(P_ctrl_custom_T));
  return NI_OK;
}

/*  After the model has initialized and updated the parameters in
   rtParameter[0] (aka ctrl_custom_P) we make a copy to rtParameter[1] so
   that it is double buffered. We also do a memcpy to each task's copy.
 */
int32_t NI_InitParamDoubleBuf()
{
  int32_t idx = 1;

#ifdef MULTITASKING

  for (; idx <= NUMST - TID01EQ; idx++)
#endif

    memcpy(&rtParameter[idx], &rtParameter[0], sizeof(P_ctrl_custom_T));
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
             (P_ctrl_custom_T));
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
               (P_ctrl_custom_T));
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
             (P_ctrl_custom_T));
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
           (P_ctrl_custom_T));
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
           (P_ctrl_custom_T));
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
      *numContStates = 22;
      *numDiscStates = 1051.0;
      *numClockTicks = NUMST - TID01EQ;
      return NI_OK;
    }
  }

  if ((contStates != NULL) && (contStatesNames != NULL)) {
    idx = 0;
    contStates[idx] = NIRT_GetValueByDataType(&(ctrl_custom_X.Integrator_CSTATE),
      0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType(&(ctrl_custom_X.Integrator_CSTATE),
      1, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType(&(ctrl_custom_X.Integrator_CSTATE),
      2, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType(&(ctrl_custom_X.Integrator2_CSTATE),
      0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator2_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType(&(ctrl_custom_X.Integrator2_CSTATE),
      1, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator2_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType(&(ctrl_custom_X.Integrator2_CSTATE),
      2, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator2_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType(&(ctrl_custom_X.Integrator1_CSTATE),
      0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType(&(ctrl_custom_X.Integrator1_CSTATE),
      1, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType(&(ctrl_custom_X.Integrator1_CSTATE),
      2, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_X.Integrator1_CSTATE_d), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE_d");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_X.Integrator1_CSTATE_d), 1, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE_d");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_X.Integrator1_CSTATE_d), 2, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE_d");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_X.Integrator1_CSTATE_n), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE_n");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_X.Integrator1_CSTATE_n), 1, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE_n");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_X.Integrator1_CSTATE_n), 2, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator1_CSTATE_n");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_X.Integrator2_CSTATE_j), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator2_CSTATE_j");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_X.Integrator2_CSTATE_j), 1, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator2_CSTATE_j");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_X.Integrator2_CSTATE_j), 2, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator2_CSTATE_j");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_X.Integrator_CSTATE_f), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_f");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_X.Integrator_CSTATE_f), 1, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_f");
    contStates[idx] = NIRT_GetValueByDataType
      (&(ctrl_custom_X.Integrator_CSTATE_f), 2, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_f");
    contStates[idx] = NIRT_GetValueByDataType(&(ctrl_custom_X.CoreSubsys[5].
      Integrator_CSTATE_d), 0, 0, 0);
    strcpy(contStatesNames + (idx++ * 100), "Integrator_CSTATE_d");
  }

  if ((discStates != NULL) && (discStatesNames != NULL)) {
    idx = 0;
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_DW.Inputtomodel_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_DW.Inputtomodel_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_DW.OutputtoWorkspace_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_DW.OutputtoWorkspace_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.Startbutton_DWORK1,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.Startbutton_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_p_x_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_p_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_p_y_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_p_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_p_psi_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_p_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_i_psi_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_i_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_i_x_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_i_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_i_y_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_i_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_d_psi_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_d_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_d_x_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_d_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_d_y_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_d_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.x_m_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.x_m_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.y_m_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.y_m_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.psi_m_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.psi_m_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.tau_surge_DWORK1,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.tau_surge_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.tau_sway_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.tau_sway_DWORK1");
    for (count = 0; count < 6; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.Startbutton1_DWORK1, count, 23, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.Startbutton1_DWORK1");
    }

    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.tau_psi_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.tau_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.psi_hat_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.psi_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.x_hat_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.x_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.y_hat_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.y_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.thr_angle_1_DWORK1,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.thr_angle_1_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.thr_angle_2_DWORK1,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.thr_angle_2_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.thr_angle_3_DWORK1,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.thr_angle_3_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.thr_angle_4_DWORK1,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.thr_angle_4_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.thr_angle_5_DWORK1,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.thr_angle_5_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.thr_angle_6_DWORK1,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.thr_angle_6_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_DW.Angle_controller_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_DW.Angle_controller_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_DW.tau_commanded_psi_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_DW.tau_commanded_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_DW.tau_commanded_x_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_DW.tau_commanded_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.x_hat_DWORK1_o, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.x_hat_DWORK1_o");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.y_hat_DWORK1_d, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.y_hat_DWORK1_d");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.psi_hat_DWORK1_g,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.psi_hat_DWORK1_g");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u_hat_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.v_hat_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.v_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.r_hat_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.r_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u_dot_hat_DWORK1,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u_dot_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.v_dot_hat_DWORK1,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.v_dot_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.r_dot_hat_DWORK1,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.r_dot_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.b_x_hat_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.b_x_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.b_y_hat_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.b_y_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.b_psi_hat_DWORK1,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.b_psi_hat_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.alpha1_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.alpha1_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.alpha2_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.alpha2_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.alpha3_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.alpha3_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.alpha4_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.alpha4_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.alpha5_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.alpha5_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.alpha6_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.alpha6_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u1_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u1_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u2_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u2_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u3_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u3_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u4_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u4_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u5_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u5_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u6_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u6_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_DW.tau_commanded_y_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_DW.tau_commanded_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.y_error_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.y_error_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.psi_error_DWORK1,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.psi_error_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.x_error_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.x_error_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.Integral_x_DWORK1,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.Integral_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType
      (&ctrl_custom_DW.Integral_psi_DWORK1, 0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100),
           "&ctrl_custom_DW.Integral_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.Integral_y_DWORK1,
      0, 0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.Integral_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.x_ref_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.x_ref_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.y_ref_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.y_ref_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.psi_ref_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.psi_ref_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.w_x_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.w_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.w_y_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.w_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.w_psi_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.w_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.zeta_psi_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.zeta_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.zeta_x_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.zeta_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.zeta_y_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.zeta_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.T_psi_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.T_psi_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.T_x_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.T_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.T_y_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.T_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.Acc_x_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.Acc_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.Acc_y_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.Acc_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.Acc_z_DWORK1, 0, 0,
      0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.Acc_z_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.Gyro_x_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.Gyro_x_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.Gyro_y_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.Gyro_y_DWORK1");
    discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.Gyro_z_DWORK1, 0,
      0, 0);
    strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.Gyro_z_DWORK1");
    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.Inputtomodel_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.Inputtomodel_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.OutputtoWorkspace_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.OutputtoWorkspace_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.Startbutton_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.Startbutton_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_p_x_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_p_x_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_p_y_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_p_y_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_p_psi_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_p_psi_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_i_psi_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_i_psi_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_i_x_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_i_x_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_i_y_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_i_y_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_d_psi_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_d_psi_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_d_x_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_d_x_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.K_d_y_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.K_d_y_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.x_m_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.x_m_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.y_m_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.y_m_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.psi_m_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.psi_m_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.tau_surge_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.tau_surge_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.tau_sway_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.tau_sway_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.Startbutton1_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.Startbutton1_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.tau_psi_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.tau_psi_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.psi_hat_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.psi_hat_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.x_hat_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.x_hat_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.y_hat_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.y_hat_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.thr_angle_1_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.thr_angle_1_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.thr_angle_2_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.thr_angle_2_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.thr_angle_3_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.thr_angle_3_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.thr_angle_4_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.thr_angle_4_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.thr_angle_5_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.thr_angle_5_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.thr_angle_6_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.thr_angle_6_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.Angle_controller_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.Angle_controller_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.tau_commanded_psi_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.tau_commanded_psi_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.tau_commanded_x_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.tau_commanded_x_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.x_hat_DWORK2_b,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.x_hat_DWORK2_b");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.y_hat_DWORK2_l,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.y_hat_DWORK2_l");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.psi_hat_DWORK2_k,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.psi_hat_DWORK2_k");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u_hat_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u_hat_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.v_hat_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.v_hat_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.r_hat_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.r_hat_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u_dot_hat_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u_dot_hat_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.v_dot_hat_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.v_dot_hat_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.r_dot_hat_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.r_dot_hat_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.b_x_hat_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.b_x_hat_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.b_y_hat_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.b_y_hat_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.b_psi_hat_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.b_psi_hat_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.alpha1_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.alpha1_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.alpha2_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.alpha2_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.alpha3_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.alpha3_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.alpha4_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.alpha4_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.alpha5_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.alpha5_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.alpha6_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.alpha6_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u1_DWORK2, count,
        24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u1_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u2_DWORK2, count,
        24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u2_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u3_DWORK2, count,
        24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u3_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u4_DWORK2, count,
        24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u4_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u5_DWORK2, count,
        24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u5_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.u6_DWORK2, count,
        24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.u6_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.tau_commanded_y_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.tau_commanded_y_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.y_error_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.y_error_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.psi_error_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.psi_error_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.x_error_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.x_error_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.Integral_x_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.Integral_x_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.Integral_psi_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.Integral_psi_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.Integral_y_DWORK2, count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.Integral_y_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.x_ref_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.x_ref_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.y_ref_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.y_ref_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.psi_ref_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.psi_ref_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.w_x_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.w_x_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.w_y_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.w_y_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.w_psi_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.w_psi_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.zeta_psi_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.zeta_psi_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.zeta_x_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.zeta_x_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.zeta_y_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.zeta_y_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.T_psi_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.T_psi_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.T_x_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.T_x_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.T_y_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.T_y_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.Acc_x_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.Acc_x_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.Acc_y_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.Acc_y_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.Acc_z_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.Acc_z_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.Gyro_x_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.Gyro_x_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.Gyro_y_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.Gyro_y_DWORK2");
    }

    for (count = 0; count < 12; count++) {
      discStates[idx] = NIRT_GetValueByDataType(&ctrl_custom_DW.Gyro_z_DWORK2,
        count, 24, 0);
      strcpy(discStatesNames + (idx++ * 100), "&ctrl_custom_DW.Gyro_z_DWORK2");
    }

    for (ForEach_itr1 = 0; ForEach_itr1 < 6; ForEach_itr1++) {
      discStates[idx] = NIRT_GetValueByDataType
        (&ctrl_custom_DW.CoreSubsys[ForEach_itr1].Delay_DSTATE, 0, 0, 0);
      strcpy(discStatesNames + (idx++ * 100),
             "&ctrl_custom_DW.CoreSubsys[ForEach_itr1].Delay_DSTATE");
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
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator_CSTATE), 0,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator_CSTATE), 1,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator_CSTATE), 2,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator2_CSTATE), 0,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator2_CSTATE), 1,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator2_CSTATE), 2,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator1_CSTATE), 0,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator1_CSTATE), 1,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator1_CSTATE), 2,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator1_CSTATE_d), 0,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator1_CSTATE_d), 1,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator1_CSTATE_d), 2,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator1_CSTATE_n), 0,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator1_CSTATE_n), 1,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator1_CSTATE_n), 2,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator2_CSTATE_j), 0,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator2_CSTATE_j), 1,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator2_CSTATE_j), 2,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator_CSTATE_f), 0,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator_CSTATE_f), 1,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.Integrator_CSTATE_f), 2,
      contStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&(ctrl_custom_X.CoreSubsys[5].Integrator_CSTATE_d),
      0, contStates[idx++], 0, 0);
  }

  if (discStates != NULL) {
    idx = 0;
    NIRT_SetValueByDataType(&ctrl_custom_DW.Inputtomodel_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.OutputtoWorkspace_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.Startbutton_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.K_p_x_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.K_p_y_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.K_p_psi_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.K_i_psi_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.K_i_x_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.K_i_y_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.K_d_psi_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.K_d_x_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.K_d_y_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.x_m_DWORK1, 0, discStates[idx++], 0,
      0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.y_m_DWORK1, 0, discStates[idx++], 0,
      0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.psi_m_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.tau_surge_DWORK1, 0, discStates[idx
      ++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.tau_sway_DWORK1, 0, discStates[idx++],
      0, 0);
    for (count = 0; count < 6; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.Startbutton1_DWORK1, count,
        discStates[idx++], 23, 0);
    }

    NIRT_SetValueByDataType(&ctrl_custom_DW.tau_psi_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.psi_hat_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.x_hat_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.y_hat_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.thr_angle_1_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.thr_angle_2_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.thr_angle_3_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.thr_angle_4_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.thr_angle_5_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.thr_angle_6_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.Angle_controller_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.tau_commanded_psi_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.tau_commanded_x_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.x_hat_DWORK1_o, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.y_hat_DWORK1_d, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.psi_hat_DWORK1_g, 0, discStates[idx
      ++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.u_hat_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.v_hat_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.r_hat_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.u_dot_hat_DWORK1, 0, discStates[idx
      ++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.v_dot_hat_DWORK1, 0, discStates[idx
      ++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.r_dot_hat_DWORK1, 0, discStates[idx
      ++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.b_x_hat_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.b_y_hat_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.b_psi_hat_DWORK1, 0, discStates[idx
      ++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.alpha1_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.alpha2_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.alpha3_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.alpha4_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.alpha5_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.alpha6_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.u1_DWORK1, 0, discStates[idx++], 0,
      0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.u2_DWORK1, 0, discStates[idx++], 0,
      0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.u3_DWORK1, 0, discStates[idx++], 0,
      0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.u4_DWORK1, 0, discStates[idx++], 0,
      0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.u5_DWORK1, 0, discStates[idx++], 0,
      0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.u6_DWORK1, 0, discStates[idx++], 0,
      0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.tau_commanded_y_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.y_error_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.psi_error_DWORK1, 0, discStates[idx
      ++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.x_error_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.Integral_x_DWORK1, 0, discStates[idx
      ++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.Integral_psi_DWORK1, 0,
      discStates[idx++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.Integral_y_DWORK1, 0, discStates[idx
      ++], 0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.x_ref_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.y_ref_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.psi_ref_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.w_x_DWORK1, 0, discStates[idx++], 0,
      0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.w_y_DWORK1, 0, discStates[idx++], 0,
      0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.w_psi_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.zeta_psi_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.zeta_x_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.zeta_y_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.T_psi_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.T_x_DWORK1, 0, discStates[idx++], 0,
      0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.T_y_DWORK1, 0, discStates[idx++], 0,
      0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.Acc_x_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.Acc_y_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.Acc_z_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.Gyro_x_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.Gyro_y_DWORK1, 0, discStates[idx++],
      0, 0);
    NIRT_SetValueByDataType(&ctrl_custom_DW.Gyro_z_DWORK1, 0, discStates[idx++],
      0, 0);
    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.Inputtomodel_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.OutputtoWorkspace_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.Startbutton_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.K_p_x_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.K_p_y_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.K_p_psi_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.K_i_psi_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.K_i_x_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.K_i_y_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.K_d_psi_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.K_d_x_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.K_d_y_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.x_m_DWORK2, count, discStates[idx
        ++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.y_m_DWORK2, count, discStates[idx
        ++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.psi_m_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.tau_surge_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.tau_sway_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.Startbutton1_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.tau_psi_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.psi_hat_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.x_hat_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.y_hat_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.thr_angle_1_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.thr_angle_2_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.thr_angle_3_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.thr_angle_4_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.thr_angle_5_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.thr_angle_6_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.Angle_controller_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.tau_commanded_psi_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.tau_commanded_x_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.x_hat_DWORK2_b, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.y_hat_DWORK2_l, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.psi_hat_DWORK2_k, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.u_hat_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.v_hat_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.r_hat_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.u_dot_hat_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.v_dot_hat_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.r_dot_hat_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.b_x_hat_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.b_y_hat_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.b_psi_hat_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.alpha1_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.alpha2_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.alpha3_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.alpha4_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.alpha5_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.alpha6_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.u1_DWORK2, count, discStates[idx++],
        24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.u2_DWORK2, count, discStates[idx++],
        24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.u3_DWORK2, count, discStates[idx++],
        24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.u4_DWORK2, count, discStates[idx++],
        24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.u5_DWORK2, count, discStates[idx++],
        24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.u6_DWORK2, count, discStates[idx++],
        24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.tau_commanded_y_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.y_error_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.psi_error_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.x_error_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.Integral_x_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.Integral_psi_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.Integral_y_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.x_ref_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.y_ref_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.psi_ref_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.w_x_DWORK2, count, discStates[idx
        ++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.w_y_DWORK2, count, discStates[idx
        ++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.w_psi_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.zeta_psi_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.zeta_x_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.zeta_y_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.T_psi_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.T_x_DWORK2, count, discStates[idx
        ++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.T_y_DWORK2, count, discStates[idx
        ++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.Acc_x_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.Acc_y_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.Acc_z_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.Gyro_x_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.Gyro_y_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (count = 0; count < 12; count++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.Gyro_z_DWORK2, count,
        discStates[idx++], 24, 0);
    }

    for (ForEach_itr1 = 0; ForEach_itr1 < 6; ForEach_itr1++) {
      NIRT_SetValueByDataType(&ctrl_custom_DW.CoreSubsys[ForEach_itr1].
        Delay_DSTATE, 0, discStates[idx++], 0, 0);
    }
  }

  if (clockTicks != NULL) {
    S->Timing.clockTick0 = clockTicks[0];
    S->Timing.clockTick1 = clockTicks[0];
  }

  return NI_OK;
}

#endif                                 // of NI_ROOTMODEL_ctrl_custom
