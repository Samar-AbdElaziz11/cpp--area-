#include <iostream>
#include <cmath>
using namespace std;

double rectangleFunction()
{
    double a, d;
    cout << "please enter side a: ";
    cin >> a;
    
    cout << "please enter diagonal d: ";
    cin >> d;
    
    return a * sqrt(d * d - a * a);
}

double circleMyFunction()
{
    double r;
    cout << "please enter r: ";
    cin >> r;
    
    const double PI = 3.14;
    return PI * r * r;
}

double diameterMyFunction()
{
    double D;
    cout << "please enter D: ";
    cin >> D;
    
    const double PI = 3.14;
    return (PI * D * D) / 4;
}

int main()
{
    cout << "Rectangle Area: " << rectangleFunction() << endl;
    cout << "Circle Area (by r): " << circleMyFunction() << endl;
    cout << "Circle Area (by D): " << diameterMyFunction() << endl;
    
    return 0;
}