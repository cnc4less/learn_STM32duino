int val = 0;
int inPin = PB7;
int outPin = PC13;
void setup() {
  // put your setup code here, to run once:
  pinMode(outPin, OUTPUT);
  pinMode(inPin, INPUT_PULLUP);

  Serial.begin(9600);
  Serial.println("Serial Started...");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (outPin , digitalRead(inPin));
}
