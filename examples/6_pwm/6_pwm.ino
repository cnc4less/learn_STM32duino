
// line comment with OK, that GPIO can be set as PWM pin

int pwmPin = PA0; //OK
//int pwmPin = PA1; //OK
//int pwmPin = PA2; //OK
//int pwmPin = PA3; //OK
//int pwmPin = PA4;
//int pwmPin = PA5;
//int pwmPin = PA6; //OK
//int pwmPin = PA7; //OK
//int pwmPin = PA8; //OK
//int pwmPin = PA9; //OK
//int pwmPin = PA10; //OK
//int pwmPin = PA11;
//int pwmPin = PA12;
//int pwmPin = PA13;
//int pwmPin = PA14;
//int pwmPin = PA15;

//int pwmPin = PB0; //OK
//int pwmPin = PB1; //OK
//int pwmPin = PB2;
//int pwmPin = PB3;
//int pwmPin = PB4;
//int pwmPin = PB5;
//int pwmPin = PB6; //OK
//int pwmPin = PB7; //OK
//int pwmPin = PB8; //OK
//int pwmPin = PB9; //OK
//int pwmPin = PB10;
//int pwmPin = PB11;
//int pwmPin = PB12;
//int pwmPin = PB13;
//int pwmPin = PB14;
//int pwmPin = PB15;

//int pwmPin = PC13;
//int pwmPin = PC14;
//int pwmPin = PC15;


void setup() {
  pinMode(pwmPin, PWM);


  Serial.begin(9600);
  Serial.println("Serial Started...");
}

void loop() {
  // put your main code here, to run repeatedly:

  // origin Arduino pwm function, value from 0 to 255
  //analogWrite(pwmPin, 127);

  // new STM32duino pwm function, value from 0 to 65535
  pwmWrite(pwmPin, 12700);
  delay(10000);

}

