/*
	10개의 각 숫자가 공백을 구분으로 주어집니다.
	단, 각 숫자는 모두 한 자리 숫자
	어떤 숫자가 몇 개씩 있었는지 0~9의 숫자 순서대로 출력

	ex. 0 0 0 1 2 3 4 5 6 7
	0 : 3개
	1 : 1개
	2 : 1개
	....
	9 : 0개
*/

#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);	// cin, cout의 속도 증가
	cin.tie();
	cout.tie();

	// temp라는 수가 입력됐을 때, temp가 몇개(arr[temp])인지 counting

	int i;
	int arr[10] = { 0 };	// 10개짜리 (0~9번 index 

	for (i = 0; i < 10; i++)
	{
		int temp;
		cin >> temp;	// 숫자 입력
		arr[temp]++;	// temp가 하나 추가되면 
	}

	for (i = 0; i < 10; i++)
	{
		cout << i << " : " << arr[i] << "개" << endl;
	}

	return 0;
}

