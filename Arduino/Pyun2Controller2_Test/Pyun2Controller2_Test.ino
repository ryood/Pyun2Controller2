// Pyun2Controller2のテストプログラム
//
// 2 - 7:   Tact Switch
// A0 - A2: POT
// A3 - A4: Joy Stick

#include <stdio.h>

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char str[80];
  sprintf(str, "%d %d %d %d %d %d | %4d %4d %4d | %4d %4d",
    digitalRead(2),
    digitalRead(3),
    digitalRead(4),
    digitalRead(5),
    digitalRead(6),
    digitalRead(7),
    analogRead(A0),
    analogRead(A1),
    analogRead(A2),
    analogRead(A3),
    analogRead(A4)
  );
  Serial.println(str);
  delay(100);
}
