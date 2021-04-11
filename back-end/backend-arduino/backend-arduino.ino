#include "DHT.h"

DHT dht(3, DHT11);
int special = 0;

void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT);
  
  randomSeed(analogRead(0));
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  int soil = analogRead(A0);
  int ph;
  int powgen = analogRead(A1);
  String input = String("");

  while (Serial.available()) {
    char c = Serial.read();
    if (c != '\n')
      input += c;
    delay(10);
  }

  if (input != "") {
    String format = String("Got: \"" + input + "\"");
    Serial.println(format);
    if (input == "rain") {
      special = 1;
    } else if (input == "cold") {
      special = 2;
    } else if (input == "norm") {
      special = 0;
    } else if (input == "pause") {
      Serial.println("pausing...");
      special = 3;
    }
  }

  if (special == 0) {
    String out = "n " + String(random(40,45)) + " " + String(random(20,25));
    Serial.println(out);
  } else if (special == 1) {
    String out = String("hr ") + String(random(90,99));
    Serial.println(out);
  } else if (special == 3) {
    return;
  } else {
    String out = String("c -") + String(random(20,25));
    Serial.println(out);
  }

  if (soil <= 450) {
    ph = random(63, 65);
  } else {
    ph = 0xFFFFFFFF;
  }
  
  String outgreen = "gh " + String(random(40,45)) + " " + String(random(20,25)) + " " + String(soil) + " " + String(ph);
  Serial.println(outgreen);
  String outpow = "pg " + String(powgen);
  Serial.println(outpow);
  delay(1000);
}
