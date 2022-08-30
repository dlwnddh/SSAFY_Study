/*
	1 1 1
	1 1 2
	1 1 3
	1 2 1
	...
	3 3 2
	3 3 3
*/

#include <iostream>
using namespace std;

int main()
{
	for (int a = 1; a <= 3; a++)
	{
		for (int b = 1; b < 3; b++)
		{
			for (int c = 1; c <= 3;c++)
			{
				cout << a << " " << b << " " << c;
				cout << endl;
			}
		}
	}

	return 0;
}