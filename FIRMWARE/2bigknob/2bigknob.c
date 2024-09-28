#include "2bigknob.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    // Key Matrix to LED Index
    { NO_LED , NO_LED, NO_LED, NO_LED  },
    { 3, 2, 1, 0 },
    { 7, 6, 5, 4}
}, {
    // LED Index to Physical Position
    { 0, 0 }, { 75, 0 }, { 150, 0 }, { 225, 0 },
    { 0, 32 }, { 75, 32 }, { 150, 32 },  { 225, 32 },
}, {
    // LED Index to Flag
    4, 4, 4, 4,
    4, 4, 4, 4 
} };
#endif

