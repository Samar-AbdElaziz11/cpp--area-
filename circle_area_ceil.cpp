#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	
	 double r;
	 
	 cout << "please enter r?" << endl;
	 cin >> r;
	 
	 const float PI = 3.14159;
	 
	 double Area = PI *  pow( r, 2);
	 double Areaceil = ceil ( Area);
	 
	 cout << Area << endl;
	 cout << Areaceil << endl;
	 return 0;
	 
}