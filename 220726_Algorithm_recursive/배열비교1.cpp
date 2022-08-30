/*
	작은 배열의 구성이 큰 배열 내에 몇 개 존재하는지 확인
*/
#include <iostream>
using namespace std;

int arr1[4] = { 1, 5, 4, 9 };
int arr2[] = { 1,1,1,5,1,5,4,9,1,5,4,9 };

int isSame(int index)
{
	for (int i = 0; i < 4; i++)
	{
		if (arr1[i] != arr2[index + i])
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int count = 0;
	for (int i = 0; i < (12 - 4); i++)
	{
		if (isSame(i) == 0) count++;
	}

	cout << count;

	return 0;
}