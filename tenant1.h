#pragma once
#include <string>
#include "date.h"

class tenant { //����� ���������

private:

	std::string name; //���

	std::string surname; //�������

	std::string patronymic; //��������


	//static int password; // �������������� ���� ������ ��������������

private:
	static int quantityA; // �������������� ���� ���-�� ��������������� �� �����
public:
	tenant(std::string name, std::string surname, std::string patronymic) {
		this->name = name;
		this->surname = surname;
		this->patronymic = patronymic;
		quantityA++;
	}

	static int GetCount() { // �������������� �����

		return quantityA;
	}

	date tntD; //������ � ������� ����

public:

	void init(std::string n, std::string s, std::string p, date DAYDAY1); //����� ��������

	void enter(); //����� �����

	void print(); //����� ������

};
