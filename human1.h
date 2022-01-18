#pragma once
#pragma once
#include "date.h"
#include "tenant1.h"
#include "player.h"
#include <iostream>
#define N 15
using namespace std;

class human { //Класс владельца поля
public:
	std::string name; //Имя
	std::string lastname; //Фамилия
	date birthdate; //Присоединение класса дата
public:
	void input(); //Метод ввода
	friend std::ostream& operator<<(std::ostream& out, const human& human); //Метод вывода 
	virtual std::ostream& print(std::ostream& out) const;
	human(std::string name, std::string lastname, date birthdate); //Конструктор с парметрами
	human();
	human(std::string value);
	human(const human& human);
	human& operator=(const human& human);
};


class tenant1 : protected human {
private:
	player tH;
public:
	void input();
	void output();
	tenant1() {};
	tenant1(string name, string lastname, date birthdate, player tH) : human(name, lastname, birthdate) {
		this->tH = tH;
	};
};

class passenger :public human { // зритель
public:
	passenger() {
	};
	virtual std::ostream& print(std::ostream& out) const override;
	int getAge();
	

};
