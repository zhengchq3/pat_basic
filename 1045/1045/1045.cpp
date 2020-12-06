#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
	int n;
	cin >> n;
	vector<int> a(n),b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a.begin(), a.end());
	vector<int> res;
	if (a[0] == b[0])
		res.push_back(a[0]);
	int max = b[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] == b[i] && b[i]>max)
		{
			res.push_back(b[i]);
		}
		if (b[i] > max)
			max = b[i];
	}
	cout << res.size() << endl;
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i];
		if (i != res.size() - 1)
			cout << " ";
	}
	if (res.empty())
		cout << endl;
	system("pause");
	return 0;
}