#include<iostream>
#include<Windows.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
//#define O
//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI_2
//#define FIBONACCI
//#define NUM

#define MULTIPLICATION
//#define PIFAGOR
//#define
//#define
//#define
//#define
//#define

#ifdef O
	int n; //���������� �������� 
	cout << "������� ���������� ��������: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // O


#ifdef FACTORIAL
	int n; //����� ��� ���������� ����������
	int f = 1; //��������� �����
	cout << "������� �����: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! =";
		f *= i;
		cout << f << "\n";
	}
#endif // FACTORIAL

#ifdef POWER
	double a; //��������� �������
	int n; //���������� �������
	double N = 1; //�������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII

	cout << "������� ASCII-��������: \n";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(LC_ALL, "");
	cout << "�����" << endl;
#endif // ASCII

#ifdef FIBONACCI
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << endl;
	cout << endl;
#endif // FIBONACCI


#ifdef FIBONACCI_2
	int n;
	cout << "������� ���������� ����� �� ���� ��������: "; cin >> n;
	int a = 0;
	int b = 1;
	int c = a + b;
	for (int i = 0; i < n; i++)
	{
		cout << a << endl;
		a = b;
		b = c;
		c = a + b;
	}
#endif // FIBONACCI_2


#ifdef NUM
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true; // ����������� ��� ����� I �������. �� ��� ����� ���������
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break; //�������� ����� break ��������� ������� �������� � ��� ����������� ��������
			}
		}
		if (simple)cout << i << endl;
	}
#endif // NUM

	//---------------------------------------------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------------------------------------------

#ifdef MULTIPLICATION
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
			Sleep(30);
		}
		cout << endl;
	}
#endif // MULTIPLICATION

#ifdef PIFAGOR
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5);
			cout << i * j;
		}
		cout << endl;
	}
#endif // PIFAGOR

}