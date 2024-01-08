// This #include statement was automatically added by the Particle IDE.
#include <Ubidots.h>

#ifndef UBIDOTS_TOKEN
#define UBIDOTS_TOKEN "A1E-Dsz3OC1spogFixmuOScobXF8swlI44"  
#endif

Ubidots ubidots(UBIDOTS_TOKEN, UBI_TCP);

void setup() {

}

void loop() {
  float value1 = analogRead(A0);

  ubidots.add("su seviyesi", value1);  


  bool bufferSent = false;
  bufferSent = ubidots.send();

  delay(5000);
}