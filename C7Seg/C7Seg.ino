// This program displays 0-9 digits on 7 Segment Display using Arduino. 
//The number counts down from 9 to 0example for Arduino 7 segment display


void setup() {               
  pinMode(2, OUTPUT);//Using Pin 2 for 7(A)
  pinMode(3, OUTPUT);//Using Pin 3 for 6(B)
  pinMode(4, OUTPUT);//Using Pin 4 for 4(C)
  pinMode(5, OUTPUT);//Using Pin 5 for 2(D)
  pinMode(6, OUTPUT);//Using Pin 6 for 1(E)
  pinMode(7, OUTPUT);//Using Pin 7 for 9(F)
  pinMode(8, OUTPUT);//Using Pin 8 for 10(G)
  pinMode(9, OUTPUT);//Using Pin 9 for 
  digitalWrite(9, 0);  // Set 5 DP to off
}


void loop() {
                     // write the number 9
 digitalWrite(2, 1);// Turns segment A ON
 digitalWrite(3, 1);// Turns segment B ON
 digitalWrite(4, 1);// Turns segment C ON
 digitalWrite(5, 0);// Turns segment D OFF
 digitalWrite(6, 0);// Turns segment E OFF
 digitalWrite(7, 1);// Turns segment F ON
 digitalWrite(8, 1);// Turns segment G ON
 delay(1000);       // Delays program to stay on 9 for 1000 MS
 
                    // write the number 8
 digitalWrite(2, 1);// Turns segment A ON
 digitalWrite(3, 1);// Turns segment B ON
 digitalWrite(4, 1);// Turns segment C ON
 digitalWrite(5, 1);// Turns segment D ON
 digitalWrite(6, 1);// Turns segment E ON
 digitalWrite(7, 1);// Turns segment F ON
 digitalWrite(8, 1);// Turns segment G ON
 delay(1000);       // Delays program to stay on 8 for 1000 MS
 
                    // write the number 7
 digitalWrite(2, 1);// Turns segment A ON
 digitalWrite(3, 1);// Turns segment B ON
 digitalWrite(4, 1);// Turns segment C ON
 digitalWrite(5, 0);// Turns segment D OFF
 digitalWrite(6, 0);// Turns segment E OFF
 digitalWrite(7, 0);// Turns segment F OFF
 digitalWrite(8, 0);// Turns segment G OFF
 delay(1000);       // Delays program to stay on 7 for 1000 MS
 
                    // write the number 6
 digitalWrite(2, 1);// Turns segment A ON
 digitalWrite(3, 0);// Turns segment B OFF
 digitalWrite(4, 1);// Turns segment C ON
 digitalWrite(5, 1);// Turns segment D ON
 digitalWrite(6, 1);// Turns segment E ON
 digitalWrite(7, 1);// Turns segment F ON
 digitalWrite(8, 1);// Turns segment G ON
 delay(1000);       // Delays program to stay on 6 for 1000 MS
 
                   // write the number 5
 digitalWrite(2, 1);// Turns segment A ON
 digitalWrite(3, 0);// Turns segment B OFF
 digitalWrite(4, 1);// Turns segment C ON
 digitalWrite(5, 1);// Turns segment D ON
 digitalWrite(6, 0);// Turns segment E OFF
 digitalWrite(7, 1);// Turns segment F ON
 digitalWrite(8, 1);// Turns segment G ON
 delay(1000);       // Delays program to stay on 5 for 1000 MS
 
                    // write the number 4
 digitalWrite(2, 0);// Turns segment A OFF
 digitalWrite(3, 1);// Turns segment B ON
 digitalWrite(4, 1);// Turns segment C ON
 digitalWrite(5, 0);// Turns segment D OFF
 digitalWrite(6, 0);// Turns segment E OFF
 digitalWrite(7, 1);// Turns segment F ON
 digitalWrite(8, 1);// Turns segment G ON
 delay(1000);       // Delays program to stay on 4 for 1000 MS
 
                    // write the number 3
 digitalWrite(2, 1);// Turns segment A ON
 digitalWrite(3, 1);// Turns segment B ON
 digitalWrite(4, 1);// Turns segment C ON
 digitalWrite(5, 1);// Turns segment D ON
 digitalWrite(6, 0);// Turns segment E OFF
 digitalWrite(7, 0);// Turns segment F OFF
 digitalWrite(8, 1);// Turns segment D ON
 delay(1000);      // Delays program to stay on 3 for 1000 MS
 
                    // write the number 2
 digitalWrite(2, 1);// Turns segment A ON
 digitalWrite(3, 1);// Turns segment B ON
 digitalWrite(4, 0);// Turns segment C OFF
 digitalWrite(5, 1);// Turns segment D ON
 digitalWrite(6, 1);// Turns segment E ON
 digitalWrite(7, 0);// Turns segment F OFF
 digitalWrite(8, 1);// Turns segment G ON
 delay(1000);       // Delays program to stay on 2 for 1000 MS
 
                    // write the number 1
 digitalWrite(2, 0);// Turns segment A OFF
 digitalWrite(3, 1);// Turns segment B ON
 digitalWrite(4, 1);// Turns segment C ON
 digitalWrite(5, 0);// Turns segment D OFF
 digitalWrite(6, 0);// Turns segment E OFF
 digitalWrite(7, 0);// Turns segment F OFF
 digitalWrite(8, 0);// Turns segment G OFF
 delay(1000);       // Delays program to stay on 1 for 1000 MS
 
                    // write the number 0
 digitalWrite(2, 1);// Turns segment A ON
 digitalWrite(3, 1);// Turns segment B ON
 digitalWrite(4, 1);// Turns segment C ON
 digitalWrite(5, 1);// Turns segment D ON
 digitalWrite(6, 1);// Turns segment E ON
 digitalWrite(7, 1);// Turns segment F ON
 digitalWrite(8, 0);// Turns segment G OFF
 delay(1000);       // Delays program to stay on 0 for 4000 MS
}
 
