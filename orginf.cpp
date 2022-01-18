#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "orginf.h" //������������� ������������� �����


void forchildren::input() //����� �����
{
	
	do {
		printf("\n\n������� ���� ������: ");
		while (scanf("%d", &sum) != 1) {
			while (getchar() != '\n');
			printf("������. ������� �����: ");
		}
		printf("\n\n������� ����� ����������: ");
		cin >> punkt;
		while (getchar() != '\n');
		printf("\n\n������� ����� �����������: ");
		printf("\n\n������� ����: ");
		while (scanf("%d", &hours) != 1) {
			while (getchar() != '\n');
			printf("������. ������� �����: ");
		}
		printf("\n\n������� ������: ");
		while (scanf("%d", &minutes) != 1) {
			while (getchar() != '\n');
			printf("������. ������� �����: ");
		}
		printf("\n\n������� ���������� � ���������:");
		passengerticket.input();
	} while (passengerticket.getAge() > 12);
}

forchildren::forchildren(int sum, std::string punkt, int hours, int minutes, passenger passengerticket) //����� ��������
{
	int f = 0;
	f = passengerticket.getAge();
	if (f < 12) {
		if (sum < 0) {
			this->sum = 0;
		}
		else {
			this->sum = sum;
		}
		for (int i = 0; i <= punkt.size(); i++) {
			if (punkt[i] == '\0') {
				this->punkt = punkt;
			}
			else {
				this->punkt = "-";
			}
		}
		if (hours < 0 || hours > 23) {
			this->hours = 0;
		}
		else {
			this->hours = hours;
		}
		if (minutes < 0 || minutes > 59) {
			this->minutes = 0;
		}
		else {
			this->minutes = minutes;
		}
		this->passengerticket = passengerticket;
	}
	else {
		printf("\n������� ��������� ������ 12! ��� ������ ���� �������� �����!");
	}
	
}

forchildren::forchildren() {}; //����������� ��� ����������

forchildren::forchildren(int value) {
	this->sum = value;
}


int forchildren::sale(int sl1) //����� ������� ���� � ������ ������
{
	int sl2 = 0;
	sl2 = this->sum - (this->sum * sl1 / 100);
	return sl2;
}

void forchildren::output() {
	int a = 0;
	printf("\n���������� � ������:");
	a = this->sale(30);
	printf("\n���� � ������ ������(30%): %d", a);
	printf("\n����� ����������: %d");
	cout << this->punkt << endl;
	printf("\n����� �����������: %d:%d", hours, minutes);
	printf("\n���������� � ��������: ");
	cout << this->passengerticket << "\n";
}


void foradult::input() //����� �����
{
	
	do {
		printf("\n\n������� ���� ������: ");
		while (scanf("%d", &sum) != 1) {
			while (getchar() != '\n');
			printf("������. ������� �����: ");
		}
		printf("\n\n������� ����� ����������: ");
		cin >> punkt;
		while (getchar() != '\n');
		printf("\n\n������� ����� �����������: ");
		printf("\n\n������� ����: ");
		while (scanf("%d", &hours) != 1) {
			while (getchar() != '\n');
			printf("������. ������� �����: ");
		}
		printf("\n\n������� ������: ");
		while (scanf("%d", &minutes) != 1) {
			while (getchar() != '\n');
			printf("������. ������� �����: ");
		}
		printf("\n\n������� ���������� � ���������:");
		passengerticket.input();
	} while (passengerticket.getAge() < 12);
}

foradult::foradult(int sum, std::string punkt, int hours, int minutes, passenger passengerticket) //����� ��������
{
	int f = 0;
	f = passengerticket.getAge();
	if (f > 12) {
		if (sum < 0) {
			this->sum = 0;
		}
		else {
			this->sum = sum;
		}
		for (int i = 0; i <= punkt.size(); i++) {
			if (punkt[i] == '\0') {
				this->punkt = punkt;
			}
			else {
				this->punkt = "-";
			}
		}
		if (hours < 0 || hours > 23) {
			this->hours = 0;
		}
		else {
			this->hours = hours;
		}
		if (minutes < 0 || minutes > 59) {
			this->minutes = 0;
		}
		else {
			this->minutes = minutes;
		}
		this->passengerticket = passengerticket;
	}
	else {
		printf("\n������� ��������� ������ 12! ��� ������ ���� ������� �����!");
	}
}

foradult::foradult() {}; //����������� ��� ����������

foradult::foradult(int value) {
	this->sum = value;
}

int foradult::sale(int sl1) //����� ������� ���� � ������ ������
{
	int sl2 = 0;
	sl2 = this->sum - (this->sum * sl1 / 100);
	return sl2;
}

void foradult::output() {
	printf("\n����������:");
	printf("\n����: %d", this->sum);
	printf("\n�����: %d");
	cout << this->punkt << endl;
	printf("\n�����: %d:%d", hours, minutes);
	printf("\n���������� � �������: ");
	cout << this->passengerticket << "\n";
}
