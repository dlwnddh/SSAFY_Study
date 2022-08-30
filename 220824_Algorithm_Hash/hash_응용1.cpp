// input 받은 문자열의 개수
#include <iostream>
#include <string>
#include <unordered_map>	// hash
using namespace std;

int main()
{
	string str[6] = { "huhu", "hot", "bts", "mc", "hot", "hot" };

	unordered_map<string, int> map;

	for (int i = 0; i < 6; i++)
	{
		map[str[i]]++;
	}

	string input;
	cin >> input;

	if (map[input]) cout << map[input];
	else cout << 0;

	return 0;
}