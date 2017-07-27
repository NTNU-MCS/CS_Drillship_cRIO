#include "ni_modelframework.h"
#if defined VXWORKS || defined kNIOSLinux
#define ctrl_custom_P                  ctrl_custom_P DataSection(".NIVS.defaultparams")
#endif

/*
 * ctrl_custom_data.c
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

/* Block parameters (auto storage) */
P_ctrl_custom_T ctrl_custom_P = {
  /*  Variable: C
   * Referenced by: '<S11>/C'
   */
  { 48.6, 98.3, -98.3, -144.3, -97.1, 97.1, 30.5, 81.8, -81.8, -128.3, -82.9,
    82.9, -48.6, 149.5, -149.5, 144.3, -51.7, 51.7, -30.5, 131.4, -131.4, 128.3,
    -35.7, 35.7 },
  113.84199576606166,                  /* Variable: Max_rotation
                                        * Referenced by: '<S42>/Max Rotation Rate'
                                        */
  1.5,                                 /* Variable: Max_thrust
                                        * Referenced by:
                                        *   '<S48>/Saturation 1'
                                        *   '<S48>/Saturation 10'
                                        *   '<S48>/Saturation 12'
                                        *   '<S48>/Saturation 3'
                                        *   '<S48>/Saturation 5'
                                        *   '<S48>/Saturation 7'
                                        *   '<S48>/Saturation 8'
                                        */
  -0.8,                                /* Variable: Min_thrust
                                        * Referenced by:
                                        *   '<S48>/Saturation 11'
                                        *   '<S48>/Saturation 13'
                                        *   '<S48>/Saturation 2'
                                        *   '<S48>/Saturation 4'
                                        *   '<S48>/Saturation 6'
                                        *   '<S48>/Saturation 9'
                                        */
  1.0E-5,                              /* Variable: eps
                                        * Referenced by: '<S11>/Constant to avoid singularities'
                                        */

  /*  Variable: pwm_thr1_backward
   * Referenced by: '<S48>/negative thrust 1'
   */
  { 23.858914520951675, 45.487296349541758, 32.584102171246734,
    11.321799189832443, 2.6257008718619148, 0.0 },

  /*  Variable: pwm_thr1_forward
   * Referenced by: '<S48>/positive thrust 1'
   */
  { 1.0437188757069087, -4.10008469444801, 5.9676587487121653,
    -4.0556175414295863, 1.6981486523891973, 0.0 },

  /*  Variable: pwm_thr2_backward
   * Referenced by: '<S48>/negative thrust 2'
   */
  { 29.28190056232728, 48.6796996344427, 30.964450957766427, 9.8961003665057685,
    2.3538417726621028, 0.0 },

  /*  Variable: pwm_thr2_forward
   * Referenced by: '<S48>/positive thrust 2'
   */
  { 1.890960989689388, -7.26721394653808, 10.26706684230728, -6.5866315093490115,
    2.2382976000126908, 0.0 },

  /*  Variable: pwm_thr3_backward
   * Referenced by: '<S48>/negative thrust 3'
   */
  { 5.2933350764377467, 14.470101945380295, 14.4505772814463, 6.6893449552111992,
    1.9982315262022992, 0.0 },

  /*  Variable: pwm_thr3_forward
   * Referenced by: '<S48>/positive thrust 3'
   */
  { 0.59698789481905279, -2.6647929382815767, 4.3639359174399379,
    -3.2359585036650267, 1.4134488071785341, 0.0 },

  /*  Variable: pwm_thr4_backward
   * Referenced by: '<S48>/negative thrust 4'
   */
  { 10.188960322383711, 21.543797347285327, 17.5946608663671, 6.9960214191312735,
    1.9833768869949366, 0.0 },

  /*  Variable: pwm_thr4_forward
   * Referenced by: '<S48>/positive thrust 4'
   */
  { 0.59250110337560435, -2.6682793167830323, 4.3839656064579033,
    -3.280925565471656, 1.4315636484406693, 0.0 },

  /*  Variable: pwm_thr5_backward
   * Referenced by: '<S48>/negative thrust 5'
   */
  { -4.5659540415934572, -3.9398286334753525, 2.0549373573279652,
    3.1267224384042631, 1.6413495574372636, 0.0 },

  /*  Variable: pwm_thr5_forward
   * Referenced by: '<S48>/positive thrust 5'
   */
  { 0.38422544884586179, -1.8313184733173447, 3.1790261931696282,
    -2.5146416771703, 1.2272252829155301, 0.0 },

  /*  Variable: pwm_thr6_backward
   * Referenced by: '<S48>/negative thrust 6'
   */
  { -4.0408837176575458, -4.2759218204694731, 0.72627126782596219,
    2.4673330414921106, 1.5907799268739142, 0.0 },

  /*  Variable: pwm_thr6_forward
   * Referenced by: '<S48>/positive thrust 6'
   */
  { 0.34170819920782325, -1.6507668316464681, 2.9570827674984934,
    -2.4532796938007815, 1.2290292377141927, 0.0 },
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/Input to model'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/Input to model'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/Input to model'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/Input to model'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/Input to model'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/Input to model'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/Output to Workspace'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/Output to Workspace'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/Output to Workspace'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/Output to Workspace'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/Output to Workspace'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/Output to Workspace'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/Startbutton'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/Startbutton'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/Startbutton'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/Startbutton'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/Startbutton'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/Startbutton'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S16>/K_p_x'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S16>/K_p_x'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S16>/K_p_x'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S16>/K_p_x'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S16>/K_p_x'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S16>/K_p_x'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S16>/K_p_y'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S16>/K_p_y'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S16>/K_p_y'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S16>/K_p_y'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S16>/K_p_y'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S16>/K_p_y'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S16>/K_p_psi'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S16>/K_p_psi'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S16>/K_p_psi'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S16>/K_p_psi'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S16>/K_p_psi'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S16>/K_p_psi'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S16>/K_i_psi'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S16>/K_i_psi'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<S16>/K_i_psi'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S16>/K_i_psi'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S16>/K_i_psi'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S16>/K_i_psi'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S16>/K_i_x'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S16>/K_i_x'
                                        */
  5.0,                                 /* Expression: portnum
                                        * Referenced by: '<S16>/K_i_x'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S16>/K_i_x'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S16>/K_i_x'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S16>/K_i_x'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S16>/K_i_y'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S16>/K_i_y'
                                        */
  6.0,                                 /* Expression: portnum
                                        * Referenced by: '<S16>/K_i_y'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S16>/K_i_y'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S16>/K_i_y'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S16>/K_i_y'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S16>/K_d_psi'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S16>/K_d_psi'
                                        */
  7.0,                                 /* Expression: portnum
                                        * Referenced by: '<S16>/K_d_psi'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S16>/K_d_psi'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S16>/K_d_psi'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S16>/K_d_psi'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S16>/K_d_x'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S16>/K_d_x'
                                        */
  8.0,                                 /* Expression: portnum
                                        * Referenced by: '<S16>/K_d_x'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S16>/K_d_x'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S16>/K_d_x'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S16>/K_d_x'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S16>/K_d_y'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S16>/K_d_y'
                                        */
  9.0,                                 /* Expression: portnum
                                        * Referenced by: '<S16>/K_d_y'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S16>/K_d_y'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S16>/K_d_y'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S16>/K_d_y'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S8>/x_m'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S8>/x_m'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S8>/x_m'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S8>/x_m'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S8>/x_m'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S8>/x_m'
                                        */
  0.001,                               /* Expression: 1/1000
                                        * Referenced by: '<S8>/Gain'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S8>/y_m'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S8>/y_m'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S8>/y_m'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S8>/y_m'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S8>/y_m'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S8>/y_m'
                                        */
  0.001,                               /* Expression: 1/1000
                                        * Referenced by: '<S8>/Gain1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S8>/psi_m'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S8>/psi_m'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S8>/psi_m'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S8>/psi_m'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S8>/psi_m'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S8>/psi_m'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S8>/Gain5'
                                        */
  1.0E+10,                             /* Expression: 1e10
                                        * Referenced by: '<S8>/Saturation'
                                        */
  -1.0E+10,                            /* Expression: -1e10
                                        * Referenced by: '<S8>/Saturation'
                                        */
  3.1415926535897931,                  /* Expression: pi
                                        * Referenced by: '<S8>/Gain6'
                                        */
  6.2831853071795862,                  /* Expression: 2*pi
                                        * Referenced by: '<S8>/Constant1'
                                        */
  1.0E+10,                             /* Expression: 1e10
                                        * Referenced by: '<S27>/Saturation'
                                        */
  -1.0E+10,                            /* Expression: -1e10
                                        * Referenced by: '<S27>/Saturation'
                                        */
  3.1415926535897931,                  /* Expression: pi
                                        * Referenced by: '<S27>/Gain'
                                        */
  6.2831853071795862,                  /* Expression: 2*pi
                                        * Referenced by: '<S27>/Constant'
                                        */
  1.0E+10,                             /* Expression: 1e10
                                        * Referenced by: '<S36>/Saturation'
                                        */
  -1.0E+10,                            /* Expression: -1e10
                                        * Referenced by: '<S36>/Saturation'
                                        */
  3.1415926535897931,                  /* Expression: pi
                                        * Referenced by: '<S36>/Gain'
                                        */
  6.2831853071795862,                  /* Expression: 2*pi
                                        * Referenced by: '<S36>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Integrator2'
                                        */
  1.0E+10,                             /* Expression: 1e10
                                        * Referenced by: '<S40>/Saturation'
                                        */
  -1.0E+10,                            /* Expression: -1e10
                                        * Referenced by: '<S40>/Saturation'
                                        */
  3.1415926535897931,                  /* Expression: pi
                                        * Referenced by: '<S40>/Gain'
                                        */
  6.2831853071795862,                  /* Expression: 2*pi
                                        * Referenced by: '<S40>/Constant'
                                        */
  1.0E+10,                             /* Expression: 1e10
                                        * Referenced by: '<S35>/Saturation'
                                        */
  -1.0E+10,                            /* Expression: -1e10
                                        * Referenced by: '<S35>/Saturation'
                                        */
  3.1415926535897931,                  /* Expression: pi
                                        * Referenced by: '<S35>/Gain'
                                        */
  6.2831853071795862,                  /* Expression: 2*pi
                                        * Referenced by: '<S35>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Integrator1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Integrator1'
                                        */

  /*  Expression: [0 0 0]'
   * Referenced by: '<S5>/Integrator1'
   */
  { 0.0, 0.0, 0.0 },
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/tau_surge'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/tau_surge'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/tau_surge'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/tau_surge'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/tau_surge'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/tau_surge'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/tau_sway'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/tau_sway'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/tau_sway'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/tau_sway'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/tau_sway'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/tau_sway'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/Startbutton1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/Startbutton1'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/Startbutton1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/Startbutton1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/Startbutton1'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/Startbutton1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/tau_psi'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/tau_psi'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/tau_psi'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/tau_psi'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/tau_psi'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/tau_psi'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<Root>/Gain5'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/psi_hat'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/psi_hat'
                                        */
  5.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/psi_hat'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/psi_hat'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/psi_hat'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/psi_hat'
                                        */
  1000.0,                              /* Expression: 1000
                                        * Referenced by: '<Root>/Gain'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/x_hat'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/x_hat'
                                        */
  6.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/x_hat'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/x_hat'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/x_hat'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/x_hat'
                                        */
  1000.0,                              /* Expression: 1000
                                        * Referenced by: '<Root>/Gain1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/y_hat'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/y_hat'
                                        */
  7.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/y_hat'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/y_hat'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/y_hat'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/y_hat'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S14>/thr_angle_1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S14>/thr_angle_1'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S14>/thr_angle_1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S14>/thr_angle_1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S14>/thr_angle_1'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S14>/thr_angle_1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S14>/thr_angle_2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S14>/thr_angle_2'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S14>/thr_angle_2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S14>/thr_angle_2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S14>/thr_angle_2'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S14>/thr_angle_2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S14>/thr_angle_3'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S14>/thr_angle_3'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S14>/thr_angle_3'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S14>/thr_angle_3'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S14>/thr_angle_3'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S14>/thr_angle_3'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S14>/thr_angle_4'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S14>/thr_angle_4'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<S14>/thr_angle_4'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S14>/thr_angle_4'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S14>/thr_angle_4'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S14>/thr_angle_4'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S14>/thr_angle_5'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S14>/thr_angle_5'
                                        */
  5.0,                                 /* Expression: portnum
                                        * Referenced by: '<S14>/thr_angle_5'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S14>/thr_angle_5'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S14>/thr_angle_5'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S14>/thr_angle_5'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S14>/thr_angle_6'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S14>/thr_angle_6'
                                        */
  6.0,                                 /* Expression: portnum
                                        * Referenced by: '<S14>/thr_angle_6'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S14>/thr_angle_6'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S14>/thr_angle_6'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S14>/thr_angle_6'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S43>/Gain'
                                        */

  /*  Expression: [Thruster.T1(1) Thruster.T2(1) Thruster.T3(1) Thruster.T4(1) Thruster.T5(1) Thruster.T6(1)]
   * Referenced by: '<S11>/X-position Thruster'
   */
  { 1.0677777777777777, 0.93444444444444441, 0.93444444444444441,
    -1.1644444444444444, -0.99111111111111116, -0.99111111111111116 },

  /*  Expression: [Thruster.T1(2) Thruster.T2(2) Thruster.T3(2) Thruster.T4(2) Thruster.T5(2) Thruster.T6(2)]
   * Referenced by: '<S11>/Y-position Thruster'
   */
  { 0.0, 0.11, -0.11, 0.0, -0.16555555555555557, 0.16555555555555557 },
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S11>/Angle_controller'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S11>/Angle_controller'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S11>/Angle_controller'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S11>/Angle_controller'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S11>/Angle_controller'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S11>/Angle_controller'
                                        */

  /*  Expression: [Thruster.T1(3) Thruster.T2(3) Thruster.T3(3) Thruster.T4(3) Thruster.T5(3) Thruster.T6(3)]
   * Referenced by: '<S11>/constant angle'
   */
  { 180.0, -135.0, 90.0, 0.0, 45.0, -90.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S11>/Choosing Fixed // Azimuth angle'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S9>/Gain'
                                        */

  /*  Expression: [Thruster.T1(1) Thruster.T2(1) Thruster.T3(1) Thruster.T4(1) Thruster.T5(1) Thruster.T6(1)]
   * Referenced by: '<Root>/X-position Thruster'
   */
  { 1.0677777777777777, 0.93444444444444441, 0.93444444444444441,
    -1.1644444444444444, -0.99111111111111116, -0.99111111111111116 },

  /*  Expression: [Thruster.T1(2) Thruster.T2(2) Thruster.T3(2) Thruster.T4(2) Thruster.T5(2) Thruster.T6(2)]
   * Referenced by: '<Root>/Y-position Thruster'
   */
  { 0.0, 0.11, -0.11, 0.0, -0.16555555555555557, 0.16555555555555557 },
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/tau_commanded_psi'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/tau_commanded_psi'
                                        */
  8.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/tau_commanded_psi'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/tau_commanded_psi'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/tau_commanded_psi'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/tau_commanded_psi'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/tau_commanded_x'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/tau_commanded_x'
                                        */
  9.0,                                 /* Expression: portnum
                                        * Referenced by: '<Root>/tau_commanded_x'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/tau_commanded_x'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/tau_commanded_x'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/tau_commanded_x'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S30>/x_hat'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S30>/x_hat'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S30>/x_hat'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S30>/x_hat'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S30>/x_hat'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S30>/x_hat'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S30>/y_hat'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S30>/y_hat'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S30>/y_hat'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S30>/y_hat'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S30>/y_hat'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S30>/y_hat'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S30>/psi_hat'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S30>/psi_hat'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S30>/psi_hat'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S30>/psi_hat'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S30>/psi_hat'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S30>/psi_hat'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S32>/u_hat'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S32>/u_hat'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S32>/u_hat'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S32>/u_hat'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S32>/u_hat'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S32>/u_hat'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S32>/v_hat'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S32>/v_hat'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S32>/v_hat'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S32>/v_hat'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S32>/v_hat'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S32>/v_hat'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S32>/r_hat'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S32>/r_hat'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S32>/r_hat'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S32>/r_hat'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S32>/r_hat'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S32>/r_hat'
                                        */
  1.0E+10,                             /* Expression: 1e10
                                        * Referenced by: '<S28>/Saturation'
                                        */
  -1.0E+10,                            /* Expression: -1e10
                                        * Referenced by: '<S28>/Saturation'
                                        */
  3.1415926535897931,                  /* Expression: pi
                                        * Referenced by: '<S28>/Gain'
                                        */
  6.2831853071795862,                  /* Expression: 2*pi
                                        * Referenced by: '<S28>/Constant'
                                        */

  /*  Expression: [0 0 0]'
   * Referenced by: '<S5>/Integrator2'
   */
  { 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/Constant6'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/Constant7'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/Constant8'
                                        */

  /*  Expression: [0.008021948049864 0 0;0 0.010098125265799 1.104781662647098e-04;0 3.303823257820844e-05 0.020839338676560]
   * Referenced by: '<S5>/M^-1'
   */
  { 0.008021948049864, 0.0, 0.0, 0.0, 0.010098125265799, 3.303823257820844E-5,
    0.0, 0.0001104781662647098, 0.02083933867656 },
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S31>/u_dot_hat'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S31>/u_dot_hat'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S31>/u_dot_hat'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S31>/u_dot_hat'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S31>/u_dot_hat'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S31>/u_dot_hat'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S31>/v_dot_hat'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S31>/v_dot_hat'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S31>/v_dot_hat'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S31>/v_dot_hat'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S31>/v_dot_hat'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S31>/v_dot_hat'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S31>/r_dot_hat'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S31>/r_dot_hat'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S31>/r_dot_hat'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S31>/r_dot_hat'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S31>/r_dot_hat'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S31>/r_dot_hat'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S29>/b_x_hat'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S29>/b_x_hat'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S29>/b_x_hat'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S29>/b_x_hat'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S29>/b_x_hat'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S29>/b_x_hat'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S29>/b_y_hat'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S29>/b_y_hat'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S29>/b_y_hat'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S29>/b_y_hat'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S29>/b_y_hat'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S29>/b_y_hat'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S29>/b_psi_hat'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S29>/b_psi_hat'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S29>/b_psi_hat'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S29>/b_psi_hat'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S29>/b_psi_hat'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S29>/b_psi_hat'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S15>/alpha1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S15>/alpha1'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S15>/alpha1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S15>/alpha1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S15>/alpha1'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S15>/alpha1'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S15>/alpha2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S15>/alpha2'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S15>/alpha2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S15>/alpha2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S15>/alpha2'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S15>/alpha2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S15>/alpha3'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S15>/alpha3'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<S15>/alpha3'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S15>/alpha3'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S15>/alpha3'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S15>/alpha3'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S15>/alpha4'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S15>/alpha4'
                                        */
  5.0,                                 /* Expression: portnum
                                        * Referenced by: '<S15>/alpha4'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S15>/alpha4'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S15>/alpha4'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S15>/alpha4'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S15>/alpha5'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S15>/alpha5'
                                        */
  6.0,                                 /* Expression: portnum
                                        * Referenced by: '<S15>/alpha5'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S15>/alpha5'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S15>/alpha5'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S15>/alpha5'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S15>/alpha6'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S15>/alpha6'
                                        */
  7.0,                                 /* Expression: portnum
                                        * Referenced by: '<S15>/alpha6'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S15>/alpha6'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S15>/alpha6'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S15>/alpha6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 2'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S15>/u1'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S15>/u1'
                                        */
  8.0,                                 /* Expression: portnum
                                        * Referenced by: '<S15>/u1'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S15>/u1'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S15>/u1'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S15>/u1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 8'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 9'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S15>/u2'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S15>/u2'
                                        */
  9.0,                                 /* Expression: portnum
                                        * Referenced by: '<S15>/u2'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S15>/u2'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S15>/u2'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S15>/u2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 10'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 11'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S15>/u3'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S15>/u3'
                                        */
  10.0,                                /* Expression: portnum
                                        * Referenced by: '<S15>/u3'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S15>/u3'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S15>/u3'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S15>/u3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 4'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S15>/u4'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S15>/u4'
                                        */
  11.0,                                /* Expression: portnum
                                        * Referenced by: '<S15>/u4'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S15>/u4'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S15>/u4'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S15>/u4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 6'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S15>/u5'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S15>/u5'
                                        */
  12.0,                                /* Expression: portnum
                                        * Referenced by: '<S15>/u5'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S15>/u5'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S15>/u5'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S15>/u5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S48>/Saturation 13'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S15>/u6'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S15>/u6'
                                        */
  13.0,                                /* Expression: portnum
                                        * Referenced by: '<S15>/u6'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S15>/u6'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S15>/u6'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S15>/u6'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<Root>/tau_commanded_y'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<Root>/tau_commanded_y'
                                        */
  10.0,                                /* Expression: portnum
                                        * Referenced by: '<Root>/tau_commanded_y'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<Root>/tau_commanded_y'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<Root>/tau_commanded_y'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<Root>/tau_commanded_y'
                                        */
  50.0,                                /* Expression: 50
                                        * Referenced by: '<S18>/Constant'
                                        */
  50.0,                                /* Expression: 50
                                        * Referenced by: '<S18>/Constant1'
                                        */
  50.0,                                /* Expression: 50
                                        * Referenced by: '<S18>/Constant2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/Constant3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/Constant4'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/Constant5'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S7>/y_error'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S7>/y_error'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S7>/y_error'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S7>/y_error'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S7>/y_error'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S7>/y_error'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S7>/Gain5'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S7>/psi_error'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S7>/psi_error'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S7>/psi_error'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S7>/psi_error'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S7>/psi_error'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S7>/psi_error'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S7>/x_error'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S7>/x_error'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S7>/x_error'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S7>/x_error'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S7>/x_error'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S7>/x_error'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S7>/Integral_x'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S7>/Integral_x'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<S7>/Integral_x'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S7>/Integral_x'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S7>/Integral_x'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S7>/Integral_x'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S7>/Integral_psi'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S7>/Integral_psi'
                                        */
  5.0,                                 /* Expression: portnum
                                        * Referenced by: '<S7>/Integral_psi'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S7>/Integral_psi'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S7>/Integral_psi'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S7>/Integral_psi'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S7>/Integral_y'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S7>/Integral_y'
                                        */
  6.0,                                 /* Expression: portnum
                                        * Referenced by: '<S7>/Integral_y'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S7>/Integral_y'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S7>/Integral_y'
                                        */
  0.0,                                 /* Expression: btype
                                        * Referenced by: '<S7>/Integral_y'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S10>/x_ref'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S10>/x_ref'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S10>/x_ref'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S10>/x_ref'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S10>/x_ref'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S10>/x_ref'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S10>/y_ref'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S10>/y_ref'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S10>/y_ref'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S10>/y_ref'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S10>/y_ref'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S10>/y_ref'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S10>/psi_ref'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S10>/psi_ref'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S10>/psi_ref'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S10>/psi_ref'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S10>/psi_ref'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S10>/psi_ref'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S10>/Gain5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Integrator'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S17>/w_x'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S17>/w_x'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S17>/w_x'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S17>/w_x'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S17>/w_x'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S17>/w_x'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S17>/w_y'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S17>/w_y'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S17>/w_y'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S17>/w_y'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S17>/w_y'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S17>/w_y'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S17>/w_psi'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S17>/w_psi'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S17>/w_psi'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S17>/w_psi'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S17>/w_psi'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S17>/w_psi'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S17>/zeta_psi'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S17>/zeta_psi'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<S17>/zeta_psi'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S17>/zeta_psi'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S17>/zeta_psi'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S17>/zeta_psi'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S17>/zeta_x'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S17>/zeta_x'
                                        */
  5.0,                                 /* Expression: portnum
                                        * Referenced by: '<S17>/zeta_x'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S17>/zeta_x'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S17>/zeta_x'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S17>/zeta_x'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S17>/zeta_y'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S17>/zeta_y'
                                        */
  6.0,                                 /* Expression: portnum
                                        * Referenced by: '<S17>/zeta_y'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S17>/zeta_y'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S17>/zeta_y'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S17>/zeta_y'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S17>/T_psi'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S17>/T_psi'
                                        */
  7.0,                                 /* Expression: portnum
                                        * Referenced by: '<S17>/T_psi'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S17>/T_psi'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S17>/T_psi'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S17>/T_psi'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S17>/T_x'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S17>/T_x'
                                        */
  8.0,                                 /* Expression: portnum
                                        * Referenced by: '<S17>/T_x'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S17>/T_x'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S17>/T_x'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S17>/T_x'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S17>/T_y'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S17>/T_y'
                                        */
  9.0,                                 /* Expression: portnum
                                        * Referenced by: '<S17>/T_y'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S17>/T_y'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S17>/T_y'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S17>/T_y'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  1.0,                                 /* Expression: portnum
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S1>/Acc_x'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  2.0,                                 /* Expression: portnum
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S1>/Acc_y'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  3.0,                                 /* Expression: portnum
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S1>/Acc_z'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  4.0,                                 /* Expression: portnum
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S1>/Gyro_x'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  5.0,                                 /* Expression: portnum
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S1>/Gyro_y'
                                        */
  -1.0,                                /* Expression: width
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  1.0,                                 /* Expression: dtype
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  6.0,                                 /* Expression: portnum
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  -1.0,                                /* Expression: stime
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  1.0,                                 /* Expression: stype
                                        * Referenced by: '<S1>/Gyro_z'
                                        */
  1.0,                                 /* Expression: btype
                                        * Referenced by: '<S1>/Gyro_z'
                                        */

  /* Start of '<S42>/CoreSubsys' */
  {
    0.017453292519943295,              /* Expression: pi/180
                                        * Referenced by: '<S45>/Gain1'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S42>/Delay'
                                        */
    1U                                 /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S42>/Delay'
                                        */
  }
  /* End of '<S42>/CoreSubsys' */
};

/*========================================================================*
 * NI VeriStand Model Framework code generation
 *
 * Model : ctrl_custom
 * Model version : 1.141
 * VeriStand Model Framework version : 2017.0.0.143 (2017)
 * Source generated on : Wed Jul 26 18:28:29 2017
 *========================================================================*/
#if defined VXWORKS || defined kNIOSLinux

typedef struct {
  int32_t size;
  int32_t width;
  int32_t basetype;
} NI_ParamSizeWidth;

NI_ParamSizeWidth P_ctrl_custom_T_sizes[] DataSection(".NIVS.defaultparamsizes")
  = {
  { sizeof(P_ctrl_custom_T), 1 },

  { sizeof(real_T), 24, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 3, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 6, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 3, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 9, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },

  { sizeof(real_T), 1, 0 },
};

#endif
