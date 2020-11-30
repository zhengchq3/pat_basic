#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
	int n;
	cin >> n;
	int a1 = 0,a2=0,a3=0;
	int flag = 0;
	double a4=0;
	int c1=0,c2=0,c3=0,c4=0,c5=0;
	int a5 = 0;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		if (t % 10 == 0)
		{
			a1 += t;
			c1++;
		}
			
		if (t % 5 == 1)
		{
			c2++;
			if (flag % 2 == 0)
				a2 += t;
			else
				a2 -= t;
			flag++;
		}
		if (t % 5 == 2)
		{
			c3++;a3++;
		}
			
		if (t % 5 == 3)
		{
			a4 += t;
			c4++;
		}
		if (t % 5 == 4)
		{
			c5++;
			if (t>a5)
				a5 = t;
		}
	}

	if (c1 == 0)
		cout << "N " ;
	else
		cout << a1 << " ";
	if (c2 == 0)
		cout << "N ";
	else
		cout << a2 << " ";
	if (c3 == 0)
		cout << "N ";
	else
		cout << a3 << " ";
	if (c4 == 0)
		cout << "N ";
	else
	{
		a4 = a4 / c4;
		cout << setiosflags(ios::fixed);
		cout << setprecision(1) << a4 << " ";
	}
	if (c5 == 0)
		cout << "N" << endl;
	else
		cout << a5 <<endl;
	return 0;
}