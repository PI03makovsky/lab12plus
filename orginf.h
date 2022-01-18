#pragma once
#include <iostream>
#include "tenant1.h"
#define N 15
using namespace std;

class orginf {  //абстрактный класс
public:
	virtual void input() = 0; //Метод для ввода 
	virtual void output() = 0;
	virtual int sale(int sl1) = 0;  //Метод для расчета цены с учетом скидки
};


class forchildren : private orginf {
	int sum; //Цена билета 
	std::string type; 
	std::string punkt; // адрес
	int hours; //Часы
	int minutes; //Минуты
	passenger passengerticket; //Присоединение класса водитель
public:
	void input() override; //Метод для ввода 
	forchildren(int sum, std::string punkt,int hours, int minutes, passenger passengerticket); //Конструктор с параметрами
	forchildren(); //Конструктор без параметров
	forchildren(int value);//Конструктор с одним параметром
	void output() override;
	int sale(int sl1) override;  //Метод для расчета цены с учетом скидки
};


class foradult : private orginf {
	int sum; //Цена билета 
	std::string punkt; // адрес
	std::string type;
	int hours; //Часы
	int minutes; //Минуты
	passenger passengerticket; //Присоединение класса
public:
	void input() override; //Метод для ввода 
	foradult(int sum, std::string punkt, int hours, int minutes, passenger passengerticket); //Конструктор с параметрами
	foradult(); //Конструктор без параметров
	foradult(int value);//Конструктор с одним параметром
	void output() override;
	int sale(int sl1) override;  //Метод для расчета цены с учетом скидки
};
