/* 민코딩 Greedy의 탑 5번*/
#include <iostream>
#include <algorithm>
using namespace std;

struct Meeting {
	int start;
	int end;
};

bool cmp(Meeting a, Meeting  b) {
	if (a.end < b.end)
		return true;
	if (a.end > b.end)
		return false;
	if (a.start < b.start)
		return true;
	if (a.start > b.start)
		return false;
	return false;
}

Meeting m[100001];
int n;

int main() {
	cin >> n;

	// n 개의 회의 시간을 입력 
	for (int i = 0; i < n; i++) {
		int start, end;
		cin >> start >> end;
		// Meeting이라는 클래스를 만들어서 -> Meeting 배열을 만들고 -> 여기에 저장
		m[i] = { start, end };
	}

	// solve
	// 선택한 기준으로 정렬 -> 기준 : 빨리 끝나는 회의 순
	sort(m, m + n, cmp);

	// 첫번째 회의 = 무조건 진행한다
	// 하나의 회의를 진행했다! 
	int cnt = 1;
	// 이 회의가 종료되는 시간 = 이 다음 회의를 선택하는 기준의 시간
	int time = m[0].end;

	// 1번 회의부터 확인하면서 이 회의가 진행이 가능하면 -> 하나의 회의를 더 누적
	// 종료 시간 갱신 
	for (int i = 1; i < n; i++) {
		// 이 회의가 진행이 가능한가? 
		// 지금 내가 선택할려고 하는 회의의 시작 시간 >= 이 전 회의의 종료 시간
		if (m[i].start >= time) {
			// 이 회의는 진행이 가능하다! --> 하나의 회의를 더 진행했다! 
			cnt++;
			// 종료 시간 갱신 
			time = m[i].end;
		}
	}
	cout << cnt;
}