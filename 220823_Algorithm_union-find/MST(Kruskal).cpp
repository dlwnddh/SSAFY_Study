#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char line[200];

struct Node {
    char a, b;
    int val;
};

bool compare(Node t, Node v) {
    return t.val < v.val;
}

char findBoss(char tar) {
    if (line[tar] == 0) return tar;
    return line[tar] = findBoss(line[tar]);
}

void unionGroup(char a, char b) {
    char t1 = findBoss(a);
    char t2 = findBoss(b);
    if (t1 == t2) return;
    line[t2] = t1;
}


int main() {

    freopen_s(new FILE *, "input.txt", "r", stdin);

    int n;
    vector<Node> arr;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char a, b;
        int val;
        cin >> a >> b;
        cin >> val;

        arr.push_back({ a, b, val });
    }

    //1. sort
    sort(arr.begin(), arr.end(), compare);
    
    int cnt = 0;
    int result = 0;
    for (int i = 0; i < n; i++) {

        //같은 그룹인지 검사
        if (findBoss(arr[i].a) == findBoss(arr[i].b)) continue;

        //같은 그룹이 아니네?
        unionGroup(arr[i].a, arr[i].b);
        cnt++;
        result += arr[i].val;
        if (cnt == 5) break;
    }

    cout << result;

    return 0;
}