#include <iostream>

using namespace std;

int main()
{
  int array[102][102] = {0, };
  int n = 0;

  // 1 <= n <= 100
  cin >> n;

  // 배열에 들어갈 초기값
  int value = 1;

  // 각 배열의 행에 역순으로 값 입력
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j >= 0; j--)
    {
      array[i][j] = value;
      value ++;
    }
  }

  // 베열 출력
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