int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 7;
int led5 = 6;
int led6 = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}
  void lampeggio(){
    for(int i=0; i<4; i++){
    digitalWrite(led3, HIGH);
    delay(1000);
    digitalWrite(led3, LOW);
    delay(1000);
    }
  }
  void lampeggio2(){
    for(int i=0; i<4; i++){
      digitalWrite(led6, HIGH);
      delay(1000);
      digitalWrite(led6, LOW);
      delay(1000);
    }
  }
void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(4000);
  lampeggio2();
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(4000); 
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  delay(4000);
  lampeggio();
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW); 
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(4000); 
}
