#define IN1 4
#define IN2 5
#define IN3 6
#define IN4 7

#include <SoftwareSerial.h>
SoftwareSerial bt(8, 9);

void setup() {
  Serial.begin(9600);
  bt.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  char c;
  if (bt.available()) {
    c = bt.read();
  }
  switch (c) {
    case 'F':
      frente();
      break;
    case 'B':
      re();
      break;
    case 'R':
      direita();
      break;
    case 'L':
      esquerda();
      break;
    case 'I':
      girando_d();
      break;
    case 'G':
      girando_e();
      break;
    case 'S':
      desliga();
      break;
    case 'X':
      freio();
      break;
  }
}

void freio() {
  ponte_h(1, 1, 1, 1);
}

void girando_d() {
  ponte_h(1, 0, 0, 1);
}

void desliga() {
  ponte_h(0, 0, 0, 0);
}

void girando_e() {
  ponte_h(0, 1, 1, 0);
}

void frente() {
  ponte_h(1, 0, 1, 0);
}

void esquerda() {
  ponte_h(0, 0, 1, 0);
}

void direita() {
  ponte_h(1, 0, 0, 0);
}

void re() {
  ponte_h(0, 1, 0, 1);
}

void ponte_h(bool val1, bool val2, bool val3, bool val4) {
  digitalWrite(IN1, val1);
  digitalWrite(IN2, val2);
  digitalWrite(IN3, val3);
  digitalWrite(IN4, val4);
}
