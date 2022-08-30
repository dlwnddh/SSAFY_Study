/*
  ABCATTTABCABC
  ABC 문자열을 찾고, 시작될 때의 index를 모두 출력
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "ABCATTTABCABC";

	int x = 0;

	while (1)
	{
		int ret = str.find("ABC", x);
		if (ret == -1) break;
		cout << ret << " ";

		x = ret + 1;
	}

	return 0;
}