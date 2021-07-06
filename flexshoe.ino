#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo motor1;
Servo motor2;

char auth[] = "jB-W0ZrP0iaYnAeOg-eT1jM7XnzUUVdH";
char ssid[] = "FRITZ!Box 7430 OK";
char pass[] = "32699055726504131681";

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  
  motor1.attach(D1);
  motor2.attach(D2);
}

void loop() 
{
  Blynk.run();
}

BLYNK_WRITE(V1)
{
  motor1.write(0);
  motor2.write(0);
}

BLYNK_WRITE(V2)
{
  motor1.write(120);
  motor2.write(120);
}
