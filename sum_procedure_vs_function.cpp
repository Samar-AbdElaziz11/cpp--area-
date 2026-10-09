#include <iostream>
#include <string>
using namespace std;

void mysumprocedure ()

{
	int num1, num2;
	
	cout << "please enter the first num1" << endl;
	cin >> num1;
	
	cout << "please enter the second num2" << endl;
	cin >> num2;
	
	cout << num1 + num2 << endl;
	
}


	int mysumfunction ()
{	
	 int num1, num2;
	 
	cout << "please enter the num1" << endl;
	cin >> num1;
	
	cout << "please enter the second num2" << endl;
	cin >> num2;
	
	return num1 + num2;
	
}

	
	int main ()

{
	 mysumprocedure ();
	 
	 cout << mysumfunction () << endl;
	 
	 return 0;
	 
}