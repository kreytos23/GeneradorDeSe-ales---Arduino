int Entrada1 = 3;
int Entrada2 = 5;
int Entrada3 = 6;


void setup() {
  pinMode(Entrada1, OUTPUT);
  pinMode(Entrada2, OUTPUT);
  pinMode(Entrada3, OUTPUT);

}

void loop() {
  for(int i = 0; i <= 5; i++ ){
    digitalWrite(Entrada1, HIGH);
    delay(100);
    digitalWrite(Entrada1, LOW);
    delay(100);
  }
  for(int i = 0; i <= 5; i++){
    digitalWrite(Entrada2, HIGH);
    delay(300);
    digitalWrite(Entrada2, LOW);
    delay(300);
  }  
  for(int i = 0; i <= 5; i++ ){
    digitalWrite(Entrada3, HIGH);
    delay(500);
    digitalWrite(Entrada3, LOW);
    delay(500);
  }               
}
