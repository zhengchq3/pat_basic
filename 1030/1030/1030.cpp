#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

int main()
{
	int n, p;
	cin >> n >> p;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		//cin >> v[i];
		scanf("%d", &v[i]);
	}
	sort(v.begin(), v.end());
	int len = 0;
	for (int i = 0; i < n; i++)
	{
		
		for (int j =i+len; j < n; j++)
		{
			long long temp = 1;
			temp *= v[i];
			temp *= p;
			if (v[j] <= temp)
			{
				if (j - i + 1 > len)
					len = j - i + 1;
			}
			else
				break;
		}
	}
	cout << len;
	system("pause");
	return 0;
}