#include <iostream>
using namespace std;

class Circle
{
	private:
		float radius;
	public:
		void setRadius(float r);
		float calcArea();
};

void Circle::setRadius(float r)
{
	radius = r;
}

float Circle::calcArea()
{
	double area = 22 / 7.0 * radius * radius;
	return area;
}

int main()
{
	Circle c1;
	float r;

	cout << "Enter radius of the circle: ";
	cin >> r;
	c1.setRadius(r);

	cout << "The area of the circle is " << c1.calcArea();
	return 0;
}