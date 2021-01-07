/**
 * block.c - v0.0.0
 * Copyright (C) 2021 Robert Coffey
 * Released under the GPLv2 license
 **/

#include <stdlib.h>

#include <rtb/log.h>

#include "block.h"

block_t *block_init(void)
{
    block_t *new_block = calloc(1, sizeof(block_t));
    if (!new_block)
        rtb_elog("block_init: calloc failed");
    return new_block;
}

int block_get_tile_index(int y_pos, int x_pos)
{
    if ((y_pos < 0 || y_pos >= BLOCK_HEIGHT)
     || (x_pos < 0 || x_pos >= BLOCK_WIDTH))
        rtb_elogf("block_get_tile_index: Invalid %c position\n",
                  (y_pos < 0 || y_pos >= BLOCK_HEIGHT) ? 'y' : 'x');
    return y_pos * BLOCK_WIDTH + x_pos;
}

/**
 * Version History
 * 0.0.0 - 2021-01-05 - First commit
 **/
