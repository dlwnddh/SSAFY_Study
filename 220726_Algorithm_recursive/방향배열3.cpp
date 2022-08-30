/*
	한 지점을 선택해 상하좌우의 곱만큼 폭탄 터진다.(본인 포함)
	어디가 터져야 최대 피해인가?
*/
#include <iostream>
using namespace std;

int arr[4][5] = {
		5,6,7,8,9,
		1,1,1,1,1,
		2,2,2,2,2,
		1,1,1,1,1
};

int getJumsu(int y, int x)
{
	// 한 지점에서 다섯방향 곱을 구해서 리턴
	int dy[5] = { -1, 1, 0, 0, 0 };
	int dx[5] = { 0, 0, 1, -1, 0 };

	int gop = 1;

	for (int t = 0; t < 5; t++)
	{
		int ny = y + dy[t];
		int nx = x + dx[t];

		if (ny < 0 || nx < 0 || ny >= 4 || nx >= 5) continue;
		gop *= arr[ny][nx];
	}
	return gop;
}

int main()
{
	int max = 0;
	int max_y;
	int max_x;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			int ret = getJumsu(y, x);
			if (ret > max)
			{
				max = ret;
				max_y = y;
				max_x = x;
			}
		}
	}
	cout << max << endl;
	cout << max_y << " " << max_x;

	return 0;
}