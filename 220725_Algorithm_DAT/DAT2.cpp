#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int arr[] = { 15,30,15,15,30,5,9 };
	int dat[101] = { 0 };

	int n = 7;

	for (int i = 0; i < n; i++)
	{
		dat[arr[i]]++;
	}

	int max_i;
	int max = 0;

	for (int i = 0; i < 101; i++)
	{
		if (dat[i] > max)
		{
			max = dat[i];
			max_i = i;
		}
	}

	cout << max_i;

	return 0;
}