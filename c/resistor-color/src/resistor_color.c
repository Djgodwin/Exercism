#include "resistor_color.h"

int color_code(resistor_band_t color) {
    return color;
}

int * colors() {
    static int array[10];
    for (int i = 0; i < 10; i++) {
        array[i] = i;
    }
    return array;
}
