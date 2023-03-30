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

	//Ĭ����ǰ��++
	Date& operator++();
	//���ʵ�ֺ���++ ��������������Ĵ��� ����һ������ int û��ʵ�ʵ����� ֻ�ǽ������� �ұ�����int
	Date operator++(int);
	void Print();

private:
	int _year;
	int _month;
	int _day;
};
int GetMonthDay(int year, int month);