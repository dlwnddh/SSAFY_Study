/*
	각 레벨 값들의 합 구하기

	주사위 3개의 모든 경우의 수와 각 주사위의 합 출력
  합이 10 미만인 것만 출력
*/
#include <iostream>
#include <string>
using namespace std;

int path[10];
int n = 3;

void run(int lev, int sum) {
	if (sum >= 10) return;
	if (lev == n) {
		for (int i = 0; i < lev; i++) {
			cout << path[i] << " ";
		}
		cout << sum << "\n";
		return;
	}
	for (int i = 1; i <= 6; i++) {
		//if (sum + i >= 10) continue;
		path[lev] = i;
		run(lev + 1, sum + i);
		path[lev] = 0;
	}
}

int main() {
	run(0, 0);

	return 0;
}