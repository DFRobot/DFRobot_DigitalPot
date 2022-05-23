# DFRobot_digitalPot

- [中文版](./README_CN.md)

The digital potentiometer is also called "digital pot" in short. It is a kind of CMOS analog-to-digital mixed-signal IC, which is able to dynamically change the resistance through MCU like Arduino. Compared with the traditional mechanical potentiometer, the digital pot features clear advantages of flexibility in use (programming control), small size (ICs) and high reliability (without mechanical parts). It can replace the traditional one in many applications. The digital pot is usually used to change the sound volume in audio devices, such as smart loudspeakers, cell phones, and music players. In addition, with an operational amplifier, it can also be applied to change some key parameters of the circuit dynamically, such as LED DC dimming (output current), linear regulated power supply (output voltage), oscillator (frequency and amplitude), low pass filter (bandwidth) and differential amplifier (gain), etc.

![Product Image](./resources/images/DFR0520.png)

## Product Link (https://www.dfrobot.com/product-1650.html)

    SKU: DFR0520

## Table of Contents

* [Summary](#summary)
* [Installation](#installation)
* [Methods](#methods)
* [Compatibility](#compatibility)
* [History](#history)
* [Credits](#credits)

## Summary

Digital potentiometer library

## Installation

To use this library, first download the library file, paste it into the \Arduino\ Libraries directory, then open the examples folder and run the demo in that folder.  

## Methods

```C++

  /**
   * @fn begin
   * @brief module initialization
   */
  void begin(void);

  /**
   * @fn digitalPotwrite
   * @brief writes data to a module register
   * @param cmd command
   * @param val data
   */
  void digitalPotwrite(int cmd, int val);

```

## Compatibility

MCU                | Work Well    | Work Wrong   | Untested    | Remarks
------------------ | :----------: | :----------: | :---------: | -----
FireBeetle-ESP32  |      √       |             |            | 
FireBeetle-ESP8266|      √       |              |             | 
Mega2560  |      √       |             |            | 
Arduino uno |       √      |             |            | 
Leonardo  |      √       |              |             | 
Micro：bit  |      √       |              |             | 
M0  |      √       |              |             | 


## History

- 2022/03/31 - Version 1.0.0 released.

## Credits

Written by PengKaixing(kaixing.peng@dfrobot.com), 2021. (Welcome to our [website](https://www.dfrobot.com/))
