// Structura2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;

struct Car
{
	string name{ NULL };
	float clearence{ NULL };
	float value{ NULL };
	int horsePower { NULL };
	int weels{ NULL };
	string color{ NULL };
	string gearbox{ NULL };
} cars[100];

void DisplayCars(int k)
{
	cout << "Марка автомобиля: " << cars[k].name << "\n";
	cout << "Клиренс: " << cars[k].clearence << "\n";
	cout << "Обьем двигателя: " << cars[k].value << "\n";
	cout << "Мощность двигателя: " << cars[k].horsePower << "\n";
	cout << "Диаметр колес: " << cars[k].weels << "\n";
	cout << "Цвет: " << cars[k].color << "\n";
	cout << "Коробка передач: " << cars[k].gearbox << "\n";
}

void Search_name(int k, string name)
{
	int count{ 0 };
	for (int i = 1; i <= k; i++)
	{
		if (cars[i].name == name)
		{
			count++;
			DisplayCars(i);
			cout << "\n";
		}
	}
	if (count == 0)
	{
		cout << "Ничего не найдено.\n\n";
	}
}


void AddInfo(int k)
{
	cout << "Введите данные об автомобиле: \n\n";
	cout << "Марка Автомобиля: ";
	cin >> cars[k].name;
	cout << "Клиренс: ";
	cin >> cars[k].clearence;
	cout << "Обьем двигателя: ";
	cin >> cars[k].value;
	cout << "Можность двигателя: ";
	cin >> cars[k].horsePower;
	cout << "Диаметр колес: ";
	cin >> cars[k].weels;
	cout << "Цвет: ";
	cin >> cars[k].color;
	cout << "Коробка передач: ";
	cin >> cars[k].gearbox;

}
int main()
{
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int answer_id{ 0 }, k{ 2 }, name{ 0 };
	string name_ch{ NULL };

	cars[1] = { "BMW", 180, 2, 150, 24, "Синий", "Автомат"};
	cars[2] = { "Лада КАЛина", 90, 1.2, 66, 15, "Грязный", "Механика"};
	
	while (answer_id != 5)
	{
		system("cls");

		cout << "***Структура Автомобиль***\n\n";

		cout << "- 1 - Добавить запись.\n";
		cout << "- 2 - Вывести весь список.\n";
		cout << "- 3 - Поиск по названию.\n";
		cout << "- 4 - Выход.\n";

		cin >> answer_id;
		system("cls");

		switch (answer_id)
		{
		case(1):
			k++;
			AddInfo(k);
			break;

		case(2):
			for (int i = 1; i <= k; i++)
			{
				DisplayCars(i);
			}
			system("pause");
			break;

		case(3):
			cout << "Введите название автомобиля: ";
			cin >> name_ch;
			cout << "\n";
			Search_name(k, name_ch);
			system("pause");
			break;

		

		default:
			break;
		}
	}

	return 0;
}
