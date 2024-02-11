// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
// #include <typeinfo>
using namespace std;

/*
bool intCheck(string sequance) {
    for (int i = 0; i < sequance.length(); i++) 
        if (isdigit(sequance[i]) == false)
            return false;
    
    return true;
}
*/

int main()
{
    locale::global(locale("Russian_Russia.1251"));
    double x, a, triangleArea, squareArea;



    while (true){
        try {

            cout << "Введите сторону квадрата: ";
            cin >> x;

            if ( (x <= 0)) 
                throw "Нужно ввести натуральное число(N) ";
                     

            triangleArea = (1.0 / 2.0) * x * x;
            squareArea = x * x;
            cout << "Площадь квадрата с длиной " << x << " : " << squareArea << endl;
            cout << "Площадь вложенного треугольника: " << triangleArea << endl;

            cout << "Площадь равна " << squareArea - triangleArea;
            break;
        }
        catch (...) {
            cout << "Ошибка ввода! Нужно ввести натуральное число(N)." << endl;

            cin.clear();

            while (cin.get() != '\n');

            continue;
        }
    }
}