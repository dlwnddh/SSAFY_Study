#include <iostream>
#include <unordered_map>	// hash
using namespace std;

int main()
{
	int val[5] = { 2, 5, 12, 3, 54 };
	int dat[100] = { 0 };

	// 1. Order(N)
	int flag = 0;
	int n = 5;
	for (int i = 0; i < 5; i++)
	{
		if (val[i] == n) flag = 1;
	}

	// 2. DAT(배열의 값이 음수이면 사용 불가)
	for (int i = 0; i < 5; i++)
	{
		dat[val[i]] = 1;
	}

	int n = 5;
	int flag = 0;
	if (dat[n] == 1) flag = 1;

	// 3. Hash
	unordered_map<int, int> um;	// um[int] = int;
	// unordered_map<char, string> um; ----> um[char] = string;

	for (int i = 0; i < 5; i++)
	{
		um[val[i]] = 1;
	}

	int tar;
	cin >> tar;

	if (um.count(tar))	// if (um[tar] == 0)를 사용하면, tar에 해당되는 키가 없을 경우 (tar, 0)이 자동 추가된다.
	{
		cout << "있음";
	}
	else cout << "없음";

	return 0;
}