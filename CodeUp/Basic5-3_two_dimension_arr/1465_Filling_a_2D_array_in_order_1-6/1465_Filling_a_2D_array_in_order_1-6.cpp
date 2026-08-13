#include <iostream>
using namespace std;

int main()
{
  // 기초 배열 초기화
  int array[102][102] = {0, };
  int n, m;

  // 1 <= n, m <= 100
  cin >> n >> m;

  // 배열에 입력될 값
  int value = 1;

  // 배열에 순차적으로 값 저장
  for (int i = n - 1; i >= 0; i --)
  {
    for (int j = 0; j < m; j++)
    {
      array[i][j] = value;
      value ++;
    }
  }

  // 최종 배열 출력
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << array[i][j] << " ";
    }
    cout << "\n";
  }


  return 0;
}