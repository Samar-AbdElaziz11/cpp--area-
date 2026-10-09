#include <iostream>
#include <string>
using namespace std;

void circleareainscribedinasquar()
{
	
	double A;
	cout << "please enter A" << endl;
	cin >> A;
	
	double const PI = 3.14;
	
	double  area = (PI * (A * A ) ) /4;
	cout << "circle area in scribed in a squar= " << area << endl;
}

void circleareaalongthecircumference()

{
	double L;
	
	cout << "please enter L" << endl;
	cin >> L;
	
	double const PI = 3.14;
	
	double area = ( L * L ) / ( 4 * PI );
	cout << "circle area along the circumference= " << area << endl;
	
}

void circleareainscribedinanisoscelestriangle()
{
	
     double a, b;

     cout << "please entet a" << endl;
     cin >> a;

     cout << "please enter b" << endl;
     cin >> b;

     double const PI = 3.14;
     
     double area = ( PI * b * b / 4 ) * ( ( 2 * a - b ) / ( 2 * a + b ) );
     
     cout << "circle area inscribed in an isoseles triangle= " << area << endl;
     
}

void circleareacircledescribedaroundanarbitrarytriangle()

{
	double a, b, c;
	
	cout << "please enter a" << endl;
	cin >> a;
	
	cout << "please enter b" << endl;
	cin >> b;
	
	cout << "please enter c" << endl;
	cin >> c;
	
	double const PI = 3.14;
	double p = (a + b + c ) / 2;
	double T= ( a* b * c ) / ( 4 * sqrt ( p * (p-a) * (p-b) * (p-c)));
	double total = T * T;
	double area = PI * total;
	cout << "circle area circle described around an arbitrary triangle= " << area << endl;
	
}

int main()
{
	 circleareainscribedinasquar();
	circleareaalongthecircumference();
	circleareainscribedinanisoscelestriangle();
	circleareacircledescribedaroundanarbitrarytriangle();
	return 0;
	
}