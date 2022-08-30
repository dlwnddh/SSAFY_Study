#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 다중 sort
// 1. 짝수 앞으로
// 2. 작은 수 앞으로

bool compare(int t, int v)
{
	// t를 기준으로 t가 v보다 우선순위가 더 높다? 1 리턴
	// 아님 0 리턴

	if (t % 2 == 0 && v % 2 == 1) return 1;
	if (t % 2 == 1 && v % 2 == 0) return 0;

	return t < v;
}

int main()
{
	vector<int> arr = {1,5,3,2,8,6,6,8,9};

	sort(arr.begin(), arr.end(), compare);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
