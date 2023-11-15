#define verde1 2
#define amarelo1 3
#define vermelho1 4
#define verde2 5
#define amarelo2 6
#define vermelho2 7
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(verde1, HIGH);
  digitalWrite(amarelo1, LOW);
  digitalWrite(vermelho1, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(amarelo2, LOW);
  digitalWrite(vermelho2, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(amarelo1, HIGH);
  digitalWrite(verde1, LOW);
  digitalWrite(vermelho1, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(amarelo2, LOW);
  digitalWrite(vermelho2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(vermelho1, HIGH);
  digitalWrite(amarelo1, LOW);
  digitalWrite(verde1, LOW);
  digitalWrite(verde2, HIGH);
  digitalWrite(amarelo2, LOW);
  digitalWrite(vermelho2, LOW);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(vermelho1, HIGH);
  digitalWrite(amarelo1, LOW);
  digitalWrite(verde1, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(amarelo2, HIGH);
  digitalWrite(vermelho2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
