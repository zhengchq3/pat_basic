#include <iostream>
using namespace std;

#include <string>
int main()
{
	string s;
	cin >> s;
	int hash[6] = { 0 };
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'P')
			hash[0]++;
		else if (s[i] == 'A')
			hash[1]++;
		else if (s[i] == 'T')
			hash[2]++;
		else if (s[i] == 'e')
			hash[3]++;
		else if (s[i] == 's')
			hash[4]++;
		else if (s[i] == 't')
			hash[5]++;
	}
	while ((hash[0] + hash[1] + hash[2] + hash[3] + hash[4] + hash[5]) != 0)
	{
		if (hash[0] > 0)
		{
			cout << "P";
			hash[0]--;
		}
		if (hash[1] > 0)
		{
			cout << "A";
			hash[1]--;
		}
		if (hash[2] > 0)
		{
			cout << "T";
			hash[2]--;
		}
		if (hash[3] > 0)
		{
			cout << "e";
			hash[3]--;
		}
		if (hash[4] > 0)
		{
			cout << "s";
			hash[4]--;
		}
		if (hash[5] > 0)
		{
			cout << "t";
			hash[5]--;
		}
	}
	system("pause");
	return 0;
}