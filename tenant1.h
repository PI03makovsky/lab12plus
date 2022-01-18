#pragma once
#pragma once
#include <string>
#include "date.h"
#include "human1.h"
#include "player.h"
class tenant { //Класс арендатор

private:

	std::string name; //имя

	std::string surname; //фамилия

	std::string patronymic; //отчество

	date tntD; //связка с классом дата

public:

	void init(std::string n, std::string s, std::string p, date DAYDAY1); //Метод создания

	void enter(); //Метод ввода

	void print(); //Метод вывода
	
	

};