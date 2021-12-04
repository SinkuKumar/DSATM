#define buzzer 3
#define thr 4

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(4800);
  Serial.println("Thermistor Buzzer");
}

void loop() {
  int thrVal = analogRead(thr);
  Serial.print("Thermistor Value: ");
  Serial.println(thrVal);
  thrVal /= 4;
  analogWrite(buzzer, thrVal);
  delay(1000);
}
