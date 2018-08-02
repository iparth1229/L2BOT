int lefts= 4;
int rights=3;
int fronts=2;
int a1a=5;
int a1b=6;
int a2a=7;
int a2b=8;
int l;
int r;
int f;


void setup() {
 pinMode(lefts,INPUT);
 pinMode(rights,INPUT);
 pinMode(fronts,INPUT);
 pinMode(a1a,OUTPUT);
 pinMode(a1b,OUTPUT);
 pinMode(a2a,OUTPUT);
 pinMode(a2b,OUTPUT);

digitalWrite(lefts,HIGH);
digitalWrite(rights,HIGH);
digitalWrite(fronts,HIGH);
Serial.begin(9600); 

}

void loop() {
  l=digitalRead(lefts);
  r=digitalRead(rights);
  f=digitalRead(fronts);
 

  if (l==1 && f==0 && r==1)  //forward
  {
    digitalWrite(a1a,HIGH);
    digitalWrite(a1b,LOW);
    digitalWrite(a2a,HIGH);
    digitalWrite(a2b,LOW);
  }
  else if(l==0 && f==1 && r==1) //left
  {
   digitalWrite(rights,LOW); //while taking left turn if right sensors come across any line it will be off 
   do
  { 
    digitalWrite(a1a,LOW);
    digitalWrite(a1b,HIGH);
    digitalWrite(a2a,HIGH);
    digitalWrite(a2b,LOW);
  }while (l==1 && f==0 && r==1);
  }
   else if(l==1 && f==1 && r==0) //right
   {
    digitalWrite(lefts,LOW); 
    do
    {
    digitalWrite(a1a,HIGH);
    digitalWrite(a1b,LOW);
    digitalWrite(a2a,LOW);
    digitalWrite(a2b,HIGH);
    }while(l==1 && f==0 && r==1);
   }
   else      //stop
    {
     digitalWrite(a1a,LOW);
     digitalWrite(a1b,LOW);
     digitalWrite(a2a,LOW);
     digitalWrite(a2b,LOW);
    }
 }
