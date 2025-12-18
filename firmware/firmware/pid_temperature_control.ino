/*
  Hybrid Temperature Control System
  Basic Temperature Reading using Thermocouple (MAX6675)

  Author: Priya Shinde
*/

#include <max6675.h>

// MAX6675 pin connections
int thermoSO = 4;
int thermoCS = 5;
int thermoSCK = 6;

MAX6675 thermocouple(thermoSCK, thermoCS, thermoSO);

void setup() {
  Serial.begin(9600);
  Serial.println("Temperature Monitoring Started");
}

void loop() {
  double temperature = thermocouple.readCelsius();

  Serial.print("Temperature (C): ");
  Serial.println(temperature);

  delay(1000);  // 1 second delay
}
