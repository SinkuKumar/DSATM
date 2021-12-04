#define ldr 5
#define relay 2

void setup() {
  pinMode(relay, OUTPUT);  
}

void loop() {
  int ldrVal = analogRead(ldr);
  if(ldrVal > 800){
    digitalWrite(relay, LOW);
    delay(100);
    }
  digitalWrite(relay, HIGH);
}
