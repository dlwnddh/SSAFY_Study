/*
	4,5,1,-3,2,
	1,-1,3,-1,5,
	4,2,-5,6,-9,
	-1,-1,-2,5,7

	같은 열은 다시 포함하지 않고, 곱의 최소값을 구하라.
*/
#include <iostream>
using namespace std;

int arr[4][5] = {
	4,5,1,-3,2,
	1,-1,3,-1,5,
	4,2,-5,6,-9,
	-1,-1,-2,5,7
};

int path[10];
int used[10] = { 0 };
int min = 21e8;

void run(int lev, int gop)
{
	if (lev == 4)
	{
		if (gop < min)
		{
			min = gop;
		}
		return;
	}
	for (int x = 0; x < 5; x++)
	{
		if (used[x] == 1) continue;
		used[x] = 1;
		path[lev] = arr[lev][x];
		run(lev + 1, gop * path[lev]);
		path[lev] = 0;
		used[x] = 0;
	}
}

int main()
{	
	run(0, 1);

	cout << min << endl;

	return 0;
}