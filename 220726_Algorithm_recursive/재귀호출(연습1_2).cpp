/*
	재귀 호출 Trace 연습
	x값의 변화에 집중
*/

#include <iostream>
using namespace std;

int x = 0;

void run(int x)
{
	if (x == 2)
	{
		return;
	}
	run(x + 1);
}

int main()
{
	run(0);

	return 0;
}