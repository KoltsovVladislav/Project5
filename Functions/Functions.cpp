#include<iostream>
using namespace std;

int sum(int a, int b); //�������� �������( ��������� � ������� Function declaration
int dif(int a, int b);
int product(int a, int b);
double quotient(double a, double b);
int reminder(int a, int b);
int facrorial(int n);
double power(double a, int n);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	
	int c = sum(a, b); // ������������� ������� (����� ������� Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << dif(a, b) << endl;
	cout << a << " * " << b << " = " << product(a, b) << endl;
	cout << a << " / " << b << " = " << quotient(a, b) << endl;
	cout << a << " % " << b << " = " << reminder(a, b) << endl;

	int n;
	cout << "������� ����� �� ���������� ���������� "; cin >> n;
	cout << n << " ! = " << factorial(n) << endl;

	cout << a << " ^ " << b << " = " << power(a, b) << endl;
}

int sum(int a, int b)  // ���������� ������� (���������� ������� Function definition)
{
	int c = a + b;
	return c;
}
int dif(int a, int b)
{
	//Difference - ��������
	return a - b;
}
int product(int a, int b)
{
	//Product - ������������ 
	return a * b;
}
double quotient(double a, double b)
{
	//Quotient - ������� 
	return a / b;
}
int reminder(int a, int b)
{
	return a % b;
}
int factorial(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}
double power(double a, int n)
{
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *=
	}
}