#include <iostream>
using namespace std;

int main()
{
    float number1, number2;
    char operationtype;
    
    cout << "please enter number1" << endl;
    cin >> number1;
    
    cout << "please enter number2" << endl;
    cin >> number2;
    
    cout << "please enter operation type (+ - * /)" << endl;
    cin >> operationtype;
    
    switch (operationtype)
    {
        case '+':
            cout << number1 + number2 << endl;
            break;
        case '-':
            cout << number1 - number2 << endl;
            break;
        case '*':
            cout << number1 * number2 << endl;
            break;
        case '/':
            if (number2 == 0)
                cout << "Cannot divide by zero!" << endl;
            else
                cout << number1 / number2 << endl;
            break;
        default:
            cout << "wrong operation" << endl;
    }		
    return 0;
}