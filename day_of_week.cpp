#include <iostream>
#include <string>
using namespace std;

int main()

{
	int Day;
	
	cout << "please enter your Day"<< endl;
	cin >> Day;
	
	if (Day == 1)
	{

		cout << "sunday" << endl;
	}
	
	else if ( Day == 2)
	{
		 cout << "monday" << endl;
	}
	
	else if (Day == 3)
	{
		cout << "tuesday"<< endl;
	}
	
	else if (Day == 4)
	{
		cout << "wednesday" << endl;
	}
	
	else if (Day == 5)
	{
		   cout << "thursday" << endl;
	}
	
	else if (Day == 6)
	{
		  cout << "friday" << endl;
	}
	
	else if (Day == 7)
	{
		  cout << "saturday" << endl;
	}
	
	else
	{
		  cout << "wrong Day" << endl;
	}
	
	return 0;
	
	
}