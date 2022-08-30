/*
	유효성 검사
	1. aaa@aaa.aaa형태 (@, . 하나씩)
	2. 대소문자, 숫자 가능
*/
#include <iostream>
#include <string>
using namespace std;

int isValid(string mail)
{
	// 1. aaa@aaa.aaa형태(@,.하나씩)
	int ret1 = mail.find("@", 0);
	int ret2 = mail.find(".", ret1 + 1);
	if (ret1 == -1 || ret2 == -1) return 0;				// @나 .이 없으면 탈락
	if (ret1 == 0 || ret2 == mail.size() - 1) return 0;	// @가 맨앞이거나 .이 맨 뒤이면 탈락

	// 2. 대소문자, 숫자 가능
	for (int x = 0; x < mail.size(); x++)
	{
		if (x == ret1 || x == ret2) continue;
		if (mail[x] >= 'A' && mail[x] <= 'Z') continue;
		if (mail[x] >= 'a' && mail[x] <= 'z') continue;
		if (mail[x] >= '0' && mail[x] <= '9') continue;
		return 0;
	}

	return 1;
}

int main()
{
	string str;
	cin >> str;

	if (isValid(str) == 1) cout << "yes";
	else cout << "no";

	return 0;
}