#include <iostream>
#include <string>
using namespace std;

int main()
{ 
  string s;
  getline(cin, s);
  int cnt = 0;

  // love를 찾기 위해 최대 사이즈에서 love의 길이 4를 뺀 크기만큼 반복
  for (int i = 0; i < s.size()-4; i++)
  {
    if (s[i] == 'l' && s[i+1] == 'o' && s[i+2] == 'v' && s[i+3] == 'e')
      cnt++;
  }
  cout << cnt << "\n";

  return 0;
}