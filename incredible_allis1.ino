// C++ code
//
void setup()
{
  pinMode(2,INPUT);
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop()
{
 int a =digitalRead(2);
 Serial.println(a);
 if (a==0)
   digitalWrite(13,HIGH);
 else
   digitalWrite(13,LOW);

}