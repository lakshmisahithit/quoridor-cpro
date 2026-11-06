#include <stdio.h>
#include "game.h"

void make_move(struct Game *game, int i, int j) {

    if (game->current == 1) {
        game->player1_row = i;
       game-> player1_column = j;
    }
    else {
        game->player2_row = i;
        game->player2_column = j;
    }

    printf("player %d made a move\n", game->current);
}

void placing_a_wall(struct Game *game, char move, int i, int j){
    i--;
    j--;

    if(move=='h'|| move =='H'){
        game->horizontal[i][j]=1;
        printf("wall is placed");
    }

    else if (move=='v'|| move=='V'){
        game->vertical[i][j]=1;
        printf("wall is placed");
    }

    if (game->current==1)
   game-> p1_walls--;

    else
   game-> p2_walls--;
}

void turns(struct Game *game){

    if(game->current==1)
    game->current=2;

    else 
    game->current=1;

}

