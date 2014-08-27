/***************************************************
 This example is particularly designed for the Digital Temperature and Humidity sensor (With Stainless Steel Probe) from DFRobot
 >>>>>>http://www.dfrobot.com/index.php?route=product/product&path=48&product_id=912#.UniMMJH7k8M
 
 This example reads temperature and humidity from SHT1x Humidity and Temperature Sensor.
 You can find the tutorial here:
 >>>>>>http://www.dfrobot.com/wiki/index.php/Digital_Temperature_and_Humidity_sensor_(With_Stainless_Steel_Probe)_(SKU:SEN0148)
 
 SHT1x library is created by jonoxer
 >>>>>>https://github.com/practicalarduino/SHT1x
 
 2014-8-26 Created By Angelo qiao <Angelo.qiao@dfrobot.com>
 
 GNU Lesser General Public License. See <http://www.gnu.org/licenses/> for details.
 All above must be included in any redistribution
 ****************************************************/

#include "SHT1x.h"

//You can find the connection and diagram here:
//>>>>>>http://www.dfrobot.com/wiki/index.php/Digital_Temperature_and_Humidity_sensor_(With_Stainless_Steel_Probe)_(SKU:SEN0148)#Connecting_diagram
const int DataPin = 10;
const int ClockPin = 11;

SHT1x sht1x(DataPin, ClockPin);

int temperatureC;     //store temperature in Centigrade
int temperatureF;     //store temperature in Fahrenheit
int humidity;         //store humidity

void printResult();   //Print temperature and humidity into serial

void setup()
{
  Serial.begin(9600);
  Serial.println("Starting up...");
}

void loop() 
{
  temperatureC=sht1x.readTemperatureC();
  temperatureF=sht1x.readTemperatureF();
  humidity=sht1x.readHumidity();
  
  printResult();
  
  delay(2000);
}

void printResult()
{
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print("C / ");
  Serial.print(temperatureF);
  Serial.print("F. Humidity: ");
  Serial.print(humidity);
  Serial.println("%");
}
