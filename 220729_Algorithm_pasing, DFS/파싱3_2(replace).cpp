#include <iostream>
#include <string>
using namespace std;

string bbq = "ABC##KFC##BBQ####KFC####KFC";

void replace(string before, string after)
{
	int x = 0;

	while (1)
	{
		x = bbq.find(before, x);
		if (x == -1) break;

		bbq.erase(x, before.size());
		bbq.insert(x, after);

		x++;
	}
}

int main()
{
	cout << bbq << '\n';

	replace("KFC", "MC");

	cout << bbq << '\n';
	return 0;
}