//https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button

const int qPin = 12;

int qState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(qPin, INPUT);
}

void loop() {
  qState = digitalRead(qPin);
  
  if (qState == HIGH) {
    Serial.println("Q");
  }

  delay(100);
}
