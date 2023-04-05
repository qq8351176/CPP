#pragma once
#include <assert.h>
using std::cout;
using std::endl;
namespace MyString {
	class string
	{
	public:
		typedef char* iterator;
		typedef const char* const_iterator;

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}
		
		const_iterator begin()const
		{
			return _str;
		}

		const_iterator end()const
		{
			return _str + _size;
		}

		//string()
		//	:_str(new char[1])
		//	, _size(0)
		//	, _capacity(0) 
		//{
		//	_str[0] = '\0';
		//}

		string(const char* str = "")
			: _size(strlen(str))
		{
			_capacity = _size;
			_str = new char[_capacity+1];
			strcpy(_str, str);
		}

		string(const string& s )
			: _size(s._size)
			, _capacity(s._capacity)
		{
			_str = new char[s._capacity + 1];
			strcpy(_str, s._str);
		}

		const char* c_str()
		{
			return _str;
		}

		char& operator[](size_t pos)
		{
			assert(pos < _size);
			return _str[pos];
		}

		char& operator[](size_t pos) const
		{
			assert(pos < _size);
			return _str[pos];
		}

		size_t size() const
		{
			return _size;
		}

		string& operator=(const string& s)
		{
			if (this != &s)
			{
				//delete[] _str;
				//_str = new char[s._capacity + 1];
				//strcpy(_str, s._str);
				//_size = s._size;
				//_capacity = s._capacity;

				delete[] _str;
				char* tmp = new char[s._capacity + 1];
				strcpy(tmp, s._str);
				_str = tmp;
				_size = s._size;
				_capacity = s._capacity;
			}

			return *this;
		}

		// 不修改成员变量数据的函数，最好都加上const
		bool operator>(const string& s) const
		{
			return strcmp(_str, s._str) > 0;
		}

		bool operator==(const string& s) const
		{
			return strcmp(_str, s._str) == 0;
		}

		bool operator>=(const string& s) const
		{
			//return *this > s || *this == s;
			return *this > s || s == *this;
		}

		bool operator<(const string& s) const
		{
			return !(*this >= s);
		}

		bool operator<=(const string& s) const
		{
			return !(*this > s);
		}

		bool operator!=(const string& s) const
		{
			return !(*this == s);
		}


		~string() {
			delete[] _str;
			_str = nullptr;
			_size = _capacity =  0;
		}

	private:
		char* _str;;
		size_t _size;
		size_t _capacity;
	};
	void Print(const string& s)
	{
		//for (size_t i = 0; i < s.size(); i++)
		//{
		//	cout << s[i] ;
		//}
		//cout << endl;

		for (auto ch : s )
		{
			cout << ch;
		}
		cout << endl;

	}
	void test_MyString()
	{
		//string s1;
		//string s2("hello world");
		//cout << s1.c_str() << endl;
		//cout << s2.c_str() << endl;
		//s2[0]++;
		//cout << s1.c_str() << endl;
		//cout << s2.c_str() << endl;
		//string s1;
		//string s2("hello world2");
		//string s3 = s2;
		//s3 = s3;
		//cout << s1.c_str() << endl;
		//cout << s2.c_str() << endl;
		//cout << s3.c_str() << endl;
		//s3[0]++;
		//cout << s1.c_str() << endl;
		//cout << s2.c_str() << endl;
		//cout << s3.c_str() << endl;
		string s1("hello world");
		//Print(s1);

		//string::iterator it = s1.begin();
		//while (it != s1.end())
		//{
		//	cout << *it ;
		//	++it;
		//}
		//cout << endl;

		//for (auto ch : s1)
		//{
		//	cout << ch;
		//}
		//cout << endl;
		Print(s1);
	}
}