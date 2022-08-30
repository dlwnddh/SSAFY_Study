/*
	배열의 0~5번 index 값, 5~0번 index 값 출력
	ex. {4,2,9,1,5}
	4 2 9 1 5 5 1 9 2 4
*/

#include <iostream>
using namespace std;

int arr[5] = { 4,2,9,1,5 };

void run(int x)
{
	if (x == 5) return;
	cout << arr[x];
	run(x + 1);
	cout << arr[x];
}

int main()
{
	run(0);

	return 0;
}