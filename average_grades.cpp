#include <iostream>
using namespace std;

int main()

{
	float grades[3];

	
	cout << "please enter grade1" << endl;
	cin >> grades[0];
	
	cout << "please enter grade2" << endl;
	cin >> grades[1];
	
	cout << "please enter grade3" << endl;
	cin >> grades[2];
	
	cout << "*****************************\n";
	
	float avg = ( grades[0] + grades[1] + grades[2]) /3;
	
	cout << "the averege of grades is" << avg << endl;
	
	return 0;
	
}