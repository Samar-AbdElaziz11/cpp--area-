#include <iostream>
#include <string>
using namespace std;

struct strinfo

{
	string name;
	string city;
	string country;
	int age;
	
};

void readinfo (strinfo &info)

{
	cout <<"please enter your name?\n";
	cin >> info. name;
	
	cout << "please enter your city?\n";
	cin >> info. city;
	
	cout << "please enter your country?\n";
	cin >> info. country;
	
	cout << "please enter your age?\n";
	cin >> info. age;
	
}

void printinfo (strinfo info)
{
	cout <<"********************************\n";
	
	cout << " name: " << info. name << endl;
	cout << "city: " << info. city << endl;
	cout << "country: " << info. country << endl;
	cout << "age: " << info. age << endl;
	
	cout << "********************************\n";
}

int main()

{
	
	strinfo person1info;
	readinfo (person1info);
	printinfo (person1info);
	
	return 0;
	
}