#include <iostream>
#include <string>
using namespace std;

int cnt = 0;

void FindGold(string str)
{
	int n = 0;
	while (1)
	{
		int ret = str.find("GOLD", n);
		if (ret == -1) return;
		cnt++;

		n = ret + 1;
	}
	
}

int main()
{
	string strs[5] = {
		"GOLD#GOLD##",
		"#GOL#GOLE#GOLED",
		"GOLD",
		"GGGGOLD#GOLD"
	};

	for (int x = 0; x < 4; x++)
	{
		FindGold(strs[x]);
	}

	cout << cnt;

	return 0;
}