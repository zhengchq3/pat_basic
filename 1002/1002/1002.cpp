#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
	string str;
	cin >> str;
	int sum=0;
	for (int i = 0; i < str.length(); i++)
	{
		sum += str[i] - '0';
	}
	string nums[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	vector<string> res;
	while (sum != 0)
	{
		int temp = sum % 10;
		res.push_back(nums[temp]);
		sum /= 10;
	}
	for (int i = 0; i < res.size(); i++)
	{
		if (i != res.size() - 1)
		{
			cout << res[res.size() - 1 - i] << " ";
		}
		else
		{
			cout << res[0] << endl;
		}
	}
	system("pause");
	return 0;
}