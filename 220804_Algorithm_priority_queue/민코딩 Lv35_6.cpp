/*
    처음에 500이라는 숫자 존재
    n을 입력 받아 과정 n번 반복
    매 과정마다 숫자 2개를 입력받는다.
    각 과정마다 중간값을 출력.(중간 값은 순서상 중간에 존재하는 값)
    
    입력
    4
    700 600
    400 300
    100 200
    370 430

    출력
    600
    500
    400
    400
*/
#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> small_q;
priority_queue<int, vector<int>, greater<int>> big_q;

int mid;

void push(int x)
{
	if (x > mid) big_q.push(x);
	else small_q.push(x);
}

int main()
{
	int n;
	cin >> n;

	mid = 500;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;

		push(a);
		push(b);

		if (big_q.size() > small_q.size())
		{
			small_q.push(mid);
			mid = big_q.top();
			big_q.pop();
		}
		else if (big_q.size() < small_q.size())
		{
			big_q.push(mid);
			mid = small_q.top();
			small_q.pop();
		}

		cout << mid << "\n";
	}


	return 0;
}