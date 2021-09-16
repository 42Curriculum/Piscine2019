#ifndef KAMEHAMEHA_H
#define KAMEHAMEHA_H

int error_check(char **str);
int solve_sudoku(char **puzzle, int row, int col);
int solve(char **sudoku, int row, int column);
int check_square(char **sudoku, int row, int column, int num);
int check_row(char **sudoku, int column, int num);
int check_column(char **sudoku, int row, int num);
int possible(char **sudoku, int row, int column, int num);
void print(char **sudoku);

#endif
