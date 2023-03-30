#pragma once
#include <iostream>
#include <assert.h>
using namespace std;
class Date
{
public:
	Date(int year , int month , int day );
	bool operator ==(const Date& d2);
	bool operator <(const Date& d2);
	bool operator <=(const Date& d2);
	bool operator >(const Date& d2);
	bool operator >=(const Date& d2);
	bool operator !=(const Date& d2);
	Date& operator+=(int day);
	Date operator+(int day);
	Date& operator-=(int day);

	//d1 - 100
	Date operator-(int day);
	//d1 - d2
	int operator-(const Date& d);

	//默认是前置++
	Date& operator++();
	//如何实现后置++ 编译器做了特殊的处理 加了一个参数 int 没有实际的意义 只是进行重载 且必须是int
	Date operator++(int);
	void Print();

private:
	int _year;
	int _month;
	int _day;
};
int GetMonthDay(int year, int month);