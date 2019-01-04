#include <dht.h>

dht DHT;

#define DHT11_PIN 7

int motorPin = 3;

void setup() {
pinMode(motorPin, OUTPUT);
Serial.begin(9600);


  // put your setup code here, to run once:

}

void loop() {
  int chk = DHT.read11(DHT11_PIN);
if ((DHT.temperature)>28){
  analogWrite(motorPin, 255);
}
  // put your main code here, to run repeatedly:

}
