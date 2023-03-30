#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int num, arr;
	cout << "Введите размер массива: ";
	cin >> num;

	int *p_darr = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> arr;
		p_darr[i] = arr;
		cout << "Значение массива " << i << " равно: " << p_darr[i] << endl;
	}
	delete[] p_darr;
	return 0;
}