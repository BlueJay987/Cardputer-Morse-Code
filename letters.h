
#define speaker M5Cardputer.Speaker

// morse code math is suprisingly hard
int dotTime = 200; //milliseconds
int dashTime = dotTime*3;
int blankTime = dotTime*2;
//gap between letters is dashTime
int frequency = 900;

void dot() {
  M5Cardputer.Display.fillCircle(M5Cardputer.Display.width() / 2, M5Cardputer.Display.height() / 2, 10, RED);
  speaker.tone(frequency, dotTime);
  // V this makes the dot flicker
  delay(blankTime-50);
  M5Cardputer.Display.clearDisplay();
  delay(50);
}

void dash() {
  M5Cardputer.Display.drawString("-", M5Cardputer.Display.width() / 2, M5Cardputer.Display.height() / 2);
  speaker.tone(frequency, dashTime);
  // V same here with the dash
  delay(blankTime*2 - 50);
  M5Cardputer.Display.clearDisplay();
  delay(50);
}


/*
Is there a better way to do this?
Yes
Am i going to do it?
NO
*/
void playA() {
  dot();
  dash();
  delay(dashTime);
}

void playB() {
  dash();
  dot();
  dot();
  dot();
  delay(dashTime);
}

void playC() {
  dash();
  dot();
  dash();
  dot();
  delay(dashTime);
}

void playD() {
  dash();
  dot();
  dot();
  delay(dashTime);
}

void playE() {
  dot();
  delay(dashTime);
}

void playF() {
  dot();
  dot();
  dash();
  dot();
  delay(dashTime);
}

void playG() {
  dash();
  dash();
  dot();
  delay(dashTime);
}

void playH() {
  dot();
  dot();
  dot();
  dot();
  delay(dashTime);
}

void playI() {
  dot();
  dot();
  delay(dashTime);
}

void playJ() {
  dot();
  dash();
  dash();
  dash();
  delay(dashTime);
}

void playK() {
  dash();
  dot();
  dash();
  delay(dashTime);
}

void playL() {
  dot();
  dash();
  dot();
  dot();
  delay(dashTime);
}

void playM() {
  dash();
  dash();
  delay(dashTime);
}

void playN() {
  dash();
  dot();
  delay(dashTime);
}

void playO() {
  dash();
  dash();
  dash();
  delay(dashTime);
}

void playP() {
  dot();
  dash();
  dash();
  dot();
  delay(dashTime);
}

void playQ() {
  dash();
  dash();
  dot();
  dash();
  delay(dashTime);
}

void playR() {
  dot();
  dash();
  dot();
  delay(dashTime);
}

void playS() {
  dot();
  dot();
  dot();
  delay(dashTime);
}

void playT() {
  dash();
  delay(dashTime);
}

void playU() {
  dot();
  dot();
  dash();
  delay(dashTime);
}

void playV() {
  dot();
  dot();
  dot();
  dash();
  delay(dashTime);
}

void playW() {
  dot();
  dash();
  dash();
  delay(dashTime);
}

void playX() {
  dash();
  dot();
  dot();
  dash();
  delay(dashTime);
}

void playY() {
  dash();
  dot();
  dash();
  dash();
  delay(dashTime);
}

void playZ() {
  dash();
  dash();
  dot();
  dot();
  delay(dashTime);
}