#include <iostream>
#include <algorithm>
using namespace std;

int arr[20];
int dp[3001] = { 0 };
int t, n;

int coin(int now)
{
  if (now < 0) return 10000000;
	if (now == 0) return 0;
	if (dp[now] != 0) return dp[now];

	int cnt = 21e8;

	for (int i = 0; i < n; i++)
	{
		int a = coin(now - arr[i]) + 1;
		cnt = min(a, cnt);
	}

	dp[now] = cnt;

	return dp[now];
}

int main()
{
	cin >> t >> n;

	for (int i = 0; i < n; i++) cin >> arr[i];

	if (coin(t) >= 10000000) cout << "impossible";
	else cout << coin(t);

	return 0;
}