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
	int month = 0;
	
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

		months m = static_cast<months>(month);
		switch (m) {
		case months::������:
			std::cout << "������" << std::endl;
			break;
		case months::�������:
			std::cout << "�������" << std::endl;
			break;
		case months::����:
			std::cout << "����" << std::endl;
			break;
		case months::������:
			std::cout << "������" << std::endl;
			break;
		case months::���:
			std::cout << "���" << std::endl;
			break;
		case months::����:
			std::cout << "����" << std::endl;
			break;
		case months::����:
			std::cout << "����" << std::endl;
			break;
		case months::������:
			std::cout << "������" << std::endl;
			break;
		case months::��������:
			std::cout << "��������" << std::endl;
			break;
		case months::�������:
			std::cout << "�������" << std::endl;
			break;
		case months::������:
			std::cout << "������" << std::endl;
			break;
		case months::�������:
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