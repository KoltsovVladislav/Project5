#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int h;
	cout << "¬ведите высоту треугольника: "; cin >> h;
	long long int nf = 1;
	for (int i = 0; i < h; i++)
	{
		cout.width(4);
		cout << "";
	}
	//cout.width(1);
	cout << " ";
	cout << left;
	cout << "" << 1 << endl;
	for (int n = 1; n <= h; n++)
	{
		for (int i = n % 2 ? 1 : 0; i < h - n; i++)
		{
			cout.width(4);
			cout << "";
			//cout << "    ";
		}
		if (n % 2 && n != h)
		{
			cout.width(4);
			cout << "";
			//cout << "    ";
		}
		cout << " ";
		cout << left;
		cout.width(8);
		cout << 1;// << "       ";
		nf *= n;
		long long int kf = 1;
		for (int k = 1; k <= n; k++)
		{
			kf *= k;
			long long int nkf = 1;
			for (int i = 1; i <= n - k; i++)nkf *= i;
			cout.width(8);
			cout << nf / kf / nkf;// << "       ";
		}
		cout << endl;
	}
}