#include <iostream>
using namespace std;

#include <string>

void judge(string str)
{
	bool flag = true;
	int p = 0, t = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'P')
			p++;
		else if (str[i] == 'T')
			t++;
		else if (str[i] == 'A')
		{

		}
		else
		{
			cout << "NO" << endl;
			return;
		}
	}
	if (p != 1 || t != 1)
	{
		cout << "NO" << endl;
		return;
	}
	int indexP=0, indexT=0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'P')
			indexP = i;
		if (str[i] == 'T')
			indexT = i;
	}
	if (indexT - indexP < 2)
	{
		cout << "NO" << endl;
		return;
	}
	int a = indexP, b = indexT - indexP - 1, c = str.length() - indexT - 1;
	if (c!=b*a)
	{
		
		cout << "NO" << endl;
		return;
	
	}
	cout << "YES" << endl;
	
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		judge(temp);
	}
	system("pause");
	return 0;
}