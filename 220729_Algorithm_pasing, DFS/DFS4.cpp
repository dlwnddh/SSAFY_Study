/*
	각 경로에 가격이 주어져 있을 때, 최소값을 구하는 과정
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node {
	int loc;
	int price;
};

vector<vector<Node>> alist(5);
int used[5];

void run(int now, int sum) {

	if (now == 4) {
		cout << sum << " ";
		return;
	}

	for (int i = 0; i < alist[now].size(); i++) {
		Node next = alist[now][i];

		//next.loc : 다음 갈곳 위치
		//next.price : 다음 갈곳의 가격

		if (used[next.loc] == 1) continue;
		used[next.loc] = 1;
		run(next.loc, sum + next.price);
		used[next.loc] = 0;
	}

}

int main()
{
	alist[1] = { { 2, 7} };
	alist[2] = { {4, 10}, {3, 5} };
	alist[3] = { {4, 2} };

	used[1] = 1;
	run(1, 0);

	return 0;
}