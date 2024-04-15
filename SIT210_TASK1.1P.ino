 const char* morseCode[] = {
  ".-",     // A
  "-...",   // B
  "-.-.",   // C
  "-..",    // D
  ".",      // E
  "..-.",   // F
  "--.",    // G
  "....",   // H
  "..",     // I
  ".---",   // J
  "-.-",    // K
  ".-..",   // L
  "--",     // M
  "-.",     // N
  "---",    // O
  ".--.",   // P
  "--.-",   // Q
  ".-.",    // R
  "...",    // S
  "-",      // T
  "..-",    // U
  "...-",   // V
  ".--",    // W
  "-..-",   // X
  "-.--",   // Y
  "--..",   // Z
  " "       // Space
};

const int dotDelay = 300;                                                       
const int dashDelay = 900; 


void blinkDot() {
  digitalWrite(LED_BUILTIN, HIGH); // led on 
  delay(dotDelay); //led on duration 
  digitalWrite(LED_BUILTIN, LOW); //led off 
  delay(dotDelay);

}

void blinkDash() {
  digitalWrite(LED_BUILTIN, HIGH); // led on 
  delay(dashDelay); //led on duration   
  digitalWrite(LED_BUILTIN, LOW); //led off 
  delay(dotDelay);
}



void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
 
  const char* name = "ADITHYA"; 

  for(int i=0; name[i] != '\0' ; i++){
    char letter= name[i]; 
    if(letter>='A' && letter <='Z'){
      const char* morse = morseCode[letter-'A']; 
      for(int j= 0; morse[j] != '\0'; j++){
        if (morse[j] == '.'){
          blinkDot();
        }else if (morse[j] == '-') {
          blinkDash(); 
        }

      }delay(dotDelay*3);



    }
  }
}

 