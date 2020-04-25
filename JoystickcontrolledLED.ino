#define joyX A0
#define joyY A1
#define ledfront 2
#define ledback 3
#define ledright 4
#define ledleft 5
 
void setup() {
  Serial.begin(9600);
  pinMode(ledfront,OUTPUT);
  pinMode(ledback,OUTPUT);
  pinMode(ledright,OUTPUT);
  pinMode(ledleft,OUTPUT);
  
}
 
void loop() {
 
int  xValue = analogRead(joyX);
int  yValue = analogRead(joyY);
 
  //print the values with to plot or view
  if(xValue>=1000 && yValue>=500 && yValue<=516)
  {
    Serial.print("Forward");
    digitalWrite(ledfront,HIGH);
    delay(400);
    digitalWrite(ledfront,LOW);
    Serial.print("\t");
    Serial.println("\n");
  }
  if(xValue==0 && yValue>=500 && yValue<=516)
  {
    Serial.print("Backward");
    digitalWrite(ledback,HIGH);
    delay(400);
    digitalWrite(ledback,LOW);
    Serial.print("\t");
    Serial.println("\n");
  }
  if(yValue>=1000 && xValue>=500 && xValue<=516)
  {
    Serial.print("RIGHT");
    digitalWrite(ledright,HIGH);delay(400);
    digitalWrite(ledright,LOW);
    Serial.print("\t");
    Serial.println("\n");
  }
  if(yValue==0 && xValue>=500 && xValue<=516)
  {
    Serial.print("LEFT");
    digitalWrite(ledleft,HIGH);delay(400);
    digitalWrite(ledleft,LOW);
    Serial.print("\t");
    Serial.println("\n");
  }
}
