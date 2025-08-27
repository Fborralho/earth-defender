#ifndef VEC_H
#define VEC_H
#include "constants.h"
// Entity types

/*
* 
*/

typedef struct
{
    float x;
    float y;
} Vec_speed;

typedef struct
{
    int x;
    int y;
} Vec_pos;


typedef struct
{
    Vec_pos pos;
    Vec_speed speed;
    bool active;
    int hp;
} Entity;


typedef struct {
    Vec_pos pos;
    Vec_speed speed;
    bool active;
    int damage;
} Bullet;


typedef struct {
    Vec_pos pos;
    Vec_speed speed;
    int health;
    int score;
} Player;

extern Player player;
extern Entity enemies[MAX_ENEMIES];
extern Bullet bullets[MAX_BULLETS];

#endif
