#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

int main()
{
	int first, n, k;
	cin >> first >> n >> k;
	int data[100000] = { 0 }, next[100000] = { 0 };
	int list[100000] = { 0 };
	for (int i = 0; i < n; i++)
	{
		int a, d, ne;
		cin >> a >> d >> ne;
		data[a] = d;
		next[a] = ne;
	}
	int count = 0;
	int i = 0;
	while (first != -1)
	{
		list[i++] = first;
		first = next[first];
		count++;
	}
	for(i = 0; i + k - 1 < count; i += k)
	{
		reverse(list + i, list + i + k);
	}
	for (int i = 0; i < count - 1; i++)
	{
		printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
	}
	printf("%05d %d -1", list[count - 1], data[list[count - 1]]);
	system("pause");
	return 0;
}