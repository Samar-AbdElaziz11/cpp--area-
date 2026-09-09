#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	
	 double a, d;
	 
	 cout << "please enter side a?" << endl;
	 cin >> a;
	 
	 cout << "please enter diagonal d?" << endl;
	 cin >> d;
	 
	 double Area = a * sqrt ( pow ( d, 2 ) - pow ( a, 2));
	 
	 cout << Area << endl;
	 
	 return 0;
	 
}