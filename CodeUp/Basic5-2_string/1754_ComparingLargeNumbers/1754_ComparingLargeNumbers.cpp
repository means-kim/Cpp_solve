#include <iostream>
#include <string>

using namespace std;

int main()
{
  string a, b;

  cin >> a >> b;

  // 문자열 길이가 다르면 길이가 짧은 문자열을 먼저 출력
  if (a.length() > b.length())
  {
    cout << b << " " << a << "\n";
  }
  else if(a.length() < b.length())
  {
    cout << a << " " << b << "\n";
  }
  // 문자열 길이가 같으면 첫번째부터 비교
  else
  {
    for (int i = 0; i < a.length(); i++)
    {
      if (a[i] > b[i])
      {
        cout << b << " " << a << "\n";
        break;
      }
      else if (a[i] < b[i])
      {
        cout << a << " " << b << "\n";
        break;
      }
    }
  }
}