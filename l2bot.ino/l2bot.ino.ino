int S1 = 2;    // left sensor
int S2 = 3;     // right sensor
int S3 = 4;
int S4 = 5;
int S5 = 6;
int LM1 = 9;      // left motor
int LM2 = 10;      // left motor
int RM1 = 11;      // right motor
int RM2 = 12;      // right motor
int A;
int B;
int C;
int D;
int E;
const int w = 0;     // low
const int b = 1 ;    // high
void setup()
{
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
  pinMode(S4, INPUT);
  pinMode(S5, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
}




void loop()
{
 A = digitalRead(S1);
 B = digitalRead(S2);
 C = digitalRead(S3);
 D = digitalRead(S4);
 E = digitalRead(S5);




 if(A == b && B== b && C== w && D== b && E == b)
 {
  straight(); 
 }
 if(A==w && B==w && C==w && D==b && E==b)
 {
  left(); 
 }
 if(A==b && B==b && C==b && D==w && E==w)
 {
  right();
 }
 
}

void straight()
{
 analogWrite(LM1,200;
 analogWrite(LM2,55);
 analogWrite(RM1,200);
 analogWrite(RM2,55);
}

void left()
{ 
  do
  {
 analogWrite(LM1,55);
 analogWrite(LM2,150);
 analogWrite(RM1,150);
 analogWrite(RM2,55);
}while (A != b && B != b && C != w && D != b && E != b);
}
void right()
{
   do
  {
 analogWrite(LM1,200);
 analogWrite(LM2,55);
 analogWrite(RM1,55);
 analogWrite(RM2,200);
}while (A != b && B != b && C != w && D != b && E != b);
}
