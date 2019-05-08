class Solution {
public:
    long int titleToNumber(string s) {


    unordered_map<char,int> letterToNumber;

    int sizeOfS = s.size();
    long int numberOfString = 0;
    //fill map with alphabet and associated value
    for (int i = 1; i<=26;++i) {
         char c = (i+64); //65 = 'A', 66 = 'B', etc.
        letterToNumber[c] = i;
    }


    for (int i = 0; i<s.size(); i++)
    {
       numberOfString += ((letterToNumber[s[i]])*(pow(26,((sizeOfS-1)-i))));
       cout<<numberOfString<<endl;
    }

     return   numberOfString;




        // unorder_map::iterator myNums;
        // for (myNums = columnNumber.begin();
        //     myNums!= columnNumber.end();
        //     ++myNums)


    }
};
