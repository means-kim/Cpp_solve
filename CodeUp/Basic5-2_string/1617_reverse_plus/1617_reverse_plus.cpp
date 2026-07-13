#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int value = 0;
  int backNumber = 0;

  // 문자열 정수형으로 변환
  for (char c : s)
  {
    value *= 10;
    value += c - '0';
  }

  int digit = value;

  // 문자열 정수형으로 뒤집어서 변환
  for(int i = s.size(); i > 0; i--)
  {
    backNumber *= 10;
    backNumber += digit % 10;
    digit /= 10;
  }

  string number = to_string(value + backNumber);

  // number가 회문인지 확인
  int value2 = 0;
  int backNumber2 = 0;

  // 문자열 정수형으로 변환
  for (char c : number)
  {
    value2 *= 10;
    value2 += c - '0';
  }

  int digit2 = value2;

  // 문자열 정수형으로 뒤집어서 변환
  for(int i = number.size(); i > 0; i--)
  {
    backNumber2 *= 10;
    backNumber2 += digit2 % 10;
    digit2 /= 10;
  }

  // value2와 backNumber2가 같다면 회문이므로 YES, 아니면 NO
  if (value2 == backNumber2)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }

  return 0;
}