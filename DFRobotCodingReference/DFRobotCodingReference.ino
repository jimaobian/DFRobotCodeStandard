

/***************************************************
 This example is particularly designed for the DFPlayer from DFRobot
 >>>>>>http://www.dfrobot.com/index.php?route=product/product&product_id=1121#.U5Z_RYbUN8E
 
 This example tells you how to code the Arduino to control the DFPlayer to play the songs.
 >>>>>>http://www.dfrobot.com/wiki/index.php/DFPlayer_Mini_SKU:DFR0299
 
 DFPlayerMiniMp3 library is created by Angelo qiao
 >>>>>>http://www.dfrobot.com/community/dfrobot-wireless-communication-protocol-ver-1-1.html
 
 2014-8-21 Created By Angelo qiao <Angelo.qiao@dfrobot.com>
 2014-8-22 Modified By Angelo qiao <Angelo.qiao@dfrobot.com>
 
 GNU Lesser General Public License. See <http://www.gnu.org/licenses/> for details.
 All above must be included in any redistribution
 ****************************************************/

/***************************************************
  This example is particularly designed for the DFPlayer[The name of the prduct] from DFRobot
  >>>>>>http://www.dfrobot.com/index.php?route=product/product&product_id=1121#.U5Z_RYbUN8E
  [the product page]

  This example tells you how to code the Arduino to control the DFPlayer to play the songs.
  [write the description of this example, like what does it used for. 
  You can refer the description by Markeing colleages]
  >>>>>>http://www.dfrobot.com/wiki/index.php/DFPlayer_Mini_SKU:DFR0299[the wiki page]

  DFPlayerMiniMp3[the name of the library] library is created by Angelo qiao[the author]
  >>>>>>http://www.dfrobot.com/community/dfrobot-wireless-communication-protocol-ver-1-1.html
  [use the reference page link rather then download link]

  2014-8-21[date] Created By Angelo qiao[the author] <Angelo.qiao@dfrobot.com>[the email address]
  2014-8-22[date] Modified By Angelo qiao[the author] <Angelo.qiao@dfrobot.com>[the email address]

  GNU Lesser General Public License. See <http://www.gnu.org/licenses/> for details.
  All above must be included in any redistribution
 ****************************************************/

#include "Arduino.h"

// Include application, user and local libraries
#include "DFPlayerMiniMp3.h"
#include "DHT.h"

// Defines
// Uncomment whatever type you're using!
//#define DHTTYPE DHT11   // DHT 11
#define DHTTYPE DHT22   // DHT 22  (AM2302)
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

#define DHT_PIN 2
#define KEY_PIN 3
#define M2_DIRECTION_PIN 7
#define M1_SPEED_PIN 5

#define KEY_PRESS_DELAY 10

byte heartPicture[16][8] PROGMEM =
{
  {0,0,0,0,0,0,0,0},//pattern 0
  {0,1,1,0,0,1,1,0},
  {1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1},
  {0,1,1,1,1,1,1,0},
  {0,0,1,1,1,1,0,0},
  {0,0,0,1,1,0,0,0}
};

int binaryValue = B00010001;

//const int P = 0;
//const int Pin = 0;
const int KeyPin = 0;

//const int KeyArrayPin = 0;
const int KeyArrayPin = A0;

//int t = digitalRead(KeyPin);
//int temp = digitalRead(KeyPin);
int keyState = digitalRead(KeyPin);

//int t = analogRead(KeyArrayPin);
//int temp = analogRead(KeyArrayPin);
int keyValue = analogRead(KeyArrayPin);

//#define M1_SPEED_PIN 5          //E1
const int M1SpeedPin = 5;       //E1

//if (somethingIsTrue) doSomething;
if (somethingIsTrue == true) {
  doSomething;
}

//if (somethingIsTrue == true && somethingIsFlase == false) {
//  doSomething;
//}
if ((somethingIsTrue == true) && (somethingIsFlase == false)) {
  doSomething;
}

//uint8_t keyValue = analogRead(KeyArrayPin);
int keyValue = analogRead(KeyArrayPin);


//for (int i=0; i<10; i++) {
//
//}
for (int receivedIndex=0; receivedIndex<10; receivedIndex++) {

}

#define DHT_PIN 2
#define KEY_PIN 3
#define M2_DIRECTION_PIN 7
#define M1_SPEED_PIN 5

const int KeyPin = 3;
const int KeyArrayPin = A0;
const int M1SpeedPin = 5;       //E1
const int M1DirectionPin = 4;   //M1

int keyState = digitalRead(KeyPin);
int keyArrayValue = analogRead(KeyArrayPin);

int temperature;
int humidity;
int voltage;

int readTemperature();
int readHumidity();
int readKey();

DHT dht(DHT_PIN, DHTTYPE);
String receivedBuffer = "";


// Define variables and constants

const int KeyArrayPin = A0;
const int KeyPin = 3;
const int M1SpeedPin = 5;       //E1
const int M1DirectionPin = 4;   //M1
const int M2SpeedPin = 6;       //E2
const int M2DirectionPin = 7;   //M2
const int ReceivedBufferSize = 10;

int binaryValue = B00010001;
String receivedBuffer = "";
boolean buttonState = false;

void setup()
{
  pinMode(KeyArrayPin, INPUT);
  int analogKeyValue = analogRead(KeyArrayPin);
  
  pinMode(KeyPin, INPUT_PULLUP);
  int keyState = digitalRead(KeyPin);
  
  Serial.begin(115200);
  
  Serial.print("Hello World");
  Serial.print(F("Hello World!"));  //Use F() to decrease the memory use.
}

void loop()
{
  readKey(KeyPin);
  
  void printArray(char* array);
  void printArray(char[] array);
  
  hmc5883l.readAcceleration(&xAxis, &yAxis, &zAxis);
  xAxis=hmc5883l.readAccelerationX();
  yAxis=hmc5883l.readAccelerationY();
  zAxis=hmc5883l.readAccelerationZ();
}

boolean readKey(int theKeyPin)
{
  if (digitalRead(theKeyPin) == LOW) {
    delay (KEY_PRESS_DELAY);
    if (digitalRead(theKeyPin) == LOW)
      return true;
  }
  return false;
}

float readTemperature()
{
  
}

float readHumidity()
{
  
}



