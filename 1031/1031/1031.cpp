#include <iostream>
using namespace std;

#include <string>
int weight[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
int m[11] = { 1, 0, 10, 9, 8, 7, 6, 5, 4, 3,2 };
bool isTrue(string str)
{
	int sum = 0;
	for (int i = 0; i < 17; i++)
	{
		if (str[i] >= '0'&&str[i] <= '9')
		{
			sum += weight[i] * (str[i] - '0');
		}
		else
		{
			return false;
		}
	}
	sum %= 11;
	int temp = (str[17] == 'X') ? 10 : (str[17] - '0');
	if (m[sum] != temp)
		return false;
	return true;
}
int main()
{
	int n;
	cin >> n;
	
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		if (!isTrue(str))
		{
			flag = 1;
			cout << str << endl;
		}
	}
	if (flag == 0)
		cout << "All passed" << endl;
	system("pause");
	return 0;
}