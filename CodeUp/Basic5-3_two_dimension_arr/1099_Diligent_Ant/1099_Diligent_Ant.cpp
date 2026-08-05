#include <iostream>
using namespace std;

int main()
{
  int maze[11][11] = {0, };

  // 미로의 구조와 먹이 위치 표시
  for (int i = 1; i < 11; i++)
  {
    for (int j = 1; j < 11; j++)
    {
      cin >> maze[i][j];
    }
  }

  int x = 2;
  int y = 2;
  // 시작 지점 초기화
  maze[x][y] = 9;
  int prey = 0;

  // 미로에 먹이가 있는지 확인
  for (int i = 1; i < 11; i++)
  {
    for (int j = 1; j < 11; j++)
    {
      if (maze[i][j] == 2)
      {
        prey = maze[i][j];
        break;
      }
    }
  }

  // 먹이가 있는 경우만 실행
  while (prey == 2)
  { 
    // 먹이일 경우 반복 종료
    if (maze[x][y] == 2)
    {
      maze[x][y] = 9;
      break;
    }

    // 이동 경로 표시
    maze[x][y] = 9;

    // 오른쪽 확인
    if (maze[x][y + 1] == 0 || maze[x][y + 1] == 2)
    {
      y++;
    }
    // 왼쪽 확인
    else if (maze[x + 1][y] == 0 || maze[x + 1][y] == 2)
    {
      x++;
    }
    else
      break;
  }

  // 최종 미로 출력
  for (int i = 1; i < 11; i++)
  {
    for (int j = 1; j < 11; j++)
    {
      cout << maze[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}