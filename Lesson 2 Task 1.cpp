#include <iostream>

enum class months
{
	Январь = 1,
	Февраль,
	Март,
	Апрель,
	Май,
	Июнь,
	Июль,
	Август,
	Сентябрь,
	Октябрь,
	Ноябрь,
	Декабрь,
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");
	int month = 0;
	
	do {
		std::cout << "Введите номер месяца: ";
		std::cin >> month;

		if (month == 0)
		{
			std::cout << "До свидания";
		}
		else if (month > 12)
		{
			std::cout << "Неправильный номер!" << std::endl;
		}

		months m = static_cast<months>(month);
		switch (m) {
		case months::Январь:
			std::cout << "Январь" << std::endl;
			break;
		case months::Февраль:
			std::cout << "Февраль" << std::endl;
			break;
		case months::Март:
			std::cout << "Март" << std::endl;
			break;
		case months::Апрель:
			std::cout << "Апрель" << std::endl;
			break;
		case months::Май:
			std::cout << "Май" << std::endl;
			break;
		case months::Июнь:
			std::cout << "Июнь" << std::endl;
			break;
		case months::Июль:
			std::cout << "Июль" << std::endl;
			break;
		case months::Август:
			std::cout << "Август" << std::endl;
			break;
		case months::Сентябрь:
			std::cout << "Сентябрь" << std::endl;
			break;
		case months::Октябрь:
			std::cout << "Октябрь" << std::endl;
			break;
		case months::Ноябрь:
			std::cout << "Ноябрь" << std::endl;
			break;
		case months::Декабрь:
			std::cout << "Декабрь" << std::endl;
			break;
		default:
			break;
		}
	} while (month != 0 || month > 12);
}


/*
Задача 1. Месяцы
Описание
Напишите программу, которая спрашивает у пользователя номер месяца и выводит на экран название месяца, введённого пользователем.

Если пользователь ввёл некорректный номер месяца, сообщите ему об этом.

Спрашивайте пользователя до тех пор, пока он не введёт 0.

Для решения задачи воспользуйтесь перечислением.

Пример работы программы
Введите номер месяца : 1
Январь
Введите номер месяца : 7
Июль
Введите номер месяца : 13
Неправильный номер!
Введите номер месяца : 0
До свидания
*/