/*
    Project name : ESP8266 Linear magnetic Hall sensors
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-linear-magnetic-hall-sensors
*/

const int hallSensorPin = A0; // Analog pin connected to Hall sensor
int sensorValue = 0;          // Variable to store sensor value

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the sensor value (0-1023)
  sensorValue = analogRead(hallSensorPin);

  // Print the sensor value to the Serial Monitor
  Serial.print("Magnetic Field Strength: ");
  Serial.println(sensorValue);

  // Add a short delay
  delay(1000);
}
