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
	int month;

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
		switch (month) {
		case 1:
			std::cout << "Январь" << std::endl;
			break;
		case 2:
			std::cout << "Февраль" << std::endl;
			break;
		case 3:
			std::cout << "Март" << std::endl;
			break;
		case 4:
			std::cout << "Апрель" << std::endl;
			break;
		case 5:
			std::cout << "Май" << std::endl;
			break;
		case 6:
			std::cout << "Июнь" << std::endl;
			break;
		case 7:
			std::cout << "Июль" << std::endl;
			break;
		case 8:
			std::cout << "Август" << std::endl;
			break;
		case 9:
			std::cout << "Сентябрь" << std::endl;
			break;
		case 10:
			std::cout << "Октябрь" << std::endl;
			break;
		case 11:
			std::cout << "Ноябрь" << std::endl;
			break;
		case 12:
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