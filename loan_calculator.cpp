#include <iostream>
using namespace std;

int main()

{
	
	
	int loanamount, monthlypayment;
	
	cout << " loanamount" << endl;
	cin >> loanamount;
	
	cout << "monthlypayment" << endl;
	cin >> monthlypayment;
	
		int totalmonths = loanamount / monthlypayment;
		
			cout << totalmonths << endl;	
	
	return 0;
	
}