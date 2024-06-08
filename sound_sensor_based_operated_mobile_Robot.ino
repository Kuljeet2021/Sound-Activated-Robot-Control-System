// L293D IC Pin -- Arduino Uno Digital pin 
//   2          --      D2
//   7          --      D3
//   15         --      D4
//   10         --      D5

// Sound Sensor output  --      A0

void setup(){
 pinMode(2,OUTPUT); // Right motor Connection positive terminal
 pinMode(3,OUTPUT); // Right Motor Connection negative terminal 
 pinMode(4,OUTPUT); // Left side motor connection positive terminal
 pinMode(5,OUTPUT); // Left side motor Connection negative terminal
 pinMode(A0,INPUT_PULLUP); // Connect Sound Sensor output  

 Serial.begin(9600);
}

void loop()
{
 int Sound_val= analogRead(A0);
  Serial.println(Sound_val);
  delay(500);
  
  if(Sound_val>600){
     Serial.println("Mic is on");
  // Move robot in forward Direction
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
    delay(1000); 
 
  // Move two motors forward
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  delay(1000); 

   // Move two motors backward
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(1000); 
 
  // turn motor right side 
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  delay(1000); 

   // turn motor left side 
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(1000); 

    // turn right wheel clockwise,left wheel anticlockwise 
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(1000);
  }
  else
  {
// Move robot in backward Direction
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
   }
}
