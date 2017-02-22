
int const magnet = 4;
int const motion = 7;
int ledMagnet = 6;
int ledMotion = 5;
unsigned long previousTime = 0;
long interval = 6000;

void setup()
{
   pinMode(ledMagnet,OUTPUT);
   pinMode(ledMotion,OUTPUT);
   pinMode(magnet,INPUT);
   pinMode(motion,INPUT);

  
   
}

void loop()
{

     
       
       
      if(digitalRead(motion) == HIGH)
      {
        digitalWrite(ledMotion,HIGH);
        
        if(digitalRead(magnet) == HIGH)
        {
           digitalWrite(ledMagnet,HIGH);
           digitalWrite(ledMotion,HIGH);
           
        }
      }
      if(digitalRead(magnet) == HIGH)
      {
           digitalWrite(ledMagnet,HIGH);
           digitalWrite(ledMotion,HIGH);
      }
      
      if (digitalRead(magnet) == LOW)
      {
          digitalWrite(ledMagnet,LOW);
          digitalWrite(ledMotion,LOW);
      }
        
      
   
   // magnet == LOW means that the bin is open 
   // magnet == HIGH means that the bin is closed
   
   

   
}
         
