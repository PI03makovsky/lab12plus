#pragma once
#pragma once

#define N 15
class date { //����� ����

private:

	int day; //����

	int month; //�����

	int year; //���



public:
	date() {};
	date(int day, int month, int year);
	void init(int d, int m, int y); //����� ��������

	void enter(); //����� �����

	void print(); //����� ������

	int difDate(date date1); //����� �������� ���� ����� ������

	friend int* DateArrayValue(date& date);
};