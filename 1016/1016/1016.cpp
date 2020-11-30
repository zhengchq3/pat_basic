#include <iostream>
using namespace std;
#include <string>

int main()
{
	string a, b;
	int da, db;
	cin >> a >> da >> b >> db;
	int count1 = 0, count2 = 0;
	for (int i = 0; i < a.length(); i++)
	{
		if ((a[i] - '0') == da)
		{
			count1 = count1 * 10 + da;
		}
	}
	for (int i = 0; i < b.length(); i++)
	{
		if ((b[i] - '0') == db)
		{
			count2 = count2 * 10 + db;
		}
	}
	
	cout << count1+count2 << endl;
	system("pause");
	return 0;
}