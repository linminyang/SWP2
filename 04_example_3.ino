#define PinLed 13
unsigned int count, toggle;

void setup() {
  // put your setup code here, to run once:
  pinMode(PinLed, OUTPUT);
  Serial.begin(115200);
  Serial.println("Hello, world!");
  count = toggle = 0;
  digitalWrite(PinLed, toggle);
}

int toggle_state(int toggle){
  return toggle ^ 1;
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(++count);
  toggle = toggle_state(toggle);
  digitalWrite(PinLed, toggle);
  delay(1000);
}
