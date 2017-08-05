#include <SoftwareSerial.h>
char passenger;
float fees=3.25;
float balance =20;
int flag=0;

void setup()
{
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  Serial.println("welcome to fakka...");
}
void loop()
{
   
  flag=digitalRead(7);
  delay(500);
  if(Serial.available() &&flag!=0)
  {
    //passenger=Serial.read();
    Serial.println("ID : 2");
    //Serial.println(Serial.read());
    Serial.write("your balance =  ");
    Serial.print(balance);
    Serial.write("  , fees = 3.25 ");
    Serial.write("  , remaining balance =");
    balance=balance-fees;
    Serial.println(balance);
    delay(1000);
    digitalWrite(13,HIGH);
    delay(500);
  digitalWrite(13,LOW);
    
  }
 
  flag=0;
}


