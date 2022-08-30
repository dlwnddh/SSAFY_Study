#include <iostream>
#include <algorithm>
using namespace std;

int arr[10] = { 1,5,7,7,3,0,8,2 };

int main()
{
	// 마지막 인덱스보다 1 큰 값을 입력해야 한다.

	// 오름차순
	// sort(&arr[0], &arr[8]);
	sort(arr, arr + 8);

	// 내림차순
	sort(arr, arr + 8, greater<int>());

	return 0;
}
