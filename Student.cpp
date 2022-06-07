#include "Student.h"
#include"Course.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int Student::numOfStu = 0;

Student::Student()
{
	name = " ";
	ID = " ";
	course = Course();
}
Student::Student(string newName, string newID, Course newCourse)
{
	name = newName;
	ID = newID;
	course = newCourse;
	numOfStu++;
}
void Student::setName(string newName)
{
	name = newName;
}
string Student::getName()
{
	return name;
}
void Student::setID(string newID)
{
	ID = newID;
}
string Student::getID()
{
	return ID;
}
void Student::setCourse(Course newCourse)
{
	course = newCourse;
}
Course Student::getCourse()
{
	return course;
}
int Student::getNumOfStu()
{
	return numOfStu;
}
void Student::getPass()
{
	if (getCourse().getAverage() < 60)
		cout << " /不及格";
	else
		cout << " /及格";
}
void Student::printStudent()
{
	cout << "名字: " << name << " " << "學號: " << ID << " " << "加權平均: " << fixed << setprecision(2) << getCourse().getAverage();
	getPass();
	cout << endl;
}
