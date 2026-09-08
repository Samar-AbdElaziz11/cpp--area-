#include <iostream>
using namespace std;

int main()

{
	
	
	float a , b;
	
	cout << "enter a?" << endl;
	cin >> a;
	
	cout << " enter b?" << endl;
	cin >> b;
	
	const float PI = 3.14159;
	
	float Area = ( PI * b * b / 4 ) *( ( 2 * a - b ) / ( 2 * a + b ) );
	
	cout << Area << endl;
	
	return 0;
	
}