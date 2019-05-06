class Solution {
public:

    int isPowerOfTwo(int n)
    {
        if (n < 1) return false;
        double divide = (double)n;
       // float divide = (float)n;//Wow, lol, a double has a double percision floating type (64-bit), where a float is a single perscision floating type (32-bit), which lets some numbers get away with posing as a base 2. Wow, I didn't even think of that lol!
        int iDivide = n;

        // cout<<divide<<endl;
        // cout<<iDivide<<endl;
        // cout<<"----------"<<endl;
        for (;iDivide > 1;)
        {
            divide/=2.0;
            iDivide /= 2;

            // cout<<divide<<endl;
            // cout<<iDivide<<endl;

        }
        // cout<<"----------"<<endl;
        // cout<<divide<<endl;
        // cout<<iDivide<<endl;


        if (divide == iDivide)
        {
            return true;
        }
        else{
            return false;
        }

    }
};
