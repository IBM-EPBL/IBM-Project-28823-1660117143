// C++ code
//
int G=11;
int Y=12;
int R=13;
void setup()
{
 Serial.begin(9600);
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
}

void loop()
{
  digitalWrite(13,HIGH);
  Serial.println("STOP");
  delay(1000);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  Serial.println("WAIT");
  delay(1000);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  Serial.println("GO");
  delay(1000);
  digitalWrite(11,LOW);
  
}