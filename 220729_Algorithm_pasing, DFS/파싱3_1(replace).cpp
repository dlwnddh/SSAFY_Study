/*
  KFC가 단 한 개만 존재
*/
#include <iostream>
#include <string>
using namespace std;

string bbq = "ABC##KFC##BBQ";

void replace(string before, string after)
{
	int a = bbq.find(before);

	bbq.erase(a, before.size());
	bbq.insert(a, after);
}

int main()
{
	replace("KFC", "MC");

	cout << bbq;

	return 0;
}