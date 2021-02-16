int potpin1 = A4;  
int GateOut1 = 5;
int val1;   

int potpin2 = A5; 
int GateOut2 = 6;
int val2;    

int potpin3 = A6;  
int GateOut3 = 9;
int val3;    

int potpin4 = A7;  
int GateOut4 = 10;
int val4;    

void setup(){
pinMode(potpin1, INPUT);
pinMode(potpin2, INPUT);
pinMode(potpin3, INPUT);
pinMode(potpin4, INPUT);

pinMode(GateOut1, OUTPUT);
pinMode(GateOut2, OUTPUT);
pinMode(GateOut3, OUTPUT);
pinMode(GateOut4, OUTPUT);
}

void loop(){
 val1 = analogRead(potpin1);            
 val1 = map(val1, 0, 1023, 0, 255);     
 digitalWrite(GateOut1, HIGH);
 delay(val1);                           
 digitalWrite(GateOut1, LOW);
 delay(val1);

 val2 = analogRead(potpin2);            
 val2 = map(val2, 0, 1023, 0, 255);     
 digitalWrite(GateOut2, HIGH);
 delay(val2);                           
 digitalWrite(GateOut2, LOW);
 delay(val2);

 val3 = analogRead(potpin3);            
 val3 = map(val3, 0, 1023, 0, 255);     
 digitalWrite(GateOut3, HIGH);
 delay(val3);                          
 digitalWrite(GateOut3, LOW);
 delay(val3);

 val4 = analogRead(potpin4);          
 val4 = map(val4, 0, 1023, 0, 255);     
 digitalWrite(GateOut4, HIGH);
 delay(val4);                           
 digitalWrite(GateOut4, LOW);
 delay(val4);
}
