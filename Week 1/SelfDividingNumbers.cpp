class Solution {
public:
vector<int> selfDividingNumbers(int left, int right) {


    int temp; //I don't want "left" altered, so I'm gonna use this temp to play with numbers
    int digit; //This will be the last digit of a number, used to check for divisibility
    bool remainder; //Will answer the question "Does left/temp give a remainder; 0 is No, >=1 is Yes
    //bool aNil;      //Will check if there was a zero (nil) found in our number

    vector<int> selfDivInts; //Holds all numbers that are self dividing

    for (;left<=right;++left) {
          temp = left;

          while (temp%10){                 //This checks if our number has a zero...
                                           //...and it checks if we've divided through our number
              digit = temp%10;             //This gives me the last digit in my number
              remainder = left%digit;      //Here I check if there's a remainder
              if (remainder) temp = 0;     //If there's a remainder, we jump out of the while loop
              temp /= 10;                  //If there is no remainder, we move on to the next digit, from right to left
            }

          if ((!remainder) && (!(temp/10))) selfDivInts.push_back(left);
        // If there's no remainder and no zero numbers doesn't have a zero in it, we can push our number into the Self Divide Ints vector
      }

    return selfDivInts;

   }
};


//Time Complexity = O(n^2) becuase of the for and while loop
//Space Complexity = O(n)
