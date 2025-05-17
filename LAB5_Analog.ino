#define THERMISTORPIN A0
#define POWER 8
void setup() {
  pinMode(THERMISTORPIN,INPUT);
  pinMode(POWER,8);
  Serial.begin(9600);
  digitalWrite(POWER,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  float value = 0;
  float value2 = 0;
  float Volt = 0;
  value = analogRead(THERMISTORPIN);
  value2 = map(value, 0, 1024, 0, 255);
  Volt = (value / 1024) * 5;
  Serial.println(Volt);
  delay(250);
}
