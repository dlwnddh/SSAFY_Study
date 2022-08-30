#include <iostream>
using namespace std;

int Group[100];

int Find(int tar)
{
	if (Group[tar] == 0) return tar;

	int ret = Find(Group[tar]);
	Group[tar] = ret;	// 경로압축. Find함수를 여러 번 호출할 때 처리속도가 빨라진다.

	return ret;
}

void Union(int a, int b)
{
	int na = Find(a);
	int nb = Find(b);

	if (na == nb) return;	// 이미 같은그룹이면 패스

	Group[nb] = na;
}

int main()
{
	Union(3, 4);
	Union(3, 5);
	Union(5, 1);
	Union(8, 9);

	if (Find(3) == Find(9)) cout << "same";
	else cout << "not same";

	return 0;
}