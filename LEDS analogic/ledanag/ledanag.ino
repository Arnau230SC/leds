/**********************************************************************************
**                                                                               **
**                                 Fade LEDs                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 3;          // donar nom al pin 3 de l’Arduino
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led3 = 9;          // donar nom al pin 9 de l’Arduino
const int led4 = 10;         // donar nom al pin 10 de l’Arduino
const int led5 = 11;         // donar nom al pin 11 de l’Arduino
int velocitat = 500;         // velocitat de l'acció en ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
   digitalWrite(led0, LOW);     // posar PWM del pin 3 a 60
   digitalWrite(led1, LOW);     // posar PWM del pin 5 a 60
   digitalWrite(led2, LOW);     // posar PWM del pin 6 a 60
   digitalWrite(led3, LOW);     // posar PWM del pin 9 a 60
   digitalWrite(led4, LOW);     // posar PWM del pin 10 a 60
   digitalWrite(led5, LOW);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
   digitalWrite(led0, LOW);     // posar PWM del pin 3 a 60
   digitalWrite(led1, LOW);     // posar PWM del pin 5 a 60
   digitalWrite(led2, LOW);     // posar PWM del pin 6 a 60
   digitalWrite(led3, LOW);     // posar PWM del pin 9 a 60
   digitalWrite(led4, LOW);     // posar PWM del pin 10 a 60
   analogWrite(led5, 25);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  digitalWrite(led0, LOW);     // posar PWM del pin 3 a 60
  digitalWrite(led1, LOW);     // posar PWM del pin 5 a 60
  digitalWrite(led2, LOW);     // posar PWM del pin 6 a 60
  digitalWrite(led3, LOW);     // posar PWM del pin 9 a 60
  analogWrite(led4, 25);    // posar PWM del pin 10 a 255
  analogWrite(led5, 50);    // posar PWM del pin 11 a 255
   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  digitalWrite(led0, LOW);     // posar PWM del pin 3 a 60
  digitalWrite(led1, LOW);     // posar PWM del pin 5 a 60
  digitalWrite(led2, LOW);     // posar PWM del pin 6 a 60
  analogWrite(led3, 25);    // posar PWM del pin 9 a 125
  analogWrite(led4, 50);    // posar PWM del pin 10 a 125
  analogWrite(led5, 75);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  digitalWrite(led0, LOW);     // posar PWM del pin 3 a 60
  digitalWrite(led1, LOW);     // posar PWM del pin 5 a 60
  analogWrite(led2, 25);     // posar PWM del pin 6 a 60
  analogWrite(led3, 50);    // posar PWM del pin 9 a 125
  analogWrite(led4, 75);    // posar PWM del pin 10 a 125
  analogWrite(led5, 100);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  digitalWrite(led0, LOW);     // posar PWM del pin 3 a 60
  analogWrite(led1, 25);     // posar PWM del pin 5 a 60
  analogWrite(led2, 50);     // posar PWM del pin 6 a 60
  analogWrite(led3, 75);    // posar PWM del pin 9 a 125
  analogWrite(led4, 100);    // posar PWM del pin 10 a 125
  analogWrite(led5, 125);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 25);     // posar PWM del pin 3 a 60
  analogWrite(led1, 50);     // posar PWM del pin 5 a 60
  analogWrite(led2, 75);     // posar PWM del pin 6 a 60
  analogWrite(led3, 100);    // posar PWM del pin 9 a 125
  analogWrite(led4, 125);    // posar PWM del pin 10 a 125
  digitalWrite(led5, HIGH);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 50);     // posar PWM del pin 3 a 60
  analogWrite(led1, 75);     // posar PWM del pin 5 a 60
  analogWrite(led2, 100);     // posar PWM del pin 6 a 60
  analogWrite(led3, 125);    // posar PWM del pin 9 a 125
  digitalWrite(led4, HIGH);    // posar PWM del pin 10 a 125
  digitalWrite(led5, HIGH);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 75);     // posar PWM del pin 3 a 60
  analogWrite(led1, 100);     // posar PWM del pin 5 a 60
  analogWrite(led2, 125);     // posar PWM del pin 6 a 60
  digitalWrite(led3, HIGH);    // posar PWM del pin 9 a 125
  digitalWrite(led4, HIGH);    // posar PWM del pin 10 a 125
  digitalWrite(led5, HIGH);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 100);     // posar PWM del pin 3 a 60
  analogWrite(led1, 125);     // posar PWM del pin 5 a 60
  digitalWrite(led2, HIGH);     // posar PWM del pin 6 a 60
  digitalWrite(led3, HIGH);    // posar PWM del pin 9 a 125
  digitalWrite(led4, HIGH);    // posar PWM del pin 10 a 125
  digitalWrite(led5, HIGH);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 125);     // posar PWM del pin 3 a 60
  digitalWrite(led1, HIGH);     // posar PWM del pin 5 a 60
  digitalWrite(led2, HIGH);     // posar PWM del pin 6 a 60
  digitalWrite(led3, HIGH);    // posar PWM del pin 9 a 125
  digitalWrite(led4, HIGH);    // posar PWM del pin 10 a 125
  digitalWrite(led5, HIGH);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  digitalWrite(led0, HIGH);     // posar PWM del pin 3 a 60
  digitalWrite(led1, HIGH);     // posar PWM del pin 5 a 60
  digitalWrite(led2, HIGH);     // posar PWM del pin 6 a 60
  digitalWrite(led3, HIGH);    // posar PWM del pin 9 a 125
  digitalWrite(led4, HIGH);    // posar PWM del pin 10 a 125
  digitalWrite(led5, HIGH);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
}

//********** Funcions *************************************************************
