#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <conio.h>

#include <stdio.h>

#include "tenant.h"

void tenant::init(std::string n, std::string s, std::string p, date DAYDAY1) { //Метод создания

	name += n;
	surname += s;
	patronymic += p;

	tntD = DAYDAY1;

}

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

void tenant::print() {
	std::cout << "\nИмя: " << name << " Фамилия: " << surname << " Отчество:" << patronymic;

	printf("День рождения: ");

	tntD.print();

}

//int tenant::printAdmin(int name1) {
	//std::cout << "Пароль: " << name1;

	//return 0;

//
//static int GetCount(static int quantityA) { // статистический метод

	//return quantityA;
//}
int tenant::quantityA = 0; // иниц-я
