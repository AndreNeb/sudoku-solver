#include <stdio.h>
#include <stdbool.h>

void testIfPossible(int [], int[], int);

void drawSudoku(int [][9]);

void solve();


void ownSudoku(int [][9]);

void givenSudoku();

void help();

int main() {

    int sudoku[9][9];
    char input;

    printf("What action would you like to take?\n");
    printf("(A) Enter your own sudoku and have it solved\n");
    printf("(B) Play a given Sudoku\n");
    scanf("%c", &input);


    switch (input) {
        case 'A':
            ownSudoku(sudoku);
            break;
        case 'B':
            //givenSudoku();
            break;
        default:
            printf("Give a valid input!");
    }

    return 0;
}

void ownSudoku(int sudoku[][9]) {
    int inputNumber;
    drawSudoku(sudoku);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("Give a value for the following position: %d %d\n", i, j);
            scanf("%d", &inputNumber);
            sudoku[i][j] = inputNumber;
        }
    }
    //solve(sudoku);
    drawSudoku(sudoku);
}

void drawSudoku(int sudoku[][9]) {

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            sudoku[i][j] = 0;
        }
    }


    printf("\n   —   —   —   —   —   —   —   \n");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (j == 0) {
                printf("| ");
            }
            if (j == 8) {
                printf(" %d ", sudoku[i][j]);
                printf(" |");
                continue;
            }
            printf(" %d ", sudoku[i][j]);
        }
        printf("\n   —   —   —   —   —   —   —   \n");
    }
}


