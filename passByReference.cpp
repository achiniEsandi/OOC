#include <iostream>
using namespace std;

void findSumAvg(int x, int y, int &sum, float &avg);

int main()
{
	int n1,n2,total;
	float avg;
	
	cout<<"Enter two numbers: ";
	cin>>n1>>n2;
	
	findSumAvg(n1, n2, total, avg);
	
	cout<<"The sum is "<<total<<endl;
	cout<<"The average is "<<avg<<endl;
	
	return 0;
}

void findSumAvg(int x, int y, int &sum, float &avg)
{
	sum = x + y;
	avg = sum/2.0;
}