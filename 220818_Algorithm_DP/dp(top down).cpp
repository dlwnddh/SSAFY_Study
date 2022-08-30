#include <iostream>
using namespace std;

int memo[100];

int top_down(int now)
{
	if (memo[now] != 0) return memo[now];

	if (now == 1) return 0;
	if (now == 2) return 1;

	int a = top_down(now - 2);
	int b = top_down(now - 1);

	memo[now] = a + b;
	
	return memo[now];
}

int main()
{
	cout << top_down(40);

	return 0;
}