/*
	작은 배열의 구성이 큰 배열 내에 몇 개 존재하는지 확인
	구성이 행을 넘어가서는 안된다.
*/
#include <iostream>
using namespace std;

int arr1[4] = { 1,5,4,9 };
int map[4][5] = {
	1,5,4,9,9,
	1,1,5,4,9,
	1,1,1,1,1,
	1,5,4,9,1
};

int isSame(int y, int x)
{
	for (int t = 0; t < 4; t++)
	{
		if (arr1[t] != map[y][x + t]) return 0;
	}
	return 1;
}

int main()
{
	int count = 0;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x <= 5 - 4; x++)
		{
			count += isSame(y, x);
		}
	}

	cout << count;

	return 0;
}