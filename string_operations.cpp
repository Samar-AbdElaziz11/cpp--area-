#include <iostream>
#include <string>
using namespace std;

int main()

{
	
	string string1 , string2 , string3;
	
	cout << "please enter string1" << endl;
	getline (cin, string1);
	
	cout << " please enter string2" << endl;
	cin >> string2;
	
	cout << "please enter string3" << endl;
	cin >> string3;
	
	cout <<"\n ******************************* \n";
	
	cout << " the length of string1 is" << string1.length () << endl;
	
	cout << " concatenating string2 and string3 =" << string2 + string3 << endl;
	
	int Result = stoi (string2) + stoi (string3);
	
	cout << string2 <<" + "<< string3 << " = " << Result << endl;
	
	return 0;
	
	
}