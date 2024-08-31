#include <iostream>
using namespace std;

int main ()
{
	float total;
	
	cout<<"Enter the total price: ";
	cin>>total;
	
	if (total>=10000)
	{
		total = total - (total * 25 / 100);
	}	
	
	else if (total<10000 && total>=5000)
	{
		total = total - (total * 15 / 100);
	}
	
	else if (total<5000 && total>=3000)
	{
		total = total - (total * 10 / 100);
	}

	printf("The total is"<<total)	
	return 0;
}