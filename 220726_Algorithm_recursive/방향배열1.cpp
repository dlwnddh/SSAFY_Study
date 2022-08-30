  /*
	한 지점을 선택해 위, 아래, 좌우 값들의 합 게산
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

	int x, y;
	cin >> y >> x;

	int sum = 0;

	// 노가다 방식 (테두리 처리를 하기가 번거로움 - if문을 각각 걸어줘야함)
	//sum += arr[y + 0][x - 1];
	//sum += arr[y + 0][x + 1];
	//sum += arr[y - 1][x + 0];
	//sum += arr[y + 1][x + 0];


	// for문으로 변경(Direct 방식 - 방향 배열)
	int directY[4] = { 0,0,-1,1 };
	int directX[4] = { -1,1,0,0 };

	for (int t = 0; t < 4; t++)
	{
		int nextY = y + directY[t];
		int nextX = x + directX[t];
		if (nextY >= 0 && nextY < 4 && nextX >= 0 && nextX < 5)	// 테두리 처리
		{
			sum += arr[nextY][nextX];
		}
	}


	cout << sum;

	return 0;
}