#include "register_list.h"

#include <fstream>
#include <vector>
#include <iostream>
#include <windows.h>

enum commands { SEARCH = 1, PRINT, ADD, REMOVE, EXIT };

int main()
{
	setlocale(0, "");

	RegisterList reg_list;

	short unsigned int user_input = 0;

	do
	{
		system("cls");
		std::cout << "1. ����� ������ �� ����i ��� ���i����� ������" << std::endl;
		std::cout << "2. ��������� �����a" << std::endl;
		std::cout << "3. ��������� ������ �� ������" << std::endl;
		std::cout << "4. ��������� ������ i� ������ �� ���i���� �������" << std::endl;
		std::cout << "5. ���i� � ��������" << std::endl;

		std::cout << "������� ��: ";
		std::cin >> user_input;

		std::string input_case = "";
		std::string answer = "";
		switch (user_input)
		{
		case SEARCH:
			system("cls");

			std::cout << "����� �� ����i �� �� ���i����� ������? (1 / 2): ";
			std::cin >> answer;

			if (answer == "1")
			{
				std::cin.ignore();
				system("cls");

				std::cout << "����i�� ����� ������: ";
				std::getline(std::cin, input_case);

				reg_list.search_by_name(input_case);
			}
			else if (answer == "2")
			{
				std::cin.ignore();
				system("cls");

				std::cout << "����i�� ���i���� ����� ������: ";
				std::getline(std::cin, input_case);

				reg_list.search_by_name(input_case);
			}
			else
			{
				system("cls");
				std::cout << "�� ����� ���������� �����" << std::endl;
			}

			system("pause");
			input_case.erase();
			break;

		case PRINT:
			system("cls");
			reg_list.print();

			system("pause");
			break;

		case ADD:
			std::cin.ignore();
			system("cls");
			reg_list.add();

			system("pause");
			break;

		case REMOVE:
			std::cin.ignore();
			system("cls");

			std::cout << "����i�� ���i���� ����� ������, ���� �� ������ ��������: ";
			std::getline(std::cin, input_case);

			reg_list.remove(input_case);

			system("pause");
			input_case.erase();
			break;

		case EXIT:
			system("cls");
			std::cout << "�� �����i�i!" << std::endl;

			Sleep(1000);
			exit(0);
			break;

		default:
			exit(0);
			break;
		}
	} while (1);

	std::cin.get();
	return 0;
}