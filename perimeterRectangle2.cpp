#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float length,width,perimeter;
	cout<<"Enter length of the rectangle: ";
	cin>>length;
	cout<<"Enter width of the rectangle: ";
	cin>>width;
	
	perimeter= 2.0* (length+width);
	
	cout<<"Perimeter of the rectangle is "setw(2)<<setiosflag(ios::fixed)<<setprecision (2)<<perimeter<<endl;
	
	
	
	return 0;
}