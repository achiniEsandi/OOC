#include <iostream>
using namespace std;

int Square (int x);
int Cube (int x);

int main ()
{
	int num;
	cout<<"Enter a number: ";
	cin >> num;
	
	cout<<"The square of the number is "<<Square(num)<<endl;
	cout<<"The cube of the number is "<<Cube(num);
	
	return 0;
}

int Square (int x)
{
	return x*x;
}

int Cube (int x)
{
	return x*x*x;
}