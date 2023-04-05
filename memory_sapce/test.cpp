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


//int main() {
//	size_t size = 0; 
//	
//	try {
//		while (1)
//		{
//			int* p1 = (int*)malloc(1024 * 1024 * 4);
//			if (p1 == nullptr)
//				break;
//			size += 1024 * 1024 * 4;
//			cout << p1 << endl;
//
//		}
//	}
//	catch(const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//
//	cout << size << endl;
//	cout << size / 1024 / 1024 << "MB" << endl;
//}
//#include <iostream>
//#include <stack>
//#include <math.h>
//#include <queue>
//using namespace std;
//int main() {
//    int n, m;
//    cin >> n >> m;
//    if (m == n) {
//        cout << 0;
//    }
//    else {
//        queue<int> qu1;
//        queue<int> qu2;
//
//        for (int j = sqrt(n); j >= 2; j--) {
//            qu1.push(j + n);
//        }
//
//        int flag = 1;
//        int res = 1;
//
//        while (!qu1.empty() || !qu2.empty()) {
//            while (!qu1.empty() && flag) {
//                int step = qu1.front();
//                qu1.pop();
//
//                for (int j = 2; j <= sqrt(step); j++) {
//                    if (step % j == 0) {
//                        if ((step / j) + step == m || (j + step) == m) {
//                            flag = 0;
//                            res++;
//                            break;
//                        }
//                        if ((step / j) + step < m) {
//                            qu2.push((step / j) + step);
//                        }
//                        if (j + step < m) {
//                            qu2.push(j + step);
//                        }
//                    }
//                }
//
//            }
//            if (flag)
//                res++;
//            else
//                break;
//            while (!qu2.empty() && flag) {
//                int step = qu2.front();
//                qu2.pop();
//
//                for (int j = 2; j <= sqrt(step); j++) {
//                    if (step % j == 0)
//                    {
//                        if ((step / j) + step == m || (j + step) == m) {
//                            flag = 0;
//                            res++;
//                            break;
//                        }
//                        if ((step / j) + step < m) {
//                            qu1.push((step / j) + step);
//                        }
//                        if (j + step < m) {
//                            qu1.push(j + step);
//                        }
//                    }
//                }
//            }
//            if (flag)
//                res++;
//            else
//                break;
//        }
//        cout << res;
//    }
//}


#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> step(m + 1, INT_MAX);
	step[n] = 0;
	for (int i = n; i <= m; i++)
	{
		if (step[i] == INT_MAX)
			continue;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				if (i + j <= m)
				{
					step[j + i] = min(step[i] + 1, step[i + j]);
				}
				if (i + (i / j) <= m)
				{
					step[i + (i / j)] = min(step[i] + 1, step[i + (i / j)]);
				}
			}
		}

	}
	if (step[m] == INT_MAX)
		cout << -1;
	else
		cout << step[m];

}