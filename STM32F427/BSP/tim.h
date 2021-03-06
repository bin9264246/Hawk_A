/********************************************************************************
  * @file    tim.h 
  * @author  Huangzhibin
  * @version V1.0.0
  * @date    13-12-2015
  * @brief   Header for tim.c module
*******************************************************************************/ 
#ifndef _TIM_H_
#define _TIM_H_
#include "stm32f4xx.h"
#include "stdint.h"
#include "delay.h"
//**********************************************************************************//

/*************************************************************************************


*************************************************************************************/

//**********************************************************************************//

/*************************************************************************************
//MS5611的PROM出厂校准数据结构体
*************************************************************************************/

/*************************************************************************************
*************************************************************************************/

/*************************************************************************************
//MS5611的数字输出值
**************************************************************************************/

/*************************************************************************************
*************************************************************************************/
void TIM3_Int_Init(u16 arr,u16 psc);




//***********************************//
/*****MPU6000	CS	Pin	definition*****/

//***********************************//


#endif /* _TIM_H_ */

/******************* (C) COPYRIGHT 2015 Huangzhibin*****END OF FILE****/
