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
//			perror("malloc����ռ�ʧ��");
//			return;
//		}
//		_capacity = capacity;
//		_size = 0;
//	}
//	void Push(const DataType& data)
//	{
//		// ����
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
////���н��г�Ա����
//class A2 {
//public:
//	void f2() {}
//};
////// ����ʲô��û��---����
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
// 1.�������������н���ǣ� A�����뱨�� B�����б��� C����������
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
//1. this  ��������
//this ����ջ���� ��Ϊ����������ʵ�� VS������ͨ���Ĵ��� ecx�Ĵ���
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