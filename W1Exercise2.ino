void setup() {
  DDRD = 0b11111111;
  pinMode(10, INPUT);
}

void loop() {
  PORTD = 0b00000001;
  delay(200);
  int i = 0;
  while(i<7){
    int y = digitalRead(10);
    if(y == 0){
      i++;
    }
    PORTD = 1<<i;
    delay(200);
    }
}
