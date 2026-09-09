#include <iostream>
using namespace std;

int main()

{
	
	bool result1 = ( 7 == 7 ) && ( 7 > 5);
	bool result2 = ( 7 == 7 ) && ( 7 < 5);
	bool result3 = ( 7 == 7) || ( 7 < 5);
	bool result4 = ( 7 < 7) || ( 7>5);
	bool result5 = ! ( 7 == 7 ) && ( 7 > 5);
	bool result6 = ( 7 == 7 )  &&  !( 7 < 5);
	 
	cout << "result1= " << result1 << endl;
	cout << "result2= " << result2 << endl;
	cout << "result3= " << result3 << endl;
	cout << "result4= " << result4 << endl;
	cout << "result5= " << result5 << endl;
	cout << "result6= " << result6 << endl;
	
	return 0;
	
}