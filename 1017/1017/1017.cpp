#include <iostream>
using namespace std;
#include <string>
int main()
{
	string num;
	int b;
	cin >> num >> b;
	int c = 0;
	int a;
	int count = 0;
	for (int i = 0; i < num.length(); i++)
	{
		a = num[i] - '0';
		int temp = c * 10 + a;
		
		int res = temp / b;
		if (i == 0 && res == 0)
		{

		}
		else{
			cout << res;
			count++;
		}
			
		c = temp % b;
	}
	if (count == 0)
		cout << "0";
	cout << " " << c << endl;
	system("pause");
	return 0;
}