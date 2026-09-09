#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	
	 double l;
	 
	 cout << "please enter l?" << endl;
	 cin >> l;
	 
	 const float PI = 3.14159;
	 
	 double Area = pow(l, 2) / (4 * PI);
	 double Areafloor= floor ( Area);
	 
	 cout << Area << endl;
	 cout << Areafloor << endl;
	 return 0;
	 
}