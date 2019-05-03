/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LED.h
 *
 * Code generated for Simulink model :LED.
 *
 * Model version      : 1.2
 * Simulink Coder version    : 8.14 (R2018a) 06-Feb-2018
 * TLC version       : 8.14 (Feb 22 2018)
 * C/C++ source code generated on  : Mon Nov  5 03:41:09 2018
 *
 * Target selection: stm32.tlc
 * Embedded hardware selection: STMicroelectronics->STM32 32-bit Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 *
 *
 *
 * ******************************************************************************
 * * attention
 * *
 * * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
 * * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
 * * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
 * * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
 * * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
 * * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
 * *
 * ******************************************************************************
 */

#ifndef RTW_HEADER_LED_h_
#define RTW_HEADER_LED_h_
#include "STM32_Config.h"
#include "LED_External_Functions.h"
#ifndef LED_COMMON_INCLUDES_
# define LED_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* LED_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#define LED_M                          (rtM)

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T PulseGenerator2;              /* '<Root>/Pulse Generator2' */
  real_T PulseGenerator;               /* '<Root>/Pulse Generator' */
  real_T PulseGenerator1;              /* '<Root>/Pulse Generator1' */
  real_T PulseGenerator3;              /* '<Root>/Pulse Generator3' */
  real_T PulseGenerator4;              /* '<Root>/Pulse Generator4' */
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator2' */
  int32_T clockTickCounter_c;          /* '<Root>/Pulse Generator' */
  int32_T clockTickCounter_g;          /* '<Root>/Pulse Generator1' */
  int32_T clockTickCounter_e;          /* '<Root>/Pulse Generator3' */
  int32_T clockTickCounter_l;          /* '<Root>/Pulse Generator4' */
} DW;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* Model entry point functions */
extern void LED_initialize(void);
extern void LED_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

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
 * '<Root>' : 'LED'
 */

/*-
 * Requirements for '<Root>': LED
 */
#endif                                 /* RTW_HEADER_LED_h_ */

/* File trailer for Real-Time Workshop generated code.
 *
 * [EOF] LED.h
 */
