#define led_pin A3

void setup() {
  pinMode(led_pin, OUTPUT);

}

void loop() {
  digitalWrite(led_pin, HIGH);

}
