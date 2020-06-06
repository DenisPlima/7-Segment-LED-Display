/*
 * Global register variables.
 */
#ifdef __ASSEMBLER__

/* Assembler-only stuff */

#else  /* !ASSEMBLER */

/* C-only stuff */

#include <stdint.h>

extern "C" uint8_t led(uint8_t);
extern "C" uint8_t seg9 (uint8_t);
extern "C" uint8_t seg8 (uint8_t);
extern "C" uint8_t seg7 (uint8_t);
extern "C" uint8_t seg6 (uint8_t);
extern "C" uint8_t seg5 (uint8_t);
extern "C" uint8_t seg4 (uint8_t);
extern "C" uint8_t seg3 (uint8_t);
extern "C" uint8_t seg2 (uint8_t);
extern "C" uint8_t seg1 (uint8_t);
extern "C" uint8_t seg0 (uint8_t);


#endif /* ASSEMBLER */
