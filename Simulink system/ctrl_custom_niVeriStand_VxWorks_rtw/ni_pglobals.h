/*========================================================================*
 * NI VeriStand Model Framework code generation
 *
 * Model : ctrl_custom
 * Model version : 1.141
 * VeriStand Model Framework version : 2017.0.0.143 (2017)
 * Source generated on : Wed Jul 26 18:28:29 2017
 *========================================================================*/

/*
 * Note:
 *   This file was generated by the main model, ctrl_custom.
 *   This file redirects parameter references to the NI VeriStand rtParameter buffer.
 *
 *   In a model reference configuration, this file defines the globally shared parameter structure
 *   across all model references. All models must share the same type definition for proper execution.
 *
 */
#if !defined(_DEFINED_TYPEDEF_FOR_niUrtParametersTypeDef_)
#define _DEFINED_TYPEDEF_FOR_niUrtParametersTypeDef_

/* Parameters typedef identifier */
#define NI_PARAM_TYPEDEF               P_ctrl_custom_T
#endif

#if defined(_NI_DEFINE_PARAMS_DBL_BUFFER_)
#undef _NI_DEFINE_PARAMS_DBL_BUFFER_
#ifdef MULTITASKING
#define NI_PARAM_BUFF                  (*param_lookup[tid][READSIDE])
#else
#define NI_PARAM_BUFF                  rtParameter[READSIDE]
#endif

#define ctrl_custom_P                  NI_PARAM_BUFF
#elif defined(_NI_UNDEFINE_PARAMS_DBL_BUFFER_)
#undef _NI_UNDEFINE_PARAMS_DBL_BUFFER_
#undef ctrl_custom_P
#endif
