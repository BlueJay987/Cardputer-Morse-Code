
#include <M5Cardputer.h>
#include "letters.h"

// i dont wanna type alladat
#define speaker M5Cardputer.Speaker
#define display M5Cardputer.Display

String input = "";

void setup() {
  auto cfg = M5.config();
  M5Cardputer.begin(cfg);
  M5Cardputer.Display.setRotation(1);
  M5Cardputer.Display.setTextColor(RED);
  M5Cardputer.Display.setTextDatum(middle_center);
  M5Cardputer.Display.setTextFont(&fonts::Orbitron_Light_32);
  M5Cardputer.Display.setTextSize(1);
}

void loop() {
  M5Cardputer.update();
  if (M5Cardputer.Keyboard.isChange()) {
    if (M5Cardputer.Keyboard.isPressed()) {
      M5Cardputer.Display.setTextColor(GREEN);
      Keyboard_Class::KeysState status = M5Cardputer.Keyboard.keysState();

      for (auto i : status.word) {
        input += i;
        M5Cardputer.Display.clearDisplay();
        M5Cardputer.Display.drawString(input, M5Cardputer.Display.width() / 2, M5Cardputer.Display.height() / 2);
      }

      if (status.del) {
        input.remove(input.length() - 1);
        M5Cardputer.Display.clearDisplay();
        M5Cardputer.Display.drawString(input, M5Cardputer.Display.width() / 2, M5Cardputer.Display.height() / 2);
      }

      if (status.enter) {
        M5Cardputer.Display.clearDisplay();
        playInput();
        M5Cardputer.Display.setTextSize(1);
        input = "";
      }

      if (input.length() > 7) {
        M5Cardputer.Display.setTextSize(0.5);
      } else {
        M5Cardputer.Display.setTextSize(1);
      }
    }
  }
}

void playInput() {
  M5Cardputer.Display.setTextSize(4);
  M5Cardputer.Display.setTextColor(RED);
  for (int i = 0; i < input.length(); i++) {
    char letter = input.charAt(i);

/*
Is there a better way to do this?
Yes
Am i going to do it?
NO
*/

    switch (letter) {
      case 'a':
        playA();
        break;
      case 'b':
        playB();
        break;
      case 'c':
        playC();
        break;
      case 'd':
        playD();
        break;
      case 'e':
        playE();
        break;
      case 'f':
        playF();
        break;
      case 'g':
        playG();
        break;
      case 'h':
        playH();
        break;
      case 'i':
        playI();
        break;
      case 'j':
        playJ();
        break;
      case 'k':
        playK();
        break;
      case 'l':
        playL();
        break;
      case 'm':
        playM();
        break;
      case 'n':
        playN();
        break;
      case 'o':
        playO();
        break;
      case 'p':
        playP();
        break;
      case 'q':
        playQ();
        break;
      case 'r':
        playR();
        break;
      case 's':
        playS();
        break;
      case 't':
        playT();
        break;
      case 'u':
        playU();
        break;
      case 'v':
        playV();
        break;
      case 'w':
        playW();
        break;
      case 'x':
        playX();
        break;
      case 'y':
        playY();
        break;
      case 'z':
        playZ();
        break;
      case ' ':
      //nothing, just ignore it
        break;
      default:
        M5Cardputer.Display.drawString("ERR", M5Cardputer.Display.width() / 2, M5Cardputer.Display.height() / 2);
        delay(dashTime);
    }
  }
}
