#include <iostream>

using namespace std;

int main()
{
  int height, width;
  int dalgona;
  int l, d, x, y;

  cin >> height >> width;
  cin >> dalgona;
  
  // 1 <= width, height <= 100 범위
  int array[101][101] = {0, };

  // 달고나의 개수만큼 반복
  for (int i = 0; i < dalgona; i++)
  {
    cin >> l >> d >> x >> y;

    // 방향이 0 이라면 가로
    if (d == 0)
    {
      for (int j = 0; j < l; j++)
      {
        array[x][y + j] = 1;
      }
    }
    // 방향이 1이라면 세로
    else if(d == 1)
    {
      for (int j = 0; j < l; j++)
      {
        array[x + j][y] = 1;
      }
    }
  }

  // 최종 달고나 출력
  for (int i = 1; i <= height; i++)
  {
    for (int j = 1; j <= width; j++)
    {
      cout << array[i][j] << " ";
    }
    cout << "\n";
  }
}

/* 입력
첫 줄에 격자판의 세로(h), 가로(w) 가 공백을 두고 입력되고,
두 번째 줄에 놓을 수 있는 막대의 개수(n)
세 번째 줄부터 각 막대의 길이(l), 방향(d), 좌표(x, y)가 입력된다.

입력값의 정의역은 다음과 같다.

1 <= w, h <= 100
1 <= n <= 10
d = 0 or 1
1 <= x <= 100-h
1 <= y <= 100-w

입력 값 :
5 5
3
2 0 1 1
3 1 2 3
4 1 2 5
*/

/* 출력
모든 막대를 놓은 격자판의 상태를 출력한다.
막대에 의해 가려진 경우 1, 아닌 경우 0으로 출력한다.
단, 각 숫자는 공백으로 구분하여 출력한다.

출력 값 (1,1 부터 출력) :
1 1 0 0 0
0 0 1 0 1
0 0 1 0 1
0 0 1 0 1
0 0 0 0 1
*/