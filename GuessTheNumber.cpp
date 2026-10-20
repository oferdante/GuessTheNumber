#include <iostream>

void Guess_the_number() {
	int a, b, attempt = 0;
	bool again = true;

	while (again) {
		a = rand() % 100 + 1;
		std::cout << "Угадай число (1-100): ";
		std::cin >> b;

		if (b == a) {
			std::cout << "Ты угадал!" << '\n';
			++attempt;
			std::cout << "Количество попыток: " << attempt << '\n';
		}
		else {
			std::cout << "Ты не угадал!" << '\n';

			if (b > a) {
				std::cout << "Загаданное число меньше" << '\n';
			}

			if (b < a) {
				std::cout << "Загаданное число больше" << '\n';
			}

			++attempt;
			std::cout << "Количество попыток: " << attempt << '\n';
		}

		std::cout << '\n';
		std::cout << "Хочешь сыграть еще раз? (0 - нет, 1 - да): ";
		std::cin >> again;
	}
}

int main() {
	setlocale(LC_ALL, ".UTF8");
	srand(time(NULL));

	Guess_the_number();

	return 0;
}