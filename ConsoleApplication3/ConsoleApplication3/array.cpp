#include <iostream>

using namespace std;

int main() {
	cout << "Hi guys! ��� ��� 4 ������������ ������. � ����� �������� � �������� 5\n";
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

	cout << "����� ���� ������������� ���������� ����� " << sum << "\n� �� ���������� ����� " << c;

	return 0;
	system("pause");
}