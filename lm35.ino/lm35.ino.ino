void setup() {
pinMode(A0,INPUT);
Serial.begin(115200);//baud rate 9600 octects/seconds
}

void loop() {
  float var=100*(analogRead(A0)*5/1023.0);
  Serial.println(var);
  delay(100);
}
