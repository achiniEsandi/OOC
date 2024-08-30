#include "Distance.h"
#include <iostream>
using namespace std;

int main()
{
	//Exercise 1
	/*Distance d1;
	d1.printDistance();

	Distance d2(11, 6.25);
	d2.printDistance();
	*/

	//Exercise 2
	/*Distance* dist1 = new Distance();
	dist1->printDistance();
	
	Distance* dist2 = new Distance(11, 6.25);
	dist2->printDistance();*/

	//Exercise 3
	Distance dist1, dist2;
	Distance dist3(11,6.25);

	dist1.inputDistance();
	dist3.addDistance(dist1,dist2);

	dist1.printDistance();
	dist2.printDistance();
	dist3.printDistance();

	return 0;
}