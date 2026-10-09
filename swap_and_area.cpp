#include <iostream>
#include <string>

using namespace std;

int myswapfunction()

{
	int num1, num2;
	
	cout <<"please enter the first num1" << endl;
	cin >> num1;
	
	cout << "please enter the second num2" << endl;
	cin >> num2;
	
	
	int temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout << "after swap: num1 =" << num1 << ", num2 =" << num2 << endl;
	
	
}


int myareafunction()

{
	int a, b;
	
	cout << "please enter  a" << endl;
	cin >> a;
	
	cout << "please enter b" << endl;
	cin >> b;
	
	return a * b;
}

int main()

{
	myswapfunction();
	cout << myareafunction() << endl;
	 
	return 0;
	
}