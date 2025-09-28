#include <iostream>
#include <vector>

using namespace std;

void helper(vector<vector<int>> mat, int row, int column, vector<string>&ans, string path, vector<vector<bool>> &vis) {
    int n = mat.size();

    // Base Case
    if(row < 0 || column < 0 || row >= n || column >= n || mat[row][column] == 0 || vis[row][column] == true) {
        return;
    }

    // Ans Found
    if(row == n-1 && column == n-1) {
        ans.push_back(path);
        return;
    }

    vis[row][column] = true;

    helper(mat, row - 1, column, ans, path + "U", vis); // Up
    helper(mat, row, column + 1, ans, path + "R", vis); // Right
    helper(mat, row + 1, column, ans, path + "D", vis); // Down
    helper(mat, row, column - 1, ans, path + "L", vis); // Left

    // Backtracking
    vis[row][column] = false;
}

vector<string> findPath(vector<vector<int>> &mat){
    int n = mat.size();
    string path = "";
    vector<string>ans;
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    helper(mat, 0, 0, ans, path, vis);
    return ans;
}

int main()
{
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};

    vector<string> ans = findPath(mat);
    cout << "Possible Paths:\n";
    for (string path : ans)
    {
        cout << path << endl;
    }
    return 0;
}

/** output

Possible Paths:
DRDDRR
DDRDRR

 */


// Optimization in case of Space
#include <iostream>
#include <vector>

using namespace std;

void helper(vector<vector<int>> mat, int row, int column, vector<string> &ans, string path)
{
    int n = mat.size();

    // Base Case
    if (row < 0 || column < 0 || row >= n || column >= n || mat[row][column] == 0 || mat[row][column] == -1)
    {
        return;
    }

    // Ans Found
    if (row == n - 1 && column == n - 1)
    {
        ans.push_back(path);
        return;
    }

    mat[row][column] = -1; // visit

    helper(mat, row - 1, column, ans, path + "U"); // Up
    helper(mat, row, column + 1, ans, path + "R"); // Right
    helper(mat, row + 1, column, ans, path + "D"); // Down
    helper(mat, row, column - 1, ans, path + "L"); // Left

    // Backtracking
    mat[row][column] = 1; // unvisit
}

vector<string> findPath(vector<vector<int>> &mat)
{
    int n = mat.size();
    string path = "";
    vector<string> ans;
    helper(mat, 0, 0, ans, path);
    return ans;
}

int main()
{
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};

    vector<string> ans = findPath(mat);
    cout << "Possible Paths:\n";
    for (string path : ans)
    {
        cout << path << endl;
    }
    return 0;
}

/** output

Possible Paths:
DRDDRR
DDRDRR

 */