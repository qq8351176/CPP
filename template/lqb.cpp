//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//int n, m, k;
//int ans = 0;
//int a[500 + 1][500 + 1];
//int dp[500 + 1][500 + 1];
//int main() {
//	cin >> n >> m >> k;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++) {
//			cin >> a[i][j];
//		}
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//		{
//			int sum = 0;
//			for (int x = i + 1; x <= n; x++)
//			{
//				sum += a[x][j];
//				if (sum < k)ans++;
//			}
//			sum = 0;
//			for (int y = j + 1; y <= m; y++)
//			{
//				sum += a[i][y];
//				if (sum < k)ans++;
//			}
//			sum = 0;
//		}
//	cout << ans;
//	return 0;
//}
