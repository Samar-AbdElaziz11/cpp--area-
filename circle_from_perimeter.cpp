#include <iostream>
using namespace std;

int main()

{
	
	
	float L;
	
	cout << "enter L?" << endl;
	cin >> L;
	
	const float PI = 3.14159;
	
	float Area = (L * L) / (PI * 4);
	
	cout << Area << endl;
	
	return 0;
	
}