#ifndef GAMESTATE_H
#define GAMESTATE_H


typedef enum
{
    GAME_STATE_MENU,
    GAME_STATE_GAME,
    GAME_STATE_GAMEOVER,
    GAME_STATE_LEADERBOARD,
    GAME_STATE_EXIT
} GameState;

typedef enum
{
    MENU_START_GAME,
    MENU_OPEN_LEADERBOARD,
    MENU_EXIT_GAME
} MenuOption;

typedef struct
{
    int leaderboard[5];
    GameState curState;
    int score;

} Game;


#endif

