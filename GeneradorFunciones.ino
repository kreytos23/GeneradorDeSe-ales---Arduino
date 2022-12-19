int Entrada1 = 3;
int Entrada2 = 5;
int Entrada3 = 6;


void setup() {
  pinMode(Entrada1, OUTPUT);
  pinMode(Entrada2, OUTPUT);
  pinMode(Entrada3, OUTPUT);

}

void loop() {
 for(int i = 0; i <= 10; i++ ){
    if (i % 1 == 0)
        digitalWrite(Entrada1, !digitalRead(Entrada1));    //1 0 1 0 1 0 1 0 1 0 1
    if (i % 3 == 0)
        digitalWrite(Entrada2, !digitalRead(Entrada2));   // 0 0 1 1 1 0 0 0 1 1 1
    if (i % 5 == 0)
        digitalWrite(Entrada3, !digitalRead(Entrada3));   // 0 0 0 0 0 1 1 1 1 1 0 0 0 0 0 1 1 1 1 1
    delay(300);

}              
}
