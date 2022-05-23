/*!
 * @file changeRval.ino
 * @brief Change the resistance of a digital potentiometer.
 * @detail
 * @      ***********************Circuit Connections*******************
 * @          Digital Pot | Arduino UNO R3
 * @              CS      |    D10 (SS)
 * @              SI      |    D11 (MOSI)
 * @              CLK     |    D13 (SCK)
 * @              VCC     |      VCC
 * @              GND     |      GND
 * @      ************************************************************
 * @copyright	Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @license     The MIT License (MIT)
 * @author PengKaixing(kaixing.peng@dfrobot.com)
 * @version  V1.0.0
 * @date  2022-03-31
 * @url https://github.com/DFRobot/DFRobot_digitalPot
 */

#include "DFRobot_digitalPot.h"

DFRobot_digitalPot DP(&SPI,10);
/***********************Customized Varialbes**********************/
//resistance value byte (0 - 255)
//The wiper is reset to the mid-scale position upon power-up, i.e. POT0_Dn = POT1_Dn = 128
int POT0_Dn = 128;
int POT1_Dn = 128;
int BOTH_POT_Dn = 128;

void setup()
{
  DP.begin();
  DP.digitalPotwrite(BOTH_POT_SHUTDOWN, BOTH_POT_Dn);
}

void loop()
{
  //set the resistance of POT0
  DP.digitalPotwrite(POT0_SEL, POT0_Dn);   

  //set the resistance of POT1              
  DP.digitalPotwrite(POT1_SEL, POT1_Dn);                 
}