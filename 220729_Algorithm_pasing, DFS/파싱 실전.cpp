/*
  2020 현덴카도 인턴십(내 버전)
*/
/*
	1. S(소문자) + N(숫자) 구조이다.
		N+S, S+N+S 형태 불가
	2. S는 모두 소문자
	3. S의 길이는 3이상 6이하
	4. N은 모두 숫자
	5. N은 NULL 값이 아니라면 0으로 시작하면 안된다.
	6. N의 길이는 0이상 6이하
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(vector<string> registered_list, string new_id) {
	string answer = "";

	// 1. S(소문자) + N(숫자) 구조이다.
	int S_len = 0;
	int N_len = 0;

	for (int x = 0; x < new_id.size(); x++)
	{
		char ch = new_id[x];
		if (ch >= '0' && ch <= '9') continue;
		if (ch >= 'a' && ch <= 'z') continue;
		return "x";
	}

	// N+S, S+N+S 형태 불가

	for (int x = 0; x < new_id.size(); x++)
	{
		char ch = new_id[x];
		if (ch >= '0' && ch <= '9')
		{
			break;
		}
		S_len++;
	}

	// 3. S의 길이는 3이상 6이하

	if (S_len < 3 || S_len > 6) return "x";

	for (int x = S_len; x < new_id.size(); x++)
	{
		N_len++;
		char ch = new_id[x];
		if (ch < '0' || ch > '9')
		{
			return "x";
		}
	}

	// 6. N의 길이는 0이상 6이하

	if (N_len > 6) return "x";

	//  5. N은 NULL 값이 아니라면 0으로 시작하면 안된다.

	if (new_id.find('0', S_len) == S_len) return "x";

	string S = new_id.substr(0, S_len);
	string N = "";

	if (N_len == 0) N = "0";
	else N = new_id.substr(S_len, N_len+1);

	int temp = stoi(N);

	while (1)
	{
		int x;
		for (x = 0; x < registered_list.size(); x++)
		{
			if (new_id == registered_list[x])
			{
				temp++;
				N = to_string(temp);
				new_id = S;
				if (N != "0") new_id += N;
				break;
			}
		}
		if (x == registered_list.size()) break;
	}

	answer = new_id;

	return answer;
}

int main()
{
	vector<vector<string>> registered_list = {
		{ "card", "ace13", "ace16", "banker", "ace17", "ace14" },
		{ "cow", "cow1", "cow2", "cow3", "cow4", "cow9", "cow8", "cow7", "cow6", "cow5"},
		{ "bird99", "bird98", "bird101", "gotoxy"},
		{ "apple1", "orange", "banana3"},
		{"bts1008","bts1003","bts1004","bts1005","bts1006","bts1007","bts1002"},
		{ "bird99", "bird98", "bird101", "gotoxy"},
		{ "aaa9999"},
	};

	vector<string> result = {
		"ace15", "cow10", "bird100", "apple", "bts1009", "gotoxy1", "aaa10000"
	};

	vector<string> newID = {
		"ace15", "cow", "bird98", "apple", "bts1002", "gotoxy", "aaa9999"
	};

	for (int i = 0; i < registered_list.size(); i++) {
		string yours = solution(registered_list[i], newID[i]);

		if (yours == result[i]) cout << "GOOD!!\n";
		else cout << "오답입니다\n";
	}

	return 0;
}