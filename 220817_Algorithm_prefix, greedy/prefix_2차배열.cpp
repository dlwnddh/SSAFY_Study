#include <iostream>
using namespace std;

int arr[1001][1001] = { 0 };
int acc[1001][1001] = { 0 };

int main()
{
	int n, m;
	cin >> n >> m;

	for (int y = 1; y <= n; y++)
	{
		for (int x = 1; x <= n; x++)
		{
			cin >> arr[y][x];
		}
	}

	for (int y = 1; y <= n; y++)
	{
		for (int x = 1; x <= n; x++)
		{
			acc[y][x] = acc[y - 1][x] + acc[y][x - 1] - acc[y - 1][x - 1] + arr[y][x];
		}
	}

	for (int i = 0; i < m; i++)
	{
		int y1, x1, y2, x2;
		cin >> y1 >> x1 >> y2 >> x2;

		int sum = acc[y2][x2] - acc[y2][x1 - 1] - acc[y1 - 1][x2] + acc[y1 - 1][x1 - 1];

		cout << sum << "\n";
	}

	return 0;
}