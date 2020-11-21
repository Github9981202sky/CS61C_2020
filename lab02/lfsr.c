#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    uint16_t temp;
    uint16_t temp_a;
    temp = *reg;
    temp_a = (temp >> (0)) & (0x1);
    temp_a = temp_a ^ ((temp >> (2)) & (0x1));
    temp_a = temp_a ^ ((temp >> (3)) & (0x1));
    temp_a = temp_a ^ ((temp >> (5)) & (0x1));
    temp = (temp >> 1) + (temp_a << 15); 
    *reg = temp;
}

