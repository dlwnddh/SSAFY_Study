/*
  특정 좌표에서 상하좌우로 한 칸 씩 퍼진다.
  퍼질때마다 1씩 커진다.
*/
#include <iostream>
#include <queue>
using namespace std;

struct Node
{
	int y, x;
};

queue<Node> q;
int map[3][4] = { 0 };
int dy[4] = { 0, 0, -1, 1 };
int dx[4] = { -1, 1, 0, 0 };

int main()
{
	map[1][1] = 1;
	q.push({ 1, 1 });

	while (!q.empty())
	{
		Node now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = now.y + dy[i];
			int nx = now.x + dx[i];
			if (ny < 0 || nx < 0 || ny >= 3 || nx >= 4) continue;
			if (map[ny][nx] != 0) continue;
			map[ny][nx] = map[now.y][now.x] + 1;

			q.push({ ny, nx });
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << map[y][x] << " ";
		}
		cout << "\n";
	}

	return 0;
}