#pragma once
#include <string>
#include "date.h"

class tenant { //Класс арендатор

private:

	std::string name; //имя

	std::string surname; //фамилия

	std::string patronymic; //отчество


	//static int password; // статистическое поле данных администратора

private:
	static int quantityA; // статистическое поле кол-ва администраторов на месте
public:
	tenant(std::string name, std::string surname, std::string patronymic) {
		this->name = name;
		this->surname = surname;
		this->patronymic = patronymic;
		quantityA++;
	}

	static int GetCount() { // статистический метод

		return quantityA;
	}

	date tntD; //связка с классом дата

public:

	void init(std::string n, std::string s, std::string p, date DAYDAY1); //Метод создания

	void enter(); //Метод ввода

	void print(); //Метод вывода

};
