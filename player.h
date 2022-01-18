#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include "date.h"

class player { //Класс игрок

private:

	std::string position; //позиция

	int weigh; // вес

	int height; // рост

	date plrD; //связка с классом дата

public:

	void init(std::string p, int w, int h, date DAYDAY2); //Метод создания

	void enter(); //Метод ввода

	void print(); //Метод вывода

	player* player_array(int size); // Массив игроков/ Указатель
	player get_player();
};
