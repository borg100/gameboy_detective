// #ifndef CHARACTER_H //if its not defined, then proceed to line 2 and define it.
// #define CHARACTER_H
//pragma once is a stronger method to ifndef <-> endif
#pragma once
#include <gb/gb.h>

typedef struct CharacterSmoke
{
    // When this is set to 1, the update_toad() function will be called.

    UINT8 x;
    UINT8 y;

    UBYTE facing_right;
    UINT8 sprite_index;
    UBYTE direction;

    // Body Metasprite
    UBYTE body_animate;
    UINT8 body_tile_index;
    UINT8 body_frame_index;
    UINT8 body_frame_delay;

    // Smoke Metasprite
    UINT8 smoke_tile_index;
    UINT8 smoke_frame_index;
    UINT8 smoke_frame_delay;
    UINT8 smoke_start_delay;

} CharacterSmoke;
// #endif
//sort of like an end } of an if statement. If it is defined above, it will not be copied again