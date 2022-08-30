/*
    배열의 값을 바로 다른 배열의 index로 활용하는 방식
*/

#include <iostream>
using namespace std;
int main() {
	int arr[] = { 1, 3, 5, 1, 1, 4, 9 };
	int n = 7;
	int dat[10] = { 0 };
	for (int i = 0; i < n; i++) {
		dat[arr[i]]++;
	}
	int cnt = 0;
	for (int i = 0; i < 10; i++) {
		if (dat[i] > 0) cnt++;
	}
	cout << cnt;
	return 0;
}