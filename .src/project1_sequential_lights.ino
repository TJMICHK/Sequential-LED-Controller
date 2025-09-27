// GLOBAL PINS & ASSIGMENTS
const int VRx = A0;
const int LED1 = 3;
const int LED2 = 5;
const int LED3 = 6;
const int LED4 = 10;
const int LED5 = 11;

int targetNUM = 0; // BRIGHTNESS I WANT
int currentNUM = 0; // BRIGHTNESS I AM CURRENTLY OUTPUTTING

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); 

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

void loop() {

  int raw = analogRead(VRx); // READS VOLTAGE FROM JOYSTICK, 0 = 0V to 1023 = 5V
  // LEFT AND RIGHT CHANGES VALUES BETWEEN 0 AND 1023

  int NUM = map(raw, 0, 1023, -1, 4); // MAPS THE JOYSTICKS 0-1023 RANGE TO 0-
  targetNUM = NUM;



  if ( targetNUM > currentNUM){
    currentNUM++;
  }
  else if (targetNUM < currentNUM){
    currentNUM--;
  }

  if(currentNUM == -1) {
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
  }
  else if(currentNUM == 0) {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
  }
  else if (currentNUM == 1){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
  }
  else if (currentNUM == 2){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
  }
  else if (currentNUM == 3){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,LOW);
  }
  else if (currentNUM == 4){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
  }

//TESTING
  Serial.println("        ");
  Serial.print("raw="); Serial.print(raw);
  Serial.print("  mapped="); Serial.print(currentNUM);

delay(50);
}
