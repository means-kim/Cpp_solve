#include <iostream>
using namespace std;

int main()
{
  // 초기 배열 생성
  int array[102][102] = {0, };
  int n = 0;

  // 1 <= n <= 100
  cin >> n;

  // 배열에 입력될 값
  int value = 1;

  // 배열에 열 방향으로 순차적으로 값 입력
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      array[j][i] = value;
      value ++;
    }
  }

  // 배열 출력
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << array[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}