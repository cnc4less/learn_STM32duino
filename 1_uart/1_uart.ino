int val = 0;
int inPin = PB8;
int outPin = PC13;
void setup() {
  // put your setup code here, to run once:
  pinMode(outPin, OUTPUT);

  Serial.begin(9600);
  /*while(!Serial) {
    ; 
   }*/

   Serial.println("Serial Started...");

 //pinMode(PB8, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (PC13 ,HIGH);
  delay(500);

  digitalWrite (PC13 ,LOW);
  delay(500);

  Serial.println("loop...");
  //val = digitalRead(inPin);
  //digitalWrite(outPin, val);
}
