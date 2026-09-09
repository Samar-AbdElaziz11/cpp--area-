#include <iostream>
using namespace std;

int main()

{
	
	
	long long totalseconds;
	
	cout << "enter total seconds?" << endl;
	cin >> totalseconds;
	
	const int secondsperday = 24 * 60 * 60;
	const int secondsperhour = 60 * 60;
	const int secondsperminute= 60;
	
	int numberofdays = totalseconds / secondsperday;
	int remainder =totalseconds % secondsperday;
	
	int numberofhours = remainder / secondsperhour;
	remainder = remainder %secondsperhour;
	
	int numberofminutes = remainder / secondsperminute;
	remainder = remainder %secondsperminute;
	
	int numberofseconds = remainder;
	
	
	cout << numberofdays<< endl;
	cout << numberofhours << endl;
	cout << numberofminutes << endl;
	cout << numberofseconds << endl;
	
	
	return 0;
	
}