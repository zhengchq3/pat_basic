#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int hash[1001] = { 0 };
	int res = 0, max = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		scanf("%d-%d %d", &a, &b, &c);
		hash[a] += c;
		if (hash[a] > max)
		{
			max = hash[a];
			res = a;
		}
	}
	cout << res << " " << max;
	system("pause");
	return 0;
}