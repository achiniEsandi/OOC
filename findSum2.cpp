#include <iostream>
using namespace std;

int findSum(int x,int y);

int main()
{
    int num1, num2,sum;
    cout<<"Input two numbers: ";
    cin>> num1>>num2;
    sum=findSum(num1,num2);
    cout<<"Sum is "<<sum<<endl;
    return 0;
}

int findSum(int x,int y)
{
    return (x+y);
}