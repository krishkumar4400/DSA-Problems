#include<iostream>
#include<vector>

class Solution
{
public:
    bool searchInRow(vector<vector<int>> &matrix, int target, int midRow)
    { // O(logg(n))
        int n = matrix[0].size();
        int start = 0, end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (target == matrix[midRow][mid])
            {
                return true;
            }
            else if (target < matrix[midRow][mid])
            {
                end = end - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>> &matrix, int target)
    { // O(logg(m))
        // binary search on total rows
        int m = matrix.size(), n = matrix[0].size();
        int startRow = 0, endRow = m - 1;

        while (startRow <= endRow)
        {
            int midRow = startRow + (endRow - startRow) / 2;

            if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1])
            {
                // Found the row Binary Search on this row
                return searchInRow(matrix, target, midRow);
            }
            else if (target >= matrix[midRow][n - 1])
            {
                // down => right
                startRow = midRow + 1;
            }
            else
            {
                endRow = midRow - 1;
            }
        }
        return false;
    }
};

int main() {
    
}