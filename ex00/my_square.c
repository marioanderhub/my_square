#include <stdio.h>
#include <stdlib.h>

/*
$>./a.out 5 3
o---o
|   |
o---o
$>
*/


void my_square(int a, int b) {

    char *square = calloc(((a + 1) * b + 1), sizeof(*square));
    if (square == NULL) {
        perror("Memory allocation failed.");
        return;
    }

    for (int i = 0; i < b; i++) {
        if ( i == 0 || i == b - 1) {
            // first or last row
            for (int j = 0; j < a + 1; j++) {
                if (j == 0 || j == a - 1) {
                    // corners
                    square[i * (a + 1) + j] = 'o';
                } else if (j == a) {
                    // new line
                    square[i * (a + 1) + j] = '\n';
                } else {
                    // middle piece
                    square[i * (a + 1) + j] = '-';
                }
            }
        } else {
            // middle row
            for (int j = 0; j < a + 1; j++) {
                if (j == 0 || j == a - 1) {
                    // sides (left and right)
                    square[i * (a + 1) + j] = '|';
                } else if (j == a) {
                    // new line
                    square[i * (a + 1) + j] = '\n';
                } else {
                    // middle piece
                    square[i * (a + 1) + j] = ' ';
                }
            }
        }
    }
    printf("%s", square);
}

int main(void) {
    my_square(5, 3);
    my_square(5, 1);
    my_square(1, 5);
    my_square(4, 4);
    my_square(10, 10);
    return 0;
}