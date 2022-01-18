#pragma once
#include <string>
#include "date.h"
#define N 15

class tenant { //����� ���������

private:

	std::string name; //���

	std::string surname; //�������

	std::string patronymic; //��������

	date tntD; //������ � ������� ����


public:


	tenant(std::string name, std::string surname, std::string patronymic); // ����������� � �����������

	tenant();

	tenant(std::string value);

	tenant(const tenant& tenant);

	tenant& operator=(const tenant& tenant);

	void enter(); //����� �����

	void print(); //����� ������
