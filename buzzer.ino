int buzzpin=4;
void setup() {
pinMode(buzzpin,OUTPUT);  

}

void loop() {
 digitalWrite(buzzpin,HIGH);
 delay(500);
 digitalWrite(buzzpin,LOW);
 delay(50);

}
