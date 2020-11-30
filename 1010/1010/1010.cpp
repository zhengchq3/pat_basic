#include <iostream>
using namespace std;
#include <vector>
int main()
{
	int a, b;
	vector<int> res;
	while (cin >> a >> b)
	{
		if (b != 0)
		{
			res.push_back(a*b);
			res.push_back(b - 1);
		}
	}
	for (int i = 0; i < res.size(); i++)
	{
		if (i != res.size() - 1)
			cout << res[i] << " ";
		else
			cout << res[i] << endl;
	}
	if (res.size() == 0)
		cout << "0 0" << endl;
	return 0;
}