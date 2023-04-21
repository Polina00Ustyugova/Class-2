#include <iostream>
#include <string>
using namespace std;
class salary
{
	string name;
	double oklad;
	int premyia;
public:
	salary(); // Конструктор без параметров
	salary(string, double, int); // Конструктор с параметрами
	salary(const salary&); // Конструктор копирования
	~salary(); // Деструктор
	string input_name(); // Селектор
	void show_name(string); // Модификатор
	double input_oklad();
	void show_oklad(double);
	int input_premyia();
	void show_premyia(int);
	void show(); 
};