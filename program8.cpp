#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "tenant.h" 
#include "program.h"
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cstdio>
//#pragma comment(lib, "libname.lib")//
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	printf("��������������� �� �����: ");
	tenant Tenant("��������", "���������", "������������"); // ��� �������������� �� �����
	cout << tenant::GetCount() << endl; // ����� ���-�� ���������������, �����-� �� ������� �����
	Coppy();
	ArrayPlayer();
	ArrayValue();
}






player& get_player_in_array(player array[], int index)
{
	return array[index];
}

void ArrayPlayer() {
	int size = 0;
	int index = 0;
	printf("\n ������� ������� �������? ");
	while (scanf("%d", &size) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	player* Players = new player[size];
	Players->player_array(size);
	for (int i = 0; i < size; i++) {
		Players[i].enter();
	}
	printf("\n\n  ��� �������� ������: ");
	for (int i = 0; i < size; i++) {
		Players[i].print();
	}
	printf("\n\n  ����� ������� �������������: ");
	while (scanf("%d", &index) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	index--;
	get_player_in_array(Players, index).enter();
	printf("\n\n  ���������: ");
	Players[index].print();
	printf("\n\n");
	delete[] Players;
}

void Coppy() {
	player* Player_1 = new player;
	Player_1->enter();
	player Player_2 = Player_1->get_player();
	printf("\n\n\n ����� 1:");
	Player_1->print();
	printf("\n\n\n ����� 2:");
	Player_2.print();

	delete Player_1;
}
int* DateArrayValue(date& Date) {
	static int mas[4];
	mas[0] = Date.day;
	mas[1] = Date.month;
	mas[2] = Date.year;

	return mas;
}
void ArrayValue() {

	date Date = date();

	Date.enter();
	int* mas = DateArrayValue(Date);

	printf("\n �������� ���� � ������: %d.%d.%d", mas[0], mas[1], mas[2]);
}
