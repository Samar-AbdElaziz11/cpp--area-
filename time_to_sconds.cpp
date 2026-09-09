#include <iostream>
using namespace std;

int main()

{
	
	
	double days, hours, minutes, seconds;
	
	cout << " enter days?" << endl;
	cin >> days;
	
	cout << " enter hours ?" << endl;
	cin >> hours;
	
	cout << " enter minutes?" << endl;
	cin >> minutes;
	
	cout << " enter seconds?" << endl;
	cin >> seconds;
	
	

	double totalseconds = ( days * 24 * 60 *60 ) + ( hours * 60 * 60) + ( minutes * 60) + ( seconds);
	
	cout << totalseconds << endl;
	
	
	return 0;
	
}