/*
  주사위를 던진 횟수 N과 출력형식 M을 입력 받아서 M의 값에 따라 각각 아래와 같이 출력하는 프로그램을 작성하시오.

  M = 1 : 주사위를 N번 던져서 나올 수 있는 모든 경우

  M = 2 : 주사위를 N번 던져서 중복이 되는 경우를 제외하고 나올 수 있는 모든 경우

  M = 3 : 주사위를 N번 던져서 모두 다른 수가 나올 수 있는 모든 경우

  * 중복의 예

  1 1 2 와 중복 : 1 2 1, 2 1 1

  1 2 3 과 중복 : 1 3 2, 2 1 3, 2 3 1, 3 1 2​, 3 2 1
*/
#include <iostream>
using namespace std;

int n, m;
int path[10];
int used[10] = { 0 };

void run(int lev, int m, int start)
{
	if (lev == n)
	{
		for (int x = 0; x < n; x++)
		{
			cout << path[x] << " ";
		}
		cout << "\n";
		return;
	}

	if (m == 2)
	{
		for (int i = start; i <= 6; i++)
		{
			path[lev] = i;
			run(lev + 1, m, i);
			path[lev] = 0;
		}
	}
	else
	{
		for (int i = 1; i <= 6; i++)
		{
			if (m == 3)
			{
				if (used[i] == 1) continue;
				used[i] = 1;
			}
			path[lev] = i;
			run(lev + 1, m, start);
			path[lev] = 0;
			used[i] = 0;
		}
	}
}

int main()
{
	cin >> n >> m;
	run(0, m, 1);

	return 0;
}