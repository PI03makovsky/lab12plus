#pragma once
#include <string>
#include "date.h"

class tenant { //Êëàññ àðåíäàòîð

private:

	std::string name; //èìÿ

	std::string surname; //ôàìèëèÿ

	std::string patronymic; //îò÷åñòâî


	//static int password; // ñòàòèñòè÷åñêîå ïîëå äàííûõ àäìèíèñòðàòîðà

private:
	static int quantityA; // ñòàòèñòè÷åñêîå ïîëå êîë-âà àäìèíèñòðàòîðîâ íà ìåñòå
public:
	tenant(std::string name, std::string surname, std::string patronymic) {
		this->name = name;
		this->surname = surname;
		this->patronymic = patronymic;
		quantityA++;
	}

	static int GetCount() { // ñòàòèñòè÷åñêèé ìåòîä

		return quantityA;
	}

	date tntD; //ñâÿçêà ñ êëàññîì äàòà

public:

	void init(std::string n, std::string s, std::string p, date DAYDAY1); //Ìåòîä ñîçäàíèÿ

	void enter(); //Ìåòîä ââîäà

	void print(); //Ìåòîä âûâîäà

};
