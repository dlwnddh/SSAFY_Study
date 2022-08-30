/*
	DFS 기초 원리
  used를 활용해 무한 사이클을 막을 수 있다.
	아래 코드는 시작 노드에서 갈 수 있는 모든 노드를 확인할 수 있다.
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> v(5);
int used[5];

void run(int now)
{
	cout << now << " ";

	for (int i = 0; i < v[now].size(); i++) {
		int next = v[now][i];

		if (used[next] == 1) continue;
		used[next] = 1;
		run(next);
	}
}

int main()
{
	v[1] = { 2 };
	v[2] = { 3,4 };
	v[3] = { 4 };
	v[4] = { 1 };

	int now = 1;
	run(now);

	return 0;
}