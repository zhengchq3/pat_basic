#include <iostream>
using namespace std;

int main()
{
	int n, d;
	double e;
	cin >> n >> e >> d;
	int res1 = 0, res2 = 0;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		int count = 0;
		for (int j = 0; j < k; j++)
		{
			double t;
			cin >> t;
			if (t < e)
			{
				count++;
			}
		}
		if (count>k/2)
		{
			res1++;
			if (k > d)
			{
				res2++;
				res1--;
			}
				
		}
	}
	double res3 = 100*res1*1.0 / n;
	double res4=100*res2*1.0/n;
	printf("%.1f", res3);
	printf("%% ");
	printf("%.1f", res4);
	printf("%%");
	
	system("pause");
	return 0;
}