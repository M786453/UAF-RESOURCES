int ledPin=13;

 void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
    flash(200); flash(200); flash(200); // S
    delay(300); // otherwise the flashes run together
    flash(500); flash(500); flash(500); // O
    flash(200); flash(200); flash(200); // S
    delay(1000);
    
}

void flash(int duration)
{
  digitalWrite(ledPin,HIGH);
  delay(duration);
  digitalWrite(ledPin,LOW);
  delay(duration);
}
