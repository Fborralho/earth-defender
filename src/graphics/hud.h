#ifndef HUD_H
#define HUD_H
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include "../graphics/graphics.h"
#include "../graphics/font8x8.h"
#include "../game_core/types.h"

void draw_char( uint16_t x, uint16_t y,char c, uint8_t color);
void draw_text( uint16_t x, uint16_t y,const char *text,uint8_t color);
void draw_number( uint16_t x, uint16_t y, int number,uint8_t color);
void draw_hp_bar(uint16_t x, uint16_t y, int width, int height, int hp);
void draw_hud();

#endif
