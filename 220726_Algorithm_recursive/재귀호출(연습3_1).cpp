/*
  좌우 길이 = 레벨
  최대 값 = 브랜치 수
  1111
  1112
  1121
  1122
  ...
  2222
*/
#include <iostream>
using namespace std;

int path[5];

void run(int lev)
{
	if (lev == 4)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << path[x] << " ";
		}
		cout << endl;
		return;
	}

	for (int x = 0; x < 2; x++)
	{
		path[lev] = x + 1;
		run(lev + 1);
		path[lev] = 0;  // 없어도 됨
	}
}

int main()
{
	run(0);

	return 0;
}
