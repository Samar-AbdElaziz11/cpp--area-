#include <iostream>
using namespace std;

int main()

{
	
	
	double loanAmount, howmanymonths;
	
	cout << " loan Amount" << endl;
	cin >> loanAmount;
	
	cout << "how many months" << endl;
	cin >> howmanymonths;
	
		double monthlyinstallment = loanAmount / howmanymonths;
		
			cout << monthlyinstallment << endl;	
	
	return 0;
	
}