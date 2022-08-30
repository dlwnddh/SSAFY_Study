#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<vector<int>> alist(7);
string str = "TVJSBTQ";
queue<int> q;

int main() {

    alist[0] = { 1, 2, 3 };
    alist[1] = { 4, 5 };
    alist[3] = { 6 };

    q.push(0);

    while (!q.empty())
    {
        int now = q.front();
        q.pop();

        cout << str[now] << " ";

        for (int i = 0; i < alist[now].size(); i++)
        {
            int next = alist[now][i];

            q.push(next);
        }
    }

    return 0;
}