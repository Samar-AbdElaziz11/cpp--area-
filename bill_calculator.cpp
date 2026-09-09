#include <iostream>
using namespace std;

int main()

{
	
	
	double Billvalue;
	
	
	cout << " enter Billvalue ?" << endl;
	cin >> Billvalue;
	
	double totalBill1 = Billvalue * 1.1;
	double totalBill2 = totalBill1 * 1.16;
	
	cout << totalBill1 << endl;
	cout << totalBill2 << endl;

	
	
	
	return 0;
	
}