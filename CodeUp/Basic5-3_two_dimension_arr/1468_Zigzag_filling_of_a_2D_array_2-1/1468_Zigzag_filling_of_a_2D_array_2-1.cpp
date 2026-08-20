#include <iostream>

using namespace std;

int main()
{
  // 초기 배열 설정
  int array[102][102] = {0, };
  int n;

  // 1 <= n , n <= 100
  cin >> n;

  // 배열에 순차적으로 입력할 값
  int value = 1;

  // 배열에 값 입력
  for(int i = 0; i < n; i++)
  {
    if (i % 2 == 0 )
    {
      for (int j = 0; j < n; j++)
      {
        array[i][j] = value;
        value ++;
      }
    }
    else if (i % 2 != 0)
    {
      for (int j = n - 1; j >= 0; j--)
      {
        array[i][j] = value;
        value ++;
      }
    }
  }

  // 배열 출력
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++){
      cout << array[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}