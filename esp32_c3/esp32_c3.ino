const int ledPin = 0; 

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  //Serial.begin(115200);
  digitalWrite(ledPin, HIGH); 
  //Serial.println("LED OFF");
  delay(50);                     
  digitalWrite(ledPin, LOW); 
  //Serial.println("LED ON");  
  delay(50);                     
}