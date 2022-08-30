/*
  전체 배열이 1로 가득차는 데에 걸리는 시간을 구하라.
  1초에 상하좌우로 한 칸씩 퍼진다.
*/
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct Node
{
	int y, x;
	int lev;
};

int main()
{
	queue<Node> q;
	int room[5][5] = { 0 };
	int dy[4] = { 0, 0, -1, 1 };
	int dx[4] = { -1, 1, 0, 0 };
	room[2][2] = 1;
	q.push({ 2, 2, 0 });
	int t = 0;

	while (!q.empty())
	{
		Node now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = now.y + dy[i];
			int nx = now.x + dx[i];
			if (ny < 0 || nx < 0 || ny >= 5 || nx >= 5) continue;
			if (room[ny][nx] == 1) continue;
			room[ny][nx] = 1;

			q.push({ ny, nx, now.lev + 1 });

			t = now.lev + 1;
		}
	}

	cout << t;

	return 0;
}