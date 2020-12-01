#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>
class moon
{
public:
	double stock;
	double price;
	double price1;
};

bool cmp(moon a, moon b)
{
	if (a.price1 != b.price1)
		return a.price1 > b.price1;
	else
		return a.stock > b.stock;
}
int main()
{
	int n, d;
	cin >> n >> d;
	vector<moon> moons;
	vector<double> stocks;
	vector<double> prices;
	for (int i = 0; i < n; i++)
	{
		double t;
		cin >> t;
		stocks.push_back(t);
	}
	for (int i = 0; i < n; i++)
	{
		double t;
		cin >> t;
		prices.push_back(t);
	}

	for (int i = 0; i < n; i++)
	{
		moon temp;
		temp.stock = stocks[i];
		temp.price = prices[i];
		double p = prices[i] * 1.0 / stocks[i];
		temp.price1 = p;
		moons.push_back(temp);
	}
	sort(moons.begin(), moons.end(), cmp);
	
	
	double res=0;
	for (int i = 0; i < n; i++)
	{
		if (moons[i].stock > d)
		{
			res += moons[i].price1*d;
			break;
		}
		else if (moons[i].stock == d)
		{
			res += moons[i].price;
			break;
		}
		else
		{
			res += moons[i].price;
			d -= moons[i].stock;
		}
	}
	printf("%.2lf", res);
	system("pause");
	return 0;
}