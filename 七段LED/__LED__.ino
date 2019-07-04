void setup()
{
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0)
  {
    int i,number;
    number=Serial.read();
    for(i=2;i<6;i++)
    {
      if(number%2==1)
        digitalWrite(i,HIGH);
      else 
        digitalWrite(i,LOW);
      number=number/2;
    }
  }
}
