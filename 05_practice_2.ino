#define PinLed 7

void setup() {
  // put your setup code here, to run once:
  pinMode(PinLed, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PinLed, 0);
  delay(1000);
  for(int i = 0; i < 5; i++){
    digitalWrite(PinLed, 1);
    delay(100);
    digitalWrite(PinLed, 0);
    delay(100);
  }
  digitalWrite(PinLed, 1);
  while(1){
    ;
  }
}
