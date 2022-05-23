/*!
 * @file dualDigitalpot.ino
 * @brief This example generates two triangular waves to demo the usage of
 * @n     dual digital pot.
 * @detail 
 * @n     **********************Circuit Connections*******************
 * @n            Digital Pot  |   Arduino UNO R3    |   Oscilloscope
 * @n                CS       |     D10 (SS)        |
 * @n                SI       |     D11 (MOSI)      |
 * @n                CLK      |     D13 (SCK)       |
 * @n            VCC,PA0,PA1  |       VCC           |
 * @n            GND,PB0,PB1  |       GND           |     CH1- CH2-
 * @n                W0       |                     |       CH1+
 * @n                W1       |                     |       CH2+
 * @n      ***********************************************************
 * @copyright	Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @license     The MIT License (MIT)
 * @author PengKaixing(kaixing.peng@dfrobot.com)
 * @version  V1.0.0
 * @date  2022-03-31
 * @url https://github.com/DFRobot/DFRobot_digitalPot
 */

#include "DFRobot_digitalPot.h"

DFRobot_digitalPot DP(&SPI,10);

void setup()
{
  DP.begin();
}

void loop()
{
  // change the resistance on the POT0 from min to max:
  for (int POT_Dn = 0; POT_Dn < 256; POT_Dn++)
  {
    DP.digitalPotwrite(POT0_SEL, POT_Dn);
    delay(1);
  }

  // change the resistance on the POT0 from max to min:
  for (int POT_Dn = 0; POT_Dn < 256; POT_Dn++)
  {
    DP.digitalPotwrite(POT0_SEL, 255 - POT_Dn);
    delay(1);
  }
}