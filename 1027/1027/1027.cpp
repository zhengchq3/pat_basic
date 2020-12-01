#include <iostream>
using namespace std;

int main()
{
	int sum;
	char c;
	cin >> sum >> c;
	if (sum == 1)
	{
		cout << c << endl;
		cout << "0" << endl;
	}
	else
	{
		sum--;
		int itr = 3;
		while (sum >= itr * 2)
		{
			sum -= itr * 2;
			itr += 2;
		}
		itr -= 2;
		for (int i = itr; i >= 1; i -= 2)
		{
			int t = (itr - i) / 2;
			for (int j = 0; j < t; j++)
			{
				cout << " ";
			}
			for (int j = 0; j < i; j++)
			{
				cout << c;
			}
			cout << endl;
		}
		for (int i = 3; i <= itr; i += 2)
		{
			int t = (itr - i) / 2;
			for (int j = 0; j < t; j++)
			{
				cout << " ";
			}
			for (int j = 0; j < i; j++)
			{
				cout << c;
			}
			cout << endl;
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}