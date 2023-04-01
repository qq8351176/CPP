#pragma once
#include <iostream>
#include <assert.h>
using namespace std;

//类里面短小函数 适合做内联函数的函数 直接定义在类的 内部 定义在类的内部的函数可能会被编译器定义为内联
class Date
{
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);
public:
	Date(int year , int month , int day );
	bool operator ==(const Date& d2)const;
	bool operator <(const Date& d2)const;
	bool operator <=(const Date& d2)const;
	bool operator >(const Date& d2)const;
	bool operator >=(const Date& d2)const;
	bool operator !=(const Date& d2)const;
	Date& operator+=(int day);
	Date operator+(int day)const;
	Date& operator-=(int day);

	//d1 - 100
	Date operator-(int day)const;
	//d1 - d2
	int operator-(const Date& d);

	//默认是前置++
	Date& operator++();
	//如何实现后置++ 编译器做了特殊的处理 加了一个参数 int 没有实际的意义 只是进行重载 且必须是int
	Date operator++(int);

	Date& operator--();
	Date operator--(int);


	void Print();

private:
	int _year;
	int _month;
	int _day;
};

//ostream& operator<<(ostream& out, const Date& d);
//istream& operator>>(istream& in, Date& d);

//可以改成内联函数

inline ostream& operator<<(ostream& out, const Date& d) {
	out << d._year << "年" << d._month << "月" << d._day << "日" << endl;
	return out;
}
inline istream& operator>>(istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day;
	return in;
}