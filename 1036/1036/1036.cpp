#include <iostream>
using namespace std;

int main()
{
	int n;
	char c;
	cin >> n >> c;
	int row = n*1.0 / 2 + 0.5;
	for (int i = 0; i < row; i++)
	{
		if (i == 0 || i == row - 1)
		{
			for (int j = 0; j < n; j++)
				cout << c;
			cout << endl;
		}
		else
		{
			cout << c;

			for (int j = 0; j < n - 2; j++)
			{
				cout << " ";
			}
			cout << c << endl;
		}
	}
	system("pause");
	return 0;
}