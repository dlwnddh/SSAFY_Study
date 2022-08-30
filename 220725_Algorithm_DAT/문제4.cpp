/*
	0 1 0 0 1 1 0 1 0 1
	10개의 0과 1로 이루어진 공백으로 구분된 data가 주어짐
	다음 줄에 입력으로 숫자 1개 입력(1 ~ 8 중의 한 숫자)
	입력된 temp라는 번째 인접한 주변에 1이 몇개나 존재하는가?
	ex. 입력
		0 1 0 0 1 1 0 1 0 1		<< 10개의 data
		4						<< 번째 해당하는 temp
*/

#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);	// cin, cout의 속도 증가
	cin.tie();
	cout.tie();

	// temp라는 수가 입력됐을 때, temp가 몇개(arr[temp])인지 counting

	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	int temp;
	cin >> temp;

	int count = 0;
	int d[] = { -1 ,0 ,1 };
	for (int i = 0; i < 3; i++)
	{
		int next_temp = temp + d[i];
		if (next_temp < 0 || next_temp > 9)
			continue;

		if (arr[next_temp] != 0)
		{
			count++;
		}
	}

	cout << count << "개";

	return 0;
}

