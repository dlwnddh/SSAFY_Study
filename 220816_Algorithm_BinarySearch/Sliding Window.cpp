#include <iostream>
using namespace std;

int arr[9] = { 1, 2, 3, 3, 5, 1, 0, 1, 3 };
int k;
int n = 9;

int getSum(int index) {
	int sum = 0;
	for (int i = 0; i < k; i++) sum += arr[i];
	return sum;
}

int main() {
  cin >> k;

	int sum = getSum(0);
	int mini = 21e8;

	for (int i = 0; i <= n - k; i++) {
		//cout << sum << " ";
		if (sum < mini) mini = sum;

		//마지막은 다음 것이 없다!
		if (i == n - k) break;

		//다음 것 준비
		sum += arr[i + k];
		sum -= arr[i];
	}
	cout << mini;

	return 0;
}