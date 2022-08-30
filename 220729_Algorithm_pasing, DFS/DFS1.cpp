/*
	DFS 기초 원리(pre-DFS)
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> alist(7);

void run(int now)
{
	cout << now << " ";
	for (int i = 0; i < alist[now].size(); i++)
	{
		int next = alist[now][i];
		run(next);
	}
}

int main()
{
	alist[1] = { 2,3 };
	alist[2] = { 4,5 };
	alist[3] = { 6 };

	int now = 1;

	run(now);

	return 0;
}