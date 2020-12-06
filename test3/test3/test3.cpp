#include <iostream>
using namespace std;

#include <string>

void func1(string s,int d)
{
	int index = -1;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '.')
		{
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		if (d == 0)
		{
			cout << s << endl;
			return;
		}
		else
		{
			s += ".";
			for (int i = 0; i < d; i++)
			{
				s += "0";
			}
			cout << s<<endl;
			return;
		}
	}
	if (d == 0)
	{
		s = s.substr(0, index);
		cout << s << endl;
		return;
	}
	int len = s.length()-index-1;
	if (len == d)
	{
		cout << s << endl;
	}
	else if (len < d)
	{
		for (int i = 0; i < d - len; i++)
		{
			s += "0";
		}
		cout << s << endl;
	}
	else
	{
		int temp = s[index + d + 1] - '0';
		if (temp >= 5)
		{
			s[index + d]++;
			s = s.substr(0, index + d + 1);
		}
		else
		{
			s = s.substr(0, index + d + 1);
		}
		cout << s << endl;
	}
}

void func2(string s, int d)
{
	int index = -1;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '.')
		{
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		if (d == 0)
		{
			cout << s << endl;
			return;
		}
		else
		{
			s += ".";
			for (int i = 0; i < d; i++)
			{
				s += "0";
			}
			cout << s << endl;
			return;
		}
	}

	if (d == 0)
	{
		s = s.substr(0, index);
		cout << s << endl;
		return;
	}

	int len = s.length() - index - 1;
	if (len == d)
	{
		cout << s << endl;
	}
	else if (len < d)
	{
		for (int i = 0; i < d - len; i++)
		{
			s += "0";
		}
		cout << s << endl;
	}
	else
	{
		s = s.substr(0, index + d + 1);
		cout << s << endl;
	}
}

void func3(string s, int d)
{
	int index = -1;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '.')
		{
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		if (d == 0)
		{
			cout << s << endl;
			return;
		}
		else
		{
			s += ".";
			for (int i = 0; i < d; i++)
			{
				s += "0";
			}
			cout << s << endl;
			return;
		}
	}

	if (d == 0)
	{
		s = s.substr(0, index);
		cout << s << endl;
		return;
	}

	int len = s.length() - index - 1;
	if (len == d)
	{
		cout << s << endl;
	}
	else if (len < d)
	{
		for (int i = 0; i < d - len; i++)
		{
			s += "0";
		}
		cout << s << endl;
	}
	else
	{
		int temp = s[index + d + 1] - '0';
		if (temp > 5)
		{
			s[index + d]++;
			s = s.substr(0, index + d + 1);
		}
		else if (temp<5)
		{
			s = s.substr(0, index + d + 1);
		}
		else
		{
			int flag = 0;
			
			for (int i = index + d + 2; i < s.length(); i++)
			{
				if (s[i] != '0')
				{
					flag = 1;
				}
			}
			if (flag == 1)
			{
				s[index + d]++;
				s = s.substr(0, index + d + 1);
			}
			else
			{
				int t = s[index + d] - '0';
				if (t % 2 != 0)
				{
					s[index + d]++;
				}
				s = s.substr(0, index + d + 1);
			}
		}

		cout << s << endl;
	}
}

int main()
{
	int n, d;
	cin >> n >> d;
	for (int i = 0; i < n; i++)
	{
		int t;
		string s;
		cin >> t >> s;
		if (t == 1)
		{
			func1(s,d);
		}
		else if (t == 2)
		{
			func2(s,d);
		}
		else
		{
			func3(s,d);
		}
	}
	system("pause");
	return 0;
}