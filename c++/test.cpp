//#include<stdio.h>
//int main()
//{
//	printf("hello world\n");
//	return 0;
//
//}
//#include <iostream>
//using namespace std;
//struct MyStruct
//{
//	int a;
//	char a[5];
//	double d;
//}s;
//int main()
//{
//	cin << s;
//	cout<<s;
//	return 1;
//}
//#include <stdio.h>
////#include <stdlib.h>
//int rand = 10;
//int main()
//{
//	printf("%d\n", rand);
//	return 0;
//}
//#include <stdio.h>
//int a = 2;
//void f1()
//{
//	int a = 0;
//	printf("%d", a);
//	printf("%d", ::a);//�������޶���
//}
//void f2()
//{
//	int a = 1;
//}
//
//int main()
//{
//	//printf("%d", a);
//	f1();
//	return 0;
//}
//#include "List.h"
//#include "Queue.h"
//#include <iostream>
//using namespace Queue;
//int main()
//{
//	//struct List::Node node1 ;
//	//struct Queue::Node node2;
//	//cout << List::min << Queue::min;
//	return 0;
//}
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//void func(int a = 0)
//{
//	cout << a << endl;
//}
//int main()
//{
//	func(1);
//	func();
//	return 0;
//}
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//void func1(int a = 10, int b = 20,  int c=30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//}
////��ȱʡ ���������������ȱʡ
//void func2(int a , int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//}
//int main()
//{
//	func2(1, 2, 3);
//	func2(1);
//	func2(1);
//	func2(1, 2);
//	//������Ծȱʡ �����������ʹ��
//}
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//#include "test.h"
//void func(int a )
//{
//	cout << a;
//}
//int main()
//{
//	func();
//}
#include <stdio.h>
#include <iostream>
using namespace std;
//int func(int a, int b)
//{
//	
//	return a + b;
//}
//int func(int a, int b, int c )
//{
//
//	return a + b +c;
//}
//double func(double a, double b)
//{
//	
//	return a + b;
//}
//int main()
//{
//	cout << func(1, 2);
//	cout <<  func(1, 2,3);
 //}
 //c++�ĺ������� �����в������� ���� ����˳��ͬ��
//int& count()
//{	
//	static int n = 0;
//	n++;
//
//	return n;
//}
//int main()
//{
//	int& ret = count();
//	cout << ret;
//	ret = count();
//	cout << ret;
//	ret++;
//	ret = count();
//	cout << ret;
//}
//���÷��� ���Լ��ٿ��� �����߿����޸ķ��ص����ö���
//int& Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int ret = Add(1, 2);
//	Add(3, 4);
//	cout << "Add(1, 2) is :" << ret << endl;
//	return 0;
//}
//#include <time.h>
//struct A { int a[10000]; };
//void TestFunc1(A a) {}
//void TestFunc2(A& a) {}
//void TestRefAndValue()
//{
//	A a;
//	// ��ֵ��Ϊ��������
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// ��������Ϊ��������
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// �ֱ���������������н������ʱ��
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//int main()
//{
//	TestRefAndValue();
//}
//�����ÿ�����߳����Ч�� ��ֵ��ʱ�����б����Ŀ���
//#include <time.h>
//struct A { int a[10000]; };
//A a;
//// ֵ����
//A TestFunc1() { return a; }
//// ���÷���
//A& TestFunc2() { return a; }
//void TestReturnByRefOrValue()
//{
//	// ��ֵ��Ϊ�����ķ���ֵ����
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 1000000000000000000; ++i)
//		TestFunc1();
//	size_t end1 = clock();
//	// ��������Ϊ�����ķ���ֵ����
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 1000000000000000000; ++i)
//		TestFunc2();
//	size_t end2 = clock();
//	// �������������������֮���ʱ��
//	cout << "TestFunc1 time:" << end1 - begin1 << endl;
//	cout << "TestFunc2 time:" << end2 - begin2 << endl;
//}
//int main()
//{
//	TestReturnByRefOrValue();
//}
//int main()
//{
//	int a = 1;
//	int& b = a;
//
//	const int c = 2;
//	const int  d = c;
//	
//
//}
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1) 
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d)
	{
		cout << "���ڿ�������";
	}

	bool operator==( const Date& d2)
	{
		return _year == d2._year
			&& _month == d2._month
			&& _day == d2._day;
	}
	bool operator <(const Date& d2)
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
	bool operator <=(const Date& d2)
	{
		return *this < d2 || *this == d2;
	}

	bool operator >(const Date& d2)
	{
		return !(*this <= d2);
	}
	bool operator >=(const Date& d2)
	{
		return !(*this < d2);
	}
	bool operator !=(const Date& d2)
	{
		return !(*this == d2);
	}

	Date& operator=(const Date& d2)
	{
		if (this != &d2)
		{
			_year = d2._year;
			_month = d2._month;
			_day = d2._day;
		}
		return *this;
	}

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

//bool operator==(Date& d1,Date& d2)
//{
//	return d1.get_year() == d2.get_year()
//		&& d1.get_month() == d2.get_month()
//		&& d1.get_day() == d2.get_day();
//}



//void Test()
//{
//	Date d1(2018, 9, 27);
//	Date d2(2018, 9, 26);
//	cout << (d1 <= d2) << endl;
//}
#include <vector>
int main()
{
	//Test();
	//Date d1, d2;
	//d1.Print();
	//d2.Print();
	//Date d3(2023, 3, 4);
	//d1 = d2 = d3;
	//d1.Print();
	//d2.Print();
	//d1.Print();
	//int num1 = 2147483647;
	//int num2 = 2147483647;
	//vector<int> A;
	//A.insert(A.begin(),num1,0);
	//A.insert(A.end(),num2,0);
	//cout << A.size();
	Date d1(2023, 3, 4);
	Date d2 ;
	d2 = d1;
	return 0;
}