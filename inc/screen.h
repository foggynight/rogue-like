/**
 * screen.h - v0.0.0
 * Copyright (C) 2021 Robert Coffey
 * Released under the GPLv2 license
 **/

#ifndef SCREEN_H_
#define SCREEN_H_

#include "tile.h"

void screen_init(void);
void screen_step(tile_t tile_arr[]);
void screen_kill(void);

#endif // SCREEN_H_

/**
 * Version History
 * 0.0.0 - 2021-01-03 - First commit
 **/
