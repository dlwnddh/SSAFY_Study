/*
	
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node
{
	int x;
	string str;
};

int main()
{
	vector<Node> arr = {	// 배열로 struct 각각의 원소에 대입시킬 수 있다.
		{5, "BTS"},
		{7, "KK"},
		{8, "449"},
		{1,"1592"}
	};

	int n;
	cin >> n;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i].x == n) cout << arr[i].str;
	}

	return 0;
}