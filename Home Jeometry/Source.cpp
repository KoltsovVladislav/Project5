#include<iostream>
#include<Windows.h>
using namespace std;

//#define ONE
//#define TWO
//#define THREE
//#define FORE1
//#define FORE2
#define FIVE

void main()
{
	setlocale(LC_ALL, "");

#ifdef ONE
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // ONE

#ifdef TWO
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TWO

#ifdef THREE
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int j = n; j > i; j--)
		{
			cout << "* ";
			Sleep(50);
		}
		cout << endl;
	}
#endif // THREE

#ifdef FORE1
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " ";
		cout << "/";
		for (int j = 0; j < i; j++) cout << "  ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " ";
		cout << "\\";
		for (int j = i; j < n - 1; j++)
			cout << "  ";
		cout << "/";
		cout << endl;
	}
#endif // FORE1

#ifdef FORE2
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " ";
		cout << "/";
		for (int j = 0; j < i * 2; j++) cout << " ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " ";
		cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++)
			cout << " ";
		cout << "/";
		cout << endl;
	}
#endif // FORE2

#ifdef FIVE
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0) cout << "+ ";
			else cout << "- ";
		}
		cout << endl;
	}
#endif // FIVE

}