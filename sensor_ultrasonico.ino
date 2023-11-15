#define echo1 2;
#define trig1 3;

#define echo2 4;
#define trig2 5;

#define bomba1 6;
#define bomba2 7;

void setup() {
 
  pinMode(bomba1, OUTPUT);
  pinMode(bomba2, OUTPUT);
  pinMode(echo1, INPUT);
  pinMode(echo2, INPUT);
  pinMode(trig1, OUTPUT);
  pinMode(trig2, OUTPUT);
 
 

  Serial.begin(9600);
}

void loop() {

  digitalWrite(trig1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig1, LOW);
  
  long duration1 = pulseIn(echo, HIGH);
  float distance1 = duration1 * 0.034/2;
  
  
 
  if ( distance1>= 10cm)
  {

    digitalWrite(bomba1, HIGH);
 
    delay(5000);
   
    digitalWrite(bomba1, LOW);
    
    delay(5000);

    
  }
  
  digitalWrite(trig2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig2, LOW);
  
  long duration2 = pulseIn(echo, HIGH);
  float distance2 = duration2 * 0.034/2;
  
  
  
  if (distance2>= 10)
  {
    digitalWrite(bomba2, HIGH);
    
    delay(5000);
    
    digitalWrite(bomba2, LOW);
    
    delay(5000);
  }}