int analogPin = A0; // potentiometer wiper (middle terminal) connected to analog pin 0
                  
int val = 0;  
int ledPin = 9;
void setup() {
  Serial.begin(9600);           //  setup serial
  pinMode(9, OUTPUT); 
}

void loop() {
  val = analogRead(analogPin);  // read the input pin
  Serial.println(val);          // debug value
  analogWrite(ledPin, val); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
}
