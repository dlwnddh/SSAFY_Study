#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

struct Node
{
	int x;
	int price;
	int lev;
};

int main()
{
	vector<vector<Node>> alist(6);
	queue<Node> q;

	alist[1] = { {2, 3}, {3, 5} };
	alist[2] = { {3, 4}, {4, 1} };
	alist[3] = { {4, 3}, {5, 2} };
	alist[4] = { {5, 7} };

	q.push({ 1, 0, 0 });

	while (!q.empty())
	{
		Node now = q.front();
		q.pop();
		if (now.x == 5)
		{
			cout << now.lev << " " << now.price << "\n";
			break;
		}

		for (int i = 0; i < alist[now.x].size(); i++)
		{
			Node next = alist[now.x][i];

			q.push({ next.x, now.price + next.price, now.lev + 1 });
		}
	}
	
	return 0;
}