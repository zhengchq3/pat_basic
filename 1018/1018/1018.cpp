#include <iostream>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	int count1 = 0, count2 = 0;//jia win,he
	int jiawin[3] = { 0 };//b,c,j
	int yiwin[3] = { 0 };
	for (int i = 0; i < n; i++)
	{
		char jia, yi;
		cin >> jia >> yi;
		if (jia == yi)
		{
			count2++;
		}
		else if (jia == 'C'&&yi == 'J')
		{
			count1++;
			jiawin[1]++;
		}
		else if (jia == 'J'&&yi == 'C')
		{
			yiwin[1]++;
		}
		else if (jia == 'J'&&yi == 'B')
		{
			count1++;
			jiawin[2]++;
		}
		else if (jia == 'B'&&yi == 'J')
		{
			yiwin[2]++;
		}
		else if (jia == 'B'&&yi == 'C')
		{
			count1++;
			jiawin[0]++;
		}
		else if (jia == 'C'&&yi == 'B')
		{
			yiwin[0]++;
		}
	}
	cout << count1 << " " << count2 << " " << n - count1 - count2<<endl;
	cout << n - count1 - count2 <<" "<< count2 <<" "<< count1<<endl;
	int max = 0;
	for (int i = 0; i < 3; i++)
	{
		if (jiawin[i] > max)
			max = jiawin[i];
	}
	for (int i = 0; i < 3; i++)
	{
		if (jiawin[i] == max)
		{
			if (i == 0)
				cout << 'B';
			else if (i == 1)
				cout << "C";
			else
				cout << "J";
			cout << " ";
			break;
		}
	}
	max = 0;
	for (int i = 0; i < 3; i++)
	{
		if (yiwin[i] > max)
			max = yiwin[i];
	}
	for (int i = 0; i < 3; i++)
	{
		if (yiwin[i] == max)
		{
			if (i == 0)
				cout << 'B';
			else if (i == 1)
				cout << "C";
			else
				cout << "J";
			cout <<endl;
			break;
		}
	}
	system("pause");
	return 0;
}