#pragma once
#include <string>
#include "date.h"
#define N 15

class tenant { //Класс арендатор

private:

	std::string name; //имя

	std::string surname; //фамилия

	std::string patronymic; //отчество

	date tntD; //связка с классом дата


public:


	tenant(std::string name, std::string surname, std::string patronymic); // Конструктор с параметрами

	tenant();

	tenant(std::string value);

	tenant(const tenant& tenant);

	tenant& operator=(const tenant& tenant);

	void enter(); //Метод ввода

	void print(); //Метод вывода
