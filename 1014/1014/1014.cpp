#include <iostream>
using namespace std;
#include <string>

int main()
{
	string str1, str2, str3, str4;
	cin >> str1 >> str2 >> str3 >> str4;
	int len = str1.length() < str2.length() ? str1.length() : str2.length();
	int index = 0;
	for (int i = 0; i < len; i++)
	{
		if (str1[i] == str2[i] && str1[i] >= 'A'&&str2[i] <= 'G')
		{
			index = i;
			break;
		}
	}
	string week[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	cout << week[str1[index] - 'A'] << " ";

	for (int i = index + 1; i < len; i++)
	{
		if (str1[i] == str2[i])
		{
			if (str1[i] >= '0'&&str1[i] <= '9')
			{
				printf("%02d:",str1[i]-'0');
				break;
			}
			else if (str1[i] >= 'A'&&str1[i] <= 'N')
			{
				int temp = str1[i] - 'A' + 10;
				cout << temp << ":";
				break;
			}
			
		}
	}

	len = str3.length() < str4.length() ? str3.length() : str4.length();
	for (int i = 0; i < len; i++)
	{
		if (str3[i] == str4[i])
		{
			if (str3[i] <= 'z'&&str3[i] >= 'a')
			{
				printf("%02d\n", i);
				break;
			}
			else if (str3[i] <= 'Z'&&str3[i] >= 'A')
			{
				printf("%02d\n", i);
				break;
			}
		}
	}
	system("pause");
	return 0;
}