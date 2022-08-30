/*
	문자열 안의 [] 내에 있는 숫자를 발굴
	+77 한 후 출력
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "ABC[3512]DEFG";

	int ret1 = str.find("[");
	int ret2 = str.find("]");

	string temp = str.substr(ret1+1, ret2 - ret1 - 1);
	int ans = stoi(temp);
	ans += 77;
	cout << ans;

	return 0;
}