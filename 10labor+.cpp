void date::enter() { //����� ����� � try, catch, throw

	int enter;

	do {

		printf("\n������� ����: ");

		scanf("%d", &enter);

		while (getchar() != '\n');

		try {

			if (enter < 1 || enter > 31) {

				throw - 1;

			}

		}

		catch (...) {

			printf("\n������ �����. ��������� ����.");

			enter = -1;

		}

	} while (enter == -1);

	this->day = enter;

	do {

		printf("\n������� �����: ");

		scanf("%d", &enter);

		while (getchar() != '\n');

		try {

			if (enter < 1 || enter > 12) {

				throw - 1;

			}

		}

		catch (...) {

			printf("\n������ �����. ��������� ����.");

			enter = -1;

		}

	} while (enter == -1);

	this->month = enter;

	do {

		printf("\n������� ���: ");

		scanf("%d", &enter);

		while (getchar() != '\n');

		try {

			if (enter < 1 || enter > 2021) {

				throw - 1;

			}

		}

		catch (...) {

			printf("\n������ �����. ��������� ����.");

			enter = -1;

		}

	} while (enter == -1);

	this->year = enter;

}
