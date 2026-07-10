#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int C = 0;  // 문자열에서 찾은 C의 개수를 저장할 변수
  int CC = 0; // 문자열에서 찾은 CC의 개수를 저장할 변수

  // 문자열을 순회하면서 각 문자를 대문자로 변경했을 때 C라면 카운팅
  for (char c : s)
  {
    if (toupper(c) == 'C')
      C++;
  }

  // 현재 문자와 다음 문자를 대문자로 변경했을 때 둘 다 C 라면 카운팅
  for (int i = 0; i < s.size()-1; i++)
  {
    if (toupper(s[i]) == 'C' && toupper(s[i+1]) == 'C')
      CC++;
  }
  // C와 CC의 개수 출력
  cout << C << "\n";
  cout << CC << "\n";

  return 0;
}

/* 
입력
① 첫 번째 줄에 길이가 100이하인 문자열이 입력된다. 문자는 모두 대문자 또는 소문자로 이루어진다.

② 대소문자의 구분이 없으므로 “C”는 2가지 경우, “CC”는 모두 서로 다른 4가지경우가 각각 존재할 수 있다.
*/

/*
출력
① 첫 번째 줄에 문자열에서 찾은 "C"의 개수를 출력한다.
② 두 번째 줄에 문자열에서 찾은 "CC"의 개수를 출력한다.
*/