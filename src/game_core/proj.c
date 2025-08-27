#include "proj.h"

int (proj_main_loop)(int argc, char *argv[]){
  printf("Entered loop\n");
  Game game;
  game.curState = GAME_STATE_GAME;
  game.score = 0;
  printf("Entered run\n");
  run(&game);
  printf("Exited run \n");
  return 0;
}
