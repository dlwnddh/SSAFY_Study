/*
	출력이 어떻게 나오는지 예측해보자
*/

#include <iostream>
using namespace std;

void run(int lev)
{
	if (lev == 2)
	{
		return;
	}
	for (int i = 0; i < 2; i++)
	{
		cout << lev;
		run(lev + 1);
		cout << lev;
	}

	int d = 1;
}

int main()
{
	run(0);

	return 0;
}

/*
	출력 : 0 1 1 1 1 0 0 1 1 1 1 0
*/