void date::enter() { //Метод ввода с try, catch, throw

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
