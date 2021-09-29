/*
 * ESP8266 Deep sleep mode example
 * Rui Santos 
 * Complete Project Details https://randomnerdtutorials.com
 */
 
void setup() {
  //pinMode(LED_BUILTIN, OUTPUT); 
  Serial.begin(9600);
  //Serial.setTimeout(2000);
  
  // Wait for serial to initialize.
  while(!Serial);
  Serial.println("waking up");

  // Deep sleep mode for 30 seconds, the ESP8266 wakes up by itself when GPIO 16 (D0 in NodeMCU board) is connected to the RESET pin
  //Serial.println("I'm awake, but I'm going into deep sleep mode for 30 seconds");
  //ESP.deepSleep(5e6); 
  //Serial.println("woke up again");
}

void loop(){
 startDeepSleep();
}
 
void startDeepSleep(){
  //Deep sleep mode until RESET pin is connected to a LOW signal (for example pushbutton or magnetic reed switch)
  Serial.println("I'm going into deep sleep mode until RESET pin is connected to a LOW signal");
  ESP.deepSleep(0); 
}
