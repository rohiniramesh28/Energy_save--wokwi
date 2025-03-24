#define PIR_PIN 15          
#define LDR_DO_PIN 14       
#define LDR_AO_PIN 34       
#define LED_PIN 2           

int lightThreshold = 300;   
int motionState = 0;       

void setup() {
  Serial.begin(115200);


  pinMode(PIR_PIN, INPUT);      
  pinMode(LDR_DO_PIN, INPUT);   
  pinMode(LED_PIN, OUTPUT);    

  digitalWrite(LED_PIN, LOW);  
  Serial.println("✅ Energy Efficient Smart Home Initialized!");

  delay(2000); 
}

void loop() {
  
  motionState = digitalRead(PIR_PIN);


  int digitalLdrValue = digitalRead(LDR_DO_PIN);  
  int analogLdrValue = analogRead(LDR_AO_PIN);    

  Serial.print("🌞 LDR Analog Value: ");
  Serial.print(analogLdrValue);
  Serial.print(" | 🚶 PIR Motion: ");
  Serial.println(motionState);

  if (motionState == 1 && analogLdrValue < lightThreshold) {
    digitalWrite(LED_PIN, HIGH);  
    Serial.println("💡 Light ON (Motion + Dark)");
  } else {
    digitalWrite(LED_PIN, LOW);   
    Serial.println("💡 Light OFF");
  }

  delay(500);  
}
