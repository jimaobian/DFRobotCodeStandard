/***************************************************
 This example is particularly designed for the CO2 Sensor from DFRobot
 >>>>>>http://www.dfrobot.com/index.php?route=product/product&product_id=1023#.UkKJZoZi1GY
 
 This example read and caculate the CO2 percentage from MG-811 Gas Sensor
 >>>>>>http://www.dfrobot.com/wiki/index.php/CO2_Sensor_SKU:SEN0159
 
 
 2014-8-26 Created By Angelo qiao <Angelo.qiao@dfrobot.com>
 2014-8-26 Modified By Angelo qiao <Angelo.qiao@dfrobot.com>
 
 GNU Lesser General Public License. See <http://www.gnu.org/licenses/> for details.
 All above must be included in any redistribution
 ****************************************************/

//(CO2(ppm), Voltage (mV))
//(400, 324.090909091)
//(600, 314.090909091)
//(800, 307.840909091)
//(1000,303.636363636)
//(1500,298.181818182)
//(2000,293.181818182)
//(2500,288.636363636)
//(3000,285.909090909)
//(4000,280.454545455)
//(6000,274.090909091)
//(8000,268.636363636)
//(10000,264.090909091)
//co2=10^((v-324.090909091)*(log(400)-log(600))/(324.090909091-314.090909091)+log(400))


#include "Arduino.h"

const float MG811Pin = A0;
const float VotageGain = 8.5;

float percentageCO2;

float readCO2();
float readRawCO2();

void setup() 
{
  Serial.begin(9600);
  Serial.println("Starting...");
}


void loop() 
{
  percentageCO2 = readCO2();
  Serial.println(percentageCO2);
  delay(2000);
}

float readCO2()
{
  int co2Value = readRawCO2();
  //todo
}

int readRawCO2()
{
  //todo
}