#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int hash[101] = { 0 };
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		hash[t]++;
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int t;
		cin >> t;
		cout << hash[t];
		if (i != m - 1)
			cout << " ";
	}
	return 0;
}