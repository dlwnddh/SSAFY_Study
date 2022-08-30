#include <iostream>
using namespace std;

int arr1[4] = { 1,5,4,9 };
int arr2[4] = { 1,5,7,9 };

int isSame()
{
	for (int i = 0; i < 4; i++)
	{
		if (arr1[i] != arr2[i])
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int ret = isSame();

	if (ret == 1)
	{
		cout << "x";
	}
	else
	{
		cout << "o";
	}

	return 0;
}
