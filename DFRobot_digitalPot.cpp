/*!
 * @file DFRobot_digitalPot.cpp
 * @brief A library of digital potentiometers.
 * @copyright	Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @license     The MIT License (MIT)
 * @author PengKaixing(kaixing.peng@dfrobot.com)
 * @version  V1.0.0
 * @date  2022-03-31
 * @url https://github.com/DFRobot/DFRobot_digitalPot
 */

#include "DFRobot_digitalPot.h"

DFRobot_digitalPot::DFRobot_digitalPot(SPIClass *pSpi = &SPI, uint8_t csPin = 10)
{
  _pSpi = pSpi;
  _csPin = csPin;
}

void DFRobot_digitalPot::begin(void)
{
  pinMode(_csPin, OUTPUT);
  _pSpi->begin();
}

void DFRobot_digitalPot::digitalPotwrite(int cmd, int val)
{
  val = constrain(val, 0, 255);
  digitalWrite(_csPin, LOW);
  _pSpi->transfer(cmd);
  _pSpi->transfer(val);
  digitalWrite(_csPin, HIGH);
}