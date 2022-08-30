  /*
	유효성 검사
	1. 대문자, 숫자로만 구성
	2. 8글자 미만
	3. 첫 글자는 숫자 금지
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	int flag = 0;

	if (str.length() >= 8) flag = 1;
	if (str[0] >= '0' && str[0] <= '9') flag = 1;
	for (int x = 0; x < str.length(); x++)
	{
		if (!((str[x] >= 'A' && str[x] <= 'Z') || (str[x] >= '0' && str[x] <= '9')))
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1) cout << "no";
	else cout << "yes";

	return 0;
}