#include <iostream>

enum class months
{
	������ = 1,
	�������,
	����,
	������,
	���,
	����,
	����,
	������,
	��������,
	�������,
	������,
	�������,
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");
	int month;

	do {
		std::cout << "������� ����� ������: ";
		std::cin >> month;

		if (month == 0)
		{
			std::cout << "�� ��������";
		}
		else if (month > 12)
		{
			std::cout << "������������ �����!" << std::endl;
		}
		switch (month) {
		case 1:
			std::cout << "������" << std::endl;
			break;
		case 2:
			std::cout << "�������" << std::endl;
			break;
		case 3:
			std::cout << "����" << std::endl;
			break;
		case 4:
			std::cout << "������" << std::endl;
			break;
		case 5:
			std::cout << "���" << std::endl;
			break;
		case 6:
			std::cout << "����" << std::endl;
			break;
		case 7:
			std::cout << "����" << std::endl;
			break;
		case 8:
			std::cout << "������" << std::endl;
			break;
		case 9:
			std::cout << "��������" << std::endl;
			break;
		case 10:
			std::cout << "�������" << std::endl;
			break;
		case 11:
			std::cout << "������" << std::endl;
			break;
		case 12:
			std::cout << "�������" << std::endl;
			break;
		default:
			break;
		}
	} while (month != 0 || month > 12);
}


/*
������ 1. ������
��������
�������� ���������, ������� ���������� � ������������ ����� ������ � ������� �� ����� �������� ������, ��������� �������������.

���� ������������ ��� ������������ ����� ������, �������� ��� �� ����.

����������� ������������ �� ��� ���, ���� �� �� ����� 0.

��� ������� ������ �������������� �������������.

������ ������ ���������
������� ����� ������ : 1
������
������� ����� ������ : 7
����
������� ����� ������ : 13
������������ �����!
������� ����� ������ : 0
�� ��������
*/