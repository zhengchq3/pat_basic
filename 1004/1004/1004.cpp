#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string name1="", num1="",name2="",num2="";
	int max = -1,min=101;
	string name, num;
	int grade;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> num >> grade;
		if (grade < min)
		{
			name2 = name;
			num2 = num;
			min = grade;
		}
		if (grade > max)
		{
			name1 = name;
			num1 = num;
			max = grade;
		}
	}
	cout << name1 << " " << num1 << endl;
	cout << name2 << " " << num2 << endl;
	system("pause");
	return 0;
}