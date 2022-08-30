/*
	연속되는 level의 path 값이 동일하면 미출력
	3 1 3 출력
	3 1 1 미출력
*/
#include <iostream>
using namespace std;

char path[10];

void run(int lev)
{
	//if (lev >= 2 && path[lev - 1] == path[lev - 2]) return;
	if (lev == 3)
	{
		cout << path << endl;
		return;
	}
	for (int x = 0; x < 4; x++)
	{
		path[lev] = '1' + x;
		if (lev != 0 && path[lev] == path[lev - 1]) continue;
		run(lev + 1);
		path[lev] = 0;
	}
}

int main()
{
	run(0);

	return 0;
}