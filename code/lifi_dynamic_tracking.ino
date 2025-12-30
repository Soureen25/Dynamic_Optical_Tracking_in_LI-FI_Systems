#include <Servo.h>

Servo trackerServo;

// LDR analog pins
const int LDR1 = A0;
const int LDR2 = A1;
const int LDR3 = A2;
const int LDR4 = A3;

const int LED_PIN = 8;
int servoPos = 90; // Start at middle

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  trackerServo.attach(9);
  trackerServo.write(servoPos);
}

void loop() {
  // Read LDR values
  int val1 = analogRead(LDR1);
  int val2 = analogRead(LDR2);
  int val3 = analogRead(LDR3);
  int val4 = analogRead(LDR4);

  // Debug output
  Serial.print("LDR1: "); Serial.print(val1);
  Serial.print(" | LDR2: "); Serial.print(val2);
  Serial.print(" | LDR3: "); Serial.print(val3);
  Serial.print(" | LDR4: "); Serial.println(val4);

  // Average top and bottom readings
  int topAvg = (val1 + val2) / 2;
  int bottomAvg = (val3 + val4) / 2;

  // Average left and right readings
  int leftAvg = (val1 + val3) / 2;
  int rightAvg = (val2 + val4) / 2;

  // LED ON if strong light detected
  if (topAvg > 500 || bottomAvg > 500) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  // Adjust servo horizontally
  if (leftAvg > rightAvg + 50) {
    servoPos += 1; // Turn left
  } else if (rightAvg > leftAvg + 50) {
    servoPos -= 1; // Turn right
  }

  // Constrain servo position
  servoPos = constrain(servoPos, 0, 180);
  trackerServo.write(servoPos);

  delay(50);
}
