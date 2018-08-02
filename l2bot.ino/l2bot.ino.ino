
int lefts= 4;
int rights=3;
int a1a=5;
int a1b=6;
int a2a=7;
int a2b=8;
int l=0;
int r=0;



void setup() {
 pinMode(lefts,INPUT);
 pinMode(rights,INPUT);
 pinMode(a1a,OUTPUT);
 pinMode(a1b,OUTPUT);
 pinMode(a2a,OUTPUT);
 pinMode(a2b,OUTPUT);

digitalWrite(lefts,HIGH);
digitalWrite(rights,HIGH);

}

void loop() {
  l=digitalRead(lefts);
  r=digitalRead(rights);

  if((l==1 && r==1)) 
  {
    digitalWrite(a1a,HIGH);
    digitalWrite(a1b,LOW);
    digitalWrite(a2a,HIGH);
    digitalWrite(a2b,LOW);
  }
  else
    {
     digitalWrite(a1a,LOW);
     digitalWrite(a1b,LOW);
     digitalWrite(a2a,LOW);
     digitalWrite(a2b,LOW);
    }
    }

