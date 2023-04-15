#include <iostream>
using namespace std;

// define the game board as a 2D array
int board[9][9] = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    {0, 9, 8, 0, 0, 0, 0, 6, 0},
    {8, 0, 0, 0, 6, 0, 0, 0, 3},
    {4, 0, 0, 8, 0, 3, 0, 0, 1},
    {7, 0, 0, 0, 2, 0, 0, 0, 6},
    {0, 6, 0, 0, 0, 0, 2, 8, 0},
    {0, 0, 0, 4, 1, 9, 0, 0, 5},
    {0, 0, 0, 0, 8, 0, 0, 7, 9}
};

// function to display the game board
void display_board() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << board[i][j] << " ";
            if ((j + 1) % 3 == 0 && j != 8) {
                cout << "| ";
            }
        }
        cout << endl;
        if ((i + 1) % 3 == 0 && i != 8) {
            cout << "------+-------+------" << endl;
        }
    }
}

// function to check if a number is valid in a given position
bool is_valid(int row, int col, int num) {
    // check row and column
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == num || board[i][col] == num) {
            return false;
        }
    }
    // check 3x3 box
    int box_row = row / 3 * 3;
    int box_col = col / 3 * 3;
    for (int i = box_row; i < box_row + 3; i++) {
        for (int j = box_col; j < box_col + 3; j++) {
            if (board[i][j] == num) {
                return false;
            }
        }
    }
    return true;
}

// function to solve the Sudoku puzzle recursively
bool solve_sudoku() {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (board[row][col] == 0) {
                for (int num = 1; num <= 9; num++) {
                    if (is_valid(row, col, num)) {
                        board[row][col] = num;
                        if (solve_sudoku()) {
                            return true;
                        }
                        board[row][col] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main() {
    cout << "Sudoku Game" << endl;
}