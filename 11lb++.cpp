// 10lb++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "locale.h"
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include "date.h"
#include "human1.h"


#define _CRT_SECURE_NO_WARNINGS

int main()
{
			SetConsoleOutputCP(1251);
			SetConsoleCP(1251);

			date data[2];

			date data1[3][2];

			for (int i = 0; i < 2; i++) {

				data[i] = date(01, 11, 2001);

				data[i].print();
				printf("\n");
			}

			for (int i = 0; i < 3; i++) {

				for (int j = 0; j < 2; j++) {

					data1[i][j] = date(15, 8, 2001);

					data1[i][j].print();

					printf(" ");

				}

			}
		};
	