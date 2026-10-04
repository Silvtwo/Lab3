// Lab_03_1.cpp
// Заболотний Олег 
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 9
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x;
	double y;
	double A;
	double B;

	cout << "x="; cin >> x;

	A = 2 * pow(fabs(x), 3);

	// спосіб розгалуження в скороченні формі
	if (x <= -0.1)
		B = 5 * cos(18 * x);
	if (0.1 < x && 1.2 > x)
		B = atan((x + 2) / 5);
	if (x >= 1.2)
		B = 1 / (tan(x + 18));

	y = A + B; 

	cout << "\n1) y = " << y;

	if (x <= -0.1)
		B = 5 * cos(18 * x);
	else
		if(0.1 < x && 1.2 > x)
			B = atan((x + 2) / 5);
		else
			B = 1 / (tan(x + 18));	
	y = A + B;

	cout << "\n2) y = " << y;




}