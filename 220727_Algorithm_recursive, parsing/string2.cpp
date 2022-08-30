/*
	모든 문자열을 거꾸로 출력
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str[3] = {
		"ABC",
		"BTS",
		"KFCKFC"
	};

	for (int y = 0; y < 3; y++)
	{
		for (int x = str[y].length() - 1; x >= 0; x--)
		{
			cout << str[y][x];
		}
		cout << endl;
	}

	return 0;
}