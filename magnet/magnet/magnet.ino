int magnet = 2;
int LED = 3;

void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(magnet,INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  if(digitalRead(magnet) == LOW)
     digitalWrite(LED,HIGH);
  if (digitalRead(magnet) == HIGH)
    digitalWrite(LED,LOW);
  Serial.print(magnet);
    
}
