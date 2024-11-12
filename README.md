# Overview
- **Name**: STM32WB55_SENSOR-V1.0
- **MCU**: STM32WB55RGV6
- **IDE**: STM32CUBEMX+KEIL


# Buy Link
[https://shop192352884.taobao.com/](https://shop192352884.taobao.com/)

# Image
![image](https://github.com/user-attachments/assets/211821eb-7569-4d9d-8ba7-906910ee59b0)

![image](https://github.com/user-attachments/assets/844706d4-7b78-4709-9097-f312bc614a2e)

![image](https://github.com/user-attachments/assets/d8986db2-81a4-44ba-97b4-379661b8a3a6)

![image](https://github.com/user-attachments/assets/e33f5103-b873-42e1-9630-f9e987914352)

![image](https://github.com/user-attachments/assets/e03c6b65-14bb-4a9d-8e8b-1107092d43a4)

![image](https://github.com/user-attachments/assets/f62717e9-e15c-4054-b234-6777ae0b9d3d)




# Contact Information

- **Name**: Billy
- **交流群**: 925643491
- **Email**: a845656974@outlook.com
- **Phone**: +86 15622736378
- **CSDN Blog**: [Blog](https://blog.csdn.net/qq_24312945)
- **Video**: [Video](https://space.bilibili.com/26152390)



# Project Introduction
- **STM32WB55_project1**:STM32WB55RG开发(1)----开发板测试
- **CSDN Blog**:[https://blog.csdn.net/qq_24312945/article/details/143673551](https://blog.csdn.net/qq_24312945/article/details/143673551)

STM32WB55 & SENSOR是一款基于STM32WB55系列微控制器的评估套件。该套件采用先进的无线通信技术，支持Bluetooth® 5.3规范、IEEE 802.15.4-2011 PHY和MAC，支持Thread和Zigbee® 3.0 ，为开发人员打开了广阔的物联网和智能设备应用领域。此外，该套件具有丰富的接口和外设，以及传感器（SENSOR）系列连接器接口，方便用户进行各种硬件连接和外设扩展。

这里通过配置LED和UART输出进行简单测试。


STM32WB55 & SENSOR is an evaluation kit based on the STM32WB55 series microcontroller. This kit uses advanced wireless communication technology, supporting Bluetooth® 5.3 specification, IEEE 802.15.4-2011 PHY and MAC, and is compatible with Thread and Zigbee® 3.0, opening up broad application possibilities for IoT and smart devices. Additionally, the kit features a wide range of interfaces and peripherals, along with SENSOR series connector interfaces, allowing users to easily connect various hardware and extend peripherals.

Here, a simple test is conducted by configuring LED and UART output



- **STM32WB55_project2**:STM32WB55RG开发(2)----STM32CubeProgrammer烧录
- **CSDN Blog**:[https://blog.csdn.net/qq_24312945/article/details/143675949](https://blog.csdn.net/qq_24312945/article/details/143675949)

STM32CubeProgrammer (STM32CubeProg) 是一款用于编程STM32产品的全功能多操作系统软件工具。
它提供了一个易用高效的环境，通过调试接口（JTAG和SWD）和自举程序接口（UART、USB DFU、I2C、SPI和CAN）读取、写入及验证器件内存。
STM32CubeProgrammer的功能广泛，可以对STM32内部存储器（如Flash、RAM和OTP）以及外部存储器进行编程。

STM32CubeProgrammer (STM32CubeProg) is a fully featured multi-OS software tool for programming STM32 products. It provides an easy-to-use, efficient environment for reading, writing, and verifying device memory via debugging interfaces (JTAG and SWD) and bootloader interfaces (UART, USB DFU, I2C, SPI, and CAN). STM32CubeProgrammer offers extensive functionality, enabling programming of both STM32 internal memories (such as Flash, RAM, and OTP) and external memories.


- **STM32WB55_project3**:STM32WB55RG开发(3)----生成 BLE 程序连接手机APP
- **CSDN Blog**:[https://blog.csdn.net/qq_24312945/article/details/143701138](https://blog.csdn.net/qq_24312945/article/details/143701138)

本项目旨在利用 STM32WB55 微控制器的蓝牙低功耗（BLE）功能，实现与手机 APP 的无线连接。通过配置时钟源、启动关键模块（如 RCC、RTC、RF、IPCC 和 HSEM），以及启用蓝牙功能，用户可以创建一个稳定的 BLE 连接。此连接可用于数据交换和远程控制等应用场景。

This project aims to utilize the Bluetooth Low Energy (BLE) functionality of the STM32WB55 microcontroller to enable a wireless connection with a mobile app. By configuring the clock source, initiating key modules (such as RCC, RTC, RF, IPCC, and HSEM), and enabling Bluetooth functionality, users can establish a stable BLE connection. This connection can be used for data exchange and remote control applications.


- **STM32WB55_project4**:STM32WB55RG开发(4)----FUS 更新
- **CSDN Blog**:[https://blog.csdn.net/qq_24312945/article/details/143701957](https://blog.csdn.net/qq_24312945/article/details/143701957)

在 STM32WB 微控制器中，FUS（Firmware Upgrade Services）是用于固件升级的一种服务。这项服务可以让你更新设备上的无线栈固件（如蓝牙、Zigbee或 Thread 栈），以及无线 MCU (microcontroller unit) 的系统服务。
FUS 实质上是设备的一部分固件，它可以独立于主应用程序运行，主要负责安全地处理设备固件的升级。这包括检查新固件的有效性，确保新固件被正确地写入设备，以及在出现问题时回滚到旧版本的固件。
总的来说，FUS 是 STM32WB 和其他 STM32 无线微控制器中一个非常重要的组件，可以确保设备固件的安全更新。

In the STM32WB microcontroller, FUS (Firmware Upgrade Services) is a service for firmware upgrades. This service allows you to update the wireless stack firmware on the device (such as Bluetooth, Zigbee, or Thread stacks) as well as system services for the wireless MCU (microcontroller unit).

FUS is essentially a part of the device's firmware that operates independently of the main application, primarily responsible for securely managing firmware upgrades. This includes verifying the validity of the new firmware, ensuring that it is correctly written to the device, and rolling back to the previous firmware version if issues arise.

Overall, FUS is a critical component in STM32WB and other STM32 wireless microcontrollers, providing a secure means to update device firmware.














