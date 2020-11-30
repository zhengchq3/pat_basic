#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int b = 0, s = 0, g = 0;
	b = n / 100;
	if (n >= 100)
		n = n % 100;
	s = n / 10;
	if (n >= 10)
		n = n % 10;
	g = n;
	for (int i = 0; i < b; i++)
	{
		cout << "B";
	}
	for (int i = 0; i < s; i++)
	{
		cout << "S";
	}
	for (int i = 1; i <= g; i++)
	{
		cout << i;
	}
	cout << endl;
	system("pause");
	return 0;
}