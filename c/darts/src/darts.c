#include "darts.h"

uint8_t score(coordinate_t landing_position) {
    uint8_t points = 0;
    float c_squared = (float) (pow((double)fabs(landing_position.x), 2) + pow((double)fabs(landing_position.y), 2));

    if (c_squared <= 100 && c_squared > 25) {
        points = 1;
    } else if (c_squared <= 25 && c_squared > 1) {
        points = 5;
    } else if (c_squared <= 1 && c_squared >= 0) {
        points = 10;
    }

    return points;
}
