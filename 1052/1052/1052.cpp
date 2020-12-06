#include <iostream>
using namespace std;

#include <string>
#include <vector>
int main()
{
	string s1, s2, s3;
	getline(cin, s1);
	getline(cin, s2);
	getline(cin, s3);
	vector<string> hand,eye,mouth;
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] == '[')
		{
			int j;
			for (j = i + 1; j < s1.length(); j++)
			{
				if (s1[j] == ']')
					break;
			}
			string t = s1.substr(i + 1, j - i - 1);
			hand.push_back(t);
			i = j;
		}
	}
	
	for (int i = 0; i < s2.length(); i++)
	{
		if (s2[i] == '[')
		{
			int j;
			for (j = i + 1; j < s2.length(); j++)
			{
				if (s2[j] == ']')
					break;
			}
			string t = s2.substr(i + 1, j - i - 1);
			eye.push_back(t);
			i = j;
		}
	}

	for (int i = 0; i < s3.length(); i++)
	{
		if (s3[i] == '[')
		{
			int j;
			for (j = i + 1; j < s3.length(); j++)
			{
				if (s3[j] == ']')
					break;
			}
			string t = s3.substr(i + 1, j - i - 1);
			mouth.push_back(t);
			i = j;
		}
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		if (a > hand.size() || e>hand.size() || b > eye.size() || d > eye.size() || c > mouth.size())
		{
			cout << "Are you kidding me? @\\/@" << endl;
		}
		else
		{
			cout << hand[a - 1]<<"(" << eye[b - 1] << mouth[c - 1] << eye[d - 1]<<")" << hand[e - 1]<<endl;
		}
	}
	system("pause");
	return 0;
}