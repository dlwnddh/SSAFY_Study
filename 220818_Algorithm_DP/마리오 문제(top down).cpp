#include <iostream>
using namespace std;

int arr[151];
int dp[151];

int top_down(int now)
{
	if (now < 0) return -21e8;
	if (now == 0) return 0;
	if (dp[now] != 0) return dp[now];

	int a = top_down(now - 2);
	int b = top_down(now - 7);

	int ret = a;
	if (ret < b) ret = b;

	dp[now] = ret + arr[now];
	return dp[now];
}

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) cin >> arr[i];

	int max = -21e8;

	for (int i = n; i > n - 7; i--)
	{
		if (i < 0) break;
		int ret = top_down(i);
		if (ret > max) max = ret;
	}

	cout << max;

	return 0;
}