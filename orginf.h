#pragma once
#include <iostream>
#include "tenant1.h"
#define N 15
using namespace std;

class orginf {  //����������� �����
public:
	virtual void input() = 0; //����� ��� ����� 
	virtual void output() = 0;
	virtual int sale(int sl1) = 0;  //����� ��� ������� ���� � ������ ������
};


class forchildren : private orginf {
	int sum; //���� ������ 
	std::string type; 
	std::string punkt; // �����
	int hours; //����
	int minutes; //������
	passenger passengerticket; //������������� ������ ��������
public:
	void input() override; //����� ��� ����� 
	forchildren(int sum, std::string punkt,int hours, int minutes, passenger passengerticket); //����������� � �����������
	forchildren(); //����������� ��� ����������
	forchildren(int value);//����������� � ����� ����������
	void output() override;
	int sale(int sl1) override;  //����� ��� ������� ���� � ������ ������
};


class foradult : private orginf {
	int sum; //���� ������ 
	std::string punkt; // �����
	std::string type;
	int hours; //����
	int minutes; //������
	passenger passengerticket; //������������� ������
public:
	void input() override; //����� ��� ����� 
	foradult(int sum, std::string punkt, int hours, int minutes, passenger passengerticket); //����������� � �����������
	foradult(); //����������� ��� ����������
	foradult(int value);//����������� � ����� ����������
	void output() override;
	int sale(int sl1) override;  //����� ��� ������� ���� � ������ ������
};
