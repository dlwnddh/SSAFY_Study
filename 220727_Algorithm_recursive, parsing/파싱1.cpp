#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "ABCDEFGHIJKBCD";

	// str.find("문자열", 시작 index);
	// 해당 문자열이 시작되는 index를 찾아다오!
	// 못찾으면 -1
	
	int cnt = 0;
	int x = 0;

	while (1)
	{
		int ret = str.find("BCD", x);
		if (ret == -1) break;	// 못찾으면 break
		cnt++;

		x = ret + 1;	// 찾은 index의 바로 다음 값부터 다시 찾기
	}

	cout << cnt;

	return 0;
}