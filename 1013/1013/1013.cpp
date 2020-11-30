#include <iostream>
using namespace std;
#include <cmath>
#include <vector>

bool isPrime(int n)
{
	if (n <= 1)
		return false;
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
	for (int i = 3; i <= (int)sqrt(n); i += 2)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int m, n;
	cin >> m >> n;
	vector<int> res;
	res.push_back(2);
	int i = 3;
	while (res.size() < n)
	{
		if (isPrime(i))
			res.push_back(i);
		i += 2;
	}
	int count = 0;
	for (int j = m - 1; j < n; j++)
	{
		cout << res[j];
		count++;
		if (count % 10 == 0)
			cout << endl;
		else if (j!=n-1)
			cout << " ";
	}
	system("pause");
	return 0;
}