void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  int state = digitalRead(3);
  Serial.println(state);
  if(state){
    digitalWrite(2, HIGH);
  }else{
    digitalWrite(2, LOW);
  }
}