#include <iostream>
using namespace std;

#include <string>

bool judge(string s)
{
	if (s.length() == 1)
		return true;
	
	int sum = s[0]-'0';
	for (int i = 1; i < s.length(); i++)
	{
		sum *= 10;
		sum += s[i] - '0';
		if (sum % (i + 1) != 0)
			return false;
	}
	return true;
}
int main()
{
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		string s;
		cin >> s;
		if (judge(s))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	system("pause");
	return 0;
}