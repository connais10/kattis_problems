#include <iostream>

using namespace std;

int main()
{
  string phrase;
  int days = 0;
  cin >> phrase;

  for (int i = 0; i < phrase.length(); i += 3) {
    if (phrase[i] != 'p' && phrase[i] != 'P')
      days++;
    if (phrase[i+1] != 'e' && phrase[i+1] != 'E')
      days++;
    if (phrase[i+2] != 'r' && phrase[i+2] != 'R')
      days++;
    else
      ;
  }
  cout << days;
}
