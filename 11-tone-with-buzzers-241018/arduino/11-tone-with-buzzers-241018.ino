#include "pitches.h"

const int buzzerPin = 10;

// Notes of the Super Mario theme
int melody[] = {
  NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0, 0,
  NOTE_G6, 0, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,

  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0
};

// Durations (in ms) of the notes in the melody
int noteDurations[] = {
  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125,

  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125,

  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125,

  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125,
  125, 125, 125, 125
};

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Play the melody
  for (int thisNote = 0; thisNote < sizeof(melody) / sizeof(melody[0]); thisNote++) {
    // Calculate the note duration
    int noteDuration = noteDurations[thisNote];

    // Play the note
    if (melody[thisNote] != 0) {
      tone(buzzerPin, melody[thisNote], noteDuration);
    }

    // Pause between notes
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    // Stop the tone
    noTone(buzzerPin);
  }

  // Add a delay to loop through the melody
  delay(1000);
}
