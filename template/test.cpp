//#include <iostream>
//using namespace std;
//#include <string>
//int main()
//{
//	//string s1;
//	//string s2("hello word");
//	//string s3 (s2,3,10);
//	//string s4("hello word",7);
//
//	//for (size_t i = 0; i < s2.size(); i++)
//	//{
//	//	s2[i]++;
//	//}
//	//cout << s4.max_size() << endl;
//	//cout << s4.capacity() << endl;
//	//s4.clear();
//	//cout << s4.empty() << endl;
//	//cout << s4 << endl;
//	//string s5("hello word\0");
//	//string s6("hello word");
//
//	//s5 += ("hello word");
//	//cout << s5;
//
//	//string ss;
//	//cout << sizeof(ss);
//
//	string s1("hello world");
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	return 0;
//
//}
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include "string.h"
int main()
{
	try
	{
		MyString::test_MyString();
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
}