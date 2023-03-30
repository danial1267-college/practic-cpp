#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float size;
	float height;
	float wight;
	float price;
	float count;
	float sum;
	float height_wall = 2;
	float height_oboi = 6;
	float b;

	cout << "Ведите ширину стен\n";
	cin >> size;
	cout << "Ведите стоимость обой\n";
	cin >> price;
	cout << "Ведите ширину обой\n";
	cin >> wight;
	cout << "Ведите длину обой\n";
	cin >> height;
	
	price = height * 2;
	count = wight + 4;
	cout << "Цена = " << price << "\n";
	cout << "Количество обой = " << count << "\n";

}