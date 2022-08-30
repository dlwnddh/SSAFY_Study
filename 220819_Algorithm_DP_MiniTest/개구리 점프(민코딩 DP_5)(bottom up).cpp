#include <iostream>
#include <algorithm>
using namespace std;

int map[1000][1000];
int frog[1000][1000];

int main()
{
	int h, w;
	cin >> h >> w;

	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
		{
			cin >> map[y][x];
		}
	}

	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
		{
			frog[y][x] = -21e8;
		}
	}

	frog[0][0] = map[0][0];
	int dy[3] = { 1, 1, 1 };
	int dx[3] = { -1, 0, 1 };

	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
		{
			if (map[y][x] == 0) continue;
			for (int i = 0; i < 3; i++)
			{
				int ny = y + dy[i];
				int nx = x + dx[i];
				if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
				if (map[ny][nx] == 0) continue;

				int a = frog[y][x] + map[ny][nx];

				frog[ny][nx] = max(a, frog[ny][nx]);
			}
		}
	}

	int maxi = -21e8;

	for (int x = 0; x < w; x++)
	{
		maxi = max(maxi, frog[h - 1][x]);
	}

	cout << maxi;

	return 0;
}