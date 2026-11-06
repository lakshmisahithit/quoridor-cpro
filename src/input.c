#include <stdio.h>
#include "game.h"
#include <stdlib.h>
#include "input.h"

int input(char *move, int *i, int *j){
    char line[100];
    char extra;
    int valid = 0;
    while (!valid) {
        printf("Enter your move: (M/H/V) Row Column ");

        if (fgets(line, sizeof(line), stdin) == NULL) return -1;

        if(sscanf(line, " %c %d %d %c", move, i, j, &extra)!=3){
            printf("invalid input, enter again\n");
            continue;
        }

        if (*move == 'm') {
            *move = 'M';
        }
        else if (*move == 'h') {
            *move = 'H';
        }
        else if (*move == 'v') {
            *move = 'V';
        }

        if (check_input_validity(*move)) {
            valid = 1;
        }
        else {
            printf("invalid input entered, enter valid input\n");
        }

    }

    
return 1;

}

int check_input_validity(char move){
    if (move=='m'|| move=='h'|| move=='v'||move=='M'||move=='H'||move=='V'){

        return 1;
    }
    printf("invalid move entered\n");
    return 0;
}

int check_position_validity( int i, int j){
    if(i<1 || i >9 || j< 1 || j>9){
        printf("invalid value entered\n");
        return 0;
    }
    return 1;
}

int check_move_validity(struct Game *game,int i, int j){

    if (game->current == 1) {
        if (i== game->player2_row && j == game->player2_column) {
            printf("position already occupied\n");
            return 0;
        }

    if (abs(i-game-> player1_row) + abs(j -game->player1_column) != 1){
            printf("invalid move\n");
            return 0;
    }
}

     else {
        if (i== game->player1_row && j ==game-> player1_column){
            printf("position already occupied\n");
            return 0;
        }

        if (abs(i -game-> player2_row) + abs(j -game-> player2_column) != 1){
            printf("invalid move\n");
            return 0;
        }
    }
    return 1;
}

int valid_wall_position(struct Game *game, char move, int i, int j){
    i--;
    j--;

    if(i<0 || i>7|| j<0||j>7){
        printf("wall cannot be placed here");
        return 0;
    }

    if((game->current==1 && game->p1_walls==0)||(game->current==2 && game->p2_walls ==0)){
        printf("you have no walls remaining");
        return 0;
    }

    if(move=='h'|| move=='H'){

        if(game->horizontal[i][j]||(j>0 && game->horizontal[i][j-1]) || (j<7 && game->horizontal[i][j+1])|| game->vertical[i][j]){
            printf("wall cannot be placed here");
            return 0;
        }
    }

    else if( move =='v'||move=='V'){

        if(game->vertical[i][j] ||(i>0 && game->vertical[i-1][j]) || (i<7 && game->vertical[i+1][j])|| game->horizontal[i][j] ){
            printf("wall cannot be placed here");
            return 0;
        }

    }

    return 1;
}