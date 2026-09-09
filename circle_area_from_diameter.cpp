#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	
	 double A;
	 
	 cout << "please enter A?" << endl;
	 cin >> A;
	 
	 const float PI = 3.14159;
	 
	 double Area = PI *  pow ( A, 2) / 4;
	 double Areaceil = ceil ( Area);
	 
	 cout << Area << endl;
	 cout << Areaceil << endl;
	 return 0;
	 
}