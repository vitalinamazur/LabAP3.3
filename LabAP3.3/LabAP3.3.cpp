// Lab_03_3.cpp
// <Мазур Віталіна>
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 19

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x; 
    double R; 
    double y; 

    cout << "Enter R: ";
    cin >> R;
    cout << "Enter x: ";
    cin >> x;

    if (x <= 0)
        y = x; 
    else
        if (x > 0 && x <= 1)
            y = R; 
        else 
            if (x > 1 && x <= 1 + 2 * R)
                y = sqrt(R * R - pow(x - (1 + R), 2)); 
            else 
                if (x > 1 + 2 * R && x <= 7)
                    y = 0; 
                else 
                    y = -(x - 7); 

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}