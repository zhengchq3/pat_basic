#include <iostream>
using namespace std;

#include <string>
#include <sstream>
bool judge(string s)
{
	int minus = 0,point=0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '-'||s[i]=='+')
		{
			minus++;
		}
		else if (s[i] == '.')
		{
			point++;
		}
	}
	if (s.length() == 1 && minus == 1)
		return false;
	if (s.length() == 1 && point == 1)
		return false;
	if (minus > 1 || point > 1)
		return false;
	if (point == 1)
	{
		int index=0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '.')
			{
				index = i;
			}
		}
		if (index < s.length() - 3)
			return false;
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= '0'&&s[i] <= '9')
		{

		}
		else if (s[i] == '.' || s[i] == '-' || s[i] == '+')
		{

		}
		else
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	int k=0;
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (!judge(s))
		{
			cout << "ERROR: " << s << " is not a legal number" << endl;
		}
		else
		{
			stringstream ss;
			ss << s;
			double temp;
			ss >> temp;
			if (temp >= -1000 && temp <= 1000)
			{
				k++;
				sum += temp;
				//cout << temp << endl;
			}
			else
			{
				cout << "ERROR: " << s << " is not a legal number" << endl;
			}
		}
	}
	if (k == 0)
	{
		cout << "The average of 0 numbers is Undefined";
	}
	else if (k == 1)
	{
		printf("The average of 1 number is %.2f", sum);
	}
	else
	{
		sum = sum / k;
		printf("The average of %d numbers is %.2f",k, sum);
	}
	system("pause");
	return 0;
}