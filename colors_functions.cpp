#include <iostream>
#include <string>
using namespace std;

enum encolour { red=1, pink=2, black=3, blue=4, green=5 };

void showencolourmenue()
{
	cout << "***************************\n";
	cout << "please enter the number of your colour" << endl;
	cout << "(1) red" << endl;
	cout << "(2) pink" << endl;
	cout << "(3) black" << endl;
	cout << "(4) blue" <<endl;
	cout << "(5) green" << endl;
	cout << "your choic" << endl;
}
encolour readcolour()
{
	encolour colour;
	colour = encolour :: pink;
	int x;
	cin >> x;
	return (encolour)x;
}

string getencolourname(encolour colour)
{
	 switch (colour)
{	
		case encolour :: red:
		return "your colour is red";
		break;
		
		case encolour :: pink:
		return "your colour is pink";
		break;
		
		case encolour :: black:
		return "your colour is black";
		break;
		
		case encolour :: blue:
		return "your colour is blue";
		break;
		
		case encolour :: green:
		return "your colour is green";
		break;

		default:
		return  "wroing colour";
}}
	int main()
	{
		showencolourmenue();
		cout <<"colour is" << getencolourname (readcolour()) << endl;
		
		return 0;
		
	}