#include <string>
#include <iostream>
#include <Vector>

using namespace std;

string reverseWords(string s) {

	string word;


	for (int i = s.size() - 1; i >= 0; i--) {
		if (s[i] == ' ') {
			if ((i != s.size() - 1) && (s[i + 1] != ' ')) { word += ' '; }
			//continue;
		}
		if (s[i] != ' ') {
			int end = i;
			int begin = end;
			while ((end) && (s[end] != ' ')) { end--; }
			if (s[end] == ' ') { end++; }
			int start = end;
			while ((end <= i)) {
				word += s[end];
				end++;
			}
			i = start;
		}



	}

	if (word[word.size() - 1] == ' ') word.pop_back();
	if (word[0] == ' ') word.erase(word.begin());

	cout << word << endl;

	return word;

}

int main()
{
	string word = "   one.   +two three?   ~four   !five- ";
	//string word = "Seven Deadly Sins"
	//string word = "   hello world!  "
	reverseWords(word);
}