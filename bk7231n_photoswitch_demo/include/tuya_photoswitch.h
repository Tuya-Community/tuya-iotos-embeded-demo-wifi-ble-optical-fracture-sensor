/**
 * @File: tuya_photoswitch.h 
 * @Author: huanling.zhang@tuya.com 
 * @Last Modified time: 2021-03-13 
 * @Description:photoswitch detection demo 
 */
#ifndef __TUYA_PHOTOSWITCH_H__
#define __TUYA_PHOTOSWITCH_H__

#include "tuya_cloud_types.h"
#include "tuya_gpio.h"

#define     SWITCH_PIN      TY_GPIOA_20

VOID photoswitch_init(VOID);
INT_T adc_value_get(VOID);
VOID switch_task(VOID);

#endif

