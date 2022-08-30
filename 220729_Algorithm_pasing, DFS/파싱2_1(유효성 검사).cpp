/*
  유효성 검사
  1. 대문자, 숫자로만 구성
  2. 8글자 미만
  3. 첫 글자는 숫자 금지

  tip)	함수로 무조건 뺀다!
		가독성이 우선!!
*/
#include <iostream>
#include <string>
using namespace std;

int isValid(string id)
{
	// 1. 대문자, 숫자로만 구성
	for (int x = 0; x <id.size(); x++)
	{
		if (id[x] >= 'A' && id[x] <= 'Z') continue;
		if (id[x] >= '0' && id[x] <= '9') continue;
		return 0;
	}

	// 2. 8글자 미만
	if (id.size() >= 8) return 0;

	// 3. 첫 글자는 숫자 금지
	if (id[0] >= '0' && id[0] <= '9') return 0;

	return 1;
}

int main()
{
	string str;
	cin >> str;

	int flag = isValid(str);

	if (flag == 1) cout << "yes";
	else cout << "no";

	return 0;
}