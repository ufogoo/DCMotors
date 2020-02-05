void setup(){
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
 pinMode(9, INPUT); 
}
void loop(){

if(digitalRead(9)==HIGH){
Serial.println("button on");
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  delay(1000);
} else {
Serial.println("button off");
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(100);

}
}
