#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6
#define LED6 7
#define LED7 8

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char cmd = Serial.read();
    switch (cmd) {
      //for button 1
      case '1': digitalWrite(LED1, HIGH); break;
      case '2': digitalWrite(LED1, LOW); break;

      // for button 2
      case '3': digitalWrite(LED2, HIGH); break;
      case '4': digitalWrite(LED2, LOW); break;

      // for button 3
      case '5': digitalWrite(LED3, HIGH); break;
      case '6': digitalWrite(LED3, LOW); break;

      // for button 4
      case '7': digitalWrite(LED4, HIGH); break;
      case '8': digitalWrite(LED4, LOW); break;

      // for button 5
      case '9': digitalWrite(LED5, HIGH); break;
      case 'A': digitalWrite(LED5, LOW); break;

      // for button 6
      case 'B': digitalWrite(LED6, HIGH); break;
      case 'C': digitalWrite(LED6, LOW); break;

      // for button 7
      case 'D': digitalWrite(LED7, HIGH); break;
      case 'E': digitalWrite(LED7, LOW); break;
    }
  }
}           