#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	
	 double a, b;
	 
	 cout << "please enter a?" << endl;
	 cin >> a;
	 
	 cout << " please enter b?" << endl;
	 cin >> b;
	 
	 const float PI = 3.14159;
	 
	 double Area = PI * ( pow ( b, 2) / 4) * ( (2 * a - b) / (2 * a + b));
	 double Areafloor= floor ( Area);
	 
	 cout << Area << endl;
	 cout << Areafloor << endl;
	 return 0;
	 
}