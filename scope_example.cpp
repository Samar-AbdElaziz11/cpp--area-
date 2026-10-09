#include <iostream>
#include <string>
using namespace std;

int x = 500;
int y = 300;

void myfunction()
{
	int x = 100;
	
	cout << "the value of x inside function is:" << x << endl;
	
}

int main()
{
	
	int x = 600;
	
	cout << "the local value of x inside main is:" << x << endl;
	myfunction();
	cout  << "the global value of x is:" << ::x << endl;
	cout << "the global value of y is:" << ::y << endl;
	
	return 0;
	
}