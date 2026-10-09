#include <iostream>
#include <string>
using namespace std;

int main()

{
 	double number1, number2;
 	char operationtype;
 	
 	cout << "please enter your number1" << endl;
 	cin >> number1;
 	
 	cout << "please enter your number2" << endl;
 	cin >> number2;
 	
 	cout << "please enter your operation type" << endl;
 	cin >> operationtype;
 	
if (operationtype == '+') 
{
 	cout << number1 + number2 << endl;
 }
 
else if (operationtype == '-')
{
 	cout << number1 - number2 << endl;
}

else if (operationtype == '*') 
{
 	cout << number1 * number2 << endl;
}

else if (operationtype == '/')
{
 	 cout << number1 / number2 << endl;
 }
 
 	
else 
{
 	cout << "wrong operation type" << endl;
}
 	
	
	return 0;
	
}