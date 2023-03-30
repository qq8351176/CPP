//#include<iostream>
//#include <string.h>
//using namespace std;
//typedef int DataType;
//struct Stack
//{
//	void Init(size_t capacity)
//	{
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (nullptr == _array)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_capacity = capacity;
//		_size = 0;
//	}
//	void Push(const DataType& data)
//	{
//		// 扩容
//		_array[_size] = data;
//		++_size;
//	}
//	DataType Top()
//	{
//			return _array[_size - 1];
//	}
//	void Destroy()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//	DataType* _array;
//	size_t _capacity;
//	size_t _size;
//};
//int main()
//{
//	Stack s;
//	s.Init(10);
//	s.Push(1);
//	s.Push(2);
//	s.Push(3);
//	cout << s.Top() << endl;
//	s.Destroy();
//	return 0;
//}
#include <iostream>
using namespace std;
//class test{
//public:
//	int _a;
//	static const int b = 1;
//	//void print(int a = 2);
//	void print(int a = 1)
//	{
//		cout << a;
//	}
//private:
//	int _b;
//};
////void test::print(int a)
////{
////	cout << a;
////}
//int main()
//{
//	test t;
//	/*t._a = 1;
//	cout << t._a;*/
//	t.print();
//}

//class A1 {
//public:
//	void f1() {}
//private:
//	char c;
//	int _a;
//};
////类中仅有成员函数
//class A2 {
//public:
//	void f2() {}
//};
////// 类中什么都没有---空类
//class A3
//{};
//#pragma pack(show)
//int main()
//{
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//	
//}
//class A
//{
//public:
//	void Print()
//	{
//		cout << "Print()" << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = nullptr;
//	p->Print();
//	return 0;
//}
// 1.下面程序编译运行结果是？ A、编译报错 B、运行崩溃 C、正常运行
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = nullptr;
//	p->PrintA();
//	return 0;
//}
//1. this  存在哪里
//this 存在栈里面 因为他是隐含的实参 VS下面是通过寄存器 ecx寄存器
//class B
//{
//public:
//	B() {
//		y = 1;
//		cout << "B";
//	};
//	int y;
//	~B()
//	{
//		cout << "~B";
//	}
//
//};
//class A {
//public:
//	A(int x)
//	{
//		cout << x;
//	};
//	int x;
//	B b;
//private:
//	
//};
//
//int main()
//{
//	A a(2);
//	A a1(1);
//	a1 = a;
//	cout << a1.b.y;
//}