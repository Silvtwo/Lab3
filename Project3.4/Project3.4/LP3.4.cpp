// Lab_03_4.cpp
// Заболотний Олег
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 9
#include <iostream>
using namespace std;

int main(){

	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі

	if (x>= 0 && (x * x) + (y * y) <= R*R && y >=(x - 1) * (x - 1) || x<=0 && y<= 0 && (x * x) + (y * y) <= R * R)


		cout << "yes";
	else
		cout << "\nno";
}
