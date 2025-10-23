#include <Arduino.h>

//#define LDR_PIN 39
void setup() {
  Serial.begin(115200);
  analogReadResolution(12); // 12-bit: 0–4095
  delay(1000);
  Serial.println("LDR ADC Test Started (GPIO39)");
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);
  Serial.print(">Light: "); // dấu '>' để Teleplot nhận diện
  Serial.println(ldrValue);
  delay(200);
}
