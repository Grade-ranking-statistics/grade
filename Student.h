#ifndef STUDENT_H 
#define STUDENT_H
#include"Course.h"
#include<string>
using namespace std;

class Student
{
private:
	string name;
	string ID;
	Course course;
	static int numOfStu;
public:
	Student(string, string, Course);
	Student();
	void setName(string);
	string getName();
	void setID(string);
	string getID();
	void setCourse(Course);
	Course getCourse();
	void printStudent();
	static int getNumOfStu();
	void getPass();
	void getRanking();
};
#endif
