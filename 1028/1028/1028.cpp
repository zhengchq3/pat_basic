#include <iostream>
using namespace std;

#include <string>

int main()
{
	int n;
	cin >> n;
	int count = 0;
	string name1, name2;
	string y = "1814/09/06", o = "2014/09/06";
	for (int i = 0; i < n; i++)
	{
		string name, birth;
		cin >> name >> birth;
		if (birth >= "1814/09/06"&&birth <= "2014/09/06")
		{
			count++;
			if (birth < o)
			{
				o = birth;
				name1 = name;
			}
			if (birth > y)
			{
				y = birth;
				name2 = name;
			}
		}
	}
	if (count == 0)
		cout << "0" << endl;
	else
	{
		cout << count << " " << name1 << " " << name2 << endl;
	}
	system("pause");
	return 0;
}