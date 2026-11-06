#include <stdio.h>
#include "game.h"
#include <stdbool.h>
#include "board.h"
#include "input.h"

int main (){

    struct Game game = {0};

    game.player1_row=1;
    game.player2_row=9;
    game.player1_column=5;
    game.player2_column=5;

    game.current=1;

    game.p1_walls =10;
    game.p2_walls =10;

    printf("QUORIDOR GAME\n");

    while(true){

        board(&game);

        printf("player %d make a move:\n", game.current);
        
        char move;
        int i,j;

        if(input(&move, &i, &j) !=1){
            printf("input ended\n");
            break;
        }

        if(check_input_validity(move)==0){
            printf("invalid input\n");
            continue;
        }

        int test = 0;
        
        if(move =='m'|| move=='M'){
            test = check_position_validity(i,j) && check_move_validity(&game, i,j);

            if(test)
            make_move(&game, i,j);
        }

        else if (move=='h' || move =='H'|| move=='v' || move=='V'){
            test = valid_wall_position(&game, move, i, j);
            if(test)
            placing_a_wall(&game, move, i, j);

        }

        if(test)
        turns(&game);
    }
    return 0;
}





