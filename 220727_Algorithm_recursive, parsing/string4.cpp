/*
	문자열을 수로
	수를 문자열으로
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "12345";
	int a = stoi(str);	// string to int

	int tt = 341;
	string bbq = to_string(tt);	// int to string

	return 0;
}