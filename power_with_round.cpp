#include <iostream>
#include <cmath>
using namespace std;

int main()

{
	double number, m;
	
	cout << " please enter number?";
	cin >> number;
	
	cout << " please enter m?";
	cin >> m;
	
	double result = round(pow( number, m));
	
	cout << result << endl;
	
	return 0;
	
}