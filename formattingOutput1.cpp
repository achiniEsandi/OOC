#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	
	cout<<setw(0)<<setiosflags(ios::fixed)<<25.695789<<endl;
	cout<<setw(12)<<setprecision (3)<<25.695789<<endl;
	cout<<setw(12)<<setprecision(5)<<25.695789;
	
	
	return 0;
}