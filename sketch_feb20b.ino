byte pin[] = {15,2,4,5,18,19,21};   //   Seven segment pin is connected to Digital pin 15,2,4,5,18,19,21 to a,b,c,d,e,f,g

const byte count[10] = {  // this is data code for Seven segment 
  //GFEDCBA
  B00111111,  //0
  B00000110, // 1
  B01011011, // 2
  B01001111, //3
  B01100110, //4
  B01101101, //5
  B01111101, //6
  B00000111, //7
  B01111111, //8
  B01101111, //9
};
void setup() {
  pinMode(pin[0], OUTPUT);  // every pin is output
  pinMode(pin[1], OUTPUT);
  pinMode(pin[2], OUTPUT);
  pinMode(pin[3], OUTPUT);
  pinMode(pin[4], OUTPUT);
  pinMode(pin[5], OUTPUT);
  pinMode(pin[6], OUTPUT);
}
void loop() {
  for(int i = 0; i<10; i++){ // printing the number on seven segment
    SevenSeg(count[i]);
    delay(1000);
  }
}
void SevenSeg(byte Bit) { //  sending data on each pin
  for(int i=0; i<8; i++)
  digitalWrite(pin[i],bitRead(Bit,i));
}
