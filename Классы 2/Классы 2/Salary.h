#include <iostream>
#include <string>
using namespace std;
class salary
{
	string name;
	double oklad;
	int premyia;
public:
	salary(); // ����������� ��� ����������
	salary(string, double, int); // ����������� � �����������
	salary(const salary&); // ����������� �����������
	~salary(); // ����������
	string input_name(); // ��������
	void show_name(string); // �����������
	double input_oklad();
	void show_oklad(double);
	int input_premyia();
	void show_premyia(int);
	void show(); 
};