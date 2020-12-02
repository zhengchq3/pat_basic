#include<iostream>
using namespace std;

#include<string>
int main()
{
	string a;
	cin >> a;
	int p = 0, t = 0;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == 'T')
			t++;
	}
	int sum = 0;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == 'A')
		{
			sum += p*t;
			sum %= 1000000007;
		}
		else if (a[i] == 'P')
		{
			p++;
		}
		else
		{
			t--;
		}
	}
	cout << sum;
	system("pause");
	return 0;
}