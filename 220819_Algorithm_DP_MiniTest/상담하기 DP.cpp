#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
	int day;
	int money;
};

Node arr[101];
int dp[101] = { 0 };

int max_money(int now)
{
	if (now == 0) return 0;
	if (dp[now] != 0) return dp[now];

	int maxi = 0;

	for (int i = now - 1; i >= 0; i--)
	{
		if (now - i < arr[i].day) continue;
		int ret = max_money(i) + arr[now].money;

		if (ret > maxi) maxi = ret;
	}

	dp[now] = maxi;

	return dp[now];
}

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[i] = { a, b };
	}

	int max = 0;

	max_money(n);

	for (int i = 1; i <= n; i++)
	{
		int ret = dp[i];
		if (ret > max) max = ret;
	}

	cout << max;

	return 0;
}