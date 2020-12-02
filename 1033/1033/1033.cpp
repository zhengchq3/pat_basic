#include <iostream>
using namespace std;

#include <string>
int main()
{
	int hash[300] = { 0 };
	string str1, str2;
	getline(cin, str1);
	cin  >> str2;
	
	for (int i = 0; i < str1.length(); i++)
	{
		if (str1[i] == '+')
		{
			for (int i = 'A'; i <= 'Z'; i++)
			{
				hash[i] = 1;
			}
		}
		else if (str1[i]>='A'&&str1[i]<='Z')
		{
			hash[str1[i]] = 1;
			hash[str1[i] - 'A' + 'a'] = 1;
		}
		else
		{
			hash[str1[i]] = 1;
		}
	}
	int flag = 0;
	for (int i = 0; i < str2.length(); i++)
	{
		if (hash[str2[i]] == 0)
		{
			cout << str2[i];
			flag++;
		}
	}
	if (flag == 0)
		cout << "" << endl;
	system("pause");
	return 0;
}