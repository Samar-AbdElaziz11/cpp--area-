#include <iostream>
#include <string>
using namespace std;

int main()

{
	enum encolour {red=1, pink=2, black=3, yellow=4, brown=5, other=6 };
	
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
	  
	  if (colour == encolour :: red)
	  {
	   cout << "your colour is red"<< endl;
	  }
	   else if (colour == encolour :: pink)
	   {
	   cout << "your color is pink" << endl;
	   }
	   else if (colour == encolour :: black)
	   {
	   cout << "your colour is black" << endl;
	   }
	   else if (colour == encolour :: yellow)
	   {
	   cout << "your colour is yellow" << endl;
	   }
	   else if (colour == encolour :: brown)
	   {
	   cout << "your colour is brown" << endl;
	   }
	   else 
	   {
	   	cout << "you colour is other" << endl;
	   	
	   }
	   return 0;
	   
}