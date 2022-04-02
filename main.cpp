#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string liczby = "test";
	string done;
	while (getline(cin, liczby))
	{
		for (int i = 1; i < liczby.length(); i++)
		{
			if (liczby[i - 1] == ' ')
			{
				liczby[i] = toupper(liczby[i]);
			}
		}
		for (int i = 0; i < liczby.length(); i++)
		{
			if (liczby[i] != ' ')
			{
				cout << liczby[i];
			}
		}
		cout << endl;
	}
}
