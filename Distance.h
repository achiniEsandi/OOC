#pragma once
class Distance
{
private:
	int feet;
	float inches;

public:
	Distance();  //constructor
	Distance(int ft, float in); //overloaded constructor
	~Distance(); //destructor
	void inputDistance();
	void printDistance();
	//Exercise 3
	void addDistance(Distance d2, Distance d3);
	
};

