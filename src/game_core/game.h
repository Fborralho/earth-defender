#pragma once
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "hud.h"
#include "gamestate.h"
#include "graphics.h"
#include "constants.h"
#include "keyboard.h"
#include "mouse.h"
#include "sprites.h"





// Game functions
int run(Game *game);
void init_game();
void fire_bullet(Vec_pos cursor_pos);
void spawn_enemy();
void update_entities();
void draw_game();
void check_collisions();
void handle_input(uint8_t scanMove);
void draw_crosshair(Vec_pos cursor);
float quake_sqrt(float n);
