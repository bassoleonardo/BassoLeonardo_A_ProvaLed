// Per impostare il numero di lampeggi digitare invio appena lo sketch parte...
// Digitare il numero che si vuole per impostare il numero di lampeggi da far effettuare al colore verde
int led1 = 12; // ROSSO
int led2 = 11; // GALLO
int led3 = 10; // VERDE
int led4 = 7;  // ROSSO
int led5 = 6;  // GIALLO 
int led6 = 5;  // VERDE
String input;
int nlampeggi;
int tempo_lampeggi;
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
  Serial.println("Seriale attivata");
  input = Serial.readString();
}
void loop() {
  if (Serial.available() > 0){ // questo comando verifica se la porta seriale è disponibile o meno...
      Serial.println("Quanti lampeggi vuoi assegnare al semaforo verde?");
      input = Serial.readString();
      nlampeggi = input.toInt();
      while(nlampeggi == 0); // condizione vera per ripetere il ciclo per poi proseguire con l'inserimento dei valori...
      Serial.print("E quanto tempo intendi assegnare ad ogni lampeggio?");
      input = Serial.readString();
      delay_lampeggi = input.toInt();
      Serial.print("Quanto tempo vuoi far durare il semaforo rosso?");
      input = Serial.readString();
      delay_rosso = input.toInt();
      Serial.print("Quanto tempo vuoi far durare il giallo?")
      input = Serial.readString();
      delay_giallo = input.toInt();s
      Serial.println(nlampeggi);
  }
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
  delay(2000); 
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  delay(2000);
  lampeggio();
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH); 
  digitalWrite(led5, HIGH);
  digitalWrite(led6, LOW);
  delay(2000); 
}
// ------- metodi personalizzati ------------ //
  void lampeggio(){
    for(int i=0; i<nlampeggi; i++){
    digitalWrite(led3, LOW);
    delay(200);
    digitalWrite(led3, HIGH);
    delay(200);
    }
  }
  void lampeggio2(){
    for(int i=0; i<nlampeggi; i++){
      digitalWrite(led6, LOW);
      delay(200);
      digitalWrite(led6, HIGH);
      delay(200);
    }
  }
