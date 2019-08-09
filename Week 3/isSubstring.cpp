#include <string>
using namespace std;

class Solution {
public:
	bool isSubsequence(string s, string t) {

		//         for (int i = 0; i<t.size(); ++i){
		//             for (int j = 0; j<s.size(); ++j){


		//             }
		//         }

		int shortString = 0;
		int longString = 0;
		int check = 0;
		//int indexCheck = 0;


		while (shortString < s.size() && longString < t.size()) {
			if (s[shortString] == t[longString]) {
				//if (!(indexCheck <= longString)) return false;
				//indexCheck = longString;
				check++;
				shortString++;
			}
			// if (check == s.size()) return true;

			longString++;
		}

		if (check != s.size()) return false;
		return true;

	}
};