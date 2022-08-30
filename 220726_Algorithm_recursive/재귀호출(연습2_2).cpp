/*
  Level3의 원하는 지점까지 가보자!
  F10으로 넘기고, F11으로 들어간다.
*/
#include <iostream>
using namespace std;

int t = 0;

void run(int lev)
{
	if (lev == 3) // 얼마나 들어가는가(얼마나 뻗어가는지. level 값)
	{
		t++;
		return;
	}

	for (int i = 0; i < 4; i++) // 브랜치 개수(몇 개씩 뻗어가는지)
	{
		run(lev + 1);
	}
}

int main()
{
	run(0);

	return 0;
}