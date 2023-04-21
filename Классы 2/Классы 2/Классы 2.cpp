#include "Salary.h"
#include <iostream>
#include <string>
using namespace std;
salary make_salary()
{
	setlocale(LC_ALL, "ru");
	string name1;
	double oklad1, prozent1;
	int premyia1;
	cout << "Введите ФИО: ";
	getline(cin, name1);
	getline(cin, name1);
	cout << "Введите размер оклада: ";
	cin >> oklad1;
	cout << "Введите процент от оклада, по которому будет рассчитываться премия: ";
	cin >> prozent1;
	premyia1 = oklad1 * (prozent1 / 100);
	salary person_1(name1, oklad1, premyia1);
	return person_1;
}
void print_salary(salary person_1)
{
	person_1.show();
}
int main()
{
	setlocale(LC_ALL, "ru");
	// Конструктор без параметров
	salary p1; 
	p1.show();
	cout << "___________________________________________________" << endl;
	// Конструктор с параметрами
	string name;
	double oklad, prozent;
	cout << "Введите ФИО: ";
	getline(cin, name);
	cout << "Введите размер оклада: ";
	cin >> oklad;
	cout << "Введите процент от оклада, по которому будет рассчитываться премия: ";
	cin >> prozent;
	int premyia = oklad * (prozent / 100);
	salary p2(name, oklad, premyia);
	p2.show();
	cout << "___________________________________________________" << endl;
	// Конструктор копирования, задающийся явно
	salary p3 = p2;
	p3.show();
	cout << "___________________________________________________" << endl;
	// Конструктор копирования, где объект задаётся в качестве параметра функции
	string name1;
	double oklad1, prozent1;
	cout << "Введите ФИО: ";
	getline(cin, name1);
	getline(cin, name1);
	cout << "Введите размер оклада: ";
	cin >> oklad1;
	cout << "Введите процент от оклада, по которому будет рассчитываться премия: ";
	cin >> prozent1;
	int premyia1 = oklad1 * (prozent1 / 100);
	p3.show_name(name1);
	p3.show_oklad(oklad1);
	p3.show_premyia(premyia1);
	print_salary(p3);
	cout << "___________________________________________________" << endl;
	// Конструктор копирования, где функция возвращает объект
	p1 = make_salary();
	p1.show();
	cout << "___________________________________________________" << endl;
	return 0;
}