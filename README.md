#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<algorithm>
#include"Course.h"
#include"Student.h"
using namespace std;

void printAve(Student stuArray[]) {
	Course c[5] = {};
	double mathAve = 0, englAve = 0, chinAve = 0;
	for (int i = 0; i < Student::getNumOfStu(); i++) {
		c[i] = stuArray[i].getCourse();
	}
	for (int i = 0; i < Student::getNumOfStu(); i++) {
		mathAve += c[i].getMath();
		englAve += c[i].getEnglish();
		chinAve += c[i].getChinese();
	}
	cout << endl;
	cout << fixed << setprecision(1) << "全班國文平均: " << chinAve / Student::getNumOfStu() /1.5 << " ";
	cout << fixed << setprecision(1) << "全班數學平均: " << mathAve / Student::getNumOfStu() /2.0 << " ";
	cout << fixed << setprecision(1) << "全班英文平均: " << englAve / Student::getNumOfStu() /1.5 << " ";
	cout << endl;
}
int main() {
	int size;
	int math, english, chinese;
	string name, ID;
	cout << "請輸入人數: ";
	cin >> size;
	Course course[5] = { };
	Student student[5] = { };
	for (int i = 0; i < size; i++) {
		cout << "請輸入名字: ";
		cin >> name;
		cout << "請輸入學號: ";
		cin >> ID;
		cout << "請輸入國文成績: ";
		cin >> chinese;
		cout << "請輸入數學成績: ";
		cin >> math;
		cout << "請輸入英文成績: ";
		cin >> english;
		course[i] = Course(chinese, math, english);
		student[i] = Student(name, ID, course[i]);
	}
	for (int i = 0; i < size; i++) {
		student[i].printStudent();
	}
	printAve(student);
	vector<double> gank;
	for (int i = 0; i < size; i++) {
		gank.push_back(course[i].getAverage());
	}
	sort(gank.begin(), gank.end());
	for (int i = 0; i < size; i++) {
		cout << "排名" << size - i << ": " << gank[i] << endl;
	}
}
