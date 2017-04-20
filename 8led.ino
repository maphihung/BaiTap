//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// The Unnamed Circuit
// 
// Made by Phihung Phihung
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4697742-the-unnamed-circuit


int led[] = {2,3,4,5,6,7,8,9};

void setup() {
  for(int i=0; i<=7;i++) {
   	pinMode(led[i], OUTPUT);
  }
}
void loop() {
  for (int i=0; i<=7; i++) {
 	 digitalWrite(led[i], HIGH);   
 	 delay(500);               
 	 digitalWrite(led[i], LOW);   
   	 delay(500); 
  }
   for (int i=7; i>=0; i--) {
 	 digitalWrite(led[i], HIGH);   
 	 delay(500);               
 	 digitalWrite(led[i], LOW);   
   	 delay(500); 
  }
}
