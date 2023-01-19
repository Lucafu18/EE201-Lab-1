void setup() {
  Serial.begin(9600);
  pinMode(10, INPUT);

}

void loop() {
  
  if (digitalRead(10) == HIGH) {
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }

}