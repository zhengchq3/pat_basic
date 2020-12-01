#include <iostream>
using namespace std;

#include<vector>

int main()
{
	int a, b, d;
	cin >> a >> b >> d;
	a += b;
	vector<int> res;
	while (a != 0)
	{
		res.push_back(a%d);
		a /= d;
	}
	for (int i = res.size() - 1; i >= 0; i--)
	{
		cout << res[i];
	}
	if (res.empty())
		cout << "0";
	cout << endl;
	system("pause");
	return 0;
}