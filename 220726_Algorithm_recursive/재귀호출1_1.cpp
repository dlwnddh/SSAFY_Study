/*
	0 1 2 3 4 5 5 4 3 2 1 0
*/

#include <iostream>
using namespace std;

void run(int x)
{
	cout << x << " ";
	if (x == 5)
	{
		cout << x << " ";
		return;
	}
	//if (x == 6)
	//{
	//	cout << x << " ";
	//	return;
	//}
	cout << x << " ";
	run(x + 1);
	cout << x << " ";
}

int main()
{
	run(0);

	return 0;
}