int fsrPin = 0;     // the FSR and 10K pulldown are connected to a0
int fsrReading;     // the analog reading from the FSR resistor divider

int fsrPin1 = 1;     // the FSR and 10K pulldown are connected to a0
int fsrReading1; 


int fsrPin2 = 2;     // the FSR and 10K pulldown are connected to a0
int fsrReading2; 


int fsrPin3 = 3;     // the FSR and 10K pulldown are connected to a0
int fsrReading3; 


int fsrPin4 = 4;     // the FSR and 10K pulldown are connected to a0
int fsrReading4; 

void setup(void) {
  Serial.begin(9600);   
}
 
void loop(void) {
  fsrReading = analogRead(fsrPin);
//   fsrReading1 = analogRead(fsrPin1);  
   
 
//  Serial.print("Analog reading = ");
//  Serial.print(fsrReading);     // print the raw analog reading
// 
//  if (fsrReading < 10) {
//    Serial.println(" - No pressure");
//  } else if (fsrReading < 200) {
//    Serial.println(" - Light touch");
//  } else if (fsrReading < 500) {
//    Serial.println(" - Light squeeze");
//  } else if (fsrReading < 800) {
//    Serial.println(" - Medium squeeze");
//  } else {
//    Serial.println(" - Big squeeze");
//  }
//  delay(1000);

    fsrReading1 = analogRead(fsrPin1);  
 
//  Serial.print("Analog reading1 = ");
//  Serial.print(fsrReading1);     // print the raw analog reading
// 
//  if (fsrReading1 < 10) {
//    Serial.println(" - No pressure");
//  } else if (fsrReading1 < 200) {
//    Serial.println(" - Light touch");
//  } else if (fsrReading1 < 500) {
//    Serial.println(" - Light squeeze");
//  } else if (fsrReading1 < 800) {
//    Serial.println(" - Medium squeeze");
//  } else {
//    Serial.println(" - Big squeeze");
//  }
//  delay(1000);


  fsrReading2 = analogRead(fsrPin2);  
 
//  Serial.print("Analog reading2 = ");
//  Serial.print(fsrReading2);     // print the raw analog reading
// 
//  if (fsrReading2 < 10) {
//    Serial.println(" - No pressure");
//  } else if (fsrReading2 < 200) {
//    Serial.println(" - Light touch");
//  } else if (fsrReading2 < 500) {
//    Serial.println(" - Light squeeze");
//  } else if (fsrReading2 < 800) {
//    Serial.println(" - Medium squeeze");
//  } else {
//    Serial.println(" - Big squeeze");
//  }
//  delay(1000);


  fsrReading3 = analogRead(fsrPin3);  
 
//  Serial.print("Analog reading3 = ");
//  Serial.print(fsrReading3);     // print the raw analog reading
// 
//  if (fsrReading3 < 10) {
//    Serial.println(" - No pressure");
//  } else if (fsrReading3 < 200) {
//    Serial.println(" - Light touch");
//  } else if (fsrReading3 < 500) {
//    Serial.println(" - Light squeeze");
//  } else if (fsrReading3 < 800) {
//    Serial.println(" - Medium squeeze");
//  } else {
//    Serial.println(" - Big squeeze");
//  }
//  delay(1000);


  fsrReading4 = analogRead(fsrPin4);  
 
//  Serial.print("Analog reading4 = ");
//  Serial.print(fsrReading4);     // print the raw analog reading
// 
//  if (fsrReading4 < 10) {
//    Serial.println(" - No pressure");
//  } else if (fsrReading4 < 200) {
//    Serial.println(" - Light touch");
//  } else if (fsrReading4 < 500) {
//    Serial.println(" - Light squeeze");
//  } else if (fsrReading4 < 800) {
//    Serial.println(" - Medium squeeze");
//  } else {
//    Serial.println(" - Big squeeze");
//  }
  delay(500);

  Serial.print(fsrReading1);
  Serial.print(" ");
  Serial.print(fsrReading2);
  Serial.print(" ");
  Serial.print(fsrReading);
  Serial.print(" ");
  Serial.print(fsrReading4);
  Serial.print(" ");
  Serial.println(fsrReading3);
  
  


  
}
