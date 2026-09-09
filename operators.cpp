#include <iostream>
using namespace std;

int main()
{
    int A = 50, B = 50;
    
    cout << "Enter number A ? " << endl;
    cin >> A;

    cout << "Enter number B? " << endl;
    cin >> B;
    
    cout << "A == B : " << (A == B) << endl;
    cout << "A != B : " << (A != B) << endl;
    cout << "A > B  : " << (A > B) << endl;
    cout << "A < B  : " << (A < B) << endl;
    cout << "A >= B : " << (A >= B) << endl;
    cout << "A <= B : " << (A <= B) << endl;
    cout << "A % B  : " << (A % B) << endl;
    
    return 0;
}