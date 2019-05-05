// Given a binary matrix A, we want to flip the image horizontally, then invert it, and return the resulting image.
//
// To flip an image horizontally means that each row of the image is reversed.  For example, flipping [1, 1, 0] horizontally results in [0, 1, 1].
//
// To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0. For example, inverting [0, 1, 1] results in [1, 0, 0].
//
// Example 1:
//
// Input: [[1,1,0],[1,0,1],[0,0,0]]
// Output: [[1,0,0],[0,1,0],[1,1,1]]
// Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
// Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]
// Example 2:
//
// Input: [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
// Output: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
// Explanation: First reverse each row: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]].
// Then invert the image: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
// Notes:
//
// 1 <= A.length = A[0].length <= 20
// 0 <= A[i][j] <= 1

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {



        for(int i = 0; i<A.size();++i)
        {
            //if (!(A[i].size()%2)){
                for(int j = 0; j<A[i].size()/2; ++j){
                swap(A[i][j], A[i][(A[i].size()-1)-j]);
                }
           // }
            //else if(A[i].size()%2) {

            //}

        }

        for (int i = 0; i<A.size();++i)
        {
           for(int j = 0; j<A[i].size(); ++j)
           {
               if (A[i][j]==1)
               {
                   A[i][j] = 0;
               }
               else {
                    A[i][j] = 1;
               }
           }
        }

        return A;
    }
};


// [[1,1,0]
//  [1,0,1]
//  [0,0,0]]

//  to

// [[1,0,0]
//  [0,1,0]
//  [1,1,1]]

//First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
//Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]

//Ok so I am runing two inner loops! I feel like that a time complexity of O(n^2), and space of like... O(n)

//How... can I make this faster? 