#include <iostream>
using namespace std;

int main()

{
	
	
	int pennies , nickels , Dimes , Querters, Dollars;
	
	cout << " enter pennies?" << endl;
	cin >> pennies;
	
	cout <<" enter nickels?" << endl;
	cin >> nickels;
	
	cout << " enter Dimes?" << endl;
	cin >> Dimes;
	
	cout << " enter Querters?" << endl;
	cin >> Querters;
	
	cout << " enter Dollars?" << endl;
	cin >> Dollars;
	
	
	int totalpennies = pennies * 1 + nickels * 5 + Dimes * 10 + Querters * 25 + Dollars * 100;
	float totalDollars = totalpennies / 100.0;
	
	cout << totalpennies << endl;
	cout << totalDollars << endl;


	
	
	
	return 0;
	
}