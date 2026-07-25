#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  int start, length;

  cin >> str;
  cin >> start >> length;

  for (int i = start - 1; i < length; i++)
  {
    cout << str[i];
  }
  cout << "\n";
}