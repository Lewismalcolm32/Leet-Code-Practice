class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        string num;



        for (int count = 1; count<=n; count++)
        {
            if (count%3 == 0) {
                num = "Fizz";
                if (count%5 == 0) num+="Buzz";
                result.push_back(num);

            }
            else if (count%5 == 0) {
                num = "Buzz";
                result.push_back(num);
            }
            else
            {
                num = to_string(count);
                result.push_back(num);
            }
        }

        return result;
    }


};

//Time is O(n) and Space O(1)
