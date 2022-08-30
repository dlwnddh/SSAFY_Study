/*
	모든 경로를 탐색하기 위해서는 used[next] = 0이 추가되어야 한다.
	가능한 모든 경로의 수를 확인하는데에 용이하다.
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> alist(5);
int used[5];
int cnt = 0;

void run(int now)
{
	if (now == 4)
	{
		cnt++;
		return;
	}
	for (int i = 0; i < alist[now].size(); i++)
	{
		int next = alist[now][i];
		if (used[next] == 1) continue;
		used[next] = 1;
		run(next);
		used[next] = 0;	// 모든 경로 탐색
	}
}

int main()
{
	alist[1] = { 2,3,4 };
	alist[2] = { 3,4 };
	alist[3] = { 1,4 };

	used[1] = 1;
	run(1);

	cout << cnt;

	return 0;
}