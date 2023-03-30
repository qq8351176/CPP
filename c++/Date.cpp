//#include <iostream>
//#include <assert.h>
//using namespace std;
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// 拷贝构造
//	// Date d2(d1);
//	//Date(const Date& d)
//	//{
//	//	cout << "Date(Date& d)" << endl;
//	//	_year = d._year;
//	//	_month = d._month;
//	//	_day = d._day;
//	//}
//
//	int GetMonthDay(int year, int month)
//	{
//		assert(month > 0 && month < 13);
//
//		int monthArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400) == 0))
//		{
//			return 29;
//		}
//		else
//		{
//			return monthArray[month];
//		}
//	}
//
//	// +
//	Date Add(int x)
//	{
//		Date tmp = *this;
//		tmp._day += x;
//		while (tmp._day > GetMonthDay(tmp._year, tmp._month))
//		{
//			// 进位
//			tmp._day -= GetMonthDay(tmp._year, tmp._month);
//			++tmp._month;
//			if (tmp._month == 13)
//			{
//				tmp._year++;
//				tmp._month = 1;
//			}
//		}
//
//		return tmp;
//	}
//
//	// +=
//	Date& AddEqual(int x)
//	{
//		_day += x;
//		while (_day > GetMonthDay(_year, _month))
//		{
//			// 进位
//			_day -= GetMonthDay(_year, _month);
//			++_month;
//			if (_month == 13)
//			{
//				_year++;
//				_month = 1;
//			}
//		}
//
//		return *this;
//	}
//
//	void Print()
//	{
//		
//		cout << _year << "年" << _month << "月" << _day << "日" << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2023);
//	d1.Print();
//	Date d2;
//	d2 = d1;
//	d2.Print();
//	// 实现一个函数，获取多少以后的一个日期
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//#include <stack>
//#include <array>
//int main() {
//    array<int, 2> arr;
//    array<int, 2> tmp1;
//    array<int, 2> tmp2;
//    stack<array<int, 2>> st;
//    int n, m, res = 0;
//    cin >> n >> m;
//    st.push({ 1, 1 });
//    while (!st.empty())
//    {
//        tmp1 = st.top();
//        if (tmp1[0] == n && tmp1[0] == m)
//        {
//            st.pop();
//            res++;
//        }
//        else
//        {
//            st.pop();
//            tmp2 = tmp1;
//            tmp1[0] += 1;
//            tmp2[1] += 1;
//            st.push(tmp1);
//            st.push(tmp2);
//
//        }
//    }
//    cout << res;
//}
//#include <iostream>
//#include <stack>
//#include <array>
//using namespace std;
//
//int main() {
//    array<int, 2> arr;
//    array<int, 2> tmp1;
//    array<int, 2> tmp2;
//    stack<array<int, 2>> st;
//    int n, m, res = 0;
//    cin >> n >> m;
//    st.push({ 1, 1 });
//    while (!st.empty())
//    {
//        tmp1 = st.top();
//        if (tmp1[0] == n && tmp1[1] == m)
//        {
//            st.pop();
//            res++;
//        }
//        else
//        {
//            st.pop();
//            tmp2 = tmp1;
//            tmp1[0] += 1;
//            tmp2[1] += 1;
//            if (tmp1[0] <= n) {
//                st.push(tmp1);
//            }
//            if (tmp2[1] <= m) {
//                st.push(tmp2);
//            }
//        }
//    }
//    cout << res << endl;
//    return 0;
//}