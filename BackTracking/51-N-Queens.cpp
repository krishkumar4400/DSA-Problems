/**
 * Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
 */

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
    public:
    bool isSafe(vector<string>&board, int row, int column, int n) {
        // Horizontally
        for(int j = 0; j < n; j++) {
            if(board[row][j] == 'Q') {
                return false;
            }
        }

        // vertically
        for(int i = 0; i<row; i++) {
            if(board[i][column] == 'Q') {
                return false;
            }
        }

        // left diagonal
        for(int i = row-1, j = column-1; i >= 0 && j >= 0; i--, j--) {
            if(board[i][j] == 'Q') {
                return false;
            }
        }

        // right diagonal
        for(int i = row-1, j = column+1; i >= 0 && j < n; i--, j++) {
            if(board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void nQueens(vector<string>&board, int row, int n, vector<vector<string>>&ans) {
        if(row == n) {
            ans.push_back(board);
            return;
        }
        for(int j = 0; j < n; j++) {
            if(isSafe(board, row, j, n)) {
                board[row][j] = 'Q';
                nQueens(board, row + 1, n, ans);
                board[row][j] = '.';
            }
        }
    }

    void printNQueens(const vector<vector<string>> &result)
    {
        cout << "N Queens Solution: \n";
        for (auto &queens : result)
        {
            for(auto val : queens) {
                cout << val << endl;
            }
            cout<<endl;
        }
    }

    vector<vector<string>> solveNQueens(int n){
        vector<string>board(n, string(n, '.'));
        vector<vector<string>>ans;
        nQueens(board, 0, n, ans);
        return ans;
    }
};

int main() {
    int n = 4;
    Solution s;
    vector<vector<string>> result = s.solveNQueens(n);
    s.printNQueens(result);
}

/**output
 .Q..
...Q
Q...
..Q.

..Q.
Q...
...Q
.Q..
 */