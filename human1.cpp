#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "tenant1.h"
#include "date.h"
#include "human1.h"


void human::input() { //Метод ввода
	printf("\nВведите имя: ");
	cin >> name;
	while (getchar() != '\n');
	printf("\n\nВведите фамилию: ");
	cin >> lastname;
	while (getchar() != '\n');
	printf("\n\nВведите дату рождения:\n");
	birthdate.enter();

}

human::human(std::string name, std::string lastname, date birthdate) { //Конструктор с параметрами

	for (int i = 0; i <= name.size(); i++) {
		if (name[i] == '\0') {
			this->name = name;
		}
		else {
			this->name = "-";
		}
	}
	for (int i = 0; i <= lastname.size(); i++) {
		if (lastname[i] == '\0') {
			this->lastname = lastname;
		}
		else {
			this->lastname = "-";
		}
	}
	this->birthdate = birthdate;
}

human::human() {};      //Конструктор без параметров

human::human(std::string value) { //Конструктор с одним параметром 
	this->name = value;
}



human::human(const human& human) { //Конструктор копирования
	for (int i = 0; i <= name.size(); i++) {
		if (name[i] == '\0') {
			name = human.name;
		}
	}
	for (int i = 0; i <= lastname.size(); i++) {
		if (lastname[i] == '\0') {
			lastname = human.lastname;
		}
	}
	birthdate = human.birthdate;
}

human& human::operator=(const human& human) { //оператор присваивания
	if (this == &human) {
		return *this;
	}
	for (int i = 0; i <= name.size(); i++) {
		if (name[i] == '\0') {
			name = human.name;
		}
	}
	for (int i = 0; i <= lastname.size(); i++) {
		if (lastname[i] == '\0') {
			lastname = human.lastname;
		}
	}
	birthdate = human.birthdate;
	return *this;
}

void tenant1::input() {
	printf("\nВведите информацию : ");
	this->human::input();
	printf("\nВведите информацию игрока : ");
	tH.enter();
}
void tenant1::output() {
	printf("\nИнформация о владельце: ");
	cout << this << "\n";

}

std::ostream& passenger::print(std::ostream& out) const {
	out << "\nФамилия:" << this->name << "\nИмя:" << this->lastname ;
	return out;
}

std::ostream& operator<<(std::ostream& out, const human& human) { // 6
	return human.print(out);
}

ostream& human::print(std::ostream& out) const {
	out << "\nФамилия:" << this->name << "\nИмя:" << this->lastname << "\nДата рождения:" << ""; // 7
	return out;
}

int passenger::getAge() {
	return 0;
}
