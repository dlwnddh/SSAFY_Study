/*
    최소 이동 수 구하기
*/
#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

struct Node {
    int num; //노드번호
    int lev;
};

queue<Node> q;
vector<vector<int>> alist(5);
int used[10];

int main() {

    alist[0] = { 1 , 3 };
    alist[1] = { 2 };
    alist[2] = { 3 };
    alist[3] = { 4 };

    q.push({ 0, 0 });
    used[0] = 1;

    while (!q.empty()) {
        Node now = q.front();
        q.pop();

        if (now.num == 4) {
            cout << now.lev;
            break;
        }

        for (int i = 0; i < alist[now.num].size(); i++) {
            int next = alist[now.num][i];
            if (used[next] == 1) continue;
            used[next] = 1;
            q.push({ next, now.lev + 1 });
        }
    }
}