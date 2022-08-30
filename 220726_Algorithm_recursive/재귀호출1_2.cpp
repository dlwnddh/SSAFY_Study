/*
	9 8 7 6 5 6 7 8 9
*/

#include <iostream>
using namespace std;

void run(int x)
{
	cout << x << " ";
	if (x == 5) return;
	run(x - 1);
	cout << x << " ";
}

int main()
{
	run(9);

	return 0;
}