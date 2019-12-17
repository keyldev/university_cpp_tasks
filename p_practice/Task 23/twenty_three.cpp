#include <iostream>
using namespace std;
bool isPalindrome(string &word)
{
	for (size_t i = 0; i < word.length() / 2; ++i) {
		if (tolower(word[i]) != tolower(word[word.length() - i - 1]))
			return false;
	}

	return true;
}
int main(){
string word;
getline(cin, word);
if (isPalindrome(word)) cout << word << " является палиндромом" << endl;
else cout << word << " не является палиндромом!";
return 0;
}