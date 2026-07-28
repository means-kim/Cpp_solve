#include <iostream>
#include <string>

using namespace std;

int main(){
  string str1, str2, str3;

  cin >> str1 >> str2 >> str3;

  string result = "bad";

  // 세 문자열의 마지막 문자와 다음 문자열의 첫 문자를 비교하여 조건 만족 여부 확인
  if(str1[str1.length() - 1] == str2[0] && str2[str2.length() - 1] == str3[0] && str3[str3.length() - 1] == str1[0])
  {
    result = "good";
  }

  cout << result << "\n";
}