/*
  문자열 3개를 이어 붙여서 BTSKMC을 만들 수 있는가?
*/
#include <iostream>
#include <string>
using namespace std;

string str[6] = {"BT", "KF", "CCC", "MOM", "SK", "MC"};

string path[10] = {""};
string ans = "BTSKMC";
int flag = 0;

void run(int lev, string sum)
{
  if (flag == 1)
    return;
  if (lev == 3)
  {
    if (sum == ans)
    {
      flag = 1;
    }
    return;
  }
  for (int x = 0; x < 6; x++)
  {
    path[lev] = str[x];
    run(lev + 1, sum + str[x]);
    path[lev] = "";
  }
}

int main()
{
  run(0, "");
  if (flag == 1)
  {
    cout << "O";
  }
  else if (flag == 0)
  {
    cout << "X";
  }

  return 0;
}