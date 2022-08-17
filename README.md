# Auto Pot
What is it?

We used Adruino for the hardware.




It is a self watering plant which uses a moisture sensor to detect the moisture of the soil using CSS0. If the moisture is low then it waters the plant.This helps people with their daily gargening keeping their plants healthy.  

CODE





void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}
 
void loop() {


    int msvalue = analogRead(A0);
    Serial.println(msvalue);
 
 
 
     if (msvalue >= 500  )
      {
         digitalWrite(5, LOW);
         digitalWrite(6, HIGH);
        delay(1000);
      }
 
      else
      {
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
        delay(1000);
      }
      
      
      
      
INSTRUCTIONS
- Sit back and relax, let the Auto-Pot water your plant. (Also fill the tank with water)
