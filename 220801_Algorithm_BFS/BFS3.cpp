/*
    cycle 방지
*/
#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> alist(6);
int used[6];
queue<int> q;

int main() {

    alist[1] = { 3 };
    alist[2] = { 1, 4 };
    alist[3] = { 2, 4 };
    alist[4] = { 5 };

    //초기세팅
    q.push(1);
    used[1] = 1;

    //BFS 시작
    while (!q.empty()) {

        int now = q.front();
        q.pop();

        cout << now << " ";

        for (int i = 0; i < alist[now].size(); i++) {
            int next = alist[now][i];

            if (used[next] == 1) continue;
            used[next] = 1;
            q.push(next);
        }
    }


    return 0;
}