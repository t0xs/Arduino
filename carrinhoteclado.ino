
#define trig 3
#define echo 2
#define IN1 4
#define IN2 5
#define IN3 6
#define IN4 7
#include <SoftwareSerial.h>
SoftwareSerial bt(8,9);

void setup() {
  Serial.begin(9600);
   bt.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

}

void loop() {

char c=bt.read();
  if(bt.available()){
    char c=bt.read();
  }
switch(c){
case 'F':
frente();
break;

case 'B':
re();
break;

case 'R':
direita();
break;

case'L':
esquerda();
break;

case'I':
girando_d();
break;

case'G':
girando_e();
break;

case'S':
desliga();
break;

case'X':
freio();
break;
}}

void            
