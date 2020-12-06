#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int N;
	cin >> N;
	vector<int> num(N);
	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}
	sort(num.begin(), num.end(), cmp);
	
	int m, n;
	for (int i = (int)sqrt(N); i >=1; i--)
	{
		if (N%i == 0)
		{
			n = i;
			m = N / i;
			break;
		}
	}
	
	vector<vector<int> > table(m, vector<int>(n));
	int left = 0, right = n - 1, top = 0, bottom = m - 1;
	int index = 0;
	while (true)
	{
		for (int i = left; i <= right; i++)
		{
			table[top][i] = num[index++];
		}
		top++;
		if (top > bottom)
			break;
		for (int i = top; i <= bottom; i++)
		{
			table[i][right] = num[index++];
		}
		right--;
		if (left > right)
			break;
		for (int i = right; i >= left; i--)
		{
			table[bottom][i] = num[index++];
		}
		bottom--;
		if (top > bottom)
			break;
		for (int i = bottom; i >= top; i--)
		{
			table[i][left] = num[index++];
		}
		left++;
		if (left > right)
			break;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << table[i][j];
			if (j == n - 1)
				cout << endl;
			else
				cout << " ";
		}
	}
	system("pause");
	return 0;
}