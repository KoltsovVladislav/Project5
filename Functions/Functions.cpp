#include<iostream>
using namespace std;

int sum(int a, int b); //Прототип функции( объявлени е функции Function declaration
int dif(int a, int b);
int product(int a, int b);
double quotient(double a, double b);
int reminder(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два чисал: "; cin >> a >> b;
	
	int c = sum(a, b); // Использование функции (Вызов функции Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << dif(a, b) << endl;
	cout << a << " * " << b << " = " << product(a, b) << endl;
	cout << a << " / " << b << " = " << quotient(a, b) << endl;
	cout << a << " % " << b << " = " << reminder(a, b) << endl;
}

int sum(int a, int b)  // Реализация функции (Определяет функции Function definition)
{
	int c = a + b;
	return c;
}
int dif(int a, int b)
{
	//Difference - разность
	return a - b;
}
int product(int a, int b)
{
	//Product - произведение 
	return a * b;
}
double quotient(double a, double b)
{
	//Quotient - частное 
	return a / b;
}
int reminder(int a, int b)
{
	return a % b;
}
