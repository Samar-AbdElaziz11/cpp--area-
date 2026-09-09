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
	 
	 cout << Area << endl;
	 
	 return 0;
	 
}