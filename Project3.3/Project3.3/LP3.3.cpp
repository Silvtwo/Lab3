// Lab_03_3.cpp
// Заболотний Олег Віталійович
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 9
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -7)
		y = 0;
	else
		if (x >= -7 && x < -3)
			y = x+7;
		else
			if (x >= -3 && x <= -2)
				y = 4;
			else
				if (x > -2 && x <= 2)
					y = pow(x,2);
				else
					if (x > 2 && x < 4)
						y = -2*x+8;
					else
						if (x >= 4)
							y = 0;
	cout << "\ny = " << y;
}