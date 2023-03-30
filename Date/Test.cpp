#pragma once
#include "Date.h"
void TestDate1()
{
	Date d1(2023, 2, 4);
	d1.Print();
	Date d2(2023, 2, 29);
	d2.Print();
	d2 = d1 += 100;
	d1.Print();
	d2.Print();
}
void TestDate2()
{
	Date d1(2023, 2, 4);
	Date d2 = d1 + 100;
	d1.Print();
	d2.Print();
	d2 += 100;
	d2.Print();
	d1.Print();
}
void TestDate3()
{
	Date d1(2023, 2, 4);
	Date d2 = d1 + 100;
	d2.Print();
	Date d3 = d1 + 100;
	d3.Print();
	d3++;
	d3.Print();
}
void TestDate4()
{
	Date d1(2023, 2, 4);	
	d1.Print();
	d1++.Print();
	d1.Print();
	(++d1).Print();
}
void TestDate5()
{
	Date d1(2023, 2, 4);
	clock_t c1, c2;
	c1 = clock();
	for (int i = 0; i < 10000000; i++)
	{
		d1++;
	}
	c2 = clock();

	cout << (double)(c2 - c1)/ CLOCKS_PER_SEC;
	
	c1 = clock();
	for (int i = 0; i < 10000000; i++)
	{
		++d1;
	}
	c2 = clock();

	cout << (double)(c2 - c1) / CLOCKS_PER_SEC;
}
int main()
{
	TestDate5();
}