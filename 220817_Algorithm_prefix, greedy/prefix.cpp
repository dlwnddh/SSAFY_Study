#include <iostream>
using namespace std;

int arr[10] = { 4,2,5,1,1,2,3,1,4,1 };
int acc[10];

int main()
{
	acc[0] = arr[0];
	for (int i = 1; i < 10; i++)
	{
		acc[i] = acc[i - 1] + arr[i];
	}

	int a = 2;
	int b = 5;

	cout << acc[b] - acc[a - 1];

	return 0;
}