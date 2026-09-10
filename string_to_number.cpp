#include <iostream>
#include <string>
using namespace std;

int main()

{
	
	string str1 = "43.22";
	
	double num_double = stod (str1);
	
	float num_float = stof (str1);
	
	int num_int = stoi (str1);
	
	
	cout << "num_double = " << num_double << endl;
	cout << "num_float = " << num_float << endl;
	cout << "num_int = " << num_int << endl;
	
}