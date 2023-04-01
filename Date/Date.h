#pragma once
#include <iostream>
#include <assert.h>
using namespace std;

//�������С���� �ʺ������������ĺ��� ֱ�Ӷ�������� �ڲ� ����������ڲ��ĺ������ܻᱻ����������Ϊ����
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

	//Ĭ����ǰ��++
	Date& operator++();
	//���ʵ�ֺ���++ ��������������Ĵ��� ����һ������ int û��ʵ�ʵ����� ֻ�ǽ������� �ұ�����int
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

//���Ըĳ���������

inline ostream& operator<<(ostream& out, const Date& d) {
	out << d._year << "��" << d._month << "��" << d._day << "��" << endl;
	return out;
}
inline istream& operator>>(istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day;
	return in;
}