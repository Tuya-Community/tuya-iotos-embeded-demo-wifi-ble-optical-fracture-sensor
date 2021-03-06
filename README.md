# Tuya IoTOS Embeded Demo WiFi & BLE Optical-Fracture-Sensor

[English](./README.md) | [中文](./README_zh.md)

## Introduction 

This Demo implements a smart photoswitch through Tuya Smart Cloud Platform, Tuya Smart APP, IoTOS Embeded WiFi &Ble SDK, using Tuya WiFi/WiFi+BLE series modules to achieve remote data monitoring.

Implemented functions.

+ Real-time switch status detection




## Quick start 

### Compile & Burn
+ Download [Tuya IoTOS Embeded WiFi & BLE sdk](https://github.com/tuya/tuya-iotos-embeded-sdk-wifi-ble-bk7231n) 

+ Download the demo to the apps directory of the SDK 

  ```bash
  $ cd apps
  $ git clone https://github.com/Tuya-Community/tuya-iotos-embeded-demo-wifi-ble-optical-fracture-sensor.git
  ```
  
+ Start the compilation by executing the following command in the SDK root directory.

  ```bash
  sh build_app.sh apps/bk7231n_photoswitch_demo bk7231n_photoswitch_demo 1.0.0 
  ```

+ For information on firmware burn-in licensing, please refer to: [Wi-Fi + BLE Series Module Burn-In Licensing](https://developer.tuya.com/cn/docs/iot/device-development/burn-and-authorization/burn-and-authorize-wifi-ble-modules/burn-and-authorize-wb-series-modules?id=Ka78f4pttsytd) 

 

 ### Introduction to the file 

```
├── include
│ ├── tuya_device.h
│ ├── tuya_dp_process.h
│ └── tuya_photoswitch.h
└── src
    ├── tuya_device.c // Application entry file
    ├── tuya_dp_process.c // DP point processing file
    └── tuya_photoswitch.c // photoswitch data processing file
```



 ### Demo Information 

|      Product ID      | 9b4lku6h4gplcdnn |
| :------------------: | :--------------: |
|    Chip Platform     |     BK7231N      |
| Compiler Environment |                  |

  

### Demo entry

Entry file: tuya_device.c

Important functions: device_init()

+ Calling the tuya_iot_wf_soc_dev_init_param() interface to initialize the SDK, configure the operating mode, the wiring mode, and register various callback functions and store the firmware key and PID.

+ Calling the tuya_iot_reg_get_wf_nw_stat_cb() interface to register the device network status callback functions.

+ Calling the application layer initialization function photoswitch_init()

 

### DP point related

+ Report dp point interface: dev_report_dp_json_async()

| function name | OPERATE_RET dev_report_dp_json_async(IN CONST CHAR_T *dev_id,IN CONST TY_OBJ_DP_S *dp_data,IN CONST UINT_T cnt) |
| ------------- | ------------------------------------------------------------ |
| devid         | device id (devid = NULL if gateway, MCU, SOC class device; devid = sub-device_id if sub-device) |
| dp_data       | dp structure array name                                      |
| cnt           | Number of elements of the dp structure array                 |
| Return        | OPRT_OK: Success Other: Failure                              |

 

### I/O List 

| Photoswitch pins | Corresponding connected cbu pins |
| :--------------: | :------------------------------: |
|      `VCC`       |              `3.3V`              |
|      `GND`       |              `GND`               |
|       `S`        |            `GPIOA_20`            |

 

## Related Documentation

Tuya Demo Center: https://developer.tuya.com/demo/



## Technical Support

You can get support for Tuya by using the following methods:

- Developer Centre: https://developer.tuya.com/
- Help Centre: https://support.tuya.com/help
- Technical Support Work Order Centre: [https://service.console.tuya.com](https://service.console.tuya.com/)
