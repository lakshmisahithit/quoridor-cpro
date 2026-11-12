#ifndef INPUT_H
#define INPUT_H

struct Game;

int input(char *move, int *i, int *j);

int check_input_validity(char move);

int check_position_validity(int i, int j);

int check_move_validity(struct Game *game, int i, int j);

int valid_wall_position(struct Game *game, char move, int i, int j);

int move_up(struct Game *game, int row, int col);
int move_down(struct Game *game, int row, int col);
int move_left(struct Game *game, int row, int col);
int move_right(struct Game *game, int row, int col);

int search(struct Game *game, int row, int col, int target, int visited_cells[9][9]);

int reach_target(struct Game *game, int player);

int check_paths(struct Game *game);

#endif
