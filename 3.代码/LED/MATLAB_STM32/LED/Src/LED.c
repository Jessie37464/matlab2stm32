/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LED.c
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

#include "LED.h"

/* Block signals and states (default storage) */
DW rtDW;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void LED_step(void)
{
  /* DiscretePulseGenerator: '<Root>/Pulse Generator2' */
  rtDW.PulseGenerator2 = ((rtDW.clockTickCounter < 1250) &&
    (rtDW.clockTickCounter >= 0));
  if (rtDW.clockTickCounter >= 2499) {
    rtDW.clockTickCounter = 0;
  } else {
    rtDW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator2' */

  /* S-Function (STM32_Config): '<Root>/STM32_Config' */
  /* S-Function Block: <Root>/STM32_Config */

  /* S-Function (GPIO_Write): '<Root>/GPIO_Write' */
  /* S-Function Block: <Root>/GPIO_Write */
  if (rtDW.PulseGenerator2 == 0)
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_RESET);
  else
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_SET);

  //

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtDW.PulseGenerator = ((rtDW.clockTickCounter_c < 1250) &&
    (rtDW.clockTickCounter_c >= 0));
  if (rtDW.clockTickCounter_c >= 2499) {
    rtDW.clockTickCounter_c = 0;
  } else {
    rtDW.clockTickCounter_c++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* S-Function (GPIO_Write): '<Root>/GPIO_Write1' */
  /* S-Function Block: <Root>/GPIO_Write1 */
  if (rtDW.PulseGenerator == 0)
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
  else
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);

  //

  /* DiscretePulseGenerator: '<Root>/Pulse Generator1' */
  rtDW.PulseGenerator1 = ((rtDW.clockTickCounter_g < 1250) &&
    (rtDW.clockTickCounter_g >= 0));
  if (rtDW.clockTickCounter_g >= 2499) {
    rtDW.clockTickCounter_g = 0;
  } else {
    rtDW.clockTickCounter_g++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator1' */

  /* S-Function (GPIO_Write): '<Root>/GPIO_Write2' */
  /* S-Function Block: <Root>/GPIO_Write2 */
  if (rtDW.PulseGenerator1 == 0)
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_RESET);
  else
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_SET);

  //

  /* DiscretePulseGenerator: '<Root>/Pulse Generator3' */
  rtDW.PulseGenerator3 = ((rtDW.clockTickCounter_e < 1250) &&
    (rtDW.clockTickCounter_e >= 0));
  if (rtDW.clockTickCounter_e >= 2499) {
    rtDW.clockTickCounter_e = 0;
  } else {
    rtDW.clockTickCounter_e++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator3' */

  /* S-Function (GPIO_Write): '<Root>/GPIO_Write3' */
  /* S-Function Block: <Root>/GPIO_Write3 */
  if (rtDW.PulseGenerator3 == 0)
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_RESET);
  else
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_SET);

  //

  /* DiscretePulseGenerator: '<Root>/Pulse Generator4' */
  rtDW.PulseGenerator4 = ((rtDW.clockTickCounter_l < 1250) &&
    (rtDW.clockTickCounter_l >= 0));
  if (rtDW.clockTickCounter_l >= 2499) {
    rtDW.clockTickCounter_l = 0;
  } else {
    rtDW.clockTickCounter_l++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator4' */

  /* S-Function (GPIO_Write): '<Root>/GPIO_Write4' */
  /* S-Function Block: <Root>/GPIO_Write4 */
  if (rtDW.PulseGenerator4 == 0)
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);
  else
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_SET);

  //
}

/* Model initialize function */
void LED_initialize(void)
{
  /* (no initialization code required) */
}

/* File trailer for Real-Time Workshop generated code.
 *
 * [EOF] LED.c
 */
