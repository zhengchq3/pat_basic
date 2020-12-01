#include <iostream>
using namespace std;
#include <string>
int hash1[10] = { 0 };
int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		hash1[s[i] - '0']++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (hash1[i] != 0)
		{
			cout << i << ":" << hash1[i] << endl;
		}
	}
	return 0;
}