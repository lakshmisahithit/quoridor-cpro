#ifndef INPUT_H
#define INPUT_H

struct Game;

int input(char *move, int *i, int *j);

int check_input_validity(char move);

int check_position_validity(int i, int j);

int check_move_validity(struct Game *game, int i, int j);

int valid_wall_position(struct Game *game, char move, int i, int j);

#endif