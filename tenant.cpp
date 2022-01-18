#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <conio.h>

#include <stdio.h>

#include "tenant.h"


void tenant::enter() { //Метод ввода
	std::cin.ignore();
	printf("\nВведите имя: ");
	getline(std::cin, name, '\n');
	printf("\n\nВведите фамилию: ");
	getline(std::cin, surname, '\n');
	printf("\n\nВведите Отчество: ");
	getline(std::cin, patronymic, '\n');

	printf("\n\nВведите дату рождения:\n");
	tntD.enter();

}

tenant::tenant(std::string name, std::string surname, std::string patronymic) { //Конструктор с параметрами

	for (int i = 0; i <= name.size(); i++) {

		if (name[i] == '\0') {

			this->name = name;

		}

		else {

			this->name = "-";

		}

	}

	for (int i = 0; i <= surname.size(); i++) {

		if (surname[i] == '\0') {

			this->surname = surname;

		}

		else {

			this->surname = "-";

		}

	}

	for (int i = 0; i <= patronymic.size(); i++) {

		if (patronymic[i] == '\0') {

			this->patronymic = patronymic;

		}

		else {

			this->patronymic = "-";

		}

	}


}

tenant::tenant() {}; //Конструктор без параметров

tenant::tenant(std::string value) { //Конструктор с одним параметром

	this->name = value;

}

void tenant::print() { // Метод вывода
	std::cout << "Имя: \n" << name << " \nФамилия: \n" << surname << " \nОтчество: \n" << patronymic;
	std::cout << "\n";

}

tenant::tenant(const tenant& tenant) { //Конструктор копирования

	for (int i = 0; i <= name.size(); i++) {

		if (name[i] == '\0') {

			name = tenant.name;

		}

	}

	for (int i = 0; i <= surname.size(); i++) {

		if (surname[i] == '\0') {

			surname = tenant.surname;

		}

	}

	for (int i = 0; i <= patronymic.size(); i++) {

		if (patronymic[i] == '\0') {

			patronymic = tenant.patronymic;

		}

	}
}

tenant& tenant::operator=(const tenant& tenant) { //оператор присваивания

	if (this == &tenant) {

		return *this;

	}

	for (int i = 0; i <= name.size(); i++) {

		if (name[i] == '\0') {

			name = tenant.name;

		}

	}

	for (int i = 0; i <= surname.size(); i++) {

		if (surname[i] == '\0') {

			surname = tenant.surname;

		}

	}

	for (int i = 0; i <= patronymic.size(); i++) {

		if (patronymic[i] == '\0') {

			patronymic = tenant.patronymic;

		}

	}

	return *this;

}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "date.h"
#include "tenant.h"
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	tenant tenant1 = tenant("Иван", "Иванов", "Иванов");
	tenant tenant2 = tenant(tenant1);

	tenant1.print();
	std::cout << "\n";
	tenant2.print();
}
