/*
	정렬 조건
	1. 문자 작은 것
	2. 숫자 큰 것
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Node
{
	int a;
	char ch;
};

bool compare(Node t, Node v)
{
	if (t.ch < v.ch) return 1;
	if (t.ch > v.ch) return 0;

	return t.a > v.a;
}

int main()
{
	vector<Node> v = {
		{3, 'A'},
		{9, 'B'},
		{2, 'C'},
		{1, 'D'},
		{1, 'A'},
		{9, 'C'}
	};

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].a << " " << v[i].ch << "\n";
	}

	return 0;
}
