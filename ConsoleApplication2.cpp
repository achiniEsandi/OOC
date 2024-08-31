#include <iostream>
using namespace std;

class Student
{
private:
	int studentNo;
	int marks1;
	int marks2;
	int marks3;

public:
	void setStudentNo(int no);
	void assignMarks(int m1, int m2, int m3);
	int calcAvg();
};

void Student::setStudentNo(int no)
{
	studentNo = no;
}

void Student::assignMarks(int m1, int m2, int m3)
{
	marks1 = m1;
	marks2 = m2;
	marks3 = m3;

}

int Student::calcAvg()
{
	float avg = (marks1 + marks2 + marks3) / 3.0;
	return avg;
}

int main()
{
	Student student1;
	int no;

	cout << "Enter student number: ";
	cin >> no;
	student1.setStudentNo(no);
	student1.assignMarks(80, 40, 60);

	cout << "The average mark of the student is: " << student1.calcAvg();


	return 0;
}