/*
 * Course: Arduino Based Solar Tracker
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Arduino Based Solar Tracker" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Arduino)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/arduino-based-solar-tracker/
 * Repository: https://github.com/engasm89/arduino-based-solar-tracker
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

/*
 * Course: Arduino Based Solar Tracker
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Arduino Based Solar Tracker
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Serial

#define OUTPUT 1 // Output
#define INPUT 0 // Input

// Pins for LDR sensors and servo
static const int LDR_LEFT = 0; // A0 left LDR
static const int LDR_RIGHT = 1; // A1 right LDR
static const int SERVO_PIN = 9; // Servo on D9

// Stubs
void pinMode(int pin, int mode) { /* set */ } // Configure
int analogRead(int pin) { return 500; } // Read analog
void delay(int ms) { /* wait */ } // Delay
void analogWrite(int pin, int val) { /* pwm */ } // PWM
void Serial_begin(long baud) { printf("Serial start %ld\n", baud); } // Serial
void Serial_println(const char *s) { printf("%s\n", s); } // Println

int servoAngle = 90; // Current servo angle

void setup(void) { // Initialize
  pinMode(SERVO_PIN, OUTPUT); // Servo output
  Serial_begin(9600); // Serial start
  Serial_println("Solar Tracker ready"); // Status
}

void setServo(int angle) { // Set servo angle
  if (angle < 0) angle = 0; // Clamp min
  if (angle > 180) angle = 180; // Clamp max
  analogWrite(SERVO_PIN, angle); // Illustrative PWM
  servoAngle = angle; // Update cache
}

void loop(void) { // Main loop
  int left = analogRead(LDR_LEFT); // Read left light
  int right = analogRead(LDR_RIGHT); // Read right light
  int diff = left - right; // Compute difference
  if (diff > 20) { // Left brighter
    setServo(servoAngle - 2); // Move left
    Serial_println("Adjust left"); // Feedback
  } else if (diff < -20) { // Right brighter
    setServo(servoAngle + 2); // Move right
    Serial_println("Adjust right"); // Feedback
  } else { // Balanced
    Serial_println("Aligned"); // Feedback
  } // End adjustment
  delay(200); // Sampling interval
}

// Main routine: orchestrates the arduino based solar tracker scenario
int main(void) { // Program entry point
  setup(); // Init
  for (int i = 0; i < 20; ++i) { // Simulated cycles
    loop(); // Execute
  } // End
  return 0; // Exit
}

