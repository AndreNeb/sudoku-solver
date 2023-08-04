#include <stdio.h>
#include <stdbool.h>

bool testIfPossible(int, int, int, int[][9]);

void drawSudoku(int [][9]);

void solve(int [][9]);


void ownSudoku(int [][9]);

void givenSudoku();

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
    solve(sudoku);
}

bool testIfPossible(int row, int column, int numberToTest, int sudoku[][9]) {
    for (int i = 0; i < 9; i++) {
        if (sudoku[row][i] == numberToTest) {
            return false;
        }
    }

    for (int i = 0; i < 9; i++) {
        if (sudoku[i][column] == numberToTest) {
            return false;
        }
    }

    int squareRow = row / 3 * 3;
    int squareColumn = column / 3 * 3;

    for (int i = squareRow; i < squareRow + 3; i++) {
        for (int j = squareColumn; j < squareColumn + 3; j++) {
            if (sudoku[i][j] == numberToTest) {
                return false;
            }
        }
    }
    return true;
}


void solve(int sudoku[][9]) {
    for (int row = 0; row < 9; row++) {
        for (int column = 0; column < 9; column++) {
            if (sudoku[row][column] == 0) {
                for (int numberToTest = 1; numberToTest < 10; numberToTest++) {
                    if (testIfPossible(row, column, numberToTest, sudoku)) {
                        sudoku[row][column] = numberToTest;
                        solve(sudoku);
                        sudoku[row][column] = 0;
                    }

                }
                return;
            }
        }
    }
    drawSudoku(sudoku);
}


void drawSudoku(int sudoku[][9]) {
    printf("\n   —  —  —  —  —  —  —  —  —  \n");
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
        printf("\n   —  —  —  —  —  —  —  —  —  \n");
    }
}

