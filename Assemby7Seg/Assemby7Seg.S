
        #include "avr/io.h"; header for non .h File

/*The assembly function must be declared as global*/
        .global setup ; global function 
        .global loop ; global function 

setup:
              ldi r16,  0b11111100            ;loads 2-7 on Arduino as output
              out 0x0A, r16                   ;DDRD - The Port D Data Direction Register - read/write
              

              ldi r16,  0b00000001            ;loads 8 on Arduino as output
              out 0x04, r16                   ;DDRB - The Port B Data Direction Register - read/write

              ret ; Go to loop
      

loop:
              ldi r17,  0b10011100 ;Write 9
              out 0x0B, r17        ;out          
              ldi r17,  0b00000001 ;PORTD & PORTB - The PortData Registers - read/write          
              out 0x05, r17        ;out 

              rcall Delay_sec ; delay 

              ldi r17,  0b11111100 ;Write 8
              out 0x0B, r17        ;out         
              ldi r17,  0b00000001 ;PORTD & PORTB - The PortData Registers - read/write         
              out 0x05, r17        ;out

              rcall Delay_sec ; delay 

              ldi r17,  0b00011100 ;Write 7
              out 0x0B, r17        ;out
              ldi r17,  0b00000000 ;PORTD & PORTB - The PortData Registers - read/write           
              out 0x05, r17        ;out

              rcall Delay_sec ; delay 

              ldi r17,  0b11110100 ;Write 6
              out 0x0B, r17        ;out
              ldi r17,  0b00000001 ;PORTD & PORTB - The PortData Registers - read/write          
              out 0x05, r17        ;out

              rcall Delay_sec ; delay 

              ldi r17,  0b10110100 ;Write 5
              out 0x0B, r17        ;out
              ldi r17,  0b00000001 ;PORTD & PORTB - The PortData Registers - read/write          
              out 0x05, r17        ;out

              rcall Delay_sec ; delay 

              ldi r17,  0b10011000 ;Write 4
              out 0x0B, r17        ;out
              ldi r17,  0b00000001  ;PORTD & PORTB - The PortData Registers - read/write         
              out 0x05, r17        ;out

              rcall Delay_sec ; delay 

              ldi r17,  0b00111100 ;Write 3
              out 0x0B, r17        ;out
              ldi r17,  0b00000001 ;PORTD & PORTB - The PortData Registers - read/write          
              out 0x05, r17        ;out

              rcall Delay_sec ; delay 

              ldi r17,  0b01101100 ;Write 2
              out 0x0B, r17        ;out
              ldi r17,  0b00000001 ;PORTD & PORTB - The PortData Registers - read/write          
              out 0x05, r17        ;out

              rcall Delay_sec ; delay 

              ldi r17,  0b00011000 ;Write 1
              out 0x0B, r17        ;out
              ldi r17,  0b00000000 ;PORTD & PORTB - The PortData Registers - read/write          
              out 0x05, r17        ;out

              rcall Delay_sec ; delay 

              ldi r17,  0b11111100 ;Write 0
              out 0x0B, r17        ;out
              ldi r17,  0b00000000 ;PORTD & PORTB - The PortData Registers - read/write          
              out 0x05, r17        ;out

              rcall Delay_sec ; delay 
              
              ret ; return to start of loop 

Delay_sec:                 ; Pause program
    ldi     r16,   128     ; load value into reg
Delay1:                    ;1st delay loop 
    ldi     r17,   125     ; load value into reg  
Delay2:                    ;2st delay loop 
    ldi     r18,   250     ; load value into reg   
Delay3:                    ;3st delay loop 
    dec     r18            ; Decrement 
    nop                    ; No Operation 
    brne    Delay3         ; loop back 

    dec     r17            ; Decrement 
    brne    Delay2         ; loop back 

    dec     r16            ; Decrement 
    brne    Delay1         ; loop back  
ret                        ; return to loop
