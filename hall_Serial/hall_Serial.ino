#define hall 3

void setup() {
  pinMode(hall, INPUT);
  Serial.begin(4800);
  Serial.println("Hall Effect Sensor: ");
}

void loop() {
  int hallVal = analogRead(hall);
  Serial.print("Hall Sensor Value: ");
  Serial.println(hallVal);
  delay(100);

}
