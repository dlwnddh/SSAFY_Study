// 피보나치 수열 30번째 항 구하기

#include <iostream>
using namespace std;

int main()
{
	int dp[100] = { 0, 1 };

	for (int i = 2; i < 30; i++)
	{
		dp[i] = dp[1 - 2] + dp[i - 1];
	}

	cout << dp[29];

	return 0;
}