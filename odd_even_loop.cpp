#include <iostream>
#include <string>
using namespace std;

void print_sum_odd_num()

{
	cout << "odd numbers from 1 to 10" << endl;
	for ( int i = 1; i <=10; i = i+2)
	cout << i << endl;
}

void print_sum_even_num()
{
	cout << "even numbers from 0 to 10" << endl;
	for ( int i = 0; i <= 10; i = i+2)
	cout << i << endl;
}

int main()
{
			
	print_sum_odd_num();
	print_sum_even_num();
			
		return 0;
		
		
	}