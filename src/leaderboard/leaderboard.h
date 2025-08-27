#include <stdio.h>
#include <stdlib.h>
#include "proj.h"

// read from leaderboard file
// and store the values in the game struct
// the file format isnt defined yet, could be just the scores in order separated by new lines or commas
// leaderboard.txt
void read_leaderboard(Game game);

//check if the score is in the leaderboard
// if it is, updates leaderboard and return 0
int check_score(Game game);

// write leaderboard to file
void write_leaderboard(Game game);
