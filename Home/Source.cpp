#include<iostream>
#include<Windows.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
//#define ONE
//#define TWO
//#define THREE
//#define FOUR
//#define FIVE
//#define SIX
//#define SEVEN
//#define EIGHT

#ifdef ONE
	int n; //����� ��� ���������� ����������
	int f = 1; //��������� �����
	cout << "������� �����: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << "\n";
	}
#endif // ONE

#ifdef TWO
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
#endif // TWO

#ifdef THREE

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
#endif // THREE

#ifdef FOUR
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << endl;
	cout << endl;
#endif // FOUR


#ifdef FIVE
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
#endif // FIVE

#ifdef SIX
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
#endif // SIX

#ifdef SEVEN
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
#endif // SEVEN

#ifdef EIGHT
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5);
			cout << i * j;
		}
		cout << endl;
	}
#endif // EIGHT
}
