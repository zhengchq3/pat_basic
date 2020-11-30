#include<iostream>
using namespace std;

#include <vector>

int main()
{
	int n, m;
	cin >> n >> m;
	m = m%n;
	vector<int> nums;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		nums.push_back(t);
	}
	vector<int> res;
	for (int i = 0; i < m; i++)
	{
		res.push_back(nums[n - m + i]);
	}
	for (int i = 0; i < n - m; i++)
	{
		res.push_back(nums[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			cout << res[i] << " ";
		}
		else
		{
			cout << res[i] << endl;
		}
	}
	system("pause");
	return 0;
}