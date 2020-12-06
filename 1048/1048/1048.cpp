#include <iostream>
using namespace std;

#include<string>

int main()
{
	string a, b;
	cin >> a >> b;
	int i = 1;
	while (a.length() > b.length())
	{
		b = "0" + b;
	}
	char odd[13] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K' };
	while (i <= a.length() && i <= b.length())
	{
		if (i % 2 == 1)
		{
			int sum = a[a.length()-i] - '0' + b[b.length()-i] - '0';
			sum %= 13;
			b[b.length()-i]=odd[sum];
		}
		else
		{
			int t = b[b.length()-i] - a[a.length()-i];
			if (t < 0)
				t += 10;
			b[b.length()-i]= t+'0';
		}
		i++;
	}
	cout << b;
	system("pause");
	return 0;
}