#include <iostream>
using namespace std;

int main()
{
	int gp, sp, kp, ga, sa, ka;
	scanf_s("%d.%d.%d", &gp, &sp, &kp);
	scanf_s("%d.%d.%d", &ga, &sa, &ka);
	if (ga > gp || (ga == gp&&sa > sp) || (ga == gp&&sa == sp&&ka >= kp))
	{
		if (kp>ka)
		{
			ka += 29;
			sa--;
		}
		if (sp > sa)
		{
			sa += 17;
			ga--;
		}
		printf("%d.%d.%d", ga - gp, sa - sp, ka - kp);

	}
	else
	{
		cout << "-";
		if (kp<ka)
		{
			kp += 29;
			sp--;
		}
		if (sp < sa)
		{
			sp += 17;
			gp--;
		}
		printf("%d.%d.%d", gp - ga, sp - sa, kp - ka);
	}
	system("pause");
	return 0;
}