#define relay 2

void setup() {
  pinMode(relay, OUTPUT);
}

void loop() {
  digitalWrite(relay, LOW);
  delay(1000);
  digitalWrite(relay, HIGH);
  delay(1000);

}
