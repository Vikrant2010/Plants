




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
