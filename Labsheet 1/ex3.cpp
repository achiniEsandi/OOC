#include <iostream>
using namespace std;

int main ()
{
	int num,i;
	
	cout<<"Enter a number: ";
	cin>>num;
	
	for (i=1;i<=12;i++)
	{
		cout<<num<<" x "<<i<<" = "<<num*i<<endl;
	}
	
	return 0;
}