#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include "date.h"

class player { //����� �����

private:

	std::string position; //�������

	int weigh; // ���

	int height; // ����

	date plrD; //������ � ������� ����

public:

	void init(std::string p, int w, int h, date DAYDAY2); //����� ��������

	void enter(); //����� �����

	void print(); //����� ������

	player* player_array(int size); // ������ �������/ ���������
	player get_player();
};
