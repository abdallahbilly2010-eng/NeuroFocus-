
#include <Arduino.h>
#include "config.h"

void initializeDevice() {
  Serial.begin(115200);

  Serial.println();
  Serial.println("========================");
  Serial.println("NeuroFocus");
  Serial.println("The Attention Diary");
  Serial.println("========================");
  Serial.println("Status: Initial prototype");
}

void showMainMenu() {
  Serial.println();
  Serial.println("Planned cognitive tasks:");
  Serial.println("1. Simple Reaction Time");
  Serial.println("2. Choice Reaction Time");
  Serial.println("3. Go/No-Go");
  Serial.println("4. Sequence Memory");
}

void setup() {
  initializeDevice();
  showMainMenu();
}

void loop() {
  // Cognitive tasks, hardware inputs,
  // timing, and data logging will be
  // implemented and tested incrementally.

  delay(1000);
}

