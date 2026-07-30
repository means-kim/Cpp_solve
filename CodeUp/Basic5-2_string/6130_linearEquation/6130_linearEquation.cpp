#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
  string equation;

  cin >> equation;

  int x = 0;
  int left = 0;
  int right = 0;
  float value = 0;

  // x의 위치를 찾기 위해 문자열을 순회
  for (int i = 0; i < equation.length(); i++)
  {
    if (equation[i] == 'x')
    {
      x = i;
    }
  }

  // x의 위치를 기준으로 좌항과 우항을 나누어 계산 (좌항)
  for (int i = 0; i < x; i ++)
  {
    left = left * 10 + (equation[i] - '0');
  }
  // x의 위치를 기준으로 좌항과 우항을 나누어 계산 (우항)
  for (int i = x + 2; i < equation.length(); i++)
  {
    right = right * 10 + (equation[i] - '0');
  }

  // 좌항과 우항의 값을 이용하여 x의 값을 계산
  if (equation[x + 1] == '+')
  {
    value = ((float)-right / left);
  }
  else if (equation[x + 1] == '-')
  {
    value = ((float)right / left);
  }
  // cout << x << " " << left << " " << right << " " << value << "\n";
  // 소수점 둘째 자리까지 출력
  cout << fixed << setprecision(2) << (double)value << "\n";
}

/*
입력 :
ax±b 의 형태가 입력된다. 즉, ax+b 또는 ax−b의 형태가 입력된다.(=0은 입력되지 않는다.)

a와 b는 정수이다. 
*/

/*
출력 :
x 의 값을 반올림하여 소숫점 둘째 자리까지 출력한다.
*/