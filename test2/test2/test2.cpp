#include <iostream>
using namespace std;

#include <map>
#include <vector>

int main()
{
	map<int, int> hash;
	int n;
	cin >> n;
	vector<int> res;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		if (t % 2 == 1)
		{
			if (hash[t] == 0)
			{
				hash[t] = 1;
				res.push_back(t);
			}
			else
			{
				hash[t]++;
			}
		}
	}
	for (int i = 0; i < res.size(); i++)
	{
		if (hash[res[i]] % 2 == 1)
		{
			cout << res[i];
			break;
		}
	}
	system("pause");
	return 0;
}