#include <iostream>
#include <string>
using namespace std;

int main()
{
  // 공백이 없는 문자열 입력
  string s;
  cin >> s;

  // 문자열을 순회하면서 t를 탐색
  // t를 찾았다면 몇 번째에 존재하는지 위치 출력
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 't')
      cout << i+1 << " ";
  }
  cout << "\n";

  return 0;
}