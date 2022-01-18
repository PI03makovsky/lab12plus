#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <conio.h>

#include <stdio.h>

#include "player.h"

void player::init(std::string p, int w, int h, date DAYDAY2) { //Метод создания

	position += p;

	weigh = w;

	height = h;

	plrD = DAYDAY2;

}

void player::enter() { //Метод ввода

	printf("\n\nВведите позицию: ");
	std::cin.ignore();
	getline(std::cin, position, '\n');

	printf("Введите вес: ");

	while (scanf("%d", &weigh) != 1) {

		while (getchar() != '\n');

		printf("Ошибка. Введите позицию: ");

	}

	printf("Введите рост: ");

	while (scanf("%d", &height) != 1) {

		while (getchar() != '\n');

		printf("Ошибка. Введите цену закупа еды: ");

	}

	printf("\nВведите минимальную дату рождения: ");

	plrD.enter();

}

void player::print() { // Метод вывода

	std::cout << "\n\nИнформация: " << position;
	printf(" %d %d", weigh, height);

	printf("\nДата Рождения: ");

	plrD.print();

}

player* player::player_array(int size)
{
	return new player[size];
}

player player::get_player()
{
	return *this;
}