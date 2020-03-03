int datapin = 6 ;
int latchpin = 5;
int clockpin = 3;
int digit1 = 13;
int digit2 = 12;
unsigned long time =0;
int b; int c ; int a = 0 ;

void so1() {
     digitalWrite(latchpin,LOW);
    shiftOut(datapin,clockpin,LSBFIRST,~0x60);
    digitalWrite(latchpin, HIGH);};

void so2() {  digitalWrite(latchpin,LOW);
    shiftOut(datapin,clockpin,LSBFIRST,~0xDA);
    digitalWrite(latchpin, HIGH); };
void so3() {  digitalWrite(latchpin,LOW);
    shiftOut(datapin,clockpin,LSBFIRST,~0xf2);
    digitalWrite(latchpin, HIGH);};
void so4() {  digitalWrite(latchpin,LOW);
    shiftOut(datapin,clockpin,LSBFIRST,~0x66);
    digitalWrite(latchpin, HIGH);};
void so5() {  digitalWrite(latchpin,LOW);
    shiftOut(datapin,clockpin,LSBFIRST,~0xb6);
    digitalWrite(latchpin, HIGH); };
void so6() { 
    digitalWrite(latchpin,LOW);
    shiftOut(datapin,clockpin,LSBFIRST,~0xBE);
    digitalWrite(latchpin, HIGH); };
void so7() {  digitalWrite(latchpin,LOW);
    shiftOut(datapin,clockpin,LSBFIRST,~0xe0);
    digitalWrite(latchpin, HIGH);};
void so8() { digitalWrite(latchpin,LOW);
    shiftOut(datapin,clockpin,LSBFIRST,~0xfe);
    digitalWrite(latchpin, HIGH);};
void so9() {  digitalWrite(latchpin,LOW);
    shiftOut(datapin,clockpin,LSBFIRST,~0xf6);
    digitalWrite(latchpin, HIGH);};
void so0() { digitalWrite(latchpin,LOW);
    shiftOut(datapin,clockpin,LSBFIRST,~0xFC);
    digitalWrite(latchpin, HIGH);};


void setup(){
pinMode(datapin, OUTPUT);
pinMode(latchpin,OUTPUT);
pinMode(clockpin,OUTPUT);
pinMode(digit1,OUTPUT);
pinMode(digit2,OUTPUT);
Serial.begin(9600);
};








void loop(){
   if ( a == 100 ) { a= 1;}
   else {
       b=a/10;c=a%10;
       Serial.println (a);
      do 
        {   
            digitalWrite(digit1, HIGH); digitalWrite(digit2, LOW);
           switch (b) {
           case 0: so0() ;break; 
           case 1: so1() ;break; 
           case 2: so2() ;break; 
           case 3: so3() ;break; 
           case 4: so4(); break; 
           case 5: so5(); break; 
           case 6: so6(); break; 
           case 7: so7(); break; 
           case 8: so8(); break; 
           case 9: so9(); break; 
           } delay(10);
           digitalWrite(digit1, LOW); digitalWrite(digit2,HIGH);
           switch (c) {
           case 0: so0() ;break; 
           case 1: so1() ;break; 
           case 2: so2() ;break; 
           case 3: so3() ;break; 
           case 4: so4(); break; 
           case 5: so5(); break; 
           case 6: so6(); break; 
           case 7: so7() ;break; 
           case 8: so8() ;break; 
           case 9: so9() ;break; }
           ; delay(10);
       } while ( ( (unsigned long)millis() - time )< 993.5);
   }; a = a+1; time = millis();
}
