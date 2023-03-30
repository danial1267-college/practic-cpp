#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "Hi guys! \n";

	int i, j, a, sum = 0, c = 0;
	int arr[2][2];

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << "Массив[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> arr[i][j];
			if (arr[i][j] > 0) {
				sum = sum + arr[i][j];
				++c;
			}
		}
	}

	cout << "Сумма всех положительных эелементов равна " << sum << "\nА их количество равно " << c << endl;

	return 0;
	system("pause");
}