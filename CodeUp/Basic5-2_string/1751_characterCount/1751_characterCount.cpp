# include <iostream>
# include <string>
using namespace std;

int main()
{
  string s;

  // 공백을 포함한 문자열 입력을 위해 getline 사용
  getline(cin, s);

  cout << s.length() << "\n";
  
}