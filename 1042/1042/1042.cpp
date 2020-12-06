#include <iostream>
using namespace std;

#include <string>
int main()
{
	int hash[26] = { 0 };
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'a'&&s[i] <= 'z')
		{
			hash[s[i] - 'a']++;
		}
		else if (s[i] >= 'A'&&s[i] <= 'Z')
		{
			hash[s[i] - 'A']++;
		}
	}
	int max = 0,t=0;
	for (int i = 0; i < 26; i++)
	{
		if (max < hash[i])
		{
			max = hash[i];
			t = i;
		}
			
	}
	char res = 'a' + t;
	cout << res<< " " << max;
	return 0;
}