/*
  노드 번호를 입력받고, 도달할 수 있는 노드 값 모두 출력
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> alist(6);
vector<string> value(6);

int main()
{
	alist[1] = { 5,2 };
	alist[2] = { 3 };
	alist[3] = { 5,4 };
	alist[5] = { 4 };

	value = { "", "BTS", "KFC", "MOMS", "MC", "BBQ" };

	int n;
	cin >> n;

	for (int i = 0; i < alist[n].size(); i++)
	{
		cout << value[alist[n][i]] << " ";
	}

	return 0;
}