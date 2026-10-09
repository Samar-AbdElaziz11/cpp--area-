#include <iostream>
#include <string>
using namespace std;

void durationinseconds()
{
	
	double days, hours, minutes, seconds;
	
	cout << "please enter number of days" << endl;
	cin >> days;
	
	cout << "please enter number of hours" << endl;
	cin >> hours;
	
	cout << "please enter number of minutes" << endl;
	cin >> minutes;
	
	cout << "please enter number of seconds" << endl;
	cin >> seconds;
	
	double totalseconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + (seconds);
	
	cout << "duration in seconds" << totalseconds << endl;
	
}
int main()

{
	durationinseconds();
	
	
	return 0;
	
	
}