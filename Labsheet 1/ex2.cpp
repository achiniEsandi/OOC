#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	float length, inInch;
	
	cout<<"Enter the length in cm: ";
	cin>>length;
	
	inInch = length/2.54;
	
	cout<<"The length in inches is "<<inInch;
	
	return 0;
}