/*
	한 번 나온 값은 안나오도록 설계
	used 활용(DAT와 유사)
*/
#include <iostream>
#include <string>
using namespace std;

int path[10];
int n = 3;
int used[10] = { 0 };

void run(int lev, int sum) {
	if (lev == n) {
		for (int i = 0; i < lev; i++) {
			cout << path[i] << " ";
		}
		cout << sum << "\n";
		return;
	}
	for (int i = 1; i <= 6; i++) {
		if (used[i] == 1) continue;
		used[i] = 1;
		path[lev] = i;
		run(lev + 1, sum + i);
		path[lev] = 0;
		used[i] = 0;
	}
}

int main() {
	run(0, 0);

	return 0;
}