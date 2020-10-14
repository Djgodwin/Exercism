#ifndef RESISTOR_COLOR_TRIO_H
#define RESISTOR_COLOR_TRIO_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef enum {
    OHMS = 0,
    KILOOHMS = 1
} resistance_unit_t;

typedef struct {
    uint16_t value;
    resistance_unit_t unit;
} resistor_value_t;

typedef enum {
    BLACK = 0,
    BROWN = 1,
    RED = 2,
    ORANGE = 3,
    YELLOW = 4,
    GREEN = 5,
    BLUE = 6,
    VIOLET = 7,
    GREY = 8,
    WHITE = 9
} resistor_band_t;

resistor_value_t color_code(resistor_band_t *colors);

#endif
