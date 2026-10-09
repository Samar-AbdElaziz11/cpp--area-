#include <iostream>
#include <string>
using namespace std;

int main()

{
 	
 	double totalsales;
 	
 	cout << "please enter your totalsales" << endl;
 	cin >> totalsales;
 	
 	if (totalsales >= 1000000)
{
	cout << totalsales * 0.01 << endl;
}

else if (totalsales >= 500000)
{
	cout << totalsales * 0.02 << endl;
}

else if (totalsales >= 100000)
{
	cout << totalsales * 0.03 << endl;
}

else if (totalsales >= 50000)
{
	cout << totalsales * 0.05 << endl;
}


else
{
 	cout <<0 << endl;
 	
 	
 }		
	return 0;
	
}