#include "Date.h"
Date::Date(int year , int month , int day )
{

	if(month > 0 && month <13
		&&(day >0 && day < GetMonthDay(year,month))
		)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	else
	{
		cout << "日期非法" << endl;
	}

}

int GetMonthDay(int year, int month)
{
	assert(month > 0 && month < 13);

	int monthArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400) == 0))
	{
		return 29;
	}
	else
	{
		return monthArray[month];
	}
}
bool Date::operator==(const Date& d2)
{
	return _year == d2._year
		&& _month == d2._month
		&& _day == d2._day;
}
bool Date::operator <(const Date& d2)
{
	if (_year < d2._year)
		return true;
	else if (_month < d2._month)
		return true;
	else if (_day < d2._day)
		return true;
	else
		return false;
}
bool Date::operator <=(const Date& d2)
{
	return *this < d2 || *this == d2;
}

bool Date::operator >(const Date& d2)
{
	return !(*this <= d2);
}
bool Date::operator >=(const Date& d2)
{
	return !(*this < d2);
}
bool Date::operator !=(const Date& d2)
{
	return !(*this == d2);
}

void Date::Print()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}
Date& Date::operator+=(int day) {
	_day += day;
	while (_day > GetMonthDay(_year,_month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			++_year;
			_month = 1;
		}
	}
	return *this;
}

//Date Date::operator+(int day) {
//	Date tmp(*this);
//
//	tmp._day += day;
//	while (tmp._day > GetMonthDay(tmp._year, tmp._month))
//	{
//		tmp._day -= GetMonthDay(tmp._year, tmp._month);
//		tmp._month++;
//		if (tmp._month == 13)
//		{
//			++tmp._year;
//			tmp._month = 1;
//		}
//	}
//	return tmp;
//}
Date Date::operator+(int day) {
	Date tmp(*this);

	tmp += day;

	return tmp;
}
//先实现+= 再去复现 + 原因是 先实现+ 再复现+=开销很大
// += 返回	左运算符的值 所以 要return Date&
//++d
Date& Date::operator++()
{
	*this += 1;
	return *this;
}
//d++
Date Date::operator++(int)
{
	Date tmp(*this);
	*this += 1;

	return tmp;
}
//所以前置++效率要比后置++的效率更高