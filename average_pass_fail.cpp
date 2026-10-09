#include <iostream>
#include <string>
using namespace std;

int main()

{
 	
 	int mark1, mark2, mark3;
 	
 	cout << "please enter your mark1" << endl;
 	cin >> mark1;
 	
 	cout << "please enter your mark2" << endl;
 	cin >> mark2;
 	
 	cout << "please enter your mark3" << endl;
 	cin >> mark3;
 	
 	double avg =(mark1 + mark2 + mark3) / 3;
 	
 	cout << "average of 3 markes= " << avg << endl;
 	
 	if (avg >= 50)
{
 		cout << "pass" << endl;
}

else
{
 	cout << "fail" << endl;
 	
 	
 }		
	return 0;
	
}