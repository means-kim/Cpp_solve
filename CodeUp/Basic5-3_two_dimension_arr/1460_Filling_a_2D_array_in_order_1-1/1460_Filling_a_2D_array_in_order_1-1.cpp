#include <iostream>
using namespace std;

int main()
{
  int array[102][102] = {0, };

  int n = 0;

  // 1 <= n <= 100
  cin >> n;

  // 배열에 채울 초기 값 설정
  int value = 1;

  // n x n 크기의 배열을 순회하며 값 채우기
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      array[i][j] = value;
      value++;
    }
  }

  // n x n 배열 출력
  for (int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      cout << array[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}