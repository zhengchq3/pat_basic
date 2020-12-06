#include <iostream>
using namespace std;

#include <vector>

int main()
{
	int n;
	cin >> n;
	vector<double> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	long double res=0;
	int itr = n;
	for (int i = 1; i <= n; i++)
	{
		res += v[i-1] * i*itr;
		itr--;
		
	}
	printf("%.2f", res);
	system("pause");
	return 0;
}