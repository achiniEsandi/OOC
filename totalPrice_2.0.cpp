#include <iostream>
using namespace std;

int main ()
{
	int count = 1;
	float total;
	
	while (count<=3)
	{
	
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

	cout<<"The total of customer "<<count<<" is "<<total<<endl;
	count+=1;
	}	
	return 0;
}