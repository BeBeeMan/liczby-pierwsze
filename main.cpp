#include <iostream>
using namespace std;

int main()
{
    int n;
    int a;
	int tab[100000];
	int c=0;
	int x;

	cin >> n;
	for (int k = 0; k < n; k++)
	{
		cin >> a;
		for (int i = 2; i < a; i++)
		{
			if (a % i == 0)
			{
				x = 0;
				break;
			}
			else
			{
				x = 1;
			}
		}
		if (a == 1)
		{
			x = 0;
		}
		if (a == 2)
		{
			x = 1;
		}
		tab[c] = x;
		c++;
	}
	for (int i = 0; i < c; i++)
	{
		if (tab[i] == 0)
		{
			cout << "NIE\n";
		}
		else
		{
			cout << "TAK\n";
		}
	}
}

//https://pl.spoj.com/problems/PRIME_T/
