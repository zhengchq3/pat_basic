#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
	int n, a[100] = { 0 }, b[100] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	int index = 0;
	for (int i = 1; i < n; i++)
	{
		if (b[i - 1] > b[i])
		{
			index = i;
			break;
		}
	}
	int t = index;
	while (index < n)
	{
		if (a[index] == b[index])
		{
			index++;
		}
		else
		{
			break;
		}
	}
	if (index == n)
	{
		cout << "Insertion Sort" << endl;
		sort(b, b + t + 1);
		for (int i = 0; i < n; i++)
		{
			cout << b[i];
			if (i != n - 1)
				cout << " ";
		}
	}
	else
	{
		cout << "Merge Sort" << endl;
		int k = 1;
		int flag = 1;
		while (flag)
		{
			flag = 0;
			for (int i = 0; i < n; i++)
			{
				if (a[i] != b[i])
					flag = 1;
			}
			int i;
			k *= 2;
			for (i = 0; i < n / k; i++)
			{
				sort(a + i*k, a + (i +1)* k);
			}
			sort(a + i *k, a + n);
		}
		for (int i = 0; i < n; i++)
		{
			cout << a[i];
			if (i != n - 1)
				cout << " ";
		}
	}
	system("pause");
	return 0;
}