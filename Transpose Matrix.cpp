// Given a matrix A, return the transpose of A.
//
// The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix.
//
//
//
// Example 1:
//
// Input: [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[1,4,7],[2,5,8],[3,6,9]]
// Example 2:
//
// Input: [[1,2,3],[4,5,6]]
// Output: [[1,4],[2,5],[3,6]]
//
//
// Note:
//
// 1 <= A.length <= 1000
// 1 <= A[0].length <= 1000

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {

        //if (A.size()>=1) return A;
        //Initially I thought I forgot a base case but what had actually happened was....
        //I was trying to access a row that might not exist, depending on....
        //How many rows my A was going to have.

        int rows = A.size();
        int columns = A[0].size();

        vector<vector<int>> transpose (columns, vector<int>(rows));

        for (int i = 0; i<rows; ++i)
        {
            for (int j = 0; j<columns; ++j)
            {
                transpose[j][i] = A[i][j];
            }
        }

        return transpose;

    }
};

// [1, 2, 3]
// [4, 5, 6]
// [7, 8, 9]

// to

// [1, 4, 7]
// [2, 5, 8]
// [3, 6, 9]

//---------------------------------------

// [1, 2, 3]
// [4, 5, 6]


// to

// [1, 4]
// [2, 5]
// [3, 6]



//So I think the runtime is O(n^2) [yikes, lol], and space complexity is O(n) [or is it O(n^2)?!?!?!?1].
//I wonder how I could make this faster...
