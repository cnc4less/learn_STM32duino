//int analogPin = PA0; //OK
//int analogPin = PA1; //OK
//int analogPin = PA2; //OK
//int analogPin = PA3; //OK
//int analogPin = PA4; //OK
//int analogPin = PA5; //OK
//int analogPin = PA6; //OK
//int analogPin = PA7; //OK
//int analogPin = PA8; 
//int analogPin = PA9; 
//int analogPin = PA10;
//int analogPin = PA11;
//int analogPin = PA12;
//int analogPin = PA13;
//int analogPin = PA14;
//int analogPin = PA15;

//int analogPin = PB0; //OK
//int analogPin = PB1; //OK
//int analogPin = PB2;
//int analogPin = PB3;
//int analogPin = PB4;
//int analogPin = PB5;
//int analogPin = PB6; 
//int analogPin = PB7;
//int analogPin = PB8;
//int analogPin = PB9;
//int analogPin = PB10;
//int analogPin = PB11;
//int analogPin = PB12;
//int analogPin = PB13;
//int analogPin = PB14;
//int analogPin = PB15;

int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(analogPin);
  Serial.println(val);
  delay(1000);
}

