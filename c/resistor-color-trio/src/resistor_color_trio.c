#include "resistor_color_trio.h"

resistor_value_t color_code(resistor_band_t *colors) {
    resistor_value_t resistance_value;
    int val = ((colors[0] * 10) + colors[1]) * pow(10, colors[2]);
    resistance_value.value = (val < 1000) ? val : val / 1000;
    resistance_value.unit = val < 1000 ? OHMS : KILOOHMS;
    return resistance_value;
}
