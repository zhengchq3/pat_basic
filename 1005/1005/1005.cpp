#include <iostream>
#include <vector>
#include <map>
using namespace std;
#include<algorithm>

bool compare(int n1, int n2)
{
	return n1 > n2;
}
int main()
{
	int n;
	cin >> n;
	vector<int> nums;
	map<int, int> hash;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		nums.push_back(temp);
	}
	for (int i = 0; i < nums.size(); i++)
	{
		temp = nums[i];
		if (hash[temp] == 1)
			continue;
		while( temp!= 1)
		{
			if (temp == 1)
				break;
			if (temp % 2 == 0)
			{
				temp = temp / 2;
				hash[temp] = 1;
			}
			else
			{
				temp = (3 * temp + 1) / 2;
				hash[temp] = 1;
			}
		}
	}
	vector<int> res;
	for (int i = 0; i < nums.size(); i++)
	{
		if (hash[nums[i]] == 0)
		{
			res.push_back(nums[i]);
		}
	}
	sort(res.begin(), res.end(),compare);
	for (int i = 0; i < res.size(); i++)
	{
		if (i != res.size() - 1)
			cout << res[i] << " ";
		else
			cout << res[i] << endl;
	}
	system("pause");
	return 0;
}