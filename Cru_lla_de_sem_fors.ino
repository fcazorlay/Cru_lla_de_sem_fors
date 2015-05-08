/************************************************************************
**                                                                     **
**                        Descripció programa                          **
**                                                                     **
/***********************************************************************/

//******  Inculdes  *****************************************************


//******  Variables  ****************************************************

//******  Setup  ********************************************************

const int semaforAR = 7;          // donar nom al pin 7 de l’Arduino
const int semaforAT = 8;          // donar nom al pin 8 de l’Arduino
const int semaforAV = 9;          // donar nom al pin 9 de l’Arduino
const int semaforBR = 10;         // donar nom al pin 10 de l’Arduino
const int semaforBT = 11;         // donar nom al pin 11 de l’Arduino
const int semaforBV = 12;         // donar nom al pin 12 de l’Arduino
int pausa = 100;             // definir variable de temps en ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(semaforAR, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(semaforAT, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(semaforAV, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(semaforBR, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(semaforBT, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(semaforBV, OUTPUT);     // definir el pin 12 com una sortida
  
  digitalWrite(semaforAR, LOW);    // posar a 5V el pin 7
  digitalWrite(semaforAT, HIGH);    // posar a 0V el pin 8
  digitalWrite(semaforAV, HIGH);    // posar a 0V el pin 9
  digitalWrite(semaforBR, LOW);    // posar a 5V el pin 10
  digitalWrite(semaforBT, HIGH);    // posar a 0V el pin 11
  digitalWrite(semaforBV, HIGH);    // posar a 0V el pin 12  
  
  delay(pausa);                     // es queden leds pausa ms en aquest estat
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(semaforBR, HIGH);     // apaga roig semàfor B
  digitalWrite(semaforBV, LOW);    // encén verd semàfor B
  
  delay(4*pausa);                   // es queden leds 4*pausa ms en aquest estat
  
  digitalWrite(semaforBV, HIGH);     // apaga verd semàfor B
  digitalWrite(semaforBT, LOW);    // encén taronja semàfor B
  
  delay(pausa);                     // es queden leds pausa ms en aquest estat
  
  digitalWrite(semaforBT, HIGH);     // apaga taronja semàfor B
  digitalWrite(semaforBR, LOW);    // encén roig semàfor B
   
  delay(pausa);                     // es queden leds pausa ms en aquest estat
  
  digitalWrite(semaforAR, HIGH);     // apaga roig semàfor A
  digitalWrite(semaforAV, LOW);    // encén verd semàfor A
  
  delay(4*pausa);                   // es queden leds 4*pausa ms en aquest estat
  
  digitalWrite(semaforAV, HIGH);     // apaga verd semàfor A
  digitalWrite(semaforAT, LOW);    // encén taronja semàfor A
  
  delay(pausa);                     // es queden leds pausa ms en aquest estat
  
  digitalWrite(semaforAT, HIGH);     // apaga taronja semàfor A
  digitalWrite(semaforAR, LOW);    // encén roig semàfor A
  
   delay(pausa);                     // es queden leds pausa ms en aquest estat
}
