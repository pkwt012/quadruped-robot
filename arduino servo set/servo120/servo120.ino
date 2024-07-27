// File: SetServoTo120.ino

#include <Servo.h>

// Define the servo pin
const int servoPin = 9;

// Create a Servo object
Servo myServo;

void setup() {
  // Attach the servo to the specified pin
  myServo.attach(servoPin);

  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Set servo position to 120 degrees
  int servoPosition = 120;
  myServo.write(servoPosition);

  // Display the servo position
  Serial.print("Servo position set to ");
  Serial.print(servoPosition);
  Serial.println(" degrees");
}

void loop() {
  // No actions needed in the loop
}
