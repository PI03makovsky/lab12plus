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
	setlocale(LC_ALL, "Rus");
	passenger pass = passenger();
	human Human = human();
	pass.input();
	Human = pass;
	std::cout << Human << "\n";


}
