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
//	printf("%d", ::a);//域作用限定符
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
////半缺省 必须从右往左连续缺省
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
//	//不能跳跃缺省 必须从右往左使用
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
int func(int a, int b)
{
	
	return a + b;
}
int func(int a, int b, int c )
{

	return a + b +c;
}
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
 //c++的函数重载 可以有参数个数 类型 类型顺序不同等
int& count()
{	
	static int n = 0;
	n++;

	return n;
}
int main()
{
	int& ret = count();
	cout << ret;
	ret = count();
	cout << ret;
	ret++;
	ret = count();
	cout << ret;
}
