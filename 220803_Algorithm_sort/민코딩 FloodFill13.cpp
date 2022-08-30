/*
  지뢰 찾기
  아직 모르는 지점 E
  폭탄 M
  이미 확인된 지점
    주변에 폭탄이 있다면 폭탄 수
    주변에 폭탄이 없다면 B
*/
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

struct Node
{
	int y, x;
};

vector<string> alist(51);
queue<Node> q;
int dy[8] = { -1, -1, -1, 0, 1, 1, 1, 0 };
int dx[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
int used[50][50] = { 0 };
int n, m;

void change(int y, int x)
{
	// 첫 지점 클릭
	// 주변에 폭탄이 있으면 더 진행하지 않는다.

	char cnt_first = '0';	// 주변에 폭탄 'M'이 존재하는지 확인하기 위한 카운트
	for (int i = 0; i < 8; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
		if (alist[ny][nx] == 'M')
		{
			cnt_first++;
		}
	}
	if (cnt_first != '0') alist[y][x] = cnt_first;	// 폭탄이 있다면, 선택 지점에 폭탄 개수를 출력
	else	// 주변에 폭탄이 없다면, 선택 지점에 'B'를 출력하고, 다음 단계 이동(q에 초기 값 push)
	{
		alist[y][x] = 'B';
		q.push({ y, x });
	}

	used[y][x] = 1;

	while (!q.empty())
	{
		Node now = q.front();
		q.pop();
		
		for (int i = 0; i < 8; i++)
		{
			char cnt = '0';		// 탐색하는 주변의 노드의 주변에 폭탄이 있는지 확인
			int ny = now.y + dy[i];
			int nx = now.x + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
			if (used[ny][nx] == 1) continue;

			for (int j = 0; j < 8; j++)	// 주변 노드의 값을 'B'로 할 것인지 폭탄 수로 할 것인지 결정하기 위함
			{
				int nny = ny + dy[j];
				int nnx = nx + dx[j];
				if (nny < 0 || nnx < 0 || nny >= n || nnx >= m) continue;
				if (alist[nny][nnx] == 'M')
				{
					cnt++;
				}
			}

			used[ny][nx] = 1;

			if (alist[ny][nx] != 'B')	// 주변 노드가 E일 경우
			{
				if (cnt != '0') alist[ny][nx] = cnt;	// 주변 노드의 주변에 폭탄이 있다면 폭탄의 개수로 변경
				else	// 폭탄이 없을 경우, 주변 노드를 다음 단계에 추가
				{
					alist[ny][nx] = 'B';
					q.push({ ny, nx });
				}
			}
		}
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> alist[i];
	}

	int y0, x0;
	cin >> y0 >> x0;

	if (alist[y0][x0] == 'M')	// 시작부터 폭탄이라면, 폭탄 터트림
	{
		alist[y0][x0] = 'X';
	}
	else change(y0, x0);

	for (int y = 0; y < n; y++)
	{
		cout << alist[y] << "\n";
	}

	return 0;
}
