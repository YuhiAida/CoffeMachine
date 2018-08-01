const boolean sensorPosicionBrew = 2;
const boolean sensorBrewInPlace = 4;
const boolean sensorTapaCerrada = 7;
const boolean encender = 8;

boolean sensor= false;
boolean brewInPlace = false;
bool running = false;

void setup() {
  pinMode(sensorPosicionBrew, INPUT);
  pinMode(sensorBrewInPlace, INPUT);
  pinMode(sensorTapaCerrada, INPUT);
  pinMode(encender, INPUT);
}

void loop() {
  if(digitalRead(encender) == HIGH){
    
    }

}
