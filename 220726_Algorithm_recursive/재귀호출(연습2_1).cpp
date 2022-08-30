/*
	재귀 호출 Trace 연습
  큰 뼈대를 그려두고 손과 눈으로 동시에 따라가보자!
*/

#include <iostream>
using namespace std;

void run(int x)
{
  // cout << "#" 7번 출력 = 함수 호출 횟수

	if (x == 2)	// 몇 번째까지 뻗어가는지. (level 값)
	{
    // cout << "#" 4번 출력 = 마지막 level의 갯수

		return;
	}
	for (int i = 0; i < 2; i++)	// 브랜치 개수(몇 개씩 뻗어가는지)
	{	
    run(x + 1);
    
    // cout << "#" 6번 출력 = 마지막 레벨을 제외한 다른 레벨들의 갯수 * 브랜치 수
	}
	// cout << "#" 3번 출력 = 마지막 레벨을 제외한 함수 호출 횟수
	
	int d = 1;
}

int main()
{
	run(0);

	return 0;
}