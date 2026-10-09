#include <iostream>
#include <string>
using namespace std;

void print_1_to_10()
{
		cout << "from 1 to 10\n";
		
		for (int i = 1; i <=10; i++)
		
		cout << i << endl;
}

void print_10_to_1()

{
		cout << "from 10 to 1\n";
		
		for (int i = 10; i >=1; i--)
		cout << i << endl;
}

int main()
{
		print_1_to_10();
		print_10_to_1();
		
		return 0;
		
		
	}