#include <iostream>
using namespace std;

#include <string>
#include <sstream>
#include <vector>
int main()
{
	string str;
	cin >> str;
	if (str[0] == '-')
		cout << "-";
	int index=0;
	if (str[0] == '+' || str[0] == '-')
	{
		index++;
	}
	string nums;
	for (int i = index; i < str.length(); i++)
	{
		if (str[i] == 'E')
		{
			nums = str.substr(index, i - index);
			index = i+1;
			break;
		}
	}
	int z = 0;
	int flag1 = 1;
	if (str[index] == '-')
		flag1 = -1;
	string temp = str.substr(index + 1, str.length() - index - 1);
	//cout << temp << endl;
	stringstream ss;
	ss << temp;
	ss >> z;
	if (flag1 == -1)
	{
		cout << "0.";
		z--;
		for (int i = 0; i < z; i++)
		{
			cout << "0";
		}
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] != '.')
				cout << nums[i];
		}
	}
	else
	{
		int t = nums.length() - 2;
		if (t == z)
		{
			for (int i = 0; i < nums.size(); i++)
			{
				if (nums[i] != '.')
					cout << nums[i];
			}
		}else if (t < z)
		{
			for (int i = 0; i < nums.size(); i++)
			{
				if (nums[i] != '.')
					cout << nums[i];
			}
			for (int i = 0; i < z - t; i++)
			{
				cout << "0";
			}
		}
		else
		{
			vector<char> res;
			for (int i = 0; i < nums.size(); i++)
			{
				if (nums[i] != '.')
					res.push_back(nums[i]);
			}
			//z++;
			for (int i = 0; i < res.size(); i++)
			{
				cout << res[i];
				if (i == z)
					cout << '.';
			}
		}
	}
	system("pause");
	return 0;
}