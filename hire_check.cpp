#include <iostream>
#include <string>
using namespace std;

int main()

{
 	
 	int age;
 	bool drivelicense;
 	
 	cout << "please enter age?" << endl;
 	cin >> age;
 	
 	cout << "please enter drive license?" << endl;
 	cin >> drivelicense;

 			
 	if (age > 21 && drivelicense == true)
 {
 	
 	cout << "hired" << endl;
 	
 
}	
 else 
{ 
 
 		cout << "rejected" << endl;
 }		
	return 0;
	
}