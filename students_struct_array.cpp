#include <iostream>
#include <string>
using namespace std;

struct strinfo
{
	string name;
	int age;
	int phone;
};

void readinfo (strinfo &info)
{
	 cout << "pleass enter name?" << endl;
	 cin >> info. name;
	  
	  cout << "please enter age?" << endl;
	  cin >> info. age;
	  
	  cout << "please enter phone?" << endl;
	  cin >> info. phone;
}

void printinfo (strinfo info)
{
	cout << "********************************\n";
	
	cout <<"name:" << info.name << endl;
	cout <<"age:" << info.age << endl;
	cout << "phone:" << info.phone << endl;
	
	cout << "********************************\n";
}

 void readstudentinfo (strinfo student[2])
 
 {
 	readinfo (student [0]);
 	readinfo (student [1]);
 	
 }
 
 void printstudentinfo (strinfo student[2])
 {
 	printinfo (student [0]);
 	printinfo (student [1]);
 	
 }
 
 int main()
 
 {
 	strinfo student[2];
 	
 	readstudentinfo (student);
 	printstudentinfo (student);
 	
	return 0;
	
}