/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    app_ble.h
  * @author  MCD Application Team
  * @brief   Header for ble application
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2019-2021 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef APP_BLE_H
#define APP_BLE_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "hci_tl.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/

    typedef enum
    {
      APP_BLE_IDLE,
      APP_BLE_FAST_ADV,
      APP_BLE_LP_ADV,
      APP_BLE_SCAN,
      APP_BLE_LP_CONNECTING,
      APP_BLE_CONNECTED_SERVER,
      APP_BLE_CONNECTED_CLIENT,

      APP_BLE_DISCOVER_SERVICES,
      APP_BLE_DISCOVER_CHARACS,
      APP_BLE_DISCOVER_WRITE_DESC,
      APP_BLE_DISCOVER_NOTIFICATION_CHAR_DESC,
      APP_BLE_ENABLE_NOTIFICATION_DESC,
      APP_BLE_DISABLE_NOTIFICATION_DESC
    } APP_BLE_ConnStatus_t;

/* USER CODE BEGIN ET */
typedef struct
{
  uint16_t Connection_Handle;
  uint8_t Identifier;
  uint16_t L2CAP_Length;
  uint16_t Interval_Min;
  uint16_t Interval_Max;
  uint16_t Latency;
  uint16_t Timeout_Multiplier;
} APP_BLE_Conn_Update_req_t;
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* External variables --------------------------------------------------------*/
/* USER CODE BEGIN EV */
extern void DTS_Button1TriggerReceived( void );
extern void DTS_Button2TriggerReceived( void );
extern void DTS_Button2LongTriggerReceived( void );
extern void DTS_Button3TriggerReceived( void );

extern void DTC_Button1TriggerReceived( void );
extern void DTC_Button2TriggerReceived( void );
extern void DTC_Button3TriggerReceived( void );

extern uint8_t LongPressButton;
extern uint8_t ButtonEmulCase;
/* USER CODE END EV */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions ---------------------------------------------*/
void APP_BLE_Init( void );
uint8_t APP_BLE_ComputeCRC8( uint8_t *DataPtr , uint8_t Datalen );
void BLE_SVC_L2CAP_Conn_Update_11_25(void);
/* USER CODE BEGIN EF */
void APP_BLE_Key_Button1_Action(void);
void APP_BLE_Key_Button2_Action(void);
void APP_BLE_Key_Button3_Action(void);

  APP_BLE_ConnStatus_t APP_BLE_Get_Client_Connection_Status( uint16_t Connection_Handle );

/* USER CODE END EF */

#ifdef __cplusplus
}
#endif

#endif /* APP_BLE_H */