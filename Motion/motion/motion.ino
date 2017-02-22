int motion = 2; //Change according to your pin config
int LED = 3; //Change according to your pin config

void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(motion,INPUT);
  
  
}

void loop()
{
  if(digitalRead(motion) == LOW)
  {
     digitalWrite(LED,LOW);
     
  }
  if (digitalRead(motion) == HIGH)
  {
    digitalWrite(LED,HIGH);
  
  }
  delay(600);
  
    
}
