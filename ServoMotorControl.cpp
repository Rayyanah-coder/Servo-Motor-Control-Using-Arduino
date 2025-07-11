/* 4‑Servo Sweep‑and‑Hold
   ------------------------------------------------------
   • Sweeps all servos for 2 seconds (classic Sweep pattern)
   • Then parks every servo at 90 °
   ------------------------------------------------------*/

#include <Servo.h>

const byte NUM_SERVOS = 4;           // how many servos you’re using
const byte servoPins[NUM_SERVOS] = {9, 10, 11, 12}; // change to your actual pins

Servo servos[NUM_SERVOS];

void setup() {
  // attach every Servo object to its pin
  for (byte i = 0; i < NUM_SERVOS; i++) {
    servos[i].attach(servoPins[i]);
  }
}

void loop() {
  /* -------- PHASE 1: SWEEP for 2 seconds -------- */
  unsigned long startTime = millis();
  while (millis() - startTime < 2000) {           // 2000 ms = 2 s
    // forward sweep 0 → 180
    for (int angle = 0; angle <= 180; angle += 5) {
      for (byte i = 0; i < NUM_SERVOS; i++) {
        servos[i].write(angle);                   // all servos same angle
      }
      delay(15);
    }
    // reverse sweep 180 → 0
    for (int angle = 180; angle >= 0; angle -= 5) {
      for (byte i = 0; i < NUM_SERVOS; i++) {
        servos[i].write(angle);
      }
      delay(15);
    }
  }

  /* -------- PHASE 2: HOLD at 90 ° forever -------- */
  for (byte i = 0; i < NUM_SERVOS; i++) {
    servos[i].write(90);                          // center position
  }
  while (true) ;                                  // stop looping
}
