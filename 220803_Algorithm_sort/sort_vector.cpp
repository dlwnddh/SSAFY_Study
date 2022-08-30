#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> arr;

	sort(arr.begin(), arr.end());
	sort(arr.begin(), arr.end(), greater<int>());

	return 0;
}
