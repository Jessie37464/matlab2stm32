/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: moving.c
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

#include "moving.h"
#include "moving_private.h"

/* Block signals (default storage) */
B_moving moving_B;

/* Block states (default storage) */
DW_moving moving_DW;

/* Real-time model */
RT_MODEL_moving moving_M_;
RT_MODEL_moving *const moving_M = &moving_M_;

/* Model step function */
void moving_step(void)
{
  /* S-Function (STM32_Config): '<Root>/STM32_Config' */
  /* S-Function Block: <Root>/STM32_Config */

  /* S-Function (GPIO_Write): '<Root>/GPIO_Write' incorporates:
   *  Constant: '<Root>/Constant'
   */
  /* S-Function Block: <Root>/GPIO_Write */
  if (1.0 == 0)
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_RESET);
  else
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET);

  //

  /* S-Function (GPIO_Write): '<Root>/GPIO_Write1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  /* S-Function Block: <Root>/GPIO_Write1 */
  if (0.0 == 0)
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_RESET);
  else
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET);

  //

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  moving_B.PulseGenerator = ((moving_DW.clockTickCounter < 50000) &&
    (moving_DW.clockTickCounter >= 0));
  if (moving_DW.clockTickCounter >= 99999) {
    moving_DW.clockTickCounter = 0;
  } else {
    moving_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* Update for S-Function (TIMERS_Config): '<Root>/Timers' */

  /* Timer frequency is an input port */
  if (moving_B.PulseGenerator != TIM1_DataLink.TIM_Freq) {
    TIM1_DataLink.TIM_Freq = moving_B.PulseGenerator;

    //Update channel4 duty cycle
    __HAL_TIM_SetCompare(&htim1, TIM_CHANNEL_4, (uint32_t)
                         (TIM1_DataLink.CH4_duty * (100000.0 /
      moving_B.PulseGenerator - 1) / 100));

    //Update frequency
    __HAL_TIM_SetAutoreload(&htim1, 100000.0 / moving_B.PulseGenerator - 1);
  }
}

/* Model initialize function */
void moving_initialize(void)
{
  /* user code (Start function Body) */

  /*Store TIM1 data information and its handler */
  G_TIM_Data = &TIM1_DataLink;
  G_TIM_Handler = &htim1;

  /*Store TIM information */
  TIM1_DataLink.TIM_Prescaler = 719;
  TIM1_DataLink.TIM_APBClock = 72000000;
  TIM1_DataLink.TIM_ARR = 1999 - 1;
  TIM1_DataLink.TIM_Clock = 100000.0;
  TIM1_DataLink.TIM_Freq = 50.03;
  TIM1_DataLink.CH1_duty = 0.0;
  TIM1_DataLink.CH2_duty = 0.0;
  TIM1_DataLink.CH3_duty = 0.0;
  TIM1_DataLink.CH4_duty = 50;
  TIM1_DataLink.CH1_type = UNKNOWN;
  TIM1_DataLink.CH2_type = UNKNOWN;
  TIM1_DataLink.CH3_type = UNKNOWN;
  TIM1_DataLink.CH4_type = OUTPUT_PWM;

  /* Interrupt vector initialization */
  TIM1_DataLink.ItUpFcn = NULL;
  TIM1_DataLink.ItTrgFcn = NULL;
  TIM1_DataLink.ItComFcn = NULL;
  TIM1_DataLink.ItBrkFcn = NULL;
  TIM1_DataLink.ItCcFcn = NULL;

  /* Auto-reload preload enable */
  SET_BIT((&htim1)->Instance->CR1, TIM_CR1_ARPE);

  /*Update register value with blocset value*/
  /*Prescaler*/
  __HAL_TIM_SET_PRESCALER(&htim1,TIM1_DataLink.TIM_Prescaler);

  /*Autoreload: ARR */
  __HAL_TIM_SetAutoreload(&htim1, 1999 - 1);

  /*Set CH4 Pulse value*/
  __HAL_TIM_SetCompare(&htim1, TIM_CHANNEL_4, (uint32_t)(999));

  /* Wait for htim1 State READY */
  while ((&htim1)->State == HAL_TIM_STATE_BUSY) {
  }

  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_4);

  /* Start for S-Function (TIMERS_Config): '<Root>/Timers' */
  ;
  ;
}

/* File trailer for Real-Time Workshop generated code.
 *
 * [EOF] moving.c
 */
