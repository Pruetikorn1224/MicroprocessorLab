void setup() {
  DDRD = 0b11111111;
}

void loop() {
  PORTD = 0b00000001;
  delay(200);
  for(int i=0 ; i<=8; i++){
    PORTD = 1<<i;
    delay(200);
  }
  for(int i=0; i<=8; i++){
    PORTD = 0x80>>i;
    delay(200);
  }
}
