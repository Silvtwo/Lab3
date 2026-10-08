// Lab_03_2.cpp// < прізвище, ім’я автора >
// // Лабораторна робота № 3.2
/// Розгалуження, задане формулою: функція з параметрами.
// Варіант 9
#include <iostream>
#include <cmath>
using namespace std;
int main() {
double x; // вхідний аргумент	
double a; // вхідний параметр
double b; // вхідний параметр
double c; // вхідний параметр
double F; // результат виразу
cout << "a="; cin >> a;
cout << "b="; cin >> b;
cout << "c="; cin >> c;
cout << "x="; cin >> x;

// спосіб розгалуження в скороченні формі
if (a < 0 && x != 0)
	F = a * pow(x, 2) + pow(b, 2) * x;
if (a > 0 && x == 0)
F = x - (a / (x - c));
if (!(a < 0 && x != 0) && !(a > 0 && x == 0))
F = 1 + (x / c);
cout << "F=" << F;

// спосіб розгалуження в повній формі
if (a < 0 && x != 0)
	F = a * pow(x, 2) + pow(b, 2) * x;
else
if (a > 0 && x == 0)
F = x - (a / (x - c));
else
F = 1 + (x / c);
cout << "\nF=" << F;
}
