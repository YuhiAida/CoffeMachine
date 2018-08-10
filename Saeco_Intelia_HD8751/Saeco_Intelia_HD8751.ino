/***   Included libraries  ***/

/***   Global variables and function definition  ***/
const int cafe_chico = 7;

/***   Setup  ***/
void setup() {
    pinMode(cafe_chico, INPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);

}


/***   Loop  ***/
void loop() {
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    if (digitalRead(cafe_chico) == 1) {
        /*
        calentar
        */
        digitalWrite(12, LOW);
        delay(8000);
        digitalWrite(12, HIGH);
        /*
        moler
        */
        digitalWrite(11, LOW);
        delay(5000);
        digitalWrite(11, HIGH);
        delay(500);
        /*
        mover infusor hasta fin de carrera
        */
        digitalWrite(10, LOW);
        digitalWrite(12, LOW);
        delay(5000);
        digitalWrite(10, HIGH);
        /*
        bomba
        */
        digitalWrite(9, LOW);
        delay(18000);
    }
}
