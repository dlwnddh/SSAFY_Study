#include <iostream>
#include <queue>
using namespace std;

//priority_queue<int, vector<int>, less<int>> q;
//priority_queue<int> q; //max heap (큰값 우선순위
//priority_queue<int, vector<int>, greater<int>> q; //(작은값 우선순위)

//다중조건
//1. 짝수 우선
//2. 큰수 우선

//힙소트 개발

struct cmp {
    bool operator()(int v, int t) {
        //t가 우선순위가 더 높으면 1
        //아니면 0

        if (t % 2 == 0 && v % 2 == 1) return 1;
        if (t % 2 == 1 && v % 2 == 0) return 0;

        return t > v;
    }
};

priority_queue<int, vector<int>, cmp> q;


int main() {

    q.push(1);
    q.push(2);
    q.push(5);
    q.push(4);
    q.push(6);
    q.push(7);

    while (!q.empty()) {
        cout << q.top();
        q.pop();
    }


    return 0;
}