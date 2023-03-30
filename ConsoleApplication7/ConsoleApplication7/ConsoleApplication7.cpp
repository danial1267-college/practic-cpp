#include <iostream>
#include <vector>
#include <string>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	vector<string> students;

	string buffer = "";

	cout << "Вводите фамилии студентов. "
		<< "По окончание ввода введите пустую строку" << endl;

	do {
		getline(cin, buffer);
		if (buffer.size() > 0) {
			students.push_back(buffer);
		}
	} while (buffer != "");


	unsigned int vector_size = students.size();

	cout << "Ваш вектор." << endl;
	for (int i = 0; i < vector_size; i++) {
		cout << students[i] << endl;
	}

	return 0;
}