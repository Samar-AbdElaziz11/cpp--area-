#include <iostream>
using namespace std;

int main()

{
	
	bool result1 = ( 1 && 1 );
	bool result2 = ( 1 && 0);
	bool result3 = ( 0 || 1);
	bool result4 = ( 0 || 0);
	bool result5 = ( ! 0);
	bool result6 = ! ( 1 || 0);
	
	cout << "result1= " << result1 << endl;
	cout << "result2= " << result2 << endl;
	cout << "result3= " << result3 << endl;
	cout << "result4= " << result4 << endl;
	cout << "result5= " << result5 << endl;
	cout << "result6= " << result6 << endl;
	
	return 0;
	
}