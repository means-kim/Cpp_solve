#include <iostream>
using namespace std;

int main()
{
  int borad[19][19] = {0, };

  int number, row, col;

  // 바둑판 입력받기
  for (int i = 0; i < 19; i++)
  {
    for (int j = 0; j < 19; j++)
    {
      cin >> borad[i][j];
    }
  }

  // 십자가 횟수 입력 받기
  cin >> number;

  // 십자가 횟수만큼 반복
  for (int i = 0; i < number; i++)
  {
    // 십자가 중심 좌표 입력 받기
    cin >> row >> col;

    // 십자가 중심 좌표를 기준으로 가로 줄 뒤집기
    for (int j = 0; j < 19; j++)
    {
      if (borad[j][col -1] == 0)
        borad[j][col - 1] = 1;
      else if (borad[j][col -1] == 1)
        borad[j][col - 1] = 0;
    }

    // 십자가 중심 좌표를 기준으로 세로 줄 뒤집기'
    for (int k = 0; k < 19; k++)
    {
      if (borad[row - 1][k] == 0)
        borad[row - 1][k] = 1;
      else if (borad[row - 1][k] == 1)
        borad[row - 1][k] = 0;
    }
  }

  // 바둑판 출력
  for (int i = 0; i < 19; i++)
  {
    for (int j = 0; j < 19; j++)
    {
      cout << borad[i][j] << " ";
    }
    cout << "\n";
  }
}