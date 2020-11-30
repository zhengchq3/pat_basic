#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int n;
	cin >> n;
	vector<int> n1(4, 0);
	int index = 0;
	while (n != 0)
	{
		int t = n % 10;
		if (t != 0)
		{
			n1[index] = t;
			index++;
		}
		n /= 10;
	}
	int res = 0;
	while (true)
	{
		if (n1[0] == n1[1] && n1[1] == n1[2] && n1[2] == n1[3])
		{ 
			cout << n1[0] << n1[1] << n1[2] << n1[3] << " - ";
			cout << n1[0] << n1[1] << n1[2] << n1[3] << " = 0000"<<endl;
			break;
		}
		sort(n1.begin(), n1.end(),cmp);
		cout << n1[0] << n1[1] << n1[2] << n1[3] << " - ";
		int itr = 1;
		for (int i = 3; i >= 0; i--)
		{
			res += itr*n1[i];
			itr *= 10;
		}
		sort(n1.begin(), n1.end());
		cout << n1[0] << n1[1] << n1[2] << n1[3] << " = ";
		itr = 1;
		for (int i = 3; i >= 0; i--)
		{
			res -= itr*n1[i];
			itr *= 10;
		}
		printf("%04d\n", res);
		if (res == 6174)
			break;
		vector<int> temp(4, 0);
		index = 0;
		while (res != 0)
		{
			int t = res % 10;
			if (t != 0)
			{
				temp[index] = t;
				index++;
			}
			res /= 10;
		}
		n1 = temp;
	}
	system("pause");
	return 0;
}