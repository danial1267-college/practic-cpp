#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Hi guys! Это моя 4 праткическая работа. Я очень старался и заслужил 5\n";
	float x, z;
	int i = 1;

	for (x = 0; x <= 1.5; i++) {
		z = (1 - x + sin(x) - log(1 + x));

		x = x + .1;

		cout << "Z" << i << " = " << z << "\n";
	}

	cout << "Цикл выполнился " << i << " раз\nНа этом моя практическая работа была окончена, спасибо за внимание!";

	return 0;
	system("pause");
}

