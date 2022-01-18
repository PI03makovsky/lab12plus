#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "date.h"
#include <stdlib.h>

date::date(int day, int month, int year) {

			this->day = day;
			this->month = month;
			this->year = year;
}

void date::init(int d, int m, int y) { //Метод создания

	day = d;

	month = m;

	year = y;

}

void date::enter() { //Метод ввода с 

	int enter;

	do {

		printf("\nВведите день: ");

		scanf("%d", &enter);

		while (getchar() != '\n');

		try {

			if (enter < 1 || enter > 31) {

				throw - 1;

			}

		}

		catch (...) {

			printf("\nОшибка ввода. Повторите ввод.");

			enter = -1;

		}

	} while (enter == -1);

	this->day = enter;

	do {

		printf("\nВведите месяц: ");

		scanf("%d", &enter);

		while (getchar() != '\n');

		try {

			if (enter < 1 || enter > 12) {

				throw - 1;

			}

		}

		catch (...) {

			printf("\nОшибка ввода. Повторите ввод.");

			enter = -1;

		}

	} while (enter == -1);

	this->month = enter;

	do {

		printf("\nВведите год: ");

		scanf("%d", &enter);

		while (getchar() != '\n');

		try {

			if (enter < 1 || enter > 2021) {

				throw - 1;

			}

		}

		catch (...) {

			printf("\nОшибка ввода. Повторите ввод.");

			enter = -1;

		}

	} while (enter == -1);

	this->year = enter;

}

   void date::print() {

	printf("%d %d %d", day, month, year);

}

int date::difDate(date date1) { //Метод рассчета дней между датами

	int sum, sum1;

	if (this->month < 3) {

		this->year--, this->month += 12;

	}

	sum = 365 * this->year + this->year / 4 - this->year / 100 + this->year / 400 + (153 * this->month - 457) / 5 + this->day - 306;

	if (date1.month < 3) {

		date1.year--, date1.month += 12;

	}

	sum1 = 365 * date1.year + date1.year / 4 - date1.year / 100 + date1.year / 400 + (153 * date1.month - 457) / 5 + date1.day - 306;

	if (sum < sum1) {

		printf("Ошибка. Вторая дата больше первой.");

	}

	else {

		return sum - sum1;

	}

}