#include <iostream>
#include <string>
using namespace std;

int main()

{
	
	
	int month;
	cout << "please enter your month" << endl;
	cin >> month;
	
	
	switch (month)
	
	{
		case 1:
		cout << "January"<< endl;
		break;
		
		case 2:
		cout << "february"<< endl;
		break;
		
		case 3:
		cout << "march" << endl;
		break;
		
		case 4:
		cout <<"April" << endl;
		break;
		
		case 5:
		cout << "may" << endl;
		break;
		
		case 6:
		cout << "June" << endl;
		break;
		
		 case 7:
		 cout << "July" << endl;
		 break;
		 
		 case 8:
		 cout << "August" << endl;
		 break;
		 
		 case 9:
		 cout << "septemper" << endl;
		 break;
		 
		 case 10:
		 cout << "october" << endl;
		 break;
		 
		 case 11:
		 cout << "november" << endl;
		 break;
		 
		 case 12:
		 cout << "december" << endl;
		 break;
		
		default:
		cout << "wrong month" << endl;
}		
    return 0;
 


}