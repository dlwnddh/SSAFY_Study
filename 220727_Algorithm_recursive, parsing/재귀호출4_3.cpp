/*
	체스에서  Castle은 다음 그림과 같이 가로, 세로 방향으로 자유롭게 이동할 수 있습니다.

	N x N 체스판에 N 개의 캐슬을 배치시켜 나올 수 있는 경우의 수를 출력해주세요

	단, 배치할때 서로 공격하지 않아야합니다.
	만약 Castle을 배치해서 이동할 수 있는 곳에 또 다른 Castle이 있다면, 이는 공격가능한걸로 간주합니다.

	N 이 주어졌을 때, 서로 공격이 불가능하도록배치할 수 있는 경우의 수를 출력해 주세요
*/
#include <iostream>
using namespace std;

int cnt = 0;
int used[10] = { 0 };
int n;

void run(int lev)
{
	if (lev == n)
	{
		cnt++;
		return;
	}
	for (int x = 0; x < n; x++)
	{
		if (used[x] == 1) continue;
		used[x] = 1;
		run(lev + 1);
		used[x] = 0;
	}
}

int main()
{
	cin >> n;
	run(0);
	cout << cnt;

	return 0;
}