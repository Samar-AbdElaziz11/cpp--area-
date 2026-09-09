#include <iostream>
using namespace std;

enum name { sara, salma, samar, Aya};
enum country { us, egypt, iran, turkey};
enum city { cairo, Alexandria, Giza, ismaillia};
enum gender { male, female};
enum status { single, married};
enum colour { red, yellow, black, white};

int main()
{
	
	name myname;
	city mycountry;
	country mycity;
	gender mygender;
	status mystatus;
    colour myfavcolour;
	
	
	myname = samar;
	mycity = egypt;
	mycountry = ismaillia;
	mygender =  female;
	mystatus = single;
	myfavcolour =  black;
	
	cout << "name is= " << myname << endl;
	cout << "city is= " << mycity << endl;
	cout << "country is = " << mycountry << endl;
	
	
	
	
	
	return 0;
	
}