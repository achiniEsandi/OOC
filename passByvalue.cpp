#include <iostream>
using namespace std;

void change (int x);

int main()
{
	int I=5;
	cout<<"First time I is "<<I<<endl;
	change(I);
	
	cout<<" Next time I is "<<I<<endl;
		
	return 0;
}

void change(int x)
{
	cout<<"Entering function X is "<<x;
	x=7;
	
	cout<<" Leaving function X is "<<x;
	
}