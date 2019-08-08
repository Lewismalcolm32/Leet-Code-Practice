//#include <map>
#include <vector>
#include <algorithm>
using namespace std; 

class Solution {
public:
	int findContentChildren(vector<int>& g, vector<int>& s) {
		int satisfied = 0;
		//map<int, int> check; 
		sort(g.begin(), g.end());
		sort(s.begin(), s.end());
		for (int i = 0; i < g.size(); ++i) {
			for (int j = 0; j < s.size(); ++j) {
				if (s[j] >= g[i]) {
					//if (!check[])
					satisfied++;
					s[j] = -1;
					j = s.size() - 1;
				}
			}
		}
		return satisfied;
	}
};

// include <map>
// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//         int satisfied = 0; 
//         map<int, int> contentKids;

//         for (int i = 0; i<g.size()-1; ++i)
//         {
//             for (int j = 0; j<s.size()-1; ++j)
//                 {
//                     if (g[i] <= s[j]) 
//                         {
//                             if (!(contentKids[g[i]]))
//                                 {

//                                 }
//                         }
//                 }
//         }
//         return satisfied;
//     }
// };