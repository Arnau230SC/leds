/**********************************************************************************
**                                                                               **
**                             Display de 7 segments                             **
/**********************************************************************************

**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/


//********** Includes *************************************************************

//********** Variables ************************************************************
const int a = 5;        
const int B = 6;          
const int C = 7;          
const int D = 8;         
const int E = 9;          
const int F = 10;        
const int G = 11;          
unsigned long Z = 1000;  //variable per al delay
//********** Setup ****************************************************************

void setup()
{
  pinMode(a, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(B, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(C, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(D, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(E, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(F, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(G, OUTPUT);     // definir el pin 11 com una sortida
  
}
//********** Loop *****************************************************************

void loop()

{

  digitalWrite(a, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, LOW);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 10
  
  delay(Z);                 

  digitalWrite(a, LOW);    // posar a 5V el pin 5
  digitalWrite(B, LOW);    // posar a 5V el pin 6
  digitalWrite(C, LOW);    // posar a 5V el pin 7
  digitalWrite(D, LOW);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, LOW);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 10

  delay(Z);  

  digitalWrite(a, LOW);    // posar a 5V el pin 5
  digitalWrite(B, LOW);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, LOW);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, LOW);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 10
  
  delay(Z);  

  digitalWrite(a, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, LOW);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 10
  
  delay(Z);                   

  digitalWrite(a, LOW);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, LOW);    // posar a 5V el pin 10
  
  delay(Z);                    

}
//********** Funcions **********************************************************
