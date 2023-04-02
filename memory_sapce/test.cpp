#include <iostream>
using namespace std;
class A
{
public:
	A(int a = 0)
		: _a(a)
	{
		cout << "A():" << this << endl;
}
~A()
{
	cout << "~A():" << this << endl;
}
private:
	int _a;
};
//int main()
//{
//	// new/delete 和 malloc/free最大区别是 new/delete对于【自定义类型】除了开空间
//	//还会调用构造函数和析构函数
//	A* p1 = (A*)malloc(sizeof(A));
//	A* p2 = new A(1);
//	free(p1);
//	delete p2;
//	// 内置类型是几乎是一样的
//	int* p3 = (int*)malloc(sizeof(int)); // C
//	int* p4 = new int;
//	free(p3);
//	delete p4;
//	A* p5 = (A*)malloc(sizeof(A) * 10);
//	A* p6 = new A[10];
//	free(p5);
//	delete[] p6;
//	return 0;
//}
//int main()
//{
	////失败了抛出异常 多了一些检查
	//int* p1 = (int*)operator new(sizeof(int*));

	////失败了返回空
	//int* p2 = (int*)malloc(sizeof(int*));



	////申请空间
	////调用构造函数
	//A* p3 = new A;

	//delete p2;

	//A* p6 = new A[10];

	//delete[] p6;

	//int* a = (int*)malloc(sizeof(int));
	//if (a == NULL)
	//{
	//	perror("malloc fail");
	//}
	//*a = 4;
	//cout << a << endl;
	//free(a);
	//cout << a;
	//return 0;
//}
class Stack {
public:
	Stack() {
		a = new int[4];
		_capacity = 4;
	};
	~Stack() {
		delete[] a;
		_capacity = 0;
	};
private:
	int* a;
	int _capacity;
};
//int main()
//{
//	//for (size_t i = 0; i < 100000000; i++)
//	//{
//	//	Stack* st1 = new Stack;
//	//	delete st1; 
//	//}
//	A* p9 = new A[30];
//	delete[](p9);
//}


//int main() {
//	size_t size = 0; 
//	while (1)
//	{
//		int* p1 = (int*)malloc(1024 * 1024 * 4);
//		if (p1 == nullptr)
//			break;
//		size += 1024 * 1024 * 4;
//		cout << p1 << endl;
//
//	}
//
//	cout << size << endl;
//	cout << size / 1024 / 1024 << "MB" << endl;
//}


int main() {
	size_t size = 0; 
	
	try {
		while (1)
		{
			int* p1 = (int*)malloc(1024 * 1024 * 4);
			if (p1 == nullptr)
				break;
			size += 1024 * 1024 * 4;
			cout << p1 << endl;

		}
	}
	catch(const exception& e)
	{
		cout << e.what() << endl;
	}


	cout << size << endl;
	cout << size / 1024 / 1024 << "MB" << endl;
}
