#include <Arduino.h>
//#include <FreeRTOS.h>


#define LED1 12
#define LED2 14
#define LED3 27

int currentLed = 1;

void setup() 
{
  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  Serial.begin(115200);

}

void turnOnLed(int led)
{
  // turn off all leds
  Serial.println("All LEDs are off");
  Serial.println("");
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);

  switch (led)
  {
    case 1:
    digitalWrite(LED1, HIGH);
    Serial.print(LED1);
    Serial.println(" is ON");
    break;
    
    case 2:
    digitalWrite(LED2, HIGH);
    Serial.print(LED2);
    Serial.println(" is ON");
    break;

    case 3:
    digitalWrite(LED3, HIGH);
    Serial.print(LED3);
    Serial.println(" is ON");
    break;
  }
}

void loop() 
{
  turnOnLed(currentLed);
  delay(500);
  currentLed++;

  // the if statement below will mantain the looping between 1...3  
  if (currentLed>3)
  {
    currentLed = 1;
  }


}