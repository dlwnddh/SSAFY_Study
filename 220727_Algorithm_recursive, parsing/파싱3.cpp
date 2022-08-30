#include <iostream>
#include <string>
using namespace std;


int main() {
	string str = "ABCDEFG";

	int a = 1;
	int b = 3;
	int size = b - a + 1;

	string temp = str.substr(a, size);
	cout << temp;

	return 0;
}