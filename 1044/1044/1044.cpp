#include <iostream>
using namespace std;

#include <string>
#include <sstream>
#include <map>
int main()
{
	int n;
	cin >> n;
	string high[12] = { "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
	string low[12] = { "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
	map<string, int> hash;
	hash["tret"] = 0;
	for (int i = 0; i < 12; i++)
	{
		hash[low[i]] = i + 1;
	}
	for (int i = 0; i < 12; i++)
	{
		hash[high[i]] = (i + 1)*13;
	}
	string s;
	getline(cin, s);
	for (int i = 0; i < n; i++)
	{
		getline(cin, s);
		if (s[0] >= '0'&&s[0] <= '9')
		{
			stringstream ss;
			ss << s;
			int t;
			ss >> t;
			int k = t / 13;
			t %= 13;
			
			if (k == 0&&t==0)
			{
				cout << "tret"<<endl;
			}
			else if (k > 0 && t == 0)
			{
				cout << high[k - 1]<<endl;
			}
			else if (k == 0&&t > 0)
			{
				cout << low[t - 1]<<endl;
			}
			else
			{
				cout << high[k - 1] <<" "<< low[t - 1]<<endl;
			}
		}
		else
		{
			if (s.length() == 3)
			{
				cout << hash[s] << endl;
			}
			else
			{
				string s1 = s.substr(0, 3);
				string s2 = s.substr(4, 3);
				int res = hash[s1] + hash[s2];
				cout << res << endl;
			}
		}
	}
	system("pause");
	return 0;
}