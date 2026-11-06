#ifndef GAME_H
#define GAME_H

struct Game{

    int horizontal[8][8];
    int vertical[8][8];

    int player1_row;
    int player1_column;

    int player2_row;
    int player2_column;

    int current;

    int p1_walls;
    int p2_walls;
};


void make_move(struct Game *game, int i, int j);

void placing_a_wall(struct Game *game, char move, int i, int j);

void turns(struct Game *game);

#endif