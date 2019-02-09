// Per impostare il numero di lampeggi digitare invio appena lo sketch parte...
// Digitare il numero che si vuole per impostare il numero di lampeggi da far effettuare al colore verde
int led1 = 12; // ROSSO
int led2 = 11; // GALLO
int led3 = 10; // VERDE
int led4 = 7;  // ROSSO
int led5 = 6;  // GIALLO 
int led6 = 5;  // VERDE
String input1;
String input2;
String input3;
String input4;
int nlampeggi;
int delay_lampeggi;
int delay_rosso;
int delay_giallo;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  Serial.println("Quanti lampeggi vuoi assegnare al semaforo verde?");
  while(Serial.available() == 0);
  if (Serial.available() > 0)  // questo comando verifica se la porta seriale è disponibile o meno...
  {   
      input1 = Serial.readString();
      nlampeggi = input1.toInt();
      Serial.println(nlampeggi);
  }
  delay (100);
  Serial.println("E quanto tempo intendi assegnare ad ogni lampeggio?");
  while(Serial.available() == 0);
  if (Serial.available() > 0)
  {
      input2 = Serial.readString();
      delay_lampeggi = input2.toInt();
      Serial.println(delay_lampeggi);
  }
  delay(100);
  Serial.println("Quanto tempo vuoi far durare il semaforo rosso?");
  while(Serial.available() == 0);
  if (Serial.available() > 0)
  {
      input3 = Serial.readString();
      delay_rosso = input3.toInt();
      Serial.println(delay_rosso);
  }
  delay(100);
  Serial.println("Quanto tempo vuoi far durare il giallo?"); 
  while(Serial.available() == 0);
  if (Serial.available() > 0)
  {
      input4 = Serial.readString();
      delay_giallo = input4.toInt();
      Serial.println(delay_giallo);
  }
  delay(100);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(delay_rosso);
  lampeggio2();
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, LOW);
  delay(delay_giallo); 
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  delay(delay_rosso);
  lampeggio();
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH); 
  digitalWrite(led5, HIGH);
  digitalWrite(led6, LOW);
  delay(delay_giallo); 
}
// ------- metodi personalizzati ------------ //
  void lampeggio(){
    for(int i=0; i<nlampeggi; i++){
    digitalWrite(led3, LOW);
    delay(delay_lampeggi);
    digitalWrite(led3, HIGH);
    delay(delay_lampeggi);
    }
  }
  void lampeggio2(){
    for(int i=0; i<nlampeggi; i++){
      digitalWrite(led6, LOW);
      delay(delay_lampeggi);
      digitalWrite(led6, HIGH);
      delay(delay_lampeggi);
    }
  }
