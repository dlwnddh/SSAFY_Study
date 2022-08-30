/*
  (3, 0)에서 (1, 4)까지 가는 최소 길이
*/
#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int y, x;
    int lev;
};

int map[4][5] = {
    0,0,0,0,0,
    0,1,0,1,0,
    0,1,0,1,0,
    0,1,0,0,0,
};

queue<Node> q;
int directY[4] = { -1, 1, 0, 0 };
int directX[4] = { 0, 0, -1, 1 };
int used[4][5];

int BFS() {

    used[3][0] = 1;
    q.push({ 3, 0 });

    while (!q.empty()) {
        Node now = q.front();
        q.pop();


        for (int t = 0; t < 4; t++) {
            int ny = now.y + directY[t];
            int nx = now.x + directX[t];
            if (ny < 0 || nx < 0 || ny >= 4 || nx >= 5) continue;
            if (map[ny][nx] == 1) continue;
            if (used[ny][nx] == 1) continue;
            used[ny][nx] = 1;

            q.push({ ny, nx, now.lev + 1 });

            if (ny == 1 && nx == 4) return now.lev + 1;
        }
    }

    return -1;
}

int main(){

    cout << BFS();


    return 0;
}