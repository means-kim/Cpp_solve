#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;

  cin >> s;

  // 문자열을 거꾸로 출력
  for(int i = s.length(); i > 0; i--)
  {
    cout << s[i-1];
  }
  cout << "\n";
}