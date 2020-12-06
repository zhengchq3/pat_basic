#include <iostream>
using namespace std;

#include<cmath>
int main()
{
	double r1, r2, p1, p2;
	cin >> r1 >> p1 >> r2 >> p2;
	double a = r1*r2*(cos(p1+p2));
	double b = r1*r2*(sin(p1+p2));
	if (a + 0.005 > 0 && a < 0)
		a = 0;
	if (b + 0.005 > 0 && b < 0)
		b = 0;
	if (b == 0)
	{
		printf("%.2f+0.00i", a);
	}
	else if (b > 0)
	{
		printf("%.2f+%.2fi", a, b);
	}
	else
	{
		printf("%.2f%.2fi", a, b);
	}
	system("pause");
	return 0;
}