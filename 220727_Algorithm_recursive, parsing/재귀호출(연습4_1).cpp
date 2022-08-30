/*
	가지치기
  마지막 level에서 조건을 통해 잘라낸다면 처리 속도가 느릴 것이다.
  그래서 level이 높아지기 전에 진입 자체를 막는다.
	if문의 위치에 유의하여 사용한다.
*/
#include <iostream>
using namespace std;

char path[5];

void run(int lev)
{
	if (lev == 1 && path[0] == '3') return;
	if (lev == 1 && path[0] == '4') return;
	if (lev == 3)
	{
		cout << path << endl;
		return;
	}
	for (int x = 0; x < 4; x++)
	{
		//if (lev == 0 && x == 2) continue;
		//if (lev == 0 && x == 3) continue;
		path[lev] = '1' + x;
		run(lev + 1);
	}
}

int main()
{
	run(0);

	return 0;
}