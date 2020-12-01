#include <iostream>
using namespace std;

#include <string>

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] >= 'a'&&str1[i] <= 'z')
		{
			str1[i] += 'A' - 'a';
		}
	}
	for (int i = 0; i < str2.size(); i++)
	{
		if (str2[i] >= 'a'&&str2[i] <= 'z')
		{
			str2[i] += 'A' - 'a';
		}
	}
	int hash1[500] = { 0 };
	int j = 0;
	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] == str2[j])
		{
			j++;
		}
		else
		{
			if (hash1[str1[i]] == 0)
			{
				cout << str1[i];
				hash1[str1[i]]++;
			}
		}
	}
	system("pause");
	return 0;
}