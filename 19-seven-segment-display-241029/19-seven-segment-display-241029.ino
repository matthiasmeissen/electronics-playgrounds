const int segmentPins[] = {7, 6, 4, 2, 1, 9, 10}; // A, B, C, D, E, F, G

void setup() {
    for (int i = 0; i < 7; i++) {
        pinMode(segmentPins[i], OUTPUT);
    }
}

void loop() {
  showHello();
  delay(400);
  loadingAnimation(3);
  delay(400);
}

void showHello() {
    displayH(); delay(500);
    displayE(); delay(500);
    displayL(); delay(500);
    displayL(); delay(500);
    display0(); delay(500);
}

void loadingAnimation(int num) {
  for (int i = 0; i < num; i ++) {
  	displayPattern(1, 0, 0, 0, 0, 0, 0); delay(200);
    displayPattern(0, 1, 0, 0, 0, 0, 0); delay(200);
    displayPattern(0, 0, 1, 0, 0, 0, 0); delay(200);
    displayPattern(0, 0, 0, 1, 0, 0, 0); delay(200);
    displayPattern(0, 0, 0, 0, 1, 0, 0); delay(200);
    displayPattern(0, 0, 0, 0, 0, 1, 0); delay(200);
  }
  displayPattern(0, 0, 0, 0, 0, 0, 0); delay(500);
}

// Helper function to set the pattern on each segment
void displayPattern(bool a, bool b, bool c, bool d, bool e, bool f, bool g) {
    digitalWrite(segmentPins[0], a);
    digitalWrite(segmentPins[1], b);
    digitalWrite(segmentPins[2], c);
    digitalWrite(segmentPins[3], d);
    digitalWrite(segmentPins[4], e);
    digitalWrite(segmentPins[5], f);
    digitalWrite(segmentPins[6], g);
}

// Number Display Functions
void display0() { displayPattern(1, 1, 1, 1, 1, 1, 0); }
void display1() { displayPattern(0, 1, 1, 0, 0, 0, 0); }
void display2() { displayPattern(1, 1, 0, 1, 1, 0, 1); }
void display3() { displayPattern(1, 1, 1, 1, 0, 0, 1); }
void display4() { displayPattern(0, 1, 1, 0, 0, 1, 1); }
void display5() { displayPattern(1, 0, 1, 1, 0, 1, 1); }
void display6() { displayPattern(1, 0, 1, 1, 1, 1, 1); }
void display7() { displayPattern(1, 1, 1, 0, 0, 0, 0); }
void display8() { displayPattern(1, 1, 1, 1, 1, 1, 1); }
void display9() { displayPattern(1, 1, 1, 1, 0, 1, 1); }

// Letter and Symbol Display Functions
void displayA() { displayPattern(1, 1, 1, 0, 1, 1, 1); }
void displayB() { displayPattern(0, 0, 1, 1, 1, 1, 1); }
void displayC() { displayPattern(1, 0, 0, 1, 1, 1, 0); }
void displayD() { displayPattern(0, 1, 1, 1, 1, 0, 1); }
void displayE() { displayPattern(1, 0, 0, 1, 1, 1, 1); }
void displayF() { displayPattern(1, 0, 0, 0, 1, 1, 1); }
void displayH() { displayPattern(0, 1, 1, 0, 1, 1, 1); }
void displayI() { displayPattern(0, 1, 1, 0, 0, 0, 0); }
void displayJ() { displayPattern(0, 1, 1, 1, 1, 0, 0); }
void displayL() { displayPattern(0, 0, 0, 1, 1, 1, 0); }
void displayP() { displayPattern(1, 1, 0, 0, 1, 1, 1); }
void displayU() { displayPattern(0, 1, 1, 1, 1, 1, 0); }

// Fun Symbols
void displayDash() { displayPattern(0, 0, 0, 0, 0, 0, 1); }
void displayUnderscore() { displayPattern(0, 0, 0, 1, 0, 0, 0); }
void displayDegree() { displayPattern(1, 1, 0, 0, 0, 1, 1); }
void displayEquals() { displayPattern(0, 0, 0, 1, 0, 0, 1); }
void displayExclamation() { displayPattern(0, 1, 0, 0, 0, 0, 0); }
