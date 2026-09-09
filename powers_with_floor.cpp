#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double number;
    
    cout << "please enter number? " << endl;
    cin >> number;
    
    double square = floor(pow(number, 2));
    double cube = floor(pow(number, 3));
    double power4 = floor(pow(number, 4));
    
    cout << "number² = " << square << endl;
    cout << "number³ = " << cube << endl;
    cout << "number⁴ = " << power4 << endl;
    
    return 0;
}