/*
	10개의 한자리 수가 입력
	단, 중복된 수는 없음
	어떤 수가 몇 번째 위치에 나왔는지 출력
	ex) 5 1 3 2 4 9 6 7 8 0
	0 : 9번째 
	1 : 1번째
	...
	9 : 5번째
*/

#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);	// cin, cout의 속도 증가
	cin.tie();
	cout.tie();

	int i;
	int arr[10] = { 0 };

	for (i = 0; i < 10; i++)
	{
		int temp;
		cin >> temp;
		arr[temp] = i;
	}

	for (i = 0; i < 10; i++)
	{
		cout << i << " : " << arr[i] << "번째" << endl;
	}

	return 0;
}