#include <iostream>
using namespace std;

float elapsedTime (int Distance, float MPH);

int main()
{
	int miles;
	float speed,time;
	
	cout<<"PLease type the distance in miles: ";
	cin>>miles;
	cout<<"Please type the speed as miles per hour: ";
	cin>>speed;
	
	time=elapsedTime(miles,speed);
	
	cout<<"The elapse time for a trip of "<<miles<<"miles, "<<
	endl<<"at a rate of "<<speed<<"MPH is "<<time<<" hours.";	
	return 0;
}

float elapsedTime(int Distance, float MPH)
{
	if(MPH>0.0)
	{
		return (Distance/MPH);
	}
	
	else
	{
		cout<<"MPH is not greater than 0!";
		return 0.0;
	}
}