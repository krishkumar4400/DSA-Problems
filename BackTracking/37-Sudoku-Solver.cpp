#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
    public:
    bool isSafe(vector<vector<char>>&board, int row, int column, char digit){
        // Horizontal
        for(int j = 0; j < 9; j++) {
            if(board[row][j] == digit){
                return false;
            }
        }

        // Vertical
        for (int i = 0; i < 9; i++)
        {
            if(board[i][column] == digit) {
                return false;
            }
        }

        // 3x3 Grid
        int sRow = (row / 3) * 3;
        int sCol = (column / 3) * 3;
        for (int i = sRow; i < sRow + 3; i++)
        {
            for (int j = sCol; j < sCol + 3; j++)
            {
                if (board[i][j] == digit)
                    return false;
            }
        }
        return true;
    }

    bool helper(vector<vector<char>> &board, int row, int column) {
        // Base Case
        if(row == 9) {
            return true;
        }

        int nextRow = row;
        int nextColumn = column + 1;
        if(nextColumn == 9) {
            nextRow = row + 1;
            nextColumn = 0;
        }

        if(board[row][column] != '.') {
            return helper(board, nextRow, nextColumn);
        }

        // Place Digit
        for(char digit = '1'; digit <= '9'; digit++) {
            if(isSafe(board, row, column, digit)) {
                board[row][column] = digit;
                if(helper(board, nextRow, nextColumn)) {
                    return true;
                }
                board[row][column] = '.'; // backtrack
            }
        }
        return false;
    }

    void printSudoku(const vector<vector<char>>&board) {
        cout << "Solved Sudoku\n";
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    bool solveSudoku (vector<vector<char>> &board) {
        return helper(board, 0, 0);
    }

};

int main () {
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '.', '8', '.', '7', '9'},
    };

    Solution s;
    bool result = s.solveSudoku(board);
    cout << "Result = " << result << endl;
    if(result) {
        s.printSudoku(board);
    } else {
        cout << "No Solution Exists\n";
    }
    return 0;
}

/** Output

Result = 1
Solved Sudoku
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9

 */