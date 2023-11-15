#define A 7
#define B 8
#define C 2
#define D 3
#define E 4
#define F 6
#define G 5
static int contador = 0;
bool diminuir=0;
void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
   
  
  delay(1000);
   if (contador>9)
  {
     diminuir=1;
   }
  else if (contador==0)
  { diminuir=0;
  }
  if (diminuir==1){
    contador--;
  }
 else
 {contador ++;}
  switch(contador)
  {
    case 0:
    digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, HIGH);
     digitalWrite(G, LOW);
    break;
   case 1:
     digitalWrite(A, LOW);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, LOW);
    break;
       case 2:
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, LOW);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, LOW);
     digitalWrite(G, HIGH);
    break;
       case 3:
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, HIGH);
    break;
       case 4:
     digitalWrite(A, LOW);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
    break;
       case 5:
     digitalWrite(A, HIGH);
     digitalWrite(B, LOW);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, LOW);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
    break;
       case 6:
     digitalWrite(A, LOW);
     digitalWrite(B, LOW);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
    break;
       case 7:
    digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, LOW);
     digitalWrite(G, LOW);
    break;

        case 8:
    digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, HIGH);
     digitalWrite(E, HIGH);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);
    break;
     
        case 9:
    digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
     digitalWrite(E, LOW);
     digitalWrite(F, HIGH);
     digitalWrite(G, HIGH);

    break;

  }
 
}