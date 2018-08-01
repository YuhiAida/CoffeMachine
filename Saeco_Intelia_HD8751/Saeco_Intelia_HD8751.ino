bool sensorPosicionBrew = 2;
bool sensorBrewInPlace = 4;
bool sensorTapaCerrada = 7;
//bool sensorAgua = ;
bool encender = 8;

/*falta sensor de agua,
  sensor del molino atorado o libre(falta de granos),
  boton de molino o ya molido,
  boton de limpieza,
  boton agua hirviendo,
  botones de cafes

  posibilidad de sacar 2 cafes apredando 2 veces, aprox 1,32s.
*/

//el molino se acciona aproximadamente 10 segundos, para cafe largo 20 segundos.
//un Espresso tarda aproximadamente 40 segundos en total 5 mas para limpiar el infusor.
//cafe largo tarda 1,35s.
//vapor 28 segundos para calentar

bool sensor= false;
bool brewInPlace = false;
bool running = false;

void setup() {
  pinMode(sensorPosicionBrew, INPUT);
  pinMode(sensorBrewInPlace, INPUT);
  pinMode(sensorTapaCerrada, INPUT);
  pinMode(encender, INPUT);
}

void loop() {
  encender()

  /*
  if(digitalRead(encender) == true){
    digitalRead(sensorBrewInPlace) == true;
    while(sensorBrewInPlace == true && sensorTapaCerrada && true){
      /*falta el del agua y residuos, para el display necesitaria un switch
        para mostrar imagen segun el caso
        //Calentar el agua 15s aprox.
        //Encender Bomba despues de los 15 segundos iniciales encender bomba por 25s, un total de 40.
        //Verificar que este limpio el "brew".
        //Esperar orden.

      }
    }*/
}

void encender(){

}
