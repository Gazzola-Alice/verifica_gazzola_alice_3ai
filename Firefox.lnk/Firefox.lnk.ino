int ledverde = 8;
int ledrosso =11;
int ledgiallo=10;
int ledbianco=9;
int i=0;
int durata;
int sequenza;
void setup() {
pinMode(ledverde,OUTPUT);
pinMode(ledrosso,OUTPUT);
pinMode(ledgiallo,OUTPUT);
pinMode(ledbianco,OUTPUT);
durata=random(100,1000);
Serial.begin(9600);
Serial.println("Durata random: ");
Serial.println(durata);
chiedocicli();
//chiedodurata();
}
void chiedocicli(){
  Serial.println("Scrivi quante deve eseguire la sequenza");
  while(Serial.available()==0);
    if ( Serial.available ()> 0){
      sequenza=Serial.readString().toInt();
       Serial.println(sequenza);
      }
  
}
/*void chiedodurata (){
     Serial.println("Scrivi quanto deve restare accesso il led");
  while(Serial.available()==0);
    if ( Serial.available ()> 0){
      durata= Serial.readString().toInt();
      Serial.println(durata);
       Serial.println(durata*2);
        Serial.println(durata*3);
      
      }
    }*/
   
    
void programma (){
   digitalWrite(ledrosso,HIGH);
   delay (durata);
    digitalWrite(ledrosso,LOW);
     delay (durata);
     digitalWrite(ledgiallo,HIGH);
   delay (durata*2);
    digitalWrite(ledgiallo,LOW);
     delay (durata);
      digitalWrite(ledbianco,HIGH);
   delay (durata);
    digitalWrite(ledbianco,LOW);
     delay (durata);
      digitalWrite(ledverde,HIGH);
   delay (durata*3);
    digitalWrite(ledverde,LOW);
     delay (durata);
     
   
  }

void loop() {
 while (i<sequenza){
programma();
i++;}
setup();
}
