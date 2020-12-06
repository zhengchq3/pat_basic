#include <iostream>
using namespace std;

#include <vector>
int main()
{
	int n;
	cin >> n;
	if (n == 1)
	{
		cout << "1";
		return 0;
	}
	int min = n;
	int a = 0, b = 1;
	vector<int> res;
	res.push_back(0);
	
	while (b < n)
	{
		int c = a + b;
		a = b;
		b = c;
		if (abs(n - b) < min)
			min = abs(n - b);
		//cout << b << endl;
		res.push_back(b);
	}
	for (int i = 0; i < res.size(); i++)
	{
		if (abs(res[i] - n) == min)
		{
			cout << res[i];
			break;
		}
	}
	system("pause");
}