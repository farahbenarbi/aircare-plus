#define LED_PIN 2

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  Serial.println("Hello World - ESP32 demarre");
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED allumee");
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  Serial.println("LED eteinte");
  delay(1000);
}
