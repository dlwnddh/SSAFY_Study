#include <iostream>
using namespace std;

int main()
{
	int arr[151] = { 0 };
	int dp[151] = { 0 };

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++)
	{
		int a;
		int b;

		if (i - 2 < 0) a = -21e8;
		else a = dp[i - 2] + arr[i];

		if (i - 7 < 0) b = -21e8;
		else b = dp[i - 7] + arr[i];

		dp[i] = max(a, b);
	}

	int maxi = -21e8;

	for (int i = n; i > n - 7; i--)
	{
		if (i < 0) break;
		if (dp[i] > maxi) maxi = dp[i];
	}

	cout << maxi;

	return 0;
}