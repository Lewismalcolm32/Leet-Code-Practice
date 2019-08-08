// Lemonade Challenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <map>

using namespace std;

//class Solution {
//public:
	bool lemonadeChange(vector<int>& bills) {
		if (!bills.size()) return true;
		//if (bills[0] > 5) return false;


		map<int, int> change;

		change[5] = 0;
		change[10] = 0;
		change[20] = 0;

		/*for (int i = 0; i < bills.size(); ++i)
		{
			++change[bills[i]];
		}*/




		for (int i = 0; i < bills.size(); i++)
		{
			if ((bills[i] == 5))
			{
				++change[5];
			}
			else if ((bills[i] == 10) && (change[5]))
			{
				++change[10];
				--change[5];
			}
			else if (bills[i] == 20)
			{
				if (change[10] && change[5])
				{
					++change[20];
					--change[10];
					--change[5];
				}
				else if (change[5] >= 3)
				{
					change[5] -= 3;
				}
				else return false;
			}

			else {
				//cout << "false" << endl;
				return false;
			}


		}

		//cout << "true" << endl;
		return true;



	}

//};


int main()
{
    //std::cout << "Hello World!\n"; 
	vector<int> bills = {5,5,10,10,20};
	cout << lemonadeChange(bills) << endl;
}

