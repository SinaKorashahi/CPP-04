//Sina Khorashahi - 98440373
//1.
#include<iostream>
using std::cout;
using std::cin;
int main()
{
	int n, m;
	cout << "n: ";
	cin >> n;
	cout << "m: ";
	cin >> m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
			if (i % 2 == 0)
				cout << "#*";
			else
				cout << "*#";
		cout << "\n";
	}
 }


