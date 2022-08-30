/*
	재귀 호출 Trace 연습
*/

#include <iostream>
using namespace std;

int x = 0;

void run()
{
	if (x == 2)
	{
		return;
	}
	x++;
	run();

	int d = 1;
}

int main()
{
	run();

	cout << x;

	return 0;
}