#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av){
    if (ac != 3){
        return 0;
    }

    else {
        int ROWS = atoi(av[1]);
        int COLS = atoi(av[2]);

        for(int i=0; i < ROWS; i++) {
            for(int j=0; j < COLS; j++) {
                if ((i == 0 || i == ROWS - 1) && (j == 0 || j==COLS-1)) {
                    printf("o");
                }
                else if (i > 0 && i < ROWS - 1 && (j == 0 || j==COLS-1)) {
                    printf("|");
                }
                else if((j > 0 && j < COLS -1) && (i==0 || i == ROWS-1)) {
                    printf("-");
                }
                else {
                    printf(" ");
                }
                // printf(" ");
            }
            printf("\n");
        }
    }
}