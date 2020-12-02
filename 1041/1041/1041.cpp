#include <iostream>
using namespace std;
#include <string>
#include <map>
int main()
{
	int n;
	cin >> n;
	int hash1[1001] = { 0 };
	map<int, string> hash2;
	for (int i = 0; i < n; i++)
	{
		string a;
		int b, c;
		cin >> a >> b >> c;
		hash1[b] = c;
		hash2[b] = a;
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int t;
		cin >> t;
		cout << hash2[t] << " " << hash1[t] << endl;
	}
	system("pause");
	return 0;
}