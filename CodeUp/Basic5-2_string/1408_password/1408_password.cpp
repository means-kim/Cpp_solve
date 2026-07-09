#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  cin >> s;
  string password1 = "";  // 첫 번째 암호문
  string password2 = "";  // 두 번째 암호문

  // 입력받은 문자의 ASCII 코드값 + 2
  for (char c : s)
  {
    password1 += c + 2;
  }
  cout << password1 << "\n";

  // (입력받은 문자의 ASCII 코드값 * 7) % 80 + 48
  for (char c : s)
  {
    password2 += (c * 7) % 80 + 48;
  }
  cout << password2 << "\n";

  return 0;
}