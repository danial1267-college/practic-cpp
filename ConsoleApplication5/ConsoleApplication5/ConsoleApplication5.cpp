#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	//создание переменных
	const int n = 3;

	int arr[n][n];

	//ввод размера массива
	//cout << "Введите количество строк и столбцов в массиве\n";

	//создание и заполнение массива рандомными числами
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand();
		}
	}

	//выводим массив на экран
	cout << "Матрица A с размерами " << n << "X" << n << "n:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
	}

	int sum = 0, count = 0;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (arr[i][j] > 0) {
				sum += arr[i][j];
				count++;
			}
		}
	}

	cout << "Сумма положительных элементов над главной диагональю равна " << sum << endl;
	cout << "Количество положительных элементов над главной диагональю равно " << count << endl;


	//очистка памяти массива
	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
	system("pause");
}