#include <iostream>
using namespace std;
#include <cmath>
bool isPrime(int n)
{
	if (n <= 1)
		return false;
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
	int temp = sqrt(n);
	for (int i = 3; i <= (int)sqrt(n); i += 2)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	int count = 0;
	for (int i = 3; i < n;i++)
	{
		if (isPrime(i) && i + 2 <= n&&isPrime(i + 2))
			count++;
	}
	cout << count << endl;
	system("pause");
	return 0;
}