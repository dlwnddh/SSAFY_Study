#include <iostream>
#include <string>
#include <queue>
using namespace std;

string arr[100];

int used[100][10] = { 0 };
int dy[4] = { 0, 0, -1, 1 };
int dx[4] = { -1, 1, 0, 0 };
int n, k;

struct Node
{
	int y, x;
};

int bfs(int y, int x)
{
	queue<Node> q;

	char check = arr[y][x];
	int cnt = 0;
	
	q.push({ y, x });
	used[y][x] = 1;

	while (!q.empty())
	{
		Node now = q.front();
		q.pop();
		cnt++;

		for (int i = 0; i < 4; i++)
		{
			int ny = now.y + dy[i];
			int nx = now.x + dx[i];

			if (ny < 0 || nx < 0 || ny >= n || nx >= 10) continue;
			if (used[ny][nx] == 1) continue;
			if (arr[ny][nx] != check) continue;

			used[ny][nx] = 1;
			q.push({ ny, nx });
		}
	}

	return cnt;
}

void pang(int y, int x)
{
	queue<Node> q;

	char check = arr[y][x];

	q.push({ y, x });

	int used_pang[100][10] = { 0 };
	used_pang[y][x] = 1;
	arr[y][x] = '0';

	while (!q.empty())
	{
		Node now = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = now.y + dy[i];
			int nx = now.x + dx[i];

			if (ny < 0 || nx < 0 || ny >= n || nx >= 10) continue;
			if (used_pang[ny][nx] == 1) continue;
			if (arr[ny][nx] != check) continue;

			used_pang[ny][nx] = 1;
			arr[ny][nx] = '0';

			q.push({ ny, nx });
		}
	}
}

void gravity()
{
	for (int x = 0; x < 10; x++)
	{
		int y_change = n - 1;
		for (int y = n - 1; y >= 0; y--)
		{
			if (arr[y][x] != '0')
			{
				int temp = arr[y_change][x];
				arr[y_change][x] = arr[y][x];
				arr[y][x] = temp;

				y_change--;
			}
		}
	}
}

int check()
{
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			used[y][x] = 0;
		}
	}
	int flag = 0;

	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (arr[y][x] == '0') continue;
			if (used[y][x] == 1) continue;

			int cnt = bfs(y, x);

			if (cnt >= k)
			{
				flag = 1;
				pang(y, x);
			}
		}
	}

	gravity();

	if (flag == 1) return 1;
	else return 0;
}

int main()
{
	cin >> n >> k;

	for (int y = 0; y < n; y++)
	{
		cin >> arr[y];
	}

	while (check());

	for (int y = 0; y < n; y++)
	{
		cout << arr[y] << "\n";
	}

	return 0;
}