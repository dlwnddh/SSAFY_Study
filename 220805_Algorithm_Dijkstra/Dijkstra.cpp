#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

struct Node
{
	int x;
	int cost;
};

bool operator<(Node v, Node t)
{
	return t.cost < v.cost;
}
priority_queue<Node> q;

vector<vector<Node>> alist(5);
int result[5];

int main()
{
	alist[0] = { {1, 3}, {2, 10} };
	alist[1] = { {2, 1}, {3, 7} };
	alist[2] = { {0, 5}, {3, 5}, {4, 10} };
	alist[3] = { {4, 2} };

	for (int i = 0; i < 5; i++)
	{
		result[i] = 21e8;
	}

	int start = 0;
	result[start] = 0;

	q.push({ start, 0 });

	while (!q.empty())
	{
		Node now = q.top();
		q.pop();

    if (now.cost > result[now.x]) continue;

		for (int i = 0; i < alist[now.x].size(); i++)
		{
			Node next = alist[now.x][i];

			if (next.cost + now.cost >= result[next.x]) continue;
			result[next.x] = next.cost + now.cost;
			q.push({ next.x, next.cost + now.cost });
		}
	}

	return 0;
}
