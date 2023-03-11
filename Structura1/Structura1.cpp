// Structura1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<Windows.h>
using namespace std;

#include <iostream>
// комплексное число z = a +bi
struct comlex
{
	float a; // действительное число 
	float b; // мнимое число
};


comlex num1;
comlex num2;
comlex result;


void sum()
{
	result.a = num1.a + num2.a;
	result.b = num1.b + num2.b;


	cout << "\nВаше комплексное число: " << result.a << "+" << result.b << "i";
}


void diff()
{
	result.a = num1.a - num2.a;
	result.b = num1.b - num2.b;


	cout << "\nВаше комплексное число: " << result.a << "+" << result.b << "i";
}
void pr()
{
	result.a = num1.a * num2.a - num1.b * num2.b;
	result.b = num1.a * num2.b + num1.b * num2.a;


	cout << "\nВаше комплексное число: " << result.a << "+" << result.b << "i";
}


void devide()
{
	result.a = (num1.a * num2.a + num1.b * num2.b) / (num2.a * num2.a + num2.b * num2.b);
	result.b = (num2.a * num1.b - num1.a * num2.b) / (num2.a * num2.a + num2.b * num2.b);


	cout << "\nВаше комплексное число: " << result.a << "+" << result.b << "i";
}


int main()
{
	int choise = 0;
	cout << "Введите действительное и мнимое число первого комплексного числа через пробел\t";
	cin >> num1.a >> num1.b;


	cout << "Введите действительное и мнимое число второго комплексного числа через пробел\t";
	cin >> num2.a >> num2.b;


	cout << "\nВыберете действие над числами\t";
	cout << "\n 1. Сложение";
	cout << "\n 2. Вычитание";
	cout << "\n 3. Деление";
	cout << "\n 4. Умножение" << endl;
	cin >> choise;


	switch (choise)
	{


	case 1:
		sum();
		break;
	case 2:
		diff();
		break;
	case 3:
		devide();
		break;
	case 4:
		pr();
		break;
	default:
		cout << "\n Ошибка";
		break;
	}




	return 0;
}