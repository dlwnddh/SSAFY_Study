#include <iostream>
using namespace std;

int arr1[4] = { 1, 5, 4, 9 };
int arr2[4] = { 1, 5, 7, 9 };

int main()
{
	int flag = 0;
	for (int x = 0; x < 4; x++) {
		if (arr1[x] != arr2[x]) {
			flag = 1;
			break;
		}
	}

	if (flag == 0) cout << "O";
	else cout << "X";


	return 0;
}