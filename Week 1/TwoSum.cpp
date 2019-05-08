// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//
// You may assume that each input would have exactly one solution, and you may not use the same element twice.


// Example:
//
// Given nums = [2, 7, 11, 15], target = 9,
//
// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].
#include <vector>
#include <iostream>
using namespace std;

// class Solution {
// public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> sum;
        for (int i = 0; i<nums.size(); ++i)
        {
            //if (i == (nums.size()-1)) return
            for (int j = 0; j<nums.size(); ++j)
            {
                if ((i == j)&&(j < nums.size()))
                    {
                        ++j;
                    }

                if (nums[i] + nums[j] == target)
                    {
                        sum.push_back(i);
                        sum.push_back(j);
                        return sum;
                    }

            }

        }
        sum.push_back(-1);
        return sum;
    }
// };

int main(){
  vector<int> number = {1,2,3,4};
  vector<int> printOut;
  int target = 4;
  printOut = twoSum(number, target);
  cout<<"The two sum for target will be "<<number[printOut[0]]<<" and "<<number[printOut[1]]<<endl;
}
