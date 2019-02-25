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
unsigned long Z = 1000;  //variable per al delay
const int buttonPin = 4;    
boolean buttonEstat = LOW;   

int num = 0;
//********** Setup ****************************************************************

void setup()
{
  pinMode(a, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(B, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(C, OUTPUT);     // definir el pin 7 com una sortida
   pinMode(buttonPin, INPUT);      // definir el pin 4 com una entrada
 Serial.begin(9600);
  
}
//********** Loop *****************************************************************

void loop()
{ 
  delay(500);    // per evitar que en una pulsació curta salti més d'un número
  buttonEstat = digitalRead(buttonPin);

  if (buttonEstat == HIGH)
  { 
    Serial.print(num);
    num = num + 1;             
    if (num == 8) num = 0;          
  }
  
  switch(num)
  {
    case 0:
  digitalWrite(a, LOW);    // posar a 5V el pin 5
  digitalWrite(B, LOW);    // posar a 5V el pin 6
  digitalWrite(C, LOW);    // posar a 5V el pin 7
  
  
    break;
  case 1:
  digitalWrite(a, LOW);    // posar a 5V el pin 5
  digitalWrite(B, LOW);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  
  
    break;          
 case 2:
  digitalWrite(a, LOW);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, LOW);    // posar a 5V el pin 7
  
  break;  
  case 3:
  digitalWrite(a, LOW);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  
  break;
    
 case 4:
  digitalWrite(a, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, LOW);    // posar a 5V el pin 6
  digitalWrite(C, LOW);    // posar a 5V el pin 7
 
  
    break;                   
  case 5:
  digitalWrite(a, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, LOW);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  
    break;          
 case 6:
  digitalWrite(a, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, LOW);    // posar a 5V el pin 7
 
    break;                    
 case 7:
  digitalWrite(a, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  
    break;                  
}

}
//********** Funcions **********************************************************
