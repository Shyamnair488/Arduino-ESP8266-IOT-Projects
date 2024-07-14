
// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "TMPLig0aQWki"
#define BLYNK_DEVICE_NAME "Home Automation"

#define BLYNK_FIRMWARE_VERSION "0.1.0"
#define BLYNK_PRINT Serial
#define USE_NODE_MCU_BOARD

#include "BlynkEdgent.h"

BLYNK_WRITE(V1)
{
  int s0 = param.asInt(); // parameter as int 
  if(s0 == HIGH)
  {    
    digitalWrite(D2,HIGH);
    Serial.println("D2 High");
    delay(10);
    }  
    if(s0 == LOW)
  {
    digitalWrite(D2,LOW);
    Serial.println("D2 Low");
    delay(10);
    }  
}
BLYNK_WRITE(V2)
{
  int s1 = param.asInt(); // parameter as int 
  if(s1 == HIGH)
  {    
    digitalWrite(D5,HIGH);
    Serial.println("D5 High");
    delay(10);
    }  
    if(s1 == LOW)
  {
    digitalWrite(D5,LOW);
    Serial.println("D5 Low");
    delay(10);
    }  
}
void setup()
{
  Serial.begin(9600);
  pinMode(D2,OUTPUT);
  pinMode(D5,OUTPUT);

  digitalWrite(D2,LOW);
  digitalWrite(D5,LOW);

  
  BlynkEdgent.begin();
}

void loop() {
    BlynkEdgent.run();
}
