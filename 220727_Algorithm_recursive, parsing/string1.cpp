/*
  문자열 역순 출력
*/
#include <iostream>
#include <string> // C++ 용 string 클래스

// #include <cstring.h> C언어 strinh.h
// #include <string.h> strcmp, strlen 함수
using namespace std;

int main()
{
  string name;
  cin >> name;

  char buf[10] = "ABC";
  int n = strlen(buf); // 1중 for문으로 처리속도가 느리다.
  n = name.length();   // string 선언을 통해 사용할 수 있고, 처리속도가 빠르다.

  for (int x = name.length() - 1; x >= 0; x--)
  {
    cout << name[x];
  }

  return 0;
}