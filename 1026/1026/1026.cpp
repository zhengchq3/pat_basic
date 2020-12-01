#include <iostream>
using namespace std;

#include <cmath>

int main()
{
	int c1, c2;
	cin >> c1 >> c2;
	//int res = round((c2 - c1)*1.0 / 100);
	int res = (c2 - c1)*1.0 / 100+0.5;
	int hour = res / 3600;
	res %= 3600;
	int minute = res / 60;
	res %= 60;
	printf("%02d:%02d:%02d\n", hour, minute, res);
	system("pause");

	return 0;
}