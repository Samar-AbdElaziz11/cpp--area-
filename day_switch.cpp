#include <iostream>
#include <string>
using namespace std;

int main()

{
	int Day = 7;
	
	switch (Day)
{	
    case 1:
	cout << "sunday";
	break;
	
    case 2:
    cout <<"monday";
    break;
    
    case 3:
    cout << "tuesday";
    break;
    
    case 4:
    cout << "wednesday";
    break;
    
    case 5:
    cout <<"thursday";
    break;
    
    case 6:
    cout << "friday";
    break;
    
    case 7:
    cout << "satrday";
    break;
    
    default:
    cout << "not a week day\n";
}
    return 0;
 


}