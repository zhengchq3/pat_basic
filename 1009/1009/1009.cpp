#include <iostream>
#include <string> 
using namespace std;

#include <vector>
#include <algorithm>
#include <stack>
int main()
{
	/*string str;
	getline(cin, str);
	vector<string> res;
	int i = 0, j = 0;
	for (; i < str.length(); i++)
	{
		if (i == str.length() - 1)
		{
			res.push_back(str.substr(j, i - j + 1));
		}
		else if (str[i] == ' ')
		{
			res.push_back(str.substr(j, i - j));
			j = i + 1;
		}
	}
	reverse(res.begin(), res.end());
	for (int i = 0; i < res.size(); i++)
	{
		if (i != res.size() - 1)
			cout << res[i] << " ";
		else
			cout << res[i] << endl;
	}*/
	stack<string> sta;
	string str;
	while (cin >> str)
	{
		sta.push(str);
	}
	while (!sta.empty())
	{
		cout << sta.top() << " ";
		sta.pop();
	}
	system("pause");
	return 0;
}