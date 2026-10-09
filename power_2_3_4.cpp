#include <iostream>
#include <string>
using namespace std;

void powerof234()
{
	int num;
	
	cout <<"please enter num" << endl;
	cin >> num;
	
	int a=  num * num;
	int b= num * num * num;
	int c=  num * num * num * num;
	
	cout << "power of 2= " << a << endl;
	cout << "power of 3= " << b << endl;
	cout << "power of 4= " << c << endl;
	
}
	
int main()
{
	
	powerof234();
	
	return 0;
	
	
}