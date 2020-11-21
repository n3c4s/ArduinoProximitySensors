int sensor1 = 1;
int sensor2 = 2;
int sensor3 = 3;
int sensor4 = 4;
int sensor5 = 5;
int pinA3 = 8;
int contador = 0;
int contadorEspecial = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(sensor1, INPUT);
pinMode(sensor2, INPUT);
pinMode(sensor3, INPUT);
pinMode(sensor4, INPUT);
pinMode(sensor5, INPUT);
pinMode(pinA3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lecsen1 = digitalRead(sensor1);
  int lecsen2 = digitalRead(sensor2);
  int lecsen3 = digitalRead(sensor3);
  int lecsen4 = digitalRead(sensor4);
  int lecsen5 = digitalRead(sensor5);

  if(lecsen1==LOW || lecsen2==LOW || lecsen3==LOW || lecsen4==LOW){
        contador = contador +1;
        Serial.print(contador);
    }

   if(contador==4 || contador==3 && contadorEspecial==1){
    digitalWrite(pinA3,HIGH);
    delay(500);
    digitalWrite(pinA3,LOW);
    contador = 0;
    contadorEspecial = 0;
    Serial.print("Pulso Mandado");
    }

    if(lecsen5==LOW){
      contadorEspecial=1;
      }


   
}
