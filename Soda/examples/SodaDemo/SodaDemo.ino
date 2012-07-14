/* Soda Demo

Uses the soda library from Qtechknow.  Counts to 9 and then goes back to 0 on 
a seven segment display.  

created 14 Apr 12
Made by Quin (Qtechknow)
*/

#include "Soda.h"

Soda Soda;   // initialize the library

void setup() {
// Segments A, B, C, D, E, F, G, DP pin numbers
  Soda.pins(2, 3, 4, 5, 6, 7, 8, 9, HIGH);  // set high for common anode, and 
                                            // low for common cathode display
}

void loop() {

  for(int i=0; i< 9; i++) {
    Soda.write(i);        // count to 9
    delay(1000);          // delay for 1 second
  }
  
  Soda.write('.');        // Turns the decimal point on
  delay(1000);            // Delay for 1 second
  Soda.write('..');       // Turns the decimal point off
  delay(1000);
  Soda.increment();       // Increases the number by 1 (rolls over to 0 if already 9)
  delay(1000);
  Soda.decrement();       // Decreases the number by 1 (rolls over to 9 if already 0)
  
}