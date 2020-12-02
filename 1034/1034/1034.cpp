#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
	if (a <= 0 || b <= 0)
		return 0;
	if (a%b == 0)
		return b;
	else
	{
		gcd(b, a%b);
	}
}

void func(long long a, long long b)
{
	if (a == 0)
	{
		cout << "0";
	}
	else
	{
		int flag = 0;
		if ((a < 0 && b>0) || (a > 0 && b < 0))
		{
			cout << "(-";
			flag = 1;
		}
		a = abs(a);
		b = abs(b);
		
		long long g = gcd(a, b);
		a = a/g;
		b = b/g;
		

		long long k = a / b;
		if (k != 0)
			cout << k ;
		a %= b;
		if (k != 0 && a != 0)
			cout << " ";
		if (a!=0)
			cout << a << "/" << b;


		if (flag==1)
		{
			cout << ")";
		}
	}
}

int main()
{
	long long a1, b1, a2, b2;
	scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
	
	func(a1, b1); cout << " + "; func(a2, b2); cout << " = "; func(a1*b2 + b1*a2, b1*b2); cout << endl;
	func(a1, b1); cout << " - "; func(a2, b2); cout << " = "; func(a1*b2 - b1*a2, b1*b2); cout << endl;
	func(a1, b1); cout << " * "; func(a2, b2); cout << " = "; func(a1*a2, b1*b2); cout << endl;
	func(a1, b1); cout << " / "; func(a2, b2);  cout << " = ";
	if (b1*a2 == 0)
		cout << "Inf" << endl;
	else
	{
		 func(a1*b2, b1*a2);
	}
		
	system("pause");
	return 0;
}