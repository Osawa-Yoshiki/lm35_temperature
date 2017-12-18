#define PIN1 A0

float get_temp(){
  int analogValue = analogRead(PIN1);
  float temp = ((analogValue * 5) / 1024.0) * 100;
  return temp;
}

void setup() {
  Serial.begin(9600);
  Serial.println("hello, arduino!");
}

void loop() {
  Serial.print("temp: ");
  Serial.println(get_temp());
  delay(1000);
}

