#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, r, s , t;

	cout << "Введите размер коробки 1A\n";
	cin >> a;

	cout << "Введите размер коробки 1B\n";
	cin >> b;

	cout << "Введите размер коробки 1C\n";
	cin >> c;

	cout << "Введите размер коробки 2R\n";
	cin >> r;

	cout << "Введите размер коробки 2S\n";
	cin >> s;

	cout << "Введите размер коробки 2T\n";
	cin >> t;

	if ((a == s || a == r || a == t ) && (b == s || b == r || b == t ))
	{

	};
}
