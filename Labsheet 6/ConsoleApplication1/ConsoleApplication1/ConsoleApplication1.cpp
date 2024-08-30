#include "Circle.h"
#include "RectangleX.h"
#include "Square.h"
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	Circle c1;
	c1.setRadius(5);
	c1.getRadius();
	c1.calcArea();

	RectangleX rec1,rec2;
	rec1.setLength(7);
	rec1.getLength();
	rec1.setWidth(2);
	rec1.getWidth();
	rec1.calcArea();

	rec2.setLength(18);
	rec2.getLength();
	rec2.setWidth(10);
	rec2.getWidth();
	rec2.calcArea();

	//additional exercise

	Square s1;
	s1.setLength(4);
	s1.getLength();
	s1.calcArea();

	//

	double area;
	area = rec2.calcArea() - (c1.calcArea()+ rec1.calcArea()+s1.calcArea());
	cout << "The area of the green area is: " << setiosflags(ios::fixed)<<setprecision(2)<<area;

	return 0;
}