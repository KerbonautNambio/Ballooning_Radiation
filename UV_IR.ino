#include <Wire.h>
#include "Adafruit_SI1145.h"

Adafruit_SI1145 uv = Adafruit_SI1145();

void setup() {
  Serial.begin(9600);
  Serial.println("Adafruit SI1145 tested");
  
  if (! uv.begin()) {
    Serial.println("Didn't find Si1145");
    while (1);
  }

  Serial.println("OK, We are live!");
}

void loop() {
  Serial.println("===================");
  Serial.print("Visible UV: "); Serial.println(uv.readVisible());
  Serial.print("IR: "); Serial.println(uv.readIR());
}
