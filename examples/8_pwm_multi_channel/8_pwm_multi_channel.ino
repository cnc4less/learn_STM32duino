//int pwmPin = PA0; //OK
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

int pwmPin1 = PA0; //OK
int pwmPin2 = PA1; //OK
int pwmPin3 = PA2; //OK

const int PWM_MAX_OLD = 255;
const int PWM_MAX_NEW = 65535;
int pwmValue = 120;

int ledPin = PC13;

void setup() {
  // put your setup code here, to run once:
  //pinMode(pwmPin, PWM);
 

  //Serial.begin(9600);
  //Serial.println("Serial Started...");

  //Serial1.begin(9600);
  //Serial1.println("Serial1 Started...");

  pinMode(pwmPin1, PWM);
  pinMode(pwmPin2, PWM);
  pinMode(pwmPin3, PWM);

  pinMode(ledPin, OUTPUT);

  pwmWrite(pwmPin1, PWM_MAX_NEW/3);
  delayMicroseconds(100);
  pwmWrite(pwmPin2, PWM_MAX_NEW/3);
  delayMicroseconds(100);
  pwmWrite(pwmPin3, PWM_MAX_NEW/3);

  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //analogWrite(pwmPin, pwmValue);
  //Serial.println("Serial loop...");
  //Serial1.println("Serial1 loop...");

  digitalWrite(ledPin, HIGH);
  delay(1000);

  digitalWrite(ledPin, LOW);
  delay(1000);
}

