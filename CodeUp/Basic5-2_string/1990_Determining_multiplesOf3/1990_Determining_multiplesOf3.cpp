#include <iostream>
#include <string>
using namespace std;

int main()
{
  string number;

  cin >> number;

  int value = 0;
  int multiple = 1;

  // 문자열을 1칸씩 이동하며 3의 배수 판별
  for (int i = 0; i < number.length(); i++)
  {
    // 3의 배수 판별 공식: (이전 값 * 10 + 현재 숫자) % 3
    value = (value * 10 + number[i] - '0') % 3;
  }

  if (value != 0)
  {
    multiple = 0;
  }


  cout << multiple << "\n";

}