#include <iostream>
using namespace std;

int arr[8] = {1, 2, 3, 5, 7, 8, 10, 12};
int target = 10;

int bs(int s, int e) // 검색 시작과 끝 index 입력
{
  while (s <= e) // 검색 시작 index는 끝 index보다 작아야 한다.
  {
    int mid = (s + e) / 2;

    if (arr[mid] == target)
      return mid; // target을 찾았을 경우, 해당 index를 return

    if (arr[mid] > target) // 확인한 값이 target보다 크다면, 검색 범위의 끝 부분을 수정
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
  }

  return -1;
}

int main()
{
  int ret = bs(0, 7);

  if (ret == -1)
    cout << "미발견";
  else
    cout << ret << "에서 발견";

  return 0;
}