#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
class student
{
public:
	int num;
	int grade1;
	int grade2;
};


bool cmp1(student a, student b)
{
	if ((a.grade1 + a.grade2) != (b.grade1 + b.grade2))
	{
		return (a.grade1 + a.grade2) > (b.grade1 + b.grade2);
	}
	else if (a.grade1 != b.grade1)
	{
		return a.grade1 > b.grade1;
	}else
	{
		return a.num < b.num;
	}
}
int main()
{
	int n, l, h;
	cin >> n >> l >> h;
	int count = 0;
	vector<student> s1, s2, s3, s4;

	for (int i = 0; i < n; i++)
	{
		int num, grade1, grade2;
		cin >> num >> grade1 >> grade2;
		if (grade1 >= l&&grade2 >= l)
		{
			count++;
			student temp;
			temp.num = num;
			temp.grade1 = grade1;
			temp.grade2 = grade2;
			if (grade1 >= h&&grade2 >= h)
			{
				s1.push_back(temp);
			}
			else if (grade1 >= h)
			{
				s2.push_back(temp);
			}
			else if (grade1 < h&&grade2 < h&&grade1 >= grade2)
			{
				s3.push_back(temp);
			}
			else
			{
				s4.push_back(temp);
			}
		}
	}
	cout << count << endl;
	sort(s1.begin(), s1.end(), cmp1);
	for (int i = 0; i < s1.size(); i++)
	{
		cout << s1[i].num << " " << s1[i].grade1 << " " << s1[i].grade2 << endl;
	}
	sort(s2.begin(), s2.end(), cmp1);
	for (int i = 0; i < s2.size(); i++)
	{
		cout << s2[i].num << " " << s2[i].grade1 << " " << s2[i].grade2 << endl;
	}
	sort(s3.begin(), s3.end(), cmp1);
	for (int i = 0; i < s3.size(); i++)
	{
		cout << s3[i].num << " " << s3[i].grade1 << " " << s3[i].grade2 << endl;
	}
	sort(s4.begin(), s4.end(), cmp1);
	for (int i = 0; i < s4.size(); i++)
	{
		cout << s4[i].num << " " << s4[i].grade1 << " " << s4[i].grade2 << endl;
	}
	system("pause");
	return 0;
}