#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	
	 double a, b, c;
	 
	 cout << "please enter a?" << endl;
	 cin >> a;
	 
	 cout << " please enter b?" << endl;
	 cin >> b;
	 
	 cout << " please enter c?" << endl;
	 cin >> c;
	 
	 const float PI = 3.14159;
	 
	 double p = ( a + b + c ) / 2;
	 
	 double T = ( a * b * c ) / ( 4 * sqrt (p * ( p - a ) * ( p - b) * ( p - c)));
	 double Area = PI * pow (T, 2);
	 
	 double Arearound= round ( Area);
	 cout << Area << endl;
	 cout << Arearound<< endl;
	 return 0;
	 
}