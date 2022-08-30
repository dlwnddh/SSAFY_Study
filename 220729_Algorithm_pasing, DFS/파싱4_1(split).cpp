#include <iostream>
#include <vector>
#include <string>
using namespace std;
string bbq = "ABC|BBQ|KFC|OKCASH";

vector<string> split(string gijun)
{
	int a = 0;
	int b = 0;
	bbq += gijun;
	vector<string> temp;

	while (1)
	{
		b = bbq.find(gijun, a);
		if (b == -1) break;

		int size = b - a;

		string str = bbq.substr(a, size);
		temp.push_back(str);

		a = b + 1;
	}
	return temp;
}

int main()
{
	vector<string> ans = split("|");

	for (int x = 0; x < ans.size(); x++)
	{
		cout << ans[x] << " ";
	}

	return 0;
}