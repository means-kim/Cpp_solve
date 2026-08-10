#include <iostream>

using namespace std;

int main()
{
  // 초기 배열 생성 및 초기화
  int array[102][102] = {0, };
  int n;

  // 1 <= n <= 100
  cin >> n;

  // 배열에 들어갈 초기 값
  int value = 1;

  // 마지막 행부터 시작하여 열 방향으로 순차적으로 값 채우기
  for (int i = 0; i < n; i++)
  {
    for (int j = n -1; j >= 0; j--)
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