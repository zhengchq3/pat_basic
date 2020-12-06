#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int c1 = 0, c2 = 0;
	int j1, j2, y1, y2;
	for (int i = 0; i < n; i++)
	{
		cin >> j1 >> j2 >> y1 >> y2;
		if (j2 != y2)
		{
			if ((j1 + y1) == j2)
			{
				c2++;
			}
			else if ((j1 + y1) == y2)
			{
				c1++;
			}
		}
	}
	cout << c1 << " " << c2;
	return 0;
}