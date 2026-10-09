#include <iostream>
#include <string>
using namespace std;

int main()

{
	enum encolour {red=1, pink=2, black=3, yellow=4, brown=5 };
	
	cout << "**************************\n";
    cout <<"please enter the number of your colour\n";
    cout << "(1) red\n";
	 cout << "(2) pink\n";
	 cout << "(3) black\n";
	 cout << "(4) yellow\n";
	  cout << "(5)brown\n";
	  cout << "choice your colour\n";
	  
	  int c;
	  encolour colour;
	  
	  cin >> c;
	  colour = (encolour) c;
	  
	  switch (colour)
	  {
	   case encolour :: red:
	   cout << "your colour is red"<< endl;
	  break;
	   case encolour :: pink:
	   cout << "your color is pink" << endl;
	   break;
	   
	   case encolour :: black:
	   cout << "your colour is black" << endl;
	   break;
	   
	   case encolour :: yellow:
	   cout << "your colour is yellow" << endl;
	   break;
	   
	   case encolour :: brown:
	   cout << "your colour is brown" << endl;
	   break;
	   
	   default:
	   
	   	cout << "you colour is other" << endl;
	   	
	   }
	   return 0;
	   
}