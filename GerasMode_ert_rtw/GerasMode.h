/*
 * File: GerasMode.h
 *
 * Code generated for Simulink model 'GerasMode'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Mon Nov 07 21:17:32 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_GerasMode_h_
#define RTW_HEADER_GerasMode_h_
#include <stddef.h>
#include <string.h>
#ifndef GerasMode_COMMON_INCLUDES_
# define GerasMode_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MyCopter.h"
#endif                                 /* GerasMode_COMMON_INCLUDES_ */

#include "GerasMode_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  void *Motors_PWORK;                  /* '<Root>/Motors' */
  Motors_GerasMode_T obj;              /* '<Root>/Motors' */
} DW_GerasMode_T;

/* Parameters (auto storage) */
struct P_GerasMode_T_ {
  real_T Constant_Value;               /* Expression: 2000
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant2_Value;              /* Expression: 1500
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant1_Value;              /* Expression: 2000
                                        * Referenced by: '<Root>/Constant1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_GerasMode_T {
  const char_T *errorStatus;
};

/* Block parameters (auto storage) */
extern P_GerasMode_T GerasMode_P;

/* Block states (auto storage) */
extern DW_GerasMode_T GerasMode_DW;

/* Model entry point functions */
extern void GerasMode_initialize(void);
extern void GerasMode_step(void);
extern void GerasMode_terminate(void);

/* Real-time Model object */
extern RT_MODEL_GerasMode_T *const GerasMode_M;

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
 * '<Root>' : 'GerasMode'
 */
#endif                                 /* RTW_HEADER_GerasMode_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
