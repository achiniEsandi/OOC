#include <iostream>
using namespace std;

int main ()
{
	int n=1000;
	while(n!=0)
	{
		cout<<n;
		
		if (n!=100)
		{
			cout<<",";
		}
		n-=100;
	}
	
	cout<<endl;
	
	int num=1000;
	do
	{
	cout<<num<<" ";
	num-=100;
	}
	while (num!=0);

	cout<<endl;
	
	for (int i=1000;i!=0;i-=100)
	{
		cout<<i<<" ";
	}


	return 0;
}