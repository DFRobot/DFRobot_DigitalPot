/*!
 * @file DFRobot_digitalPot.h
 * @brief A library of digital potentiometers.
 * @copyright	Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @license     The MIT License (MIT)
 * @author PengKaixing(kaixing.peng@dfrobot.com)
 * @version  V1.0.0
 * @date  2022-03-31
 * @url https://github.com/DFRobot/DFRobot_digitalPot
 */

#ifndef __DFRobot_digitalPot_H
#define __DFRobot_digitalPot_H

#include <SPI.h>
// potentiometer select byte
#define POT0_SEL  0x11
#define POT1_SEL  0x12
#define BOTH_POT_SEL  0x13

// shutdown the device to put it into power-saving mode.
// In this mode, terminal A is open-circuited and the B and W terminals are shorted together.
// send new command and value to exit shutdowm mode.
#define POT0_SHUTDOWN  0x21
#define POT1_SHUTDOWN  0x22
#define BOTH_POT_SHUTDOWN  0x23

class DFRobot_digitalPot
{
public:
  DFRobot_digitalPot(SPIClass *pSpi = &SPI, uint8_t csPin = 10);
  
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
private:
  SPIClass *_pSpi;
  uint8_t _csPin;
};
#endif