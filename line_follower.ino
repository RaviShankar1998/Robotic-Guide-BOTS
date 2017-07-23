int in1 = 2;
int in2 = 3;
int in3 = 4;
int in4 = 5;
int ir1 = 6;
int ir2 = 7;
char val;
void setup()
{
   pinMode(in1,HIGH);
   pinMode(in2,LOW);
   pinMode(in3,HIGH);
   pinMode(in4,LOW);
   pinMode(ir1,INPUT);
   pinMode(ir2,INPUT);
}
void loop()
{

  if(ir1==LOW)
  {
   digitalWrite(in1,LOW);
   digitalWrite(in2,HIGH);
   digitalWrite(in3,HIGH);
   digitalWrite(in4,LOW);
  }
  else if(ir2==LOW)
  {
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
  }
  else
  {
    digitalWrite(in1,HIGH);
    digitalWrite(in1,LOW);
    digitalWrite(in1,HIGH);
    digitalWrite(in1,LOW);
  }
}

