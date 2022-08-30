/*
  1이 상하좌우에 붙어있다면 하나의 섬
  (0, 0)을 포함한 섬의 크기 구하기
*/
#include <iostream>
#include <queue>
using namespace std;

struct Node
{
	int y, x;
};

// used를 사용하는 것도 방법 중 하나이다.
// used를 사용하면, map 배열 자체를 바꿀 필요가 없다.
queue<Node> q;
int dy[4] = { 0, 0, -1, 1 };
int dx[4] = { -1, 1, 0, 0 };
int map[5][7] = {
	1,1,1,1,1,1,1,
	0,0,0,0,0,0,1,
	1,1,0,1,0,1,1,
	1,0,0,0,0,0,1,
	1,1,1,1,0,1,1
};

int main()
{
	map[0][0] = 0;
	q.push({ 0, 0 });
	int cnt = 1;

	while (!q.empty())
	{
		Node now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = now.y + dy[i];
			int nx = now.x + dx[i];
			if (ny < 0 || nx < 0 || ny >= 5 || nx >= 7) continue;
			if (map[ny][nx] == 0) continue;
			map[ny][nx] = 0;

			q.push({ ny, nx });
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}