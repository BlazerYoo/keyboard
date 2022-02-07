//https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
const int qPin = A0;
const int wPin = A1;
const int ePin = A2;
const int rPin = A3;
const int tPin = A4;
const int yPin = A5;
const int uPin = A6;
const int iPin = A7;
const int oPin = A8;
const int pPin = A9;

void setup() {
  Serial.begin(9600);
  pinMode(qPin, INPUT);
  pinMode(wPin, INPUT);
}

void loop() {
  
  if (digitalRead(qPin) == HIGH) {
    Serial.println("q");
  }

  if (digitalRead(wPin) == HIGH) {
    Serial.println("w");
  }

  if (digitalRead(ePin) == HIGH) {
    Serial.println("e");
  }

  if (digitalRead(rPin) == HIGH) {
    Serial.println("r");
  }

  if (digitalRead(tPin) == HIGH) {
    Serial.println("t");
  }

  if (digitalRead(yPin) == HIGH) {
    Serial.println("y");
  }

  if (digitalRead(uPin) == HIGH) {
    Serial.println("u");
  }

  if (digitalRead(iPin) == HIGH) {
    Serial.println("i");
  }

  if (digitalRead(oPin) == HIGH) {
    Serial.println("o");
  }

  if (digitalRead(pPin) == HIGH) {
    Serial.println("p");
  }

  delay(100);
}