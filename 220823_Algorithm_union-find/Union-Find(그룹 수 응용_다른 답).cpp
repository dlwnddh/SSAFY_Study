// A~Z 그룹의 수, 혼자인 개수 출력
#include <iostream>
using namespace std;

char Group[100];
int dat[100];
int group_person = 0;
int group_cnt = 0;

char Find(char ch)
{
	if (Group[ch] == 0) return ch;

	char ret = Find(Group[ch]);
	Group[ch] = ret;

	return ret;
}

void Union(char ch1, char ch2)
{
	char t1 = Find(ch1);
	char t2 = Find(ch2);

	if (t1 == t2) return;

	Group[t2] = t1;

	if (dat[t1] == 0)
	{
		dat[t1] = 1;
		group_person++;
	}

	if (dat[t2] == 0)
	{
		dat[t2] = 1;
		group_person++;
	}

	group_cnt++;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		char a, b;
		cin >> a >> b;

		Union(a, b);
	}

	cout << group_person - group_cnt << "\n" << 26 - group_person;

	return 0;
}