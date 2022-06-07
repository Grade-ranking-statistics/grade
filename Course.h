#ifndef COURSE_H
#define COURSE_H

using namespace std;

class Course
{
private:
	double gradeChinese;
	double gradeMath;
	double gradeEnglish;
public:
	Course(double, double, double);
	Course();
	void setChinese(double);
	double getChinese(); //chinese weighted score
	void setMath(double);
	double getMath(); //math weighted score
	void setEnglish(double);
	double getEnglish(); //english weighted score
	double getAverage(); // average of weight score
};
#endif
