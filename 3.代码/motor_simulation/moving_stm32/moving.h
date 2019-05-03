/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: moving.h
 *
 * Code generated for Simulink model :moving.
 *
 * Model version      : 1.1
 * Simulink Coder version    : 8.14 (R2018a) 06-Feb-2018
 * TLC version       : 8.14 (Feb 22 2018)
 * C/C++ source code generated on  : Fri Nov  9 19:12:53 2018
 *
 * Target selection: stm32.tlc
 * Embedded hardware selection: STMicroelectronics->STM32 32-bit Cortex-M
 * Code generation objectives: Unspecified
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

#ifndef RTW_HEADER_moving_h_
#define RTW_HEADER_moving_h_
#include "STM32_Config.h"
#include "moving_External_Functions.h"
#include "moving_TIM.h"
#ifndef moving_COMMON_INCLUDES_
# define moving_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* moving_COMMON_INCLUDES_ */

#include "moving_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T PulseGenerator;               /* '<Root>/Pulse Generator' */
} B_moving;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
} DW_moving;

/* Real-time Model Data Structure */
struct tag_RTM_moving {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
extern B_moving moving_B;

/* Block states (default storage) */
extern DW_moving moving_DW;

/* Model entry point functions */
extern void moving_initialize(void);
extern void moving_step(void);

/* Real-time Model object */
extern RT_MODEL_moving *const moving_M;

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
 * '<Root>' : 'moving'
 */

/*-
 * Requirements for '<Root>': moving
 */
#endif                                 /* RTW_HEADER_moving_h_ */

/* File trailer for Real-Time Workshop generated code.
 *
 * [EOF] moving.h
 */
