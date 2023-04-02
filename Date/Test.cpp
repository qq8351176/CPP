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
void TestDate6()
{
	Date d1(2023, 2, 7);
	Date d2(2023, 5, 1);
	/*d1.operator<<(cout);*/
	//d1 << cout;
	cout << d1 << endl;
	cout << d1 << endl;
}
void TestDate7()
{
	Date d1(2023,3,4);
	cout << d1;
	cin >> d1;
	cout << d1;
}


//class A {
//public: 
//	void Printf() const
//	{
//		cout << _a << endl;
//		//_a = 1;  //但是如果 函数里面有改变操作的话 就不行了
//	}
//	A* operator&()
//	{
//		cout << this;
//		return this;
//	}
//private:
//	int _a = 10;
//};

//int main()
//{
//	//A aa;
//	const A aa;
//	//这样就会报错  出现了一个权限的放大的问题
//	// const A* aa 调用print 函数 传的参数是 A* this  但是 this指针的类型 是无法改变的 
//	// 可以在 函数的后面 加一个 const  此时this的类型就变成了 const A*
//	//因为 我们 无法显示的去写this
//	aa.Printf();
//}

//int main()
//{
//	A d1;
//	A* d2;
//	d2 = &d1;
//
//}

//class A {
//public:
//
//
//private:
//	int _a1;
//	int _a2;
//	const int _x;
//	// const int x  =1; 这样给的是缺省值 在进行构造函数的时候进行了默认的构造
//};
//
//int main()
//{
//	A a;//无法引用构造函数 因为他被删除了  原因是 const 变量必须在定义的时候初始化 他只有一次初始化的机会  const 的变量 所以C++11 才再后来打了补丁
//	//所以必须给每一个成员变量 找一个成员变量定义的位置 不然像const这样的变量 无法处理
//
//}

//class A {
//public:
//	//1.初始化列表 是所有成员变量定义的位置 而类中的变量只是声明
//	//2.不管是否显式的在初始化列表写参数 那么编译器每个变量都会初始化列表定义初始化
//	A() 
//		: _x(3)
//		,_a1(1)
//		,_a2(1)
//	{
//		_a1++;
//		_a2--;
//
//	}
//	
////private:
//	int _a1 = 1;
//	int _a2 = 2;
//	const int _x;
//	// const int x  =1; 这样给的是缺省值 在进行构造函数的时候进行了默认的构造
//};

class A
{
public:
	A()
	{
		_a2++;
	}
	A(int x)
		: _a1(x)

	{
		cout << "构造" << endl;
		_a2++;
	}
	A(const A& aa)
	{
		cout << "拷贝构造" << endl;
		_a2++;
	}
	static int GetCount()//没有this指针
	{
		//cout << _a1; 不能直接访问非静态成员 
		return _a2;
	}
	static int _a2;
	int _a1;
};

int A::_a2 = 0;

class B
{
public:
	B(int a) 
		: x(a)
	{
	
	};

	int x;
};

class C
{
public:

	static  int y ;
};
int C::y = 1;
//ostream& operator<<(ostream& out,const B& b)
//{
//	cout << "b.x =" << b.x;
//	return out;
//}
//ostream& operator<<(ostream& out, const C& c)
//{
//	cout << "c.y =" << c.y;
//	return out;
//}
//int main()
//{
//	C c;
//	cout << c.y;
//}
//int main()
//{
//	//A a(2);//无法引用构造函数 因为他被删除了  原因是 const 变量必须在定义的时候初始化 他只有一次初始化的机会  const 的变量 所以C++11 才再后来打了补丁
//	////所以必须给每一个成员变量 找一个成员变量定义的位置 不然像const这样的变量 无法处理
//	//A b =  1;
//	//const A& ref = 10;
//	//cout << ref._a1 ;
//	A a(1);
//	//cout << a._a2 << endl;
//	//A a2 = a;
//	//cout << a2._a2 << endl;
//	//cout << A::_a2 << endl;
//	//A* ref = &a2;
//	//cout << ref->_a2 << endl;
//	A a2[10];
//	/*cout << A::GetCount() << endl;*/
//	cout << A().GetCount() << endl;
//}

class PAT
{
public:
	PAT();
	PAT(int x);
	~PAT();

private:

};

PAT::PAT(int x)
{
	cout << "构造函数被调用了" << endl;
}
PAT::PAT()
{
	cout << "构造函数被调用了" << endl;
}
PAT::~PAT()
{

}
template <class T>
T fun(T x, T y) {
	return x * x + y * y;
}
//int main()
//{
//	//PAT(*ad)[3];
//	//PAT a;
//	//fun(1,2);
//	//fun(1.0, 2.0);
//	//fun(1.0, 2);
//	//fun(1, 2);
//	PAT a(4), b(5), c[3], * p[2] = { &a,&b };
//
//}


//new 和 delete

int main()
{
	//int* p1 = new int(1);
	//int* p2 = new int[10];
	//int* p3 = p1;
	//delete(p1);
	//delete(p3);
	//int* p1 = (int*)malloc(sizeof(int) * 10);
	//delete(p1);
	//int* p1 = new int;
	//cout << *p1;
	//int a[10];
	//cout << a[0] << endl;
	int a1[10] = { 0 };
	cout << a1[2];
	delete[] a1;



}
