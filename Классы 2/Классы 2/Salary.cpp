#include "Salary.h"
#include <iostream>
#include <string>
using namespace std;
salary::salary()
{
	setlocale(LC_ALL, "ru");
	name = "";
	oklad = 0;
	premyia = 0;
	cout << "������� ����������� ��� ����������" << endl;
}
salary::salary(string name1, double oklad1, int premyia1)
{
	setlocale(LC_ALL, "ru");
	name = name1;
	oklad = oklad1;
	premyia = premyia1;
	cout << "������� ����������� � �����������" << endl;
}
salary::salary(const salary& person)
{
	setlocale(LC_ALL, "ru");
	name = person.name;
	oklad = person.oklad;
	premyia = person.premyia;
	cout << "������� ����������� �����������" << endl;
}
salary::~salary()
{
	setlocale(LC_ALL, "ru");
	cout << "������� ����������" << endl;
}
string salary::input_name()
{
	return name;
}
double salary::input_oklad()
{
	return oklad;
}
int salary::input_premyia()
{
	return premyia;
}
void salary::show_name(string n)
{
	name = n;
}
void salary::show_oklad(double ok)
{
	oklad = ok;
}
void salary::show_premyia(int p)
{
	premyia = p;
}
void salary::show()
{
	setlocale(LC_ALL, "ru");
	cout << "���: " << name << endl;
	cout << "�����: " << oklad << endl;
	cout << "������: " << premyia << endl;
}