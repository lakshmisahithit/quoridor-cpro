#include <stdio.h>
#include "game.h"
#include "board.h"


void board(struct Game *game) {

    printf("\n   "); 

      for( int j = 1; j < 10 ; j++){
        printf(" %d  ", j);
    }
    
    printf("\n"); 

    for( int i = 1; i < 10 ; i++){
        printf("%d  ", i);
    

        for( int j = 1; j < 10 ; j++){

            if(i==game->player1_row && j==game->player1_column)
            printf(" 1 ");

            else if(i==game->player2_row && j==game->player2_column)
            printf(" 2 ");

            else 
            printf(" * ");

          if(j < 9) {
    if((i <= 8 && game->vertical[i-1][j-1] == 1) ||
       (i > 1 && game->vertical[i-2][j-1] == 1)) {
        printf("|");
    }
    else {
        printf(" ");
    }
}
            }

            printf("\n");

            if ( i<9){
                printf("    ");

                for( int j = 1; j < 10 ; j++){
                    if ((j < 9 && game->horizontal[i-1][j-1]) || (j > 1 && game->horizontal[i-1][j -2])) {

                        printf("---");
                    }

                    else
                    printf("  ");

                    if(j<9)
                    printf(" ");

        }

        printf("\n");
    }

}

printf("\n");

}