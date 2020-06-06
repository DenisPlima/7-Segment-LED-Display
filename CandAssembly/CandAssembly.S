        #include "avr/io.h"
        #include "CandAssembly.h"
        /*The assembly function must be declared as global*/
        .global getOutputs   ; Define the function getOutputs()
        .global seg9       ; Define the function for 9
        .global seg8       ; Define the function for 8
        .global seg7       ; Define the function for 7
        .global seg6       ; Define the function for 6    
        .global seg5       ; Define the function for 5
        .global seg4       ; Define the function for 4
        .global seg3       ; Define the function for 3
        .global seg2       ; Define the function for 2
        .global seg1       ; Define the function for 1
        .global seg0       ; Define the function for 0

getOutputs:
              DDRD = 0b11111110
              DDRB = B00000001             
              ret

seg9:
              PORTD=10011100 ;Write 9
              PORTB=B00000001 ;
              ret

seg8:
            PORTD=B11111100
            PORTB=B00000001
              ret
seg7:
            PORTD=B
            PORTB=B
              ret
seg6:
            PORTD=B
            PORTB=B
              ret
seg5:
            PORTD=B
            PORTB=B
              ret
seg4:
            PORTD=B
            PORTB=B
              ret
seg3:
            PORTD=B
            PORTB=B
              ret
seg2:
            PORTD=B
            PORTB=B
              ret
seg1:
            PORTD=B
            PORTB=B
            ret
seg0:
            PORTD=B
            PORTB=B
              ret






        
