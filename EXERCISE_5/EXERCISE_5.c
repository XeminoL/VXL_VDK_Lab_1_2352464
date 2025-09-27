/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private variables ---------------------------------------------------------*/
int countdown = 0;

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
void display7SEG(int num);


int main(void)
{
  HAL_Init();
  SystemClock_Config();
  MX_GPIO_Init();

  while (1)
  {
    HAL_GPIO_WritePin(LED_RED_N_GPIO_Port, LED_RED_N_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_YEL_N_GPIO_Port, LED_YEL_N_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GRN_N_GPIO_Port, LED_GRN_N_Pin, GPIO_PIN_RESET);

    HAL_GPIO_WritePin(LED_RED_S_GPIO_Port, LED_RED_S_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_YEL_S_GPIO_Port, LED_YEL_S_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GRN_S_GPIO_Port, LED_GRN_S_Pin, GPIO_PIN_RESET);

    HAL_GPIO_WritePin(LED_RED_E_GPIO_Port, LED_RED_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_YEL_E_GPIO_Port, LED_YEL_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GRN_E_GPIO_Port, LED_GRN_E_Pin, GPIO_PIN_SET);

    HAL_GPIO_WritePin(LED_RED_W_GPIO_Port, LED_RED_W_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_YEL_W_GPIO_Port, LED_YEL_W_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GRN_W_GPIO_Port, LED_GRN_W_Pin, GPIO_PIN_SET);

    countdown = 3;  
    while(countdown > 0){
        display7SEG(countdown--);
        HAL_Delay(1000);
    }

    HAL_GPIO_WritePin(LED_GRN_E_GPIO_Port, LED_GRN_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_YEL_E_GPIO_Port, LED_YEL_E_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_GRN_W_GPIO_Port, LED_GRN_W_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_YEL_W_GPIO_Port, LED_YEL_W_Pin, GPIO_PIN_SET);

    countdown = 2;   
    while(countdown > 0){
        display7SEG(countdown--);
        HAL_Delay(1000);
    }

    HAL_GPIO_WritePin(LED_RED_E_GPIO_Port, LED_RED_E_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_YEL_E_GPIO_Port, LED_YEL_E_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GRN_E_GPIO_Port, LED_GRN_E_Pin, GPIO_PIN_RESET);

    HAL_GPIO_WritePin(LED_RED_W_GPIO_Port, LED_RED_W_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_YEL_W_GPIO_Port, LED_YEL_W_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GRN_W_GPIO_Port, LED_GRN_W_Pin, GPIO_PIN_RESET);

    HAL_GPIO_WritePin(LED_RED_N_GPIO_Port, LED_RED_N_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GRN_N_GPIO_Port, LED_GRN_N_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_RED_S_GPIO_Port, LED_RED_S_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_GRN_S_GPIO_Port, LED_GRN_S_Pin, GPIO_PIN_SET);

    countdown = 3;   
    while(countdown > 0){
        display7SEG(countdown--);
        HAL_Delay(1000);
    }
    HAL_GPIO_WritePin(LED_GRN_N_GPIO_Port, LED_GRN_N_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_YEL_N_GPIO_Port, LED_YEL_N_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED_GRN_S_GPIO_Port, LED_GRN_S_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_YEL_S_GPIO_Port, LED_YEL_S_Pin, GPIO_PIN_SET);

    countdown = 2;   
    while(countdown > 0){
        display7SEG(countdown--);
        HAL_Delay(1000);
    }
  }
}

/* USER CODE BEGIN 4 */
void display7SEG(int num)
{
    uint8_t segCode[10] = {
        0b1000000, 
        0b1111001, 
        0b0100100, 
        0b0110000, 
        0b0011001, 
        0b0010010, 
        0b0000010, 
        0b1111000, 
        0b0000000, 
        0b0010000  
    };

    if (num < 0 || num > 9) num = 0;
    uint8_t code = segCode[num];

    HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, (code & 0x01) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, (code & 0x02) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, (code & 0x04) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, (code & 0x08) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, (code & 0x10) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, (code & 0x20) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, (code & 0x40) ? GPIO_PIN_SET : GPIO_PIN_RESET);
}
/* USER CODE END 4 */

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) { Error_Handler(); }

  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK) { Error_Handler(); }
}

/**
  * @brief GPIO Initialization Function
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED_N_Pin|LED_YEL_N_Pin|LED_GRN_N_Pin|LED_RED_S_Pin
                          |LED_YEL_S_Pin|LED_GRN_S_Pin|LED_RED_E_Pin|LED_YEL_E_Pin
                          |LED_GRN_E_Pin|LED_RED_W_Pin|LED_YEL_W_Pin|LED_GRN_W_Pin,
                          GPIO_PIN_RESET);

  HAL_GPIO_WritePin(GPIOB, SEG_A_Pin|SEG_B_Pin|SEG_C_Pin|SEG_D_Pin
                          |SEG_E_Pin|SEG_F_Pin|SEG_G_Pin, GPIO_PIN_SET);

  /*Configure GPIO pins : Traffic lights */
  GPIO_InitStruct.Pin = LED_RED_N_Pin|LED_YEL_N_Pin|LED_GRN_N_Pin|LED_RED_S_Pin
                          |LED_YEL_S_Pin|LED_GRN_S_Pin|LED_RED_E_Pin|LED_YEL_E_Pin
                          |LED_GRN_E_Pin|LED_RED_W_Pin|LED_YEL_W_Pin|LED_GRN_W_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : 7SEG */
  GPIO_InitStruct.Pin = SEG_A_Pin|SEG_B_Pin|SEG_C_Pin|SEG_D_Pin
                          |SEG_E_Pin|SEG_F_Pin|SEG_G_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  __disable_irq();
  while (1) {}
}

#ifdef  USE_FULL_ASSERT
void assert_failed(uint8_t *file, uint32_t line) { }
#endif /* USE_FULL_ASSERT */
