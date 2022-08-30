/*
	한 지점을 선택해 대각선 값들의 합 게산(본인 표함)
*/
#include <iostream>
using namespace std;

int main()
{
	int arr[4][5] = {
		5,6,7,8,9,
		1,1,1,1,1,
		0,0,0,0,0,
		1,1,1,1,1
	};

	int y, x;
	cin >> y >> x;

	int sum = 0;

	int dirY[5] = { 0,-1,-1,1,1 };
	int dirX[5] = { 0,-1,1,-1,1 };
	
	for (int i = 0; i < 5; i++)
	{
		int ny = y + dirY[i];
		int nx = x + dirX[i];

		if (ny >= 0 && ny < 4 && nx >= 0 && nx < 5)
		{
			sum += arr[ny][nx];
		}

		//if (ny < 0 || ny >= 4 || nx < 0 || nx >= 5) continue;
		//sum += arr[ny][nx];
	}

	cout << sum;

	return 0;
}