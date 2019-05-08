class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0; i<s.size()/2;++i)
        {
            swap(s[i],s[(s.size()-1-i)]);

//             char a = s[i];
//             char b = s[(s.size()-1-i)];

//            s[i] = s[(s.size()-1-i)];
//            s[(s.size()-1-i)] = a;

        }
    }
};

//Time 0(n)
//Space 0(1) 
