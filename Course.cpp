#include"Course.h"
#include<iostream>
using namespace std;

Course::Course()
{
	gradeChinese = 0;
	gradeMath = 0;
	gradeEnglish = 0;
}
Course::Course(double newChinese, double newMath, double  newEnglish)
{
	gradeChinese = newChinese;
	gradeMath = newMath;
	gradeEnglish = newEnglish;
}
void Course::setChinese(double newChinese)
{
	gradeChinese = newChinese;
}
double Course::getChinese()
{
	return gradeChinese * 1.5;
}
void Course::setMath(double newMath)
{
	gradeMath = newMath;
}
double Course::getMath()
{
	return gradeMath * 2.0;
}
void Course::setEnglish(double newEnglish)
{
	gradeEnglish = newEnglish;
}
double Course::getEnglish()
{
	return gradeEnglish * 1.5;
}
double Course::getAverage()
{
	double average;
	average = (gradeChinese * 1.5 + gradeMath * 2.0 + gradeEnglish * 1.5) / (1.5 + 2.0 + 1.5);
	return average;
}
