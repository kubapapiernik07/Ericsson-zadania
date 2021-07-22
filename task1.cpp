#include <iostream>

using namespace std;

string check(char ch)
{
    string ans;

	if (ch >= 'A' && ch <= 'Z') ans = "upper";	// conditions based on ASCII

	else if (ch >= 'a' && ch <= 'z') ans = "lower";

    	else if (ch >= '0' && ch <= '9') ans = "digit";

	else ans = "other";

	return ans;
}

int main()
{
    char ch;
	cout << "Type character to verify: ";
	cin >> ch;
    cout << check(ch);
}
