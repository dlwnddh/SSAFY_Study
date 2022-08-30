#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<vector<int>> alist(7);
queue<int> q;

int main() {

    alist[1] = { 2, 5 };
    alist[2] = { 3, 4 };
    alist[5] = { 6 };

    //시작 준비 -- 큐에
    //시작노드를 적어둔다.
    q.push(1);

    while (!q.empty()) {

        //1. 큐에서 하나 꺼내요
        int now = q.front();
        q.pop();

        cout << now << " ";

        //2. 다음 갈 수 있는 곳을 예약걸음
        for (int i = 0; i < alist[now].size(); i++) {
            int next = alist[now][i];

            q.push(next);
        }

    }


    return 0;
}