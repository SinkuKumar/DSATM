#define pot 2
#define blue 9
void setup() {
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
  Serial.println("Serial Potentiometer");
}

void loop() {
  int value = analogRead(pot);
  Serial.print("Analog Value");
  Serial.println(value);
  float voltage = value / 204;
  //float voltage = (5/1023) * value;
  Serial.print("Approx Voltage:");
  Serial.println(voltage);
  
  //analogWrite(blue, value);
  delay(1000);
}
