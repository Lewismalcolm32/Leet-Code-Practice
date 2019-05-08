// Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.
//
// You may return any answer array that satisfies this condition.
//
//
//
// Example 1:
//
// Input: [3,1,2,4]
// Output: [2,4,3,1]
// The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
//
//
// Note:
//
// 1 <= A.length <= 5000
// 0 <= A[i] <= 5000



class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> evenAndOdd;
        for (int i = 0; i < A.size(); ++i)
        {
            if (!(A[i]%2)) //A[i] is Even
            {
                evenAndOdd.push_back(A[i]);
            }
        }

        for (int i = 0; i < A.size(); ++i)
        {
            if (A[i]%2) //A[i] is Odd
            {
                evenAndOdd.push_back(A[i]);
            }
        }

        return evenAndOdd;

    }
};

//This solution has a runtime of O(n). I loop through twice looking for even and then odd numbers. I think the space complexity is O(n)

//I think if I include two vectors in my function, I could cut the time down a little more

// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& A) {
//         vector<int> even;
//         vector<int> odd;
//         vector<int> evenOdd;

//         evenOdd.reserve( even.size() + odd.size() ); // preallocate memory


//         for (int i = 0; i < A.size(); ++i)
//         {
//                 if (!(A[i]%2)) //A[i] is Even
//                 {
//                     even.push_back(A[i]);
//                 }


//             else{
//                 odd.push_back(A[i]);
//             }
//         }

//         //even.push_back(odd);
//             evenOdd.insert( evenOdd.end(), even.begin(), even.end() );
//             evenOdd.insert( evenOdd.end(), odd.begin(), odd.end() );



//         return evenOdd;

//     }
// };

//So the new solution was actually slower, and used more memory, well wow!
