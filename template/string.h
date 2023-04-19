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
			_capacity = _size ==0? 3 :_size ;
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

		const char& operator[](size_t pos) const
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

		void reserve(size_t n)
		{
			if (n > _capacity)
			{
				char* tmp = new char[n+1];
				strcpy(tmp, _str);
				delete[]_str;
				_str = tmp;
				_capacity = n;
			}
		}

		void push_back(char ch)
		{
			if (_size >= _capacity)
			{
				reserve(_capacity * 2);
			}
			_str[_size] = ch;
			++_size;
			_str[_size] = '\0';
		}
		
		void append(const char* str)
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			strcpy(_str + _size, str);
			_size += len;
		}

		string& operator+=(char ch)
		{
			push_back(ch);
			return *this;
		}

		string& operator+=(const char*  str)
		{
			append(str);
			return *this;
		}

		void resize(size_t n, char ch = '\0') {
			if (n <= _size)
			{
				_size = n;
				_str[_size] = '\0';
			}
			else
			{
				if (n > _capacity)
				{
					reserve(n);
				}

				size_t i = _size;
				while (i < n)
				{
					_str[i] = ch;
					++i;
				}
				_size = n;
				_str[_size] = '\0';
			}
		}

		void insert(size_t pos, char ch)
		{
			assert(pos <= _size);
			if(_size + 1 > _capacity)
			{
				reserve(2 * _capacity);
			}
			size_t end = _size;
			while (end >= pos)
			{
				_str[end + 1] = _str[end];
				--end;
			}
			_str[pos] = ch;
			++_size;

		}

		void insert(size_t pos, const char* ch)
		{
			assert(pos <= _size);

		}

		void erase(size_t pos, size_t len = npos) {

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
		static const size_t npos ;
	};

	const size_t string::npos = -1;
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
		//string s1("hello world");
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
		//Print(s1);
		//string s1("1234678");
		//string s2("2");
		//string s3("3");
		//string s4;
		//s4.push_back('1');
		//s4.push_back('1');

		//s1.insert(0, '5');
		//Print(s1);
		//cout << s1.c_str();
		//s1.reserve(20);
		//cout << s1.c_str();
		//Print(s1);
		string s1;

		
		s1.resize(20, 'x');
		cout << s1.c_str() << endl;

		s1.resize(30, 'x');
		cout << s1.c_str() << endl;

		s1.resize(10);
		cout << s1.c_str() << endl;

		s1.insert(0, 'x');
		cout << s1.c_str() << endl;

	}
}