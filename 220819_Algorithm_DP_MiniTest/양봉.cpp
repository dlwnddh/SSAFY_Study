// 미완성

#include <iostream>
using namespace std;

int dy_even[6] = { -1, -1, -1, 0, 1, 0 };
int dx_even[6] = { -1, 0, 1, 1, 0, -1 };
int dy_odd[6] = { -1, 0, 1, 1, 1, 0 };
int dx_odd[6] = { 0, 1, 1, 0, -1, -1 };

int bee[15][15];
int used[15][15] = { 0 };
int n, m;

struct Node
{
	int y, x;
	int price;
};

int dfs(int lev, Node start)
{
	if (lev == 4) return;

	Node arr[6] = { 0 };

	if (start.x % 2 == 0)
	{
		for (int i = 0; i < 6; i++)
		{
			int ny = start.y + dy_even[i];
			int nx = start.x + dx_even[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;

			arr[i] = { ny, nx, bee[ny][nx] };
		}
	}
	else
	{
		for (int i = 0; i < 6; i++)
		{
			int ny = start.y + dy_odd[i];
			int nx = start.x + dx_odd[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;

			arr[i] = { ny, nx, bee[ny][nx] };
		}
	}
	
	for (int i = 0; i < 6; i++)
	{
		if (arr[i].price == 0) continue;
		if (used[arr[i].y][arr[i].x] == 1) continue;
		used[arr[i].y][arr[i].x] = 1;

		int ret = dfs(lev + 1, arr[i]);

		used[arr[i].y][arr[i].x] = 0;
	}
}

int main()
{
	cin >> n >> m;

	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < m; x++)
		{
			cin >> bee[y][x];
		}
	}

	int max = 0;

	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < m; x++)
		{
			cin >> bee[y][x];
		}
	}

	return 0;
}