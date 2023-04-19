#define _CRT_SECURE_NO_WARNINGS
//#include <string>
//#include <iostream>
//#include <vector>
//#include <limits>
//using namespace std;
//int main()
//{
//	int coin[] = { 1,2,5,10,25 };
//	int n;
//	cin >> n;
//	vector<int>arr;
//	arr.resize(n+1, INT_MAX);
//	vector<int>path;
//	path.resize(n + 1, 0);
//	arr[0] = 0;
//	for (int i = 1; i < arr.size(); i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (i - coin[j] >= 0)
//			{
//				int num_min = min(arr[i - coin[j]] + 1,arr[i]);
//				if (arr[i] != num_min)
//				{
//					arr[i] = num_min;
//					path[i] = coin[j];
//
//				}
//			}
//			else { break; }
//		}
//	}
//	for (auto num : arr)
//	{
//		cout << num << ' ';
//	}
//	cout << endl;
//
//	for (auto num : path)
//	{
//		cout << num << ' ';
//	}
//	cout << endl;
//
//	for (int i = n; i >0; )
//	{
//		cout << path[i] << ' ';
//		i -= path[i];
//	}
//}

//#include <iostream>
//using namespace std;
//int a[501][501] = {0};
//int b[501][501] = { 0 };
//int main()
//{
//	int N, M, K;
//	cin >> N >> M >> K;
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= M; j++)
//		{
//			cin >> a[i][j];
//			b[i][j] = b[i - 1][j] + b[i][j - 1] + a[i][j] - b[i-1][j-1];
//		}
//	}
//	int res = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= M; j++)
//		{
//			for (int k = i; k <= N; k++)
//			{
//				for (int p = j; p <= M; p++)
//				{
//					if (b[k][p] - b[i-1][p] - b[k][j-1] + b[i-1][j-1] <= K)
//					{
//						res++;
//					}
//					else
//					{
//						break;
//					}
//				}
//			}
//		}
//	}
//	cout << res;
//}

//#include<stdio.h>
//#include<string.h>
//#define max 505
//int arr[max][max], kul[max][max];
//int main()
//{
//    int n, m, k, val, i, j, p;
//    scanf("%d%d%d", &n, &m, &val);
//    memset(kul, 0, sizeof(kul));
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            kul[i][j] = kul[i - 1][j] + kul[i][j - 1] + arr[i][j] - kul[i - 1][j - 1];
//        }
//    }
//    int flag = 0, mi = 0;
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= m; j++)
//        {
//            for (k = i; k <= n; k++)
//            {
//                for (p = j; p <= m; p++)
//                {
//                    if (kul[k][p] - kul[i - 1][p] - kul[k][j - 1] + kul[i - 1][j - 1] <= val)
//                    {
//                        flag++;
//                    }
//                    else
//                    {
//                        break;
//                    }
//                }
//            }
//        }
//    }
//
//    printf("%d", flag);
//    return 0;
//}

//#include<stdio.h>
//int s[505][505];
//int main()
//{
//    int n, m, k;
//    scanf("%d%d%d", &n, &m, &k);
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            scanf("%d", &s[i][j]);
//            s[i][j] += s[i - 1][j];
//        }
//    }
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            printf("%d ", s[i][j]);
//        }
//        printf("\n");
//    }
//    //long long int res = 0;
//    //for (int i = 1; i <= n; i++)
//    //{
//    //    for (int j = i; j <= n; j++)
//    //    {
//    //        for (int left = 1, right = 1, sum = 0; right <= m; right++)
//    //        {
//    //            sum += s[j][right] - s[i - 1][right];
//    //            while (sum > k)
//    //            {
//    //                sum -= s[j][left] - s[i - 1][left];
//    //                left++;
//    //            }
//    //            res += right - left + 1;
//    //        }
//    //    }
//    //}
//    //printf("%lld", res);
//    //return 0;
//}
//#include<iostream>
//int main()
//{
//	int a[101] = { 0,1 };
//	printf("%d %d %d", a[0], a[1], a[2]);
//}

#include <iostream>
#include <vector>
using namespace std;


//vector<int> arr = {1,6,3,4,6,7,0,7,8,2,7,6,8,9,5,6,5,6,1,4,0,1,0,0,9,4,8,0,9,1,2,8,5,0,2,5,3,3 };
//int main()
//{
//	for (size_t i = 0; i < arr.size(); i++)
//	{
//		for (size_t j = 0; j < arr.size(); j++)
//		{
//			for (size_t k = 0; k < arr.size(); k++)
//			{
//				for (size_t l = 0; l < arr.size(); l++)
//				{
//					if (l > k && k > j && j > i)
//					{
//						if (arr[i] == 1 && (arr[j] == 1 || arr[j] == 2 || arr[j] == 0))
//						{
//							if (arr[k] < 3)
//							{
//								cout << arr[i] << arr[j] << arr[k] << arr[l] << endl;
//							}
//							if (arr[k] == 3 && arr[l] <= 1)
//							{
//								cout << arr[i] << arr[j] << arr[k] << arr[l] << endl;
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//}