#define pot 2
#define green 10

void setup() {
  pinMode(green, OUTPUT);
  Serial.begin(9600);
  Serial.println("Serial Analog Input");
}

void loop() {
  int potVal = analogRead(pot);
  Serial.print("Potentiometer Value: ");
  Serial.println(potVal);
  potVal /= 4;
  analogWrite(green, potVal);
}
