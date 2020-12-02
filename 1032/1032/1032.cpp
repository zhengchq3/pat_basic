#include <iostream>
using namespace std;

int main()
{
	int hash1[100001] = { 0 };
	int n;
	cin >> n;

	int s, g;
	int max1 = 0;
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> s >> g;
		hash1[s] += g;
		if (hash1[s] > max1)
		{
			max1 = hash1[s];
			res = s;
		}
	}
	cout << res <<" "<< max1 << endl;
	system("pause");
	return 0;
}