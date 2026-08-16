#include <iostream>

using namespace std;

int main()
{ 
  // 초기 배열 설정
  int array[102][102] = {0, };
  int n, m;

  // 1 <= n, m <= 100
  cin >> n >> m;

  // 배열에 입력될 값
  int value = 1;

  // 배열에 순차적으로 입력
  for (int i = m - 1; i >= 0; i--)
  {
    for (int j = 0; j < n; j++)
    {
      array[j][i] = value;
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