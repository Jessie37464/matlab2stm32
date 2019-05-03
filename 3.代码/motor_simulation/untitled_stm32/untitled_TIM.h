/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: untitled_TIM.h
 *
 * Code generated for Simulink model :untitled.
 *
 * Model version      : 1.0
 * Simulink Coder version    : 8.14 (R2018a) 06-Feb-2018
 * TLC version       : 8.14 (Feb 22 2018)
 * C/C++ source code generated on  : Fri Nov  9 19:11:52 2018
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

#ifndef RTW_HEADER_untitled_TIM_h_
#define RTW_HEADER_untitled_TIM_h_

//RP MODIF #include "untitled_STM32.h"
#include "STM32_Config.h"

/**
 * @brief  TIM data information
 */
typedef struct {
  uint32_t TIM_Prescaler;
  uint32_t TIM_APBClock;
  uint32_t TIM_ARR;
  uint32_t TIM_Clock;
  uint32_t TIM_Freq;
  uint8_t CH1_type;
  uint8_t CH2_type;
  uint8_t CH3_type;
  uint8_t CH4_type;
  int32_t CH1_duty;
  int32_t CH2_duty;
  int32_t CH3_duty;
  int32_t CH4_duty;

  /* Input Capture data */
  uint32_t* ICCData;
  uint32_t ICC1Capture;
  uint32_t ICC1Freq;
  uint32_t ICC1Duty;
  uint32_t ICC2Capture;
  uint32_t ICC2Freq;
  uint32_t ICC2Duty;
  uint32_t ICC3Capture;
  uint32_t ICC3Freq;
  uint32_t ICC3Duty;
  uint32_t ICC4Capture;
  uint32_t ICC4Freq;
  uint32_t ICC4Duty;
  uint16_t ICC1ReadValue1;
  uint16_t ICC1ReadValue2;
  uint16_t ICC1ReadValue3;
  uint16_t ICC1ReadValue4;
  uint16_t ICC2ReadValue1;
  uint16_t ICC2ReadValue2;
  uint16_t ICC2ReadValue3;
  uint16_t ICC2ReadValue4;
  uint16_t ICC3ReadValue1;
  uint16_t ICC3ReadValue2;
  uint16_t ICC3ReadValue3;
  uint16_t ICC3ReadValue4;
  uint16_t ICC4ReadValue1;
  uint16_t ICC4ReadValue2;
  uint16_t ICC4ReadValue3;
  uint16_t ICC4ReadValue4;
  uint8_t ICC1CaptureNumber;
  uint8_t ICC2CaptureNumber;
  uint8_t ICC3CaptureNumber;
  uint8_t ICC4CaptureNumber;
  void (* ItUpFcn)(void);
  void (* ItTrgFcn)(void);
  void (* ItComFcn)(void);
  void (* ItBrkFcn)(void);
  void (* ItCcFcn)(TIM_HandleTypeDef *htim);
} TIM_DataLinkTypeDef;

typedef enum {
  OUTPUT_COMP = 0,
  OUTPUT_PWM,
  OUTPUT_TRGO,
  OUTPUT_FORCED,
  INPUT_PWM,
  INPUT_CAPTURE,
  INPUT_ETR,
  INPUT_ENCODER,
  INPUT_HALL_SENSOR,
  UNKNOWN
} TIM_ChTypeDef;

extern TIM_DataLinkTypeDef* G_TIM_Data;/* Pointer to TIMER data information*/
extern TIM_HandleTypeDef* G_TIM_Handler;/* Pointer to TIMER handler */

/* TIM1 handler */
extern TIM_HandleTypeDef htim1;

/* TIM1 data information*/
extern TIM_DataLinkTypeDef TIM1_DataLink;

/* TIM1 polling timeout value. Number of Solver loop. (can be changed)*/
extern uint32_t G_TIM1_PollTimeOut;

#endif                                 /* RTW_HEADER_untitled_TIM_h_ */

/* File trailer for Real-Time Workshop generated code.
 *
 * [EOF] untitled_TIM.h
 */
