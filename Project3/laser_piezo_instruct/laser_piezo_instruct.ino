///* This program is used as a laser trigger and/or sound trigger for high-speed photography<br>  ---> Made by Sander Vanhee <--
//
//push button to activate program
//Activate laser or sound trigger
//delay 
//open camera shutter (manual for now)
//drop an object
//laser barrier or piezo sensor gets triggered
//laser off
//wait the delay set by potentiometer
//trigger flash
//delay 
//close camera shutter
//delay 
//*/
//
//int laserPin = 12;        // red wire from laser
//int potPin = A0;           // potentiometer to read delay
//int optoPin = 11;          // towards the optocoupler
//int buttonApin = 2;       // pushbutton
//int photocellPin = A1;    // the cell and 10K pulldown are connected to A1
//int photocellReading;     // the analog reading from the sensor divider
//int PiezoPin = A2;         // the Piezo is connected to a2
//int PiezoReading;         // the analog reading from the sensor divider
//
//void setup(){
//  // We'll send debugging information via the Serial monitor
//    Serial.begin(9600);
//    
//    //#define photocellPin 1
//    pinMode(laserPin, OUTPUT);
//    pinMode(buttonApin, INPUT_PULLUP); 
//    pinMode(photocellPin, INPUT_PULLUP);
//    pinMode(PiezoPin, INPUT);
//    pinMode(optoPin, OUTPUT);
//    pinMode(potPin, INPUT_PULLUP);
//    }
//
//void loop() {
//  // check if button is pressed, only continue when pressed. 
//    Serial.println("Waiting for buttonpress...");
//  
//if (digitalRead(buttonApin) == HIGH) {  // start program if button is pressed
//    //start if(buttonpressed) loop 
//    Serial.println("Button pressed");
//      
//// Read value of potentiometer    
//    int reading  = analogRead(potPin);
//    Serial.println("reading potentiometer");
//    Serial.println(reading);
//    reading = map(reading, 0, 1023, 1, 500);     // scale it to use it with the drops (delay between 1 and 500)
//
//delay(50);
//
//
//// We'll put the LASER CODE in comments to isolate it from the Piezo code 
//
//// Activate laser
//    digitalWrite(laserPin, HIGH);
//    Serial.println("Laser Activated");
//    
//delay(1000); // delay before open shutter
// 
//Serial.println("Drop object");
//  
//  // read the value of the photocellPin
//    int photocellReading  = digitalRead(photocellPin); //read value photocell and print it
//    Serial.println(photocellReading);
//    
//  //Check if laser is broken
//while (digitalRead(photocellPin)==HIGH){ 
//  Serial.println("Laser uninterrupted");
//    int photocellReading  = digitalRead(photocellPin); //read value photocell
//    Serial.println(photocellReading);
//    
//    // as long as the laser is not broken, this "while" statement will loop. 
//    // when the laser is broken, the program will continue. 
//}    
//  // WHILE loop ended: DigitalRead(PhotocellPin) == LOW
//  // turn laser off to not show up in the picture
//  digitalWrite(laserPin, LOW); 
//  
//
////// what follows is the PIEZO code
////PiezoReading = analogRead(PiezoPin);  
////Serial.print("Analog reading = ");
////Serial.println(PiezoReading);     // the raw analog reading
////
////while (analogRead(PiezoPin)<1){ 
////  Serial.println("no sound detected");
////    int PiezoReading  = analogRead(PiezoPin); //read value photocell
////    Serial.println(PiezoReading);
////    }
////
////// WHILE loop for reading the piezo value ended, continue to trigger the Flash
////// Wait the amount indicated by the value of potentiometer
////// give the waves time to rise back to the surface
////
////delay(reading);
////   
////  //trigger flash - send signal from pin 8
////    digitalWrite(8, HIGH);
////    Serial.println("FLASH fired");
////    delay(1000);
////    digitalWrite(8, LOW);
////    
////    //wait for flash light to die down
////    delay(200);
////  
////    //close camera shutter
////    
////    Serial.println("END");
////    // END OF (buttonpressed) while loop
////   
////  digitalWrite(laserPin, LOW);
//}}


// ---------------------------------------------------------------------------------------------------------------



/* This program is used as a laser trigger and/or sound trigger for high-speed photography<br>  ---> Made by Sander Vanhee <--

push button to activate program
Activate laser or sound trigger
delay 
open camera shutter (manual for now)
drop an object
laser barrier or piezo sensor gets triggered
laser off
wait the delay set by potentiometer
trigger flash
delay 
close camera shutter
delay 
*/

//int laserPin = 12;        // red wire from laser
//int potPin = 0;           // potentiometer to read delay
//int optoPin = 8;          // towards the optocoupler
//int buttonApin = 2;       // pushbutton
//int photocellPin = A1;    // the cell and 10K pulldown are connected to A1
//int photocellReading;     // the analog reading from the sensor divider
//int PiezoPin = 2;         // the Piezo is connected to a2
//int PiezoReading;         // the analog reading from the sensor divider
//
//void setup(){
//  // We'll send debugging information via the Serial monitor
//    Serial.begin(9600);
//    
//    //#define photocellPin 1
//    pinMode(laserPin, OUTPUT);
//    pinMode(buttonApin, INPUT_PULLUP); 
//    pinMode(photocellPin, INPUT_PULLUP);
//    pinMode(PiezoPin, INPUT);
//    pinMode(optoPin, OUTPUT);
//    pinMode(potPin, INPUT_PULLUP);
//    }
//
//void loop() {
//  // check if button is pressed, only continue when pressed. 
//    Serial.println("Waiting for buttonpress...");
//  
//if (digitalRead(buttonApin) == HIGH) {  // start program if button is pressed
//    //start if(buttonpressed) loop 
//    Serial.println("Button pressed");
//      
//// Read value of potentiometer    
//    int reading  = analogRead(potPin);
//    Serial.println("reading potentiometer");
//    Serial.println(reading);
//    reading = map(reading, 0, 1023, 1, 500);     // scale it to use it with the drops (delay between 1 and 500)
//
//delay(50);
//
//
//// We'll put the LASER CODE in comments to isolate it from the Piezo code 
//
//// Activate laser
//    digitalWrite(laserPin, HIGH);
//    Serial.println("Laser Activated");
//    
//delay(1000); // delay before open shutter
// 
//Serial.println("Drop object");
//  
//  // read the value of the photocellPin
//    int photocellReading  = digitalRead(photocellPin); //read value photocell and print it
//    Serial.println(photocellReading);
//    
//  //Check if laser is broken
//while (digitalRead(photocellPin)==HIGH){ 
//  Serial.println("Laser uninterrupted");
//    int photocellReading  = digitalRead(photocellPin); //read value photocell
//    Serial.println(photocellReading);
//    
//    // as long as the laser is not broken, this "while" statement will loop. 
//    // when the laser is broken, the program will continue. 
//}    
//  // WHILE loop ended: DigitalRead(PhotocellPin) == LOW
//  // turn laser off to not show up in the picture
//  digitalWrite(laserPin, LOW); 
//
//
//// ----------------------------------------------------------------------
////// what follows is the PIEZO code
////PiezoReading = analogRead(PiezoPin);  
////Serial.print("Analog reading = ");
////Serial.println(PiezoReading);     // the raw analog reading
////
////while (analogRead(PiezoPin)<1){ 
////  Serial.println("no sound detected");
////    int PiezoReading  = analogRead(PiezoPin); //read value photocell
////    Serial.println(PiezoReading);
////    }
////
////// WHILE loop for reading the piezo value ended, continue to trigger the Flash
////// Wait the amount indicated by the value of potentiometer
////// give the waves time to rise back to the surface
////
////delay(reading);
////   
////  //trigger flash - send signal from pin 8
////    digitalWrite(8, HIGH);
////    Serial.println("FLASH fired");
////    delay(1000);
////    digitalWrite(8, LOW);
////    
////    //wait for flash light to die down
////    delay(200);
////  
////    //close camera shutter
////    
////    Serial.println("END");
////    // END OF (buttonpressed) while loop
////   
////  digitalWrite(laserPin, LOW);
//}}

// -----------------------------------------------------------------------------------------

/* This program is used as a laser trigger for high-speed photography
---> Made by Sander Vanhee <--  

push button to activate program
Activate laser
delay 
open camera shutter (manual for now)
drop an object
laser barrier gets triggered
laser off
wait the delay set by potentiometer
trigger flash
delay 
close camera shutter
delay 
*/

int laserPin = 12;        // red wire from laser
int potPin = 0;           // potentiometer to read delay
int optoPin = 8;          // towards the optocoupler
int buttonApin = 2;       // pushbutton
int photocellPin = A1;    // the cell and 10K pulldown are connected to A1
int photocellReading;     // the analog reading from the sensor divider

void setup(){
  // We'll send debugging information via the Serial monitor
    Serial.begin(9600);
    
    //#define photocellPin 1
    pinMode(laserPin, OUTPUT);
    pinMode(buttonApin, INPUT_PULLUP); 
    pinMode(photocellPin, INPUT_PULLUP);
    pinMode(optoPin, OUTPUT);
    pinMode(potPin, INPUT_PULLUP);
    }

void loop() {
  // check if button is pressed, only continue when pressed. 
    Serial.println("Waiting for buttonpress...");
  
if (digitalRead(buttonApin) == HIGH) {  // start program if button is pressed
    //start if(buttonpressed) loop 
    Serial.println("Button pressed");
}
//else
//{
//  Serial.println("Button low");
//}
//delay(500);
      
//// Read value of potentiometer    
//    int reading  = analogRead(potPin);
//    Serial.println("reading potentiometer");
//    Serial.println(reading);
//    reading = map(reading, 0, 1023, 1, 500);     // scale it to use it with the drops (delay between 1 and 500)
//
//    delay(50);
//    
//  // Activate laser
//    digitalWrite(laserPin, HIGH);
//    Serial.println("Laser Activated");
//    
//delay(1000); // delay before open shutter
// 
//Serial.println("Drop object");
//  
//  // read the value of the photocellPin
//    int photocellReading  = digitalRead(photocellPin); //read value photocell and print it
//    Serial.println(photocellReading);
//    
//  //Check if laser is broken
//while (digitalRead(photocellPin)==HIGH){ 
//  Serial.println("Laser uninterrupted");
//    int photocellReading  = digitalRead(photocellPin); //read value photocell
//    Serial.println(photocellReading);
//    }
//
//    // as long as the laser is not broken, this "while" statement will loop. 
//    // when the laser is broken, the program will continue. 
//    
//  // laser off
//  // turn laser off to not show up in the picture
//  // digitalWrite(laserPin, LOW); 
//    
//    
//    // Wait the amount indicated by the value of potentiometer
//    // give the waves time to rise back to the surface
//delay(reading);
//   
//  //trigger flash - send signal from pin 8
//    digitalWrite(8, HIGH);
//    Serial.println("FLASH fired");
//    delay(1000);
//    digitalWrite(8, LOW);
//    
//    //wait for flash light to die down
//    delay(200);
//  
//    //close camera shutter
//    
//    Serial.println("END");
//    // END OF (buttonpressed) while loop
//   
//  digitalWrite(laserPin, LOW);
// 
//}
}
