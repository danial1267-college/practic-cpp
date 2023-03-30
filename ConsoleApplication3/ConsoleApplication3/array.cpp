#include <iostream>

using namespace std;

int main() {
	cout << "Hi guys! Это моя 4 праткическая работа. Я очень старался и заслужил 5\n";
	int n, i, j, a, k, sum = 0, c;
	
	cin >> n;
	int arr[n][n];

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << "[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> arr[i][j];
		}
	}

	for (a = 0; a < n * n; a++) {
		i = 0;
		j = 0;
		i++;
		j++;
		if (arr[i][j] > 0) {
			c = 0;
			c++;
			sum = arr[i][j] + sum;
		};
	}

	cout << "Сумма всех положительных эелементов равна " << sum << "\nА их количество равно " << c;

	return 0;
	system("pause");
}