#include <iostream>
using namespace std;

int main()

{
	
	
	float A;
	
	cout << "enter A?" << endl;
	cin >> A;
	
	const float PI = 3.14579;
	
	float Area = PI * A * A / 4;
	
	cout << Area << endl;
	
	return 0;
	
}