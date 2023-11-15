#define trig 3
#define echo 2
#define motor1h 4
#define motor1a 5
#define motor2h 6
#define motor2a 7


bool M1 = LOW;
bool bMotor1h = LOW;
bool bMotor1a = LOW;
bool bMotor2h = LOW;
bool bMotor2a = LOW;
bool Girando = LOW;


void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  pinMode(motor1h, OUTPUT);
  pinMode(motor1a, OUTPUT);
  pinMode(motor2h, OUTPUT);
  pinMode(motor2a, OUTPUT);
}

void loop() {
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long duration = pulseIn(echo, HIGH);
  float distance = duration * 0.034 / 2;

  if ((distance < 10) && M1 == LOW) {
    direita();    

  } else if ((distance < 10) && M1 == HIGH) {
    
     esquerda();

  } else if (distance > 10) {
    
    frente();        
  }

   
else if (distance <5){
  re(); 
}

  digitalWrite(motor1h, bMotor1h);
  digitalWrite(motor1a, bMotor1a);
  digitalWrite(motor2h, bMotor2h);
  digitalWrite(motor2a, bMotor2a);
  
  if (Girando) {
    delay(500);
    
  } else {

    delay(500);
  }
  }
void frente(){
    bMotor1h = HIGH;
    bMotor1a = LOW;
    bMotor2h = HIGH;
    bMotor2a = LOW;

    Girando = LOW;  

}    

    void direita(){      
    bMotor1h = HIGH;
    bMotor1a = LOW;
    bMotor2h = LOW;
    bMotor2a = LOW;
    M1 = HIGH;
    Girando = HIGH;
}

void esquerda(){
    bMotor1h = LOW;
    bMotor1a = LOW;
    bMotor2h = HIGH;
    bMotor2a = LOW;
    M1 = LOW;

    Girando = HIGH;
}
void re(){
  bMotor1h = LOW;
    bMotor1a = HIGH;
    bMotor2h = LOW;
    bMotor2a = HIGH;

    Girando = LOW; 
}