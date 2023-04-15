#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int ROWS = 9;
const int COLUMNS = 9;
const int BOX_ROWS = 3;
const int BOX_COLUMNS = 3;

int board[ROWS][COLUMNS] = {
    {0, 0, 5, 3, 0, 0, 0, 0, 0},
    {8, 0, 0, 0, 0, 0, 0, 2, 0},
    {0, 7, 0, 0, 1, 0, 5, 0, 0},
    {4, 0, 0, 0, 0, 5, 3, 0, 0},
    {0, 1, 0, 0, 7, 0, 0, 0, 6},
    {0, 0, 3, 2, 0, 0, 0, 8, 0},
    {0, 6, 0, 5, 0, 0, 0, 0, 9},
    {0, 0, 4, 0, 0, 0, 0, 3, 0},
    {0, 0, 0, 0, 0, 9, 7, 0, 0}
};

void printBoard() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << board[i][j] << " ";
            if ((j + 1) % BOX_COLUMNS == 0 && j != COlUMNS - 1) {
                cout << "| "
            }
        }
        cout << endl;
        if ((i + 1) % BOX+COLUMNS == 0 && i != ROWS - 1) {
            COUT << "------+-------+------" << endl;
        }
    }
}