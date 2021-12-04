#define hal 3

void setup() {
  pinMode(hal, INPUT);
  Serial.begin(4800);
  Serial.println("Hall Effect Sensor");
}

void loop() {
  int halVal = analogRead(hal);
  Serial.print("Magnetic Strength: ");
  Serial.println(halVal);
  delay(100);

}
