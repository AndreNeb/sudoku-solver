# Sudoku Solver

This is a C program that allows you to input your own Sudoku puzzle and have it solved. The program uses a recursive backtracking algorithm to find the solution for the Sudoku puzzle.

## Getting Started

To use this program, you need a C compiler installed on your computer.

1. Clone the repository.

```bash
git clone https://github.com/your-username/sudoku-solver.git
```

2. Compile the C program using your preferred C compiler.

```bash
gcc sudoku_solver.c -o sudoku_solver
```

3. Run the executable.

```bash
./sudoku_solver
```

## How to Use

1. When you run the program, you will be prompted to enter the values for each cell of the Sudoku puzzle.

2. For each cell, enter the number at the given position (row, column). Empty cells should be filled with 0.

3. After entering all the values, the program will attempt to solve the Sudoku puzzle.

4. If a solution is found, it will be displayed on the console.

5. The solved Sudoku will be displayed in a grid format on the console.

## Functions

The program consists of the following functions:

1. `void ownSudoku(int sudoku[][9])`: Allows the user to input their own Sudoku puzzle.

2. `bool testIfPossible(int row, int column, int numberToTest, int sudoku[][9])`: Checks if it is possible to place the given number at the specified position.

3. `void solve(int sudoku[][9])`: Recursively solves the Sudoku puzzle using a backtracking algorithm.

4. `void drawSudoku(int sudoku[][9])`: Draws the Sudoku puzzle in a grid format on the console.

## Note

- The input Sudoku puzzle must be a 9x9 grid, with empty cells represented by 0.

- The program uses backtracking to explore all possible combinations until a valid solution is found.

- If the input Sudoku has multiple solutions, the program will find one of them. The output may not necessarily be unique.

## Contributing

This is a basic implementation of a Sudoku solver. If you find any bugs or want to enhance the program, feel free to open an issue or submit a pull request.
